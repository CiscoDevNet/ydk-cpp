
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_160.hpp"
#include "Cisco_IOS_XE_native_82.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_149.hpp"
#include "Cisco_IOS_XE_native_74.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_75.hpp"
#include "Cisco_IOS_XE_native_71.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_151.hpp"
#include "Cisco_IOS_XE_native_150.hpp"
#include "Cisco_IOS_XE_native_153.hpp"
#include "Cisco_IOS_XE_native_154.hpp"
#include "Cisco_IOS_XE_native_155.hpp"
#include "Cisco_IOS_XE_native_72.hpp"
#include "Cisco_IOS_XE_native_157.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Native()
    :
    aqm_register_fnf{YType::empty, "aqm-register-fnf"},
    boot_end_marker{YType::empty, "boot-end-marker"},
    boot_start_marker{YType::empty, "boot-start-marker"},
    captive_portal_bypass{YType::empty, "captive-portal-bypass"},
    disable_eadi{YType::empty, "disable-eadi"},
    hostname{YType::str, "hostname"},
    version{YType::str, "version"}
    	,
    aaa(std::make_shared<Native::Aaa>())
	,access_list(std::make_shared<Native::AccessList>())
	,access_session(std::make_shared<Native::AccessSession>())
	,alias(std::make_shared<Native::Alias>())
	,ap(std::make_shared<Native::Ap>())
	,archive(std::make_shared<Native::Archive>())
	,arp(std::make_shared<Native::Arp>())
	,authentication(std::make_shared<Native::Authentication>())
	,banner(std::make_shared<Native::Banner>())
	,bba_group(std::make_shared<Native::BbaGroup>())
	,bfd(std::make_shared<Native::Bfd>())
	,bfd_template(std::make_shared<Native::BfdTemplate>())
	,boot(std::make_shared<Native::Boot>())
	,bridge_domain(std::make_shared<Native::BridgeDomain>())
	,call_home(nullptr) // presence node
	,card(std::make_shared<Native::Card>())
	,cdp(std::make_shared<Native::Cdp>())
	,cef(std::make_shared<Native::Cef>())
	,cisp(std::make_shared<Native::Cisp>())
	,clock(std::make_shared<Native::Clock>())
	,coap(std::make_shared<Native::Coap>())
	,control_plane(nullptr) // presence node
	,controller(std::make_shared<Native::Controller>())
	,crypto(std::make_shared<Native::Crypto>())
	,cts(std::make_shared<Native::Cts>())
	,device(std::make_shared<Native::Device>())
	,device_sensor(std::make_shared<Native::DeviceSensor>())
	,device_tracking(std::make_shared<Native::DeviceTracking>())
	,diagnostic(std::make_shared<Native::Diagnostic>())
	,dot1x(std::make_shared<Native::Dot1X>())
	,eap(std::make_shared<Native::Eap>())
	,enable(std::make_shared<Native::Enable>())
	,energywise(std::make_shared<Native::Energywise>())
	,epm(std::make_shared<Native::Epm>())
	,errdisable(std::make_shared<Native::Errdisable>())
	,esmc(std::make_shared<Native::Esmc>())
	,ethernet(std::make_shared<Native::Ethernet>())
	,event(std::make_shared<Native::Event>())
	,exception(std::make_shared<Native::Exception>())
	,fabric(std::make_shared<Native::Fabric>())
	,facility_alarm(std::make_shared<Native::FacilityAlarm>())
	,fallback(std::make_shared<Native::Fallback>())
	,fhrp(std::make_shared<Native::Fhrp>())
	,flow(std::make_shared<Native::Flow>())
	,hw_module(std::make_shared<Native::HwModule>())
	,hw_switch(std::make_shared<Native::HwSwitch>())
	,identity(std::make_shared<Native::Identity>())
	,interface(std::make_shared<Native::Interface>())
	,ip(std::make_shared<Native::Ip>())
	,ipv6(std::make_shared<Native::Ipv6>())
	,key(std::make_shared<Native::Key>())
	,l2(std::make_shared<Native::L2>())
	,l2protocol_tunnel(std::make_shared<Native::L2ProtocolTunnel>())
	,l2vpn(std::make_shared<Native::L2Vpn>())
	,l2vpn_config(std::make_shared<Native::L2VpnConfig>())
	,l3vpn(std::make_shared<Native::L3Vpn>())
	,license(std::make_shared<Native::License>())
	,line(std::make_shared<Native::Line>())
	,lldp(std::make_shared<Native::Lldp>())
	,location(std::make_shared<Native::Location>())
	,logging(std::make_shared<Native::Logging>())
	,login(std::make_shared<Native::Login>())
	,mac(std::make_shared<Native::Mac>())
	,mac_address_table(std::make_shared<Native::MacAddressTable>())
	,macro(std::make_shared<Native::Macro>())
	,memory(std::make_shared<Native::Memory>())
	,memory_size(std::make_shared<Native::MemorySize>())
	,metadata(std::make_shared<Native::Metadata>())
	,mka(std::make_shared<Native::Mka>())
	,mls(std::make_shared<Native::Mls>())
	,module(std::make_shared<Native::Module>())
	,monitor(std::make_shared<Native::Monitor>())
	,mpls(std::make_shared<Native::Mpls>())
	,multilink(std::make_shared<Native::Multilink>())
	,network_clock(std::make_shared<Native::NetworkClock>())
	,network_policy(std::make_shared<Native::NetworkPolicy>())
	,ntp(std::make_shared<Native::Ntp>())
	,object_group(std::make_shared<Native::ObjectGroup>())
	,otv(std::make_shared<Native::Otv>())
	,parser(std::make_shared<Native::Parser>())
	,password(std::make_shared<Native::Password>())
	,performance(std::make_shared<Native::Performance>())
	,pfr(std::make_shared<Native::Pfr>())
	,platform(std::make_shared<Native::Platform>())
	,pm_agent(nullptr) // presence node
	,policy(std::make_shared<Native::Policy>())
	,port_channel(std::make_shared<Native::PortChannel>())
	,power(std::make_shared<Native::Power>())
	,ppp(std::make_shared<Native::Ppp>())
	,privilege(std::make_shared<Native::Privilege>())
	,process(std::make_shared<Native::Process>())
	,profile(std::make_shared<Native::Profile>())
	,qos(nullptr) // presence node
	,radius(std::make_shared<Native::Radius>())
	,radius_server(std::make_shared<Native::RadiusServer>())
	,redundancy(nullptr) // presence node
	,remote_management(std::make_shared<Native::RemoteManagement>())
	,rep(std::make_shared<Native::Rep>())
	,rmon(std::make_shared<Native::Rmon>())
	,route_tag(std::make_shared<Native::RouteTag>())
	,router(std::make_shared<Native::Router>())
	,scheduler(std::make_shared<Native::Scheduler>())
	,sdm(std::make_shared<Native::Sdm>())
	,segment_routing(std::make_shared<Native::SegmentRouting>())
	,service(std::make_shared<Native::Service>())
	,service_chain(std::make_shared<Native::ServiceChain>())
	,service_insertion(std::make_shared<Native::ServiceInsertion>())
	,service_list(std::make_shared<Native::ServiceList>())
	,service_routing(std::make_shared<Native::ServiceRouting>())
	,setup(std::make_shared<Native::Setup>())
	,snmp(std::make_shared<Native::Snmp>())
	,snmp_server(std::make_shared<Native::SnmpServer>())
	,spanning_tree(std::make_shared<Native::SpanningTree>())
	,stack_mac(std::make_shared<Native::StackMac>())
	,subscriber(std::make_shared<Native::Subscriber>())
	,system(std::make_shared<Native::System>())
	,tacacs(std::make_shared<Native::Tacacs>())
	,tacacs_server(std::make_shared<Native::TacacsServer>())
	,template_(std::make_shared<Native::Template_>())
	,tod_clock(std::make_shared<Native::TodClock>())
	,track(std::make_shared<Native::Track>())
	,transceiver(std::make_shared<Native::Transceiver>())
	,udld(std::make_shared<Native::Udld>())
	,upgrade(std::make_shared<Native::Upgrade>())
	,utd(nullptr) // presence node
	,utd_engine(std::make_shared<Native::UtdEngine>())
	,vlan(std::make_shared<Native::Vlan>())
	,voice(std::make_shared<Native::Voice>())
	,vpdn(std::make_shared<Native::Vpdn>())
	,vrf(std::make_shared<Native::Vrf>())
	,vstack(std::make_shared<Native::Vstack>())
	,vtp(std::make_shared<Native::Vtp>())
	,wireless(std::make_shared<Native::Wireless>())
	,wsma(std::make_shared<Native::Wsma>())
	,xconnect(std::make_shared<Native::Xconnect>())
	,zone(std::make_shared<Native::Zone>())
	,zone_pair(std::make_shared<Native::ZonePair>())
{
    aaa->parent = this;

    access_list->parent = this;

    access_session->parent = this;

    alias->parent = this;

    ap->parent = this;

    archive->parent = this;

    arp->parent = this;

    authentication->parent = this;

    banner->parent = this;

    bba_group->parent = this;

    bfd->parent = this;

    bfd_template->parent = this;

    boot->parent = this;

    bridge_domain->parent = this;

    card->parent = this;

    cdp->parent = this;

    cef->parent = this;

    cisp->parent = this;

    clock->parent = this;

    coap->parent = this;

    controller->parent = this;

    crypto->parent = this;

    cts->parent = this;

    device->parent = this;

    device_sensor->parent = this;

    device_tracking->parent = this;

    diagnostic->parent = this;

    dot1x->parent = this;

    eap->parent = this;

    enable->parent = this;

    energywise->parent = this;

    epm->parent = this;

    errdisable->parent = this;

    esmc->parent = this;

    ethernet->parent = this;

    event->parent = this;

    exception->parent = this;

    fabric->parent = this;

    facility_alarm->parent = this;

    fallback->parent = this;

    fhrp->parent = this;

    flow->parent = this;

    hw_module->parent = this;

    hw_switch->parent = this;

    identity->parent = this;

    interface->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    key->parent = this;

    l2->parent = this;

    l2protocol_tunnel->parent = this;

    l2vpn->parent = this;

    l2vpn_config->parent = this;

    l3vpn->parent = this;

    license->parent = this;

    line->parent = this;

    lldp->parent = this;

    location->parent = this;

    logging->parent = this;

    login->parent = this;

    mac->parent = this;

    mac_address_table->parent = this;

    macro->parent = this;

    memory->parent = this;

    memory_size->parent = this;

    metadata->parent = this;

    mka->parent = this;

    mls->parent = this;

    module->parent = this;

    monitor->parent = this;

    mpls->parent = this;

    multilink->parent = this;

    network_clock->parent = this;

    network_policy->parent = this;

    ntp->parent = this;

    object_group->parent = this;

    otv->parent = this;

    parser->parent = this;

    password->parent = this;

    performance->parent = this;

    pfr->parent = this;

    platform->parent = this;

    policy->parent = this;

    port_channel->parent = this;

    power->parent = this;

    ppp->parent = this;

    privilege->parent = this;

    process->parent = this;

    profile->parent = this;

    radius->parent = this;

    radius_server->parent = this;

    remote_management->parent = this;

    rep->parent = this;

    rmon->parent = this;

    route_tag->parent = this;

    router->parent = this;

    scheduler->parent = this;

    sdm->parent = this;

    segment_routing->parent = this;

    service->parent = this;

    service_chain->parent = this;

    service_insertion->parent = this;

    service_list->parent = this;

    service_routing->parent = this;

    setup->parent = this;

    snmp->parent = this;

    snmp_server->parent = this;

    spanning_tree->parent = this;

    stack_mac->parent = this;

    subscriber->parent = this;

    system->parent = this;

    tacacs->parent = this;

    tacacs_server->parent = this;

    template_->parent = this;

    tod_clock->parent = this;

    track->parent = this;

    transceiver->parent = this;

    udld->parent = this;

    upgrade->parent = this;

    utd_engine->parent = this;

    vlan->parent = this;

    voice->parent = this;

    vpdn->parent = this;

    vrf->parent = this;

    vstack->parent = this;

    vtp->parent = this;

    wireless->parent = this;

    wsma->parent = this;

    xconnect->parent = this;

    zone->parent = this;

    zone_pair->parent = this;

    yang_name = "native"; yang_parent_name = "Cisco-IOS-XE-native";
}

Native::~Native()
{
}

bool Native::has_data() const
{
    for (std::size_t index=0; index<alarm_contact.size(); index++)
    {
        if(alarm_contact[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parameter_map.size(); index++)
    {
        if(parameter_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pfr_map.size(); index++)
    {
        if(pfr_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_template.size(); index++)
    {
        if(service_template[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<switch_virtual.size(); index++)
    {
        if(switch_virtual[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<table_map.size(); index++)
    {
        if(table_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tftp_server.size(); index++)
    {
        if(tftp_server[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_range.size(); index++)
    {
        if(time_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_service.size(); index++)
    {
        if(virtual_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<voice_card.size(); index++)
    {
        if(voice_card[index]->has_data())
            return true;
    }
    return aqm_register_fnf.is_set
	|| boot_end_marker.is_set
	|| boot_start_marker.is_set
	|| captive_portal_bypass.is_set
	|| disable_eadi.is_set
	|| hostname.is_set
	|| version.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (access_list !=  nullptr && access_list->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (alias !=  nullptr && alias->has_data())
	|| (ap !=  nullptr && ap->has_data())
	|| (archive !=  nullptr && archive->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (banner !=  nullptr && banner->has_data())
	|| (bba_group !=  nullptr && bba_group->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bfd_template !=  nullptr && bfd_template->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (card !=  nullptr && card->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (cisp !=  nullptr && cisp->has_data())
	|| (clock !=  nullptr && clock->has_data())
	|| (coap !=  nullptr && coap->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (controller !=  nullptr && controller->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (device_sensor !=  nullptr && device_sensor->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (diagnostic !=  nullptr && diagnostic->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (epm !=  nullptr && epm->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (esmc !=  nullptr && esmc->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (exception !=  nullptr && exception->has_data())
	|| (fabric !=  nullptr && fabric->has_data())
	|| (facility_alarm !=  nullptr && facility_alarm->has_data())
	|| (fallback !=  nullptr && fallback->has_data())
	|| (fhrp !=  nullptr && fhrp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (hw_module !=  nullptr && hw_module->has_data())
	|| (hw_switch !=  nullptr && hw_switch->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (l2 !=  nullptr && l2->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (l2vpn_config !=  nullptr && l2vpn_config->has_data())
	|| (l3vpn !=  nullptr && l3vpn->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mac_address_table !=  nullptr && mac_address_table->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (memory_size !=  nullptr && memory_size->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (mls !=  nullptr && mls->has_data())
	|| (module !=  nullptr && module->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (multilink !=  nullptr && multilink->has_data())
	|| (network_clock !=  nullptr && network_clock->has_data())
	|| (network_policy !=  nullptr && network_policy->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (object_group !=  nullptr && object_group->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (parser !=  nullptr && parser->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (platform !=  nullptr && platform->has_data())
	|| (pm_agent !=  nullptr && pm_agent->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (port_channel !=  nullptr && port_channel->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (radius_server !=  nullptr && radius_server->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_management !=  nullptr && remote_management->has_data())
	|| (rep !=  nullptr && rep->has_data())
	|| (rmon !=  nullptr && rmon->has_data())
	|| (route_tag !=  nullptr && route_tag->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (scheduler !=  nullptr && scheduler->has_data())
	|| (sdm !=  nullptr && sdm->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data())
	|| (service_insertion !=  nullptr && service_insertion->has_data())
	|| (service_list !=  nullptr && service_list->has_data())
	|| (service_routing !=  nullptr && service_routing->has_data())
	|| (setup !=  nullptr && setup->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (snmp_server !=  nullptr && snmp_server->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (stack_mac !=  nullptr && stack_mac->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (tacacs_server !=  nullptr && tacacs_server->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (tod_clock !=  nullptr && tod_clock->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (upgrade !=  nullptr && upgrade->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (utd_engine !=  nullptr && utd_engine->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (voice !=  nullptr && voice->has_data())
	|| (vpdn !=  nullptr && vpdn->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (vstack !=  nullptr && vstack->has_data())
	|| (vtp !=  nullptr && vtp->has_data())
	|| (wireless !=  nullptr && wireless->has_data())
	|| (wsma !=  nullptr && wsma->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (zone !=  nullptr && zone->has_data())
	|| (zone_pair !=  nullptr && zone_pair->has_data());
}

bool Native::has_operation() const
{
    for (std::size_t index=0; index<alarm_contact.size(); index++)
    {
        if(alarm_contact[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parameter_map.size(); index++)
    {
        if(parameter_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pfr_map.size(); index++)
    {
        if(pfr_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_template.size(); index++)
    {
        if(service_template[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<switch_virtual.size(); index++)
    {
        if(switch_virtual[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<table_map.size(); index++)
    {
        if(table_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tftp_server.size(); index++)
    {
        if(tftp_server[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_range.size(); index++)
    {
        if(time_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_service.size(); index++)
    {
        if(virtual_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<voice_card.size(); index++)
    {
        if(voice_card[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aqm_register_fnf.operation)
	|| is_set(boot_end_marker.operation)
	|| is_set(boot_start_marker.operation)
	|| is_set(captive_portal_bypass.operation)
	|| is_set(disable_eadi.operation)
	|| is_set(hostname.operation)
	|| is_set(version.operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (alias !=  nullptr && alias->has_operation())
	|| (ap !=  nullptr && ap->has_operation())
	|| (archive !=  nullptr && archive->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (banner !=  nullptr && banner->has_operation())
	|| (bba_group !=  nullptr && bba_group->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bfd_template !=  nullptr && bfd_template->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (card !=  nullptr && card->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (cisp !=  nullptr && cisp->has_operation())
	|| (clock !=  nullptr && clock->has_operation())
	|| (coap !=  nullptr && coap->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (controller !=  nullptr && controller->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (device_sensor !=  nullptr && device_sensor->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (diagnostic !=  nullptr && diagnostic->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (epm !=  nullptr && epm->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (esmc !=  nullptr && esmc->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (exception !=  nullptr && exception->has_operation())
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (facility_alarm !=  nullptr && facility_alarm->has_operation())
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (fhrp !=  nullptr && fhrp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (hw_module !=  nullptr && hw_module->has_operation())
	|| (hw_switch !=  nullptr && hw_switch->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (l2 !=  nullptr && l2->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (l2vpn_config !=  nullptr && l2vpn_config->has_operation())
	|| (l3vpn !=  nullptr && l3vpn->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mac_address_table !=  nullptr && mac_address_table->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (memory_size !=  nullptr && memory_size->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (mls !=  nullptr && mls->has_operation())
	|| (module !=  nullptr && module->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (network_clock !=  nullptr && network_clock->has_operation())
	|| (network_policy !=  nullptr && network_policy->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (object_group !=  nullptr && object_group->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (parser !=  nullptr && parser->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (platform !=  nullptr && platform->has_operation())
	|| (pm_agent !=  nullptr && pm_agent->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (port_channel !=  nullptr && port_channel->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (radius_server !=  nullptr && radius_server->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_management !=  nullptr && remote_management->has_operation())
	|| (rep !=  nullptr && rep->has_operation())
	|| (rmon !=  nullptr && rmon->has_operation())
	|| (route_tag !=  nullptr && route_tag->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (scheduler !=  nullptr && scheduler->has_operation())
	|| (sdm !=  nullptr && sdm->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation())
	|| (service_insertion !=  nullptr && service_insertion->has_operation())
	|| (service_list !=  nullptr && service_list->has_operation())
	|| (service_routing !=  nullptr && service_routing->has_operation())
	|| (setup !=  nullptr && setup->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (snmp_server !=  nullptr && snmp_server->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (stack_mac !=  nullptr && stack_mac->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (tacacs_server !=  nullptr && tacacs_server->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (tod_clock !=  nullptr && tod_clock->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (upgrade !=  nullptr && upgrade->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (utd_engine !=  nullptr && utd_engine->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (voice !=  nullptr && voice->has_operation())
	|| (vpdn !=  nullptr && vpdn->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (vstack !=  nullptr && vstack->has_operation())
	|| (vtp !=  nullptr && vtp->has_operation())
	|| (wireless !=  nullptr && wireless->has_operation())
	|| (wsma !=  nullptr && wsma->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (zone !=  nullptr && zone->has_operation())
	|| (zone_pair !=  nullptr && zone_pair->has_operation());
}

std::string Native::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native";

    return path_buffer.str();

}

const EntityPath Native::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aqm_register_fnf.is_set || is_set(aqm_register_fnf.operation)) leaf_name_data.push_back(aqm_register_fnf.get_name_leafdata());
    if (boot_end_marker.is_set || is_set(boot_end_marker.operation)) leaf_name_data.push_back(boot_end_marker.get_name_leafdata());
    if (boot_start_marker.is_set || is_set(boot_start_marker.operation)) leaf_name_data.push_back(boot_start_marker.get_name_leafdata());
    if (captive_portal_bypass.is_set || is_set(captive_portal_bypass.operation)) leaf_name_data.push_back(captive_portal_bypass.get_name_leafdata());
    if (disable_eadi.is_set || is_set(disable_eadi.operation)) leaf_name_data.push_back(disable_eadi.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "alarm-contact")
    {
        for(auto const & c : alarm_contact)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AlarmContact>();
        c->parent = this;
        alarm_contact.push_back(c);
        return c;
    }

    if(child_yang_name == "alias")
    {
        if(alias == nullptr)
        {
            alias = std::make_shared<Native::Alias>();
        }
        return alias;
    }

    if(child_yang_name == "ap")
    {
        if(ap == nullptr)
        {
            ap = std::make_shared<Native::Ap>();
        }
        return ap;
    }

    if(child_yang_name == "archive")
    {
        if(archive == nullptr)
        {
            archive = std::make_shared<Native::Archive>();
        }
        return archive;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "banner")
    {
        if(banner == nullptr)
        {
            banner = std::make_shared<Native::Banner>();
        }
        return banner;
    }

    if(child_yang_name == "bba-group")
    {
        if(bba_group == nullptr)
        {
            bba_group = std::make_shared<Native::BbaGroup>();
        }
        return bba_group;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bfd-template")
    {
        if(bfd_template == nullptr)
        {
            bfd_template = std::make_shared<Native::BfdTemplate>();
        }
        return bfd_template;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "call-home")
    {
        if(call_home == nullptr)
        {
            call_home = std::make_shared<Native::CallHome>();
        }
        return call_home;
    }

    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Native::Card>();
        }
        return card;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "cisp")
    {
        if(cisp == nullptr)
        {
            cisp = std::make_shared<Native::Cisp>();
        }
        return cisp;
    }

    if(child_yang_name == "clock")
    {
        if(clock == nullptr)
        {
            clock = std::make_shared<Native::Clock>();
        }
        return clock;
    }

    if(child_yang_name == "coap")
    {
        if(coap == nullptr)
        {
            coap = std::make_shared<Native::Coap>();
        }
        return coap;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Controller>();
        }
        return controller;
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

    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Device>();
        }
        return device;
    }

    if(child_yang_name == "device-sensor")
    {
        if(device_sensor == nullptr)
        {
            device_sensor = std::make_shared<Native::DeviceSensor>();
        }
        return device_sensor;
    }

    if(child_yang_name == "device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "diagnostic")
    {
        if(diagnostic == nullptr)
        {
            diagnostic = std::make_shared<Native::Diagnostic>();
        }
        return diagnostic;
    }

    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "epm")
    {
        if(epm == nullptr)
        {
            epm = std::make_shared<Native::Epm>();
        }
        return epm;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "esmc")
    {
        if(esmc == nullptr)
        {
            esmc = std::make_shared<Native::Esmc>();
        }
        return esmc;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Event>();
        }
        return event;
    }

    if(child_yang_name == "exception")
    {
        if(exception == nullptr)
        {
            exception = std::make_shared<Native::Exception>();
        }
        return exception;
    }

    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Native::Fabric>();
        }
        return fabric;
    }

    if(child_yang_name == "facility-alarm")
    {
        if(facility_alarm == nullptr)
        {
            facility_alarm = std::make_shared<Native::FacilityAlarm>();
        }
        return facility_alarm;
    }

    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "fhrp")
    {
        if(fhrp == nullptr)
        {
            fhrp = std::make_shared<Native::Fhrp>();
        }
        return fhrp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "hw-module")
    {
        if(hw_module == nullptr)
        {
            hw_module = std::make_shared<Native::HwModule>();
        }
        return hw_module;
    }

    if(child_yang_name == "hw-switch")
    {
        if(hw_switch == nullptr)
        {
            hw_switch = std::make_shared<Native::HwSwitch>();
        }
        return hw_switch;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ipv6>();
        }
        return ipv6;
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

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "l2vpn-config")
    {
        if(l2vpn_config == nullptr)
        {
            l2vpn_config = std::make_shared<Native::L2VpnConfig>();
        }
        return l2vpn_config;
    }

    if(child_yang_name == "l3vpn")
    {
        if(l3vpn == nullptr)
        {
            l3vpn = std::make_shared<Native::L3Vpn>();
        }
        return l3vpn;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::License>();
        }
        return license;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Line>();
        }
        return line;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Location>();
        }
        return location;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Login>();
        }
        return login;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mac-address-table")
    {
        if(mac_address_table == nullptr)
        {
            mac_address_table = std::make_shared<Native::MacAddressTable>();
        }
        return mac_address_table;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "memory-size")
    {
        if(memory_size == nullptr)
        {
            memory_size = std::make_shared<Native::MemorySize>();
        }
        return memory_size;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "mls")
    {
        if(mls == nullptr)
        {
            mls = std::make_shared<Native::Mls>();
        }
        return mls;
    }

    if(child_yang_name == "module")
    {
        if(module == nullptr)
        {
            module = std::make_shared<Native::Module>();
        }
        return module;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "network-clock")
    {
        if(network_clock == nullptr)
        {
            network_clock = std::make_shared<Native::NetworkClock>();
        }
        return network_clock;
    }

    if(child_yang_name == "network-policy")
    {
        if(network_policy == nullptr)
        {
            network_policy = std::make_shared<Native::NetworkPolicy>();
        }
        return network_policy;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "object-group")
    {
        if(object_group == nullptr)
        {
            object_group = std::make_shared<Native::ObjectGroup>();
        }
        return object_group;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "parameter-map")
    {
        for(auto const & c : parameter_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ParameterMap>();
        c->parent = this;
        parameter_map.push_back(c);
        return c;
    }

    if(child_yang_name == "parser")
    {
        if(parser == nullptr)
        {
            parser = std::make_shared<Native::Parser>();
        }
        return parser;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Password>();
        }
        return password;
    }

    if(child_yang_name == "performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Performance>();
        }
        return performance;
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
        for(auto const & c : pfr_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap>();
        c->parent = this;
        pfr_map.push_back(c);
        return c;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Native::Platform>();
        }
        return platform;
    }

    if(child_yang_name == "pm-agent")
    {
        if(pm_agent == nullptr)
        {
            pm_agent = std::make_shared<Native::PmAgent>();
        }
        return pm_agent;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "port-channel")
    {
        if(port_channel == nullptr)
        {
            port_channel = std::make_shared<Native::PortChannel>();
        }
        return port_channel;
    }

    if(child_yang_name == "power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Power>();
        }
        return power;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process>();
        }
        return process;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "pseudowire-class")
    {
        for(auto const & c : pseudowire_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(c);
        return c;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "radius-server")
    {
        if(radius_server == nullptr)
        {
            radius_server = std::make_shared<Native::RadiusServer>();
        }
        return radius_server;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote-management")
    {
        if(remote_management == nullptr)
        {
            remote_management = std::make_shared<Native::RemoteManagement>();
        }
        return remote_management;
    }

    if(child_yang_name == "rep")
    {
        if(rep == nullptr)
        {
            rep = std::make_shared<Native::Rep>();
        }
        return rep;
    }

    if(child_yang_name == "rmon")
    {
        if(rmon == nullptr)
        {
            rmon = std::make_shared<Native::Rmon>();
        }
        return rmon;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "route-tag")
    {
        if(route_tag == nullptr)
        {
            route_tag = std::make_shared<Native::RouteTag>();
        }
        return route_tag;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Router>();
        }
        return router;
    }

    if(child_yang_name == "sampler")
    {
        for(auto const & c : sampler)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Sampler>();
        c->parent = this;
        sampler.push_back(c);
        return c;
    }

    if(child_yang_name == "scheduler")
    {
        if(scheduler == nullptr)
        {
            scheduler = std::make_shared<Native::Scheduler>();
        }
        return scheduler;
    }

    if(child_yang_name == "sdm")
    {
        if(sdm == nullptr)
        {
            sdm = std::make_shared<Native::Sdm>();
        }
        return sdm;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Service>();
        }
        return service;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::ServiceChain>();
        }
        return service_chain;
    }

    if(child_yang_name == "service-insertion")
    {
        if(service_insertion == nullptr)
        {
            service_insertion = std::make_shared<Native::ServiceInsertion>();
        }
        return service_insertion;
    }

    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Native::ServiceList>();
        }
        return service_list;
    }

    if(child_yang_name == "service-routing")
    {
        if(service_routing == nullptr)
        {
            service_routing = std::make_shared<Native::ServiceRouting>();
        }
        return service_routing;
    }

    if(child_yang_name == "service-template")
    {
        for(auto const & c : service_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceTemplate>();
        c->parent = this;
        service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "setup")
    {
        if(setup == nullptr)
        {
            setup = std::make_shared<Native::Setup>();
        }
        return setup;
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

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "stack-mac")
    {
        if(stack_mac == nullptr)
        {
            stack_mac = std::make_shared<Native::StackMac>();
        }
        return stack_mac;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Native::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Switch>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    if(child_yang_name == "switch-virtual")
    {
        for(auto const & c : switch_virtual)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SwitchVirtual>();
        c->parent = this;
        switch_virtual.push_back(c);
        return c;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::System>();
        }
        return system;
    }

    if(child_yang_name == "table-map")
    {
        for(auto const & c : table_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TableMap>();
        c->parent = this;
        table_map.push_back(c);
        return c;
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

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "tftp-server")
    {
        for(auto const & c : tftp_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TftpServer>();
        c->parent = this;
        tftp_server.push_back(c);
        return c;
    }

    if(child_yang_name == "time-range")
    {
        for(auto const & c : time_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::TimeRange>();
        c->parent = this;
        time_range.push_back(c);
        return c;
    }

    if(child_yang_name == "tod-clock")
    {
        if(tod_clock == nullptr)
        {
            tod_clock = std::make_shared<Native::TodClock>();
        }
        return tod_clock;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Track>();
        }
        return track;
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<Native::Transceiver>();
        }
        return transceiver;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "upgrade")
    {
        if(upgrade == nullptr)
        {
            upgrade = std::make_shared<Native::Upgrade>();
        }
        return upgrade;
    }

    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "utd-engine")
    {
        if(utd_engine == nullptr)
        {
            utd_engine = std::make_shared<Native::UtdEngine>();
        }
        return utd_engine;
    }

    if(child_yang_name == "virtual-service")
    {
        for(auto const & c : virtual_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::VirtualService>();
        c->parent = this;
        virtual_service.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Voice>();
        }
        return voice;
    }

    if(child_yang_name == "voice-card")
    {
        for(auto const & c : voice_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::VoiceCard>();
        c->parent = this;
        voice_card.push_back(c);
        return c;
    }

    if(child_yang_name == "vpdn")
    {
        if(vpdn == nullptr)
        {
            vpdn = std::make_shared<Native::Vpdn>();
        }
        return vpdn;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "vstack")
    {
        if(vstack == nullptr)
        {
            vstack = std::make_shared<Native::Vstack>();
        }
        return vstack;
    }

    if(child_yang_name == "vtp")
    {
        if(vtp == nullptr)
        {
            vtp = std::make_shared<Native::Vtp>();
        }
        return vtp;
    }

    if(child_yang_name == "wireless")
    {
        if(wireless == nullptr)
        {
            wireless = std::make_shared<Native::Wireless>();
        }
        return wireless;
    }

    if(child_yang_name == "wsma")
    {
        if(wsma == nullptr)
        {
            wsma = std::make_shared<Native::Wsma>();
        }
        return wsma;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Xconnect>();
        }
        return xconnect;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    for (auto const & c : alarm_contact)
    {
        children[c->get_segment_path()] = c;
    }

    if(alias != nullptr)
    {
        children["alias"] = alias;
    }

    if(ap != nullptr)
    {
        children["ap"] = ap;
    }

    if(archive != nullptr)
    {
        children["archive"] = archive;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(banner != nullptr)
    {
        children["banner"] = banner;
    }

    if(bba_group != nullptr)
    {
        children["bba-group"] = bba_group;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bfd_template != nullptr)
    {
        children["bfd-template"] = bfd_template;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(call_home != nullptr)
    {
        children["call-home"] = call_home;
    }

    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(cdp != nullptr)
    {
        children["cdp"] = cdp;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(cisp != nullptr)
    {
        children["cisp"] = cisp;
    }

    if(clock != nullptr)
    {
        children["clock"] = clock;
    }

    if(coap != nullptr)
    {
        children["coap"] = coap;
    }

    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    if(controller != nullptr)
    {
        children["controller"] = controller;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(device != nullptr)
    {
        children["device"] = device;
    }

    if(device_sensor != nullptr)
    {
        children["device-sensor"] = device_sensor;
    }

    if(device_tracking != nullptr)
    {
        children["device-tracking"] = device_tracking;
    }

    if(diagnostic != nullptr)
    {
        children["diagnostic"] = diagnostic;
    }

    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(epm != nullptr)
    {
        children["epm"] = epm;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(esmc != nullptr)
    {
        children["esmc"] = esmc;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(exception != nullptr)
    {
        children["exception"] = exception;
    }

    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    if(facility_alarm != nullptr)
    {
        children["facility-alarm"] = facility_alarm;
    }

    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(fhrp != nullptr)
    {
        children["fhrp"] = fhrp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(hw_module != nullptr)
    {
        children["hw-module"] = hw_module;
    }

    if(hw_switch != nullptr)
    {
        children["hw-switch"] = hw_switch;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(l2 != nullptr)
    {
        children["l2"] = l2;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(l2vpn_config != nullptr)
    {
        children["l2vpn-config"] = l2vpn_config;
    }

    if(l3vpn != nullptr)
    {
        children["l3vpn"] = l3vpn;
    }

    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(mac_address_table != nullptr)
    {
        children["mac-address-table"] = mac_address_table;
    }

    if(macro != nullptr)
    {
        children["macro"] = macro;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(memory_size != nullptr)
    {
        children["memory-size"] = memory_size;
    }

    if(metadata != nullptr)
    {
        children["metadata"] = metadata;
    }

    if(mka != nullptr)
    {
        children["mka"] = mka;
    }

    if(mls != nullptr)
    {
        children["mls"] = mls;
    }

    if(module != nullptr)
    {
        children["module"] = module;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    if(network_clock != nullptr)
    {
        children["network-clock"] = network_clock;
    }

    if(network_policy != nullptr)
    {
        children["network-policy"] = network_policy;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    if(object_group != nullptr)
    {
        children["object-group"] = object_group;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    for (auto const & c : parameter_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(parser != nullptr)
    {
        children["parser"] = parser;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(performance != nullptr)
    {
        children["performance"] = performance;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    for (auto const & c : pfr_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(platform != nullptr)
    {
        children["platform"] = platform;
    }

    if(pm_agent != nullptr)
    {
        children["pm-agent"] = pm_agent;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(port_channel != nullptr)
    {
        children["port-channel"] = port_channel;
    }

    if(power != nullptr)
    {
        children["power"] = power;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    for (auto const & c : pseudowire_class)
    {
        children[c->get_segment_path()] = c;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(radius_server != nullptr)
    {
        children["radius-server"] = radius_server;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote_management != nullptr)
    {
        children["remote-management"] = remote_management;
    }

    if(rep != nullptr)
    {
        children["rep"] = rep;
    }

    if(rmon != nullptr)
    {
        children["rmon"] = rmon;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_tag != nullptr)
    {
        children["route-tag"] = route_tag;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    for (auto const & c : sampler)
    {
        children[c->get_segment_path()] = c;
    }

    if(scheduler != nullptr)
    {
        children["scheduler"] = scheduler;
    }

    if(sdm != nullptr)
    {
        children["sdm"] = sdm;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    if(service_insertion != nullptr)
    {
        children["service-insertion"] = service_insertion;
    }

    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    if(service_routing != nullptr)
    {
        children["service-routing"] = service_routing;
    }

    for (auto const & c : service_template)
    {
        children[c->get_segment_path()] = c;
    }

    if(setup != nullptr)
    {
        children["setup"] = setup;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(snmp_server != nullptr)
    {
        children["snmp-server"] = snmp_server;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(stack_mac != nullptr)
    {
        children["stack-mac"] = stack_mac;
    }

    if(subscriber != nullptr)
    {
        children["subscriber"] = subscriber;
    }

    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : switch_virtual)
    {
        children[c->get_segment_path()] = c;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    for (auto const & c : table_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(tacacs != nullptr)
    {
        children["tacacs"] = tacacs;
    }

    if(tacacs_server != nullptr)
    {
        children["tacacs-server"] = tacacs_server;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    for (auto const & c : tftp_server)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(tod_clock != nullptr)
    {
        children["tod-clock"] = tod_clock;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    if(transceiver != nullptr)
    {
        children["transceiver"] = transceiver;
    }

    if(udld != nullptr)
    {
        children["udld"] = udld;
    }

    if(upgrade != nullptr)
    {
        children["upgrade"] = upgrade;
    }

    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(utd_engine != nullptr)
    {
        children["utd-engine"] = utd_engine;
    }

    for (auto const & c : virtual_service)
    {
        children[c->get_segment_path()] = c;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    for (auto const & c : voice_card)
    {
        children[c->get_segment_path()] = c;
    }

    if(vpdn != nullptr)
    {
        children["vpdn"] = vpdn;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(vstack != nullptr)
    {
        children["vstack"] = vstack;
    }

    if(vtp != nullptr)
    {
        children["vtp"] = vtp;
    }

    if(wireless != nullptr)
    {
        children["wireless"] = wireless;
    }

    if(wsma != nullptr)
    {
        children["wsma"] = wsma;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(zone != nullptr)
    {
        children["zone"] = zone;
    }

    if(zone_pair != nullptr)
    {
        children["zone-pair"] = zone_pair;
    }

    return children;
}

void Native::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aqm-register-fnf")
    {
        aqm_register_fnf = value;
    }
    if(value_path == "boot-end-marker")
    {
        boot_end_marker = value;
    }
    if(value_path == "boot-start-marker")
    {
        boot_start_marker = value;
    }
    if(value_path == "captive-portal-bypass")
    {
        captive_portal_bypass = value;
    }
    if(value_path == "disable-eadi")
    {
        disable_eadi = value;
    }
    if(value_path == "hostname")
    {
        hostname = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

std::shared_ptr<Entity> Native::clone_ptr() const
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

Native::Bfd::Bfd()
    :
    l2cos{YType::uint8, "Cisco-IOS-XE-bfd:l2cos"},
    slow_timers{YType::uint16, "Cisco-IOS-XE-bfd:slow-timers"}
    	,
    map(std::make_shared<Native::Bfd::Map>())
{
    map->parent = this;

    yang_name = "bfd"; yang_parent_name = "native";
}

Native::Bfd::~Bfd()
{
}

bool Native::Bfd::has_data() const
{
    return l2cos.is_set
	|| slow_timers.is_set
	|| (map !=  nullptr && map->has_data());
}

bool Native::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(l2cos.operation)
	|| is_set(slow_timers.operation)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2cos.is_set || is_set(l2cos.operation)) leaf_name_data.push_back(l2cos.get_name_leafdata());
    if (slow_timers.is_set || is_set(slow_timers.operation)) leaf_name_data.push_back(slow_timers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Bfd::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2cos")
    {
        l2cos = value;
    }
    if(value_path == "slow-timers")
    {
        slow_timers = value;
    }
}

Native::Bfd::Map::Map()
    :
    ipv4(std::make_shared<Native::Bfd::Map::Ipv4>())
	,ipv6(std::make_shared<Native::Bfd::Map::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "map"; yang_parent_name = "bfd";
}

Native::Bfd::Map::~Map()
{
}

bool Native::Bfd::Map::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Bfd::Map::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Bfd::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:map";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Bfd::Map::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv4::Ipv4()
    :
    no_vrf(std::make_shared<Native::Bfd::Map::Ipv4::NoVrf>())
	,vrf(std::make_shared<Native::Bfd::Map::Ipv4::Vrf>())
{
    no_vrf->parent = this;

    vrf->parent = this;

    yang_name = "ipv4"; yang_parent_name = "map";
}

Native::Bfd::Map::Ipv4::~Ipv4()
{
}

bool Native::Bfd::Map::Ipv4::has_data() const
{
    return (no_vrf !=  nullptr && no_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (no_vrf !=  nullptr && no_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_vrf != nullptr)
    {
        children["no-vrf"] = no_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv4::NoVrf::NoVrf()
    :
    dest_ip{YType::str, "dest-ip"},
    src_ip{YType::str, "src-ip"},
    template_name{YType::str, "template-name"}
{
    yang_name = "no-vrf"; yang_parent_name = "ipv4";
}

Native::Bfd::Map::Ipv4::NoVrf::~NoVrf()
{
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_data() const
{
    return dest_ip.is_set
	|| src_ip.is_set
	|| template_name.is_set;
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_ip.operation)
	|| is_set(src_ip.operation)
	|| is_set(template_name.operation);
}

std::string Native::Bfd::Map::Ipv4::NoVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-vrf";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv4::NoVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ip.is_set || is_set(dest_ip.operation)) leaf_name_data.push_back(dest_ip.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.operation)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::NoVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::NoVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv4::NoVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-ip")
    {
        dest_ip = value;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

Native::Bfd::Map::Ipv4::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "ipv4";
}

Native::Bfd::Map::Ipv4::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::has_data() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv4::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Bfd::Map::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv4::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        for(auto const & c : dst_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv4::Vrf::DstVrf>();
        c->parent = this;
        dst_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dst_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv4::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv4::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{
    yang_name = "dst-vrf"; yang_parent_name = "vrf";
}

Native::Bfd::Map::Ipv4::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_data() const
{
    return dst_vrf.is_set
	|| a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_vrf.operation)
	|| is_set(a_period_b_period_c_period_d_slash_nn.operation);
}

std::string Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf" <<"[dst-vrf='" <<dst_vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.operation)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.operation)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv4::Vrf::DstVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
    }
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
    }
}

Native::Bfd::Map::Ipv6::Ipv6()
    :
    vrf(std::make_shared<Native::Bfd::Map::Ipv6::Vrf>())
{
    vrf->parent = this;

    yang_name = "ipv6"; yang_parent_name = "map";
}

Native::Bfd::Map::Ipv6::~Ipv6()
{
}

bool Native::Bfd::Map::Ipv6::has_data() const
{
    for (std::size_t index=0; index<dp_ipv6_prefix.size(); index++)
    {
        if(dp_ipv6_prefix[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<dp_ipv6_prefix.size(); index++)
    {
        if(dp_ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dp-ipv6_prefix")
    {
        for(auto const & c : dp_ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6_Prefix>();
        c->parent = this;
        dp_ipv6_prefix.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dp_ipv6_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::DpIpv6_Prefix()
    :
    dp_ipv6_prefix{YType::str, "dp-ipv6_prefix"},
    bfd_nm{YType::str, "bfd-nm"}
    	,
    vrf(std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf>())
{
    vrf->parent = this;

    yang_name = "dp-ipv6_prefix"; yang_parent_name = "ipv6";
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::~DpIpv6_Prefix()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::has_data() const
{
    for (std::size_t index=0; index<src_ipv6_prefix0.size(); index++)
    {
        if(src_ipv6_prefix0[index]->has_data())
            return true;
    }
    return dp_ipv6_prefix.is_set
	|| bfd_nm.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::has_operation() const
{
    for (std::size_t index=0; index<src_ipv6_prefix0.size(); index++)
    {
        if(src_ipv6_prefix0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dp_ipv6_prefix.operation)
	|| is_set(bfd_nm.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::DpIpv6_Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dp-ipv6_prefix" <<"[dp-ipv6_prefix='" <<dp_ipv6_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::DpIpv6_Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_ipv6_prefix.is_set || is_set(dp_ipv6_prefix.operation)) leaf_name_data.push_back(dp_ipv6_prefix.get_name_leafdata());
    if (bfd_nm.is_set || is_set(bfd_nm.operation)) leaf_name_data.push_back(bfd_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-ipv6_prefix0")
    {
        for(auto const & c : src_ipv6_prefix0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0>();
        c->parent = this;
        src_ipv6_prefix0.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : src_ipv6_prefix0)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dp-ipv6_prefix")
    {
        dp_ipv6_prefix = value;
    }
    if(value_path == "bfd-nm")
    {
        bfd_nm = value;
    }
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::SrcIpv6_Prefix0()
    :
    src_ipv6_prefix0{YType::str, "src-ipv6_prefix0"},
    bfd_name{YType::str, "bfd-name"}
{
    yang_name = "src-ipv6_prefix0"; yang_parent_name = "dp-ipv6_prefix";
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::~SrcIpv6_Prefix0()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::has_data() const
{
    return src_ipv6_prefix0.is_set
	|| bfd_name.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::has_operation() const
{
    return is_set(operation)
	|| is_set(src_ipv6_prefix0.operation)
	|| is_set(bfd_name.operation);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-ipv6_prefix0" <<"[src-ipv6_prefix0='" <<src_ipv6_prefix0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcIpv6_Prefix0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ipv6_prefix0.is_set || is_set(src_ipv6_prefix0.operation)) leaf_name_data.push_back(src_ipv6_prefix0.get_name_leafdata());
    if (bfd_name.is_set || is_set(bfd_name.operation)) leaf_name_data.push_back(bfd_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "src-ipv6_prefix0")
    {
        src_ipv6_prefix0 = value;
    }
    if(value_path == "bfd-name")
    {
        bfd_name = value;
    }
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "dp-ipv6_prefix";
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::has_data() const
{
    for (std::size_t index=0; index<src_vrf.size(); index++)
    {
        if(src_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::has_operation() const
{
    for (std::size_t index=0; index<src_vrf.size(); index++)
    {
        if(src_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-vrf")
    {
        for(auto const & c : src_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf>();
        c->parent = this;
        src_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : src_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::SrcVrf()
    :
    src_vrf{YType::str, "src-vrf"},
    src_ipv6_prefix{YType::str, "src-ipv6_prefix"}
{
    yang_name = "src-vrf"; yang_parent_name = "vrf";
}

Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::~SrcVrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::has_data() const
{
    return src_vrf.is_set
	|| src_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(src_vrf.operation)
	|| is_set(src_ipv6_prefix.operation);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-vrf" <<"[src-vrf='" <<src_vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_vrf.is_set || is_set(src_vrf.operation)) leaf_name_data.push_back(src_vrf.get_name_leafdata());
    if (src_ipv6_prefix.is_set || is_set(src_ipv6_prefix.operation)) leaf_name_data.push_back(src_ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "src-vrf")
    {
        src_vrf = value;
    }
    if(value_path == "src-ipv6_prefix")
    {
        src_ipv6_prefix = value;
    }
}

Native::Bfd::Map::Ipv6::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "ipv6";
}

Native::Bfd::Map::Ipv6::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::has_data() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Bfd::Map::Ipv6::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        for(auto const & c : dst_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv6::Vrf::DstVrf>();
        c->parent = this;
        dst_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dst_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv6::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    dst_ipv6_prefix{YType::str, "dst-ipv6_prefix"}
{
    yang_name = "dst-vrf"; yang_parent_name = "vrf";
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_data() const
{
    return dst_vrf.is_set
	|| dst_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_vrf.operation)
	|| is_set(dst_ipv6_prefix.operation);
}

std::string Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf" <<"[dst-vrf='" <<dst_vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.operation)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (dst_ipv6_prefix.is_set || is_set(dst_ipv6_prefix.operation)) leaf_name_data.push_back(dst_ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv6::Vrf::DstVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
    }
    if(value_path == "dst-ipv6_prefix")
    {
        dst_ipv6_prefix = value;
    }
}

Native::Boot::Boot()
    :
    enable_break(nullptr) // presence node
	,manual(nullptr) // presence node
	,system(std::make_shared<Native::Boot::System>())
{
    system->parent = this;

    yang_name = "boot"; yang_parent_name = "native";
}

Native::Boot::~Boot()
{
}

bool Native::Boot::has_data() const
{
    return (enable_break !=  nullptr && enable_break->has_data())
	|| (manual !=  nullptr && manual->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Native::Boot::has_operation() const
{
    return is_set(operation)
	|| (enable_break !=  nullptr && enable_break->has_operation())
	|| (manual !=  nullptr && manual->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Native::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";

    return path_buffer.str();

}

const EntityPath Native::Boot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-break")
    {
        if(enable_break == nullptr)
        {
            enable_break = std::make_shared<Native::Boot::EnableBreak>();
        }
        return enable_break;
    }

    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Boot::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Boot::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable_break != nullptr)
    {
        children["enable-break"] = enable_break;
    }

    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void Native::Boot::set_value(const std::string & value_path, std::string value)
{
}

Native::Boot::System::System()
    :
    tftp{YType::str, "tftp"},
    tftp_path{YType::str, "tftp-path"}
    	,
    bootfile(std::make_shared<Native::Boot::System::Bootfile>())
	,flash(std::make_shared<Native::Boot::System::Flash>())
	,switch(std::make_shared<Native::Boot::System::Switch>())
{
    bootfile->parent = this;

    flash->parent = this;

    switch->parent = this;

    yang_name = "system"; yang_parent_name = "boot";
}

Native::Boot::System::~System()
{
}

bool Native::Boot::System::has_data() const
{
    return tftp.is_set
	|| tftp_path.is_set
	|| (bootfile !=  nullptr && bootfile->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (switch !=  nullptr && switch->has_data());
}

bool Native::Boot::System::has_operation() const
{
    return is_set(operation)
	|| is_set(tftp.operation)
	|| is_set(tftp_path.operation)
	|| (bootfile !=  nullptr && bootfile->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (switch !=  nullptr && switch->has_operation());
}

std::string Native::Boot::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tftp.is_set || is_set(tftp.operation)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.operation)) leaf_name_data.push_back(tftp_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::Boot::System::Switch>();
        }
        return switch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootfile != nullptr)
    {
        children["bootfile"] = bootfile;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(switch != nullptr)
    {
        children["switch"] = switch;
    }

    return children;
}

void Native::Boot::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tftp")
    {
        tftp = value;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
    }
}

Native::Boot::System::Bootfile::Bootfile()
{
    yang_name = "bootfile"; yang_parent_name = "system";
}

Native::Boot::System::Bootfile::~Bootfile()
{
}

bool Native::Boot::System::Bootfile::has_data() const
{
    for (std::size_t index=0; index<filename_list.size(); index++)
    {
        if(filename_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Bootfile::has_operation() const
{
    for (std::size_t index=0; index<filename_list.size(); index++)
    {
        if(filename_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Boot::System::Bootfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootfile";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Bootfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Bootfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filename-list")
    {
        for(auto const & c : filename_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Boot::System::Bootfile::FilenameList>();
        c->parent = this;
        filename_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Bootfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filename_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Bootfile::set_value(const std::string & value_path, std::string value)
{
}

Native::Boot::System::Bootfile::FilenameList::FilenameList()
    :
    filename{YType::str, "filename"}
{
    yang_name = "filename-list"; yang_parent_name = "bootfile";
}

Native::Boot::System::Bootfile::FilenameList::~FilenameList()
{
}

bool Native::Boot::System::Bootfile::FilenameList::has_data() const
{
    return filename.is_set;
}

bool Native::Boot::System::Bootfile::FilenameList::has_operation() const
{
    return is_set(operation)
	|| is_set(filename.operation);
}

std::string Native::Boot::System::Bootfile::FilenameList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filename-list" <<"[filename='" <<filename <<"']";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Bootfile::FilenameList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/bootfile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.operation)) leaf_name_data.push_back(filename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Bootfile::FilenameList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Bootfile::FilenameList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Bootfile::FilenameList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filename")
    {
        filename = value;
    }
}

Native::Boot::System::Flash::Flash()
{
    yang_name = "flash"; yang_parent_name = "system";
}

Native::Boot::System::Flash::~Flash()
{
}

bool Native::Boot::System::Flash::has_data() const
{
    for (std::size_t index=0; index<flash_list.size(); index++)
    {
        if(flash_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Flash::has_operation() const
{
    for (std::size_t index=0; index<flash_list.size(); index++)
    {
        if(flash_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Boot::System::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Flash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash-list")
    {
        for(auto const & c : flash_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Boot::System::Flash::FlashList>();
        c->parent = this;
        flash_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flash_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Flash::set_value(const std::string & value_path, std::string value)
{
}

Native::Boot::System::Flash::FlashList::FlashList()
    :
    flash_leaf{YType::str, "flash-leaf"}
{
    yang_name = "flash-list"; yang_parent_name = "flash";
}

Native::Boot::System::Flash::FlashList::~FlashList()
{
}

bool Native::Boot::System::Flash::FlashList::has_data() const
{
    return flash_leaf.is_set;
}

bool Native::Boot::System::Flash::FlashList::has_operation() const
{
    return is_set(operation)
	|| is_set(flash_leaf.operation);
}

std::string Native::Boot::System::Flash::FlashList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-list" <<"[flash-leaf='" <<flash_leaf <<"']";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Flash::FlashList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/flash/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_leaf.is_set || is_set(flash_leaf.operation)) leaf_name_data.push_back(flash_leaf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Flash::FlashList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Flash::FlashList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Flash::FlashList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flash-leaf")
    {
        flash_leaf = value;
    }
}

Native::Boot::System::Switch::Switch()
    :
    all(std::make_shared<Native::Boot::System::Switch::All>())
{
    all->parent = this;

    yang_name = "switch"; yang_parent_name = "system";
}

Native::Boot::System::Switch::~Switch()
{
}

bool Native::Boot::System::Switch::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Boot::System::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Boot::System::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Boot::System::Switch::All>();
        }
        return all;
    }

    if(child_yang_name == "switch-number")
    {
        for(auto const & c : switch_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Boot::System::Switch::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : switch_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Boot::System::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::Boot::System::Switch::SwitchNumber::SwitchNumber()
    :
    range{YType::uint8, "range"},
    flash_1_path{YType::str, "flash-1-path"},
    flash_path{YType::str, "flash-path"},
    tftp_path{YType::str, "tftp-path"}
{
    yang_name = "switch-number"; yang_parent_name = "switch";
}

Native::Boot::System::Switch::SwitchNumber::~SwitchNumber()
{
}

bool Native::Boot::System::Switch::SwitchNumber::has_data() const
{
    return range.is_set
	|| flash_1_path.is_set
	|| flash_path.is_set
	|| tftp_path.is_set;
}

bool Native::Boot::System::Switch::SwitchNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(flash_1_path.operation)
	|| is_set(flash_path.operation)
	|| is_set(tftp_path.operation);
}

std::string Native::Boot::System::Switch::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch::SwitchNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (flash_1_path.is_set || is_set(flash_1_path.operation)) leaf_name_data.push_back(flash_1_path.get_name_leafdata());
    if (flash_path.is_set || is_set(flash_path.operation)) leaf_name_data.push_back(flash_path.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.operation)) leaf_name_data.push_back(tftp_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Switch::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch::SwitchNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "flash-1-path")
    {
        flash_1_path = value;
    }
    if(value_path == "flash-path")
    {
        flash_path = value;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
    }
}

Native::Boot::System::Switch::All::All()
    :
    flash{YType::str, "flash"},
    flash_1{YType::str, "flash-1"},
    tftp{YType::str, "tftp"}
{
    yang_name = "all"; yang_parent_name = "switch";
}

Native::Boot::System::Switch::All::~All()
{
}

bool Native::Boot::System::Switch::All::has_data() const
{
    return flash.is_set
	|| flash_1.is_set
	|| tftp.is_set;
}

bool Native::Boot::System::Switch::All::has_operation() const
{
    return is_set(operation)
	|| is_set(flash.operation)
	|| is_set(flash_1.operation)
	|| is_set(tftp.operation);
}

std::string Native::Boot::System::Switch::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash.is_set || is_set(flash.operation)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flash_1.is_set || is_set(flash_1.operation)) leaf_name_data.push_back(flash_1.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.operation)) leaf_name_data.push_back(tftp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Switch::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flash")
    {
        flash = value;
    }
    if(value_path == "flash-1")
    {
        flash_1 = value;
    }
    if(value_path == "tftp")
    {
        tftp = value;
    }
}

Native::Boot::EnableBreak::EnableBreak()
    :
    switch{YType::uint8, "switch"}
{
    yang_name = "enable-break"; yang_parent_name = "boot";
}

Native::Boot::EnableBreak::~EnableBreak()
{
}

bool Native::Boot::EnableBreak::has_data() const
{
    return switch.is_set;
}

bool Native::Boot::EnableBreak::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Boot::EnableBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:enable-break";

    return path_buffer.str();

}

const EntityPath Native::Boot::EnableBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::EnableBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::EnableBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::EnableBreak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Boot::Manual::Manual()
    :
    switch{YType::uint8, "switch"}
{
    yang_name = "manual"; yang_parent_name = "boot";
}

Native::Boot::Manual::~Manual()
{
}

bool Native::Boot::Manual::has_data() const
{
    return switch.is_set;
}

bool Native::Boot::Manual::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Boot::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:manual";

    return path_buffer.str();

}

const EntityPath Native::Boot::Manual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::Manual::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Memory::Memory()
    :
    lite{YType::empty, "lite"}
    	,
    chunk(std::make_shared<Native::Memory::Chunk>())
	,free(std::make_shared<Native::Memory::Free>())
	,reserve(std::make_shared<Native::Memory::Reserve>())
	,sanity(nullptr) // presence node
	,statistics(std::make_shared<Native::Memory::Statistics>())
{
    chunk->parent = this;

    free->parent = this;

    reserve->parent = this;

    statistics->parent = this;

    yang_name = "memory"; yang_parent_name = "native";
}

Native::Memory::~Memory()
{
}

bool Native::Memory::has_data() const
{
    return lite.is_set
	|| (chunk !=  nullptr && chunk->has_data())
	|| (free !=  nullptr && free->has_data())
	|| (reserve !=  nullptr && reserve->has_data())
	|| (sanity !=  nullptr && sanity->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Memory::has_operation() const
{
    return is_set(operation)
	|| is_set(lite.operation)
	|| (chunk !=  nullptr && chunk->has_operation())
	|| (free !=  nullptr && free->has_operation())
	|| (reserve !=  nullptr && reserve->has_operation())
	|| (sanity !=  nullptr && sanity->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath Native::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lite.is_set || is_set(lite.operation)) leaf_name_data.push_back(lite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Memory::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chunk != nullptr)
    {
        children["chunk"] = chunk;
    }

    if(free != nullptr)
    {
        children["free"] = free;
    }

    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    if(sanity != nullptr)
    {
        children["sanity"] = sanity;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Memory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lite")
    {
        lite = value;
    }
}

Native::Memory::Statistics::Statistics()
    :
    history(std::make_shared<Native::Memory::Statistics::History>())
{
    history->parent = this;

    yang_name = "statistics"; yang_parent_name = "memory";
}

Native::Memory::Statistics::~Statistics()
{
}

bool Native::Memory::Statistics::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Native::Memory::Statistics::has_operation() const
{
    return is_set(operation)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Memory::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Native::Memory::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Memory::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Native::Memory::Statistics::History::History()
    :
    table{YType::uint8, "table"}
{
    yang_name = "history"; yang_parent_name = "statistics";
}

Native::Memory::Statistics::History::~History()
{
}

bool Native::Memory::Statistics::History::has_data() const
{
    return table.is_set;
}

bool Native::Memory::Statistics::History::has_operation() const
{
    return is_set(operation)
	|| is_set(table.operation);
}

std::string Native::Memory::Statistics::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Memory::Statistics::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Statistics::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Statistics::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Statistics::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "table")
    {
        table = value;
    }
}

Native::Memory::Chunk::Chunk()
    :
    siblings(std::make_shared<Native::Memory::Chunk::Siblings>())
{
    siblings->parent = this;

    yang_name = "chunk"; yang_parent_name = "memory";
}

Native::Memory::Chunk::~Chunk()
{
}

bool Native::Memory::Chunk::has_data() const
{
    return (siblings !=  nullptr && siblings->has_data());
}

bool Native::Memory::Chunk::has_operation() const
{
    return is_set(operation)
	|| (siblings !=  nullptr && siblings->has_operation());
}

std::string Native::Memory::Chunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chunk";

    return path_buffer.str();

}

const EntityPath Native::Memory::Chunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Chunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Chunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(siblings != nullptr)
    {
        children["siblings"] = siblings;
    }

    return children;
}

void Native::Memory::Chunk::set_value(const std::string & value_path, std::string value)
{
}

Native::Memory::Chunk::Siblings::Siblings()
    :
    threshold{YType::uint32, "threshold"}
{
    yang_name = "siblings"; yang_parent_name = "chunk";
}

Native::Memory::Chunk::Siblings::~Siblings()
{
}

bool Native::Memory::Chunk::Siblings::has_data() const
{
    return threshold.is_set;
}

bool Native::Memory::Chunk::Siblings::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Memory::Chunk::Siblings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "siblings";

    return path_buffer.str();

}

const EntityPath Native::Memory::Chunk::Siblings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/chunk/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Chunk::Siblings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Chunk::Siblings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Chunk::Siblings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Memory::Free::Free()
    :
    low_watermark(std::make_shared<Native::Memory::Free::LowWatermark>())
{
    low_watermark->parent = this;

    yang_name = "free"; yang_parent_name = "memory";
}

Native::Memory::Free::~Free()
{
}

bool Native::Memory::Free::has_data() const
{
    return (low_watermark !=  nullptr && low_watermark->has_data());
}

bool Native::Memory::Free::has_operation() const
{
    return is_set(operation)
	|| (low_watermark !=  nullptr && low_watermark->has_operation());
}

std::string Native::Memory::Free::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "free";

    return path_buffer.str();

}

const EntityPath Native::Memory::Free::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Free::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Free::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(low_watermark != nullptr)
    {
        children["low-watermark"] = low_watermark;
    }

    return children;
}

void Native::Memory::Free::set_value(const std::string & value_path, std::string value)
{
}

Native::Memory::Free::LowWatermark::LowWatermark()
    :
    io{YType::uint32, "IO"},
    processor{YType::uint32, "processor"}
{
    yang_name = "low-watermark"; yang_parent_name = "free";
}

Native::Memory::Free::LowWatermark::~LowWatermark()
{
}

bool Native::Memory::Free::LowWatermark::has_data() const
{
    return io.is_set
	|| processor.is_set;
}

bool Native::Memory::Free::LowWatermark::has_operation() const
{
    return is_set(operation)
	|| is_set(io.operation)
	|| is_set(processor.operation);
}

std::string Native::Memory::Free::LowWatermark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-watermark";

    return path_buffer.str();

}

const EntityPath Native::Memory::Free::LowWatermark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/free/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (io.is_set || is_set(io.operation)) leaf_name_data.push_back(io.get_name_leafdata());
    if (processor.is_set || is_set(processor.operation)) leaf_name_data.push_back(processor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Free::LowWatermark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Free::LowWatermark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Free::LowWatermark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "IO")
    {
        io = value;
    }
    if(value_path == "processor")
    {
        processor = value;
    }
}

Native::Memory::Reserve::Reserve()
    :
    critical(nullptr) // presence node
{
    yang_name = "reserve"; yang_parent_name = "memory";
}

Native::Memory::Reserve::~Reserve()
{
}

bool Native::Memory::Reserve::has_data() const
{
    return (critical !=  nullptr && critical->has_data());
}

bool Native::Memory::Reserve::has_operation() const
{
    return is_set(operation)
	|| (critical !=  nullptr && critical->has_operation());
}

std::string Native::Memory::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Memory::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    return children;
}

void Native::Memory::Reserve::set_value(const std::string & value_path, std::string value)
{
}

Native::Memory::Reserve::Critical::Critical()
    :
    memory_range{YType::uint32, "memory-range"}
{
    yang_name = "critical"; yang_parent_name = "reserve";
}

Native::Memory::Reserve::Critical::~Critical()
{
}

bool Native::Memory::Reserve::Critical::has_data() const
{
    return memory_range.is_set;
}

bool Native::Memory::Reserve::Critical::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_range.operation);
}

std::string Native::Memory::Reserve::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";

    return path_buffer.str();

}

const EntityPath Native::Memory::Reserve::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/reserve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_range.is_set || is_set(memory_range.operation)) leaf_name_data.push_back(memory_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Reserve::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Reserve::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Reserve::Critical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-range")
    {
        memory_range = value;
    }
}

Native::Memory::Sanity::Sanity()
    :
    all{YType::empty, "all"},
    buffer{YType::empty, "buffer"},
    queue{YType::empty, "queue"}
{
    yang_name = "sanity"; yang_parent_name = "memory";
}

Native::Memory::Sanity::~Sanity()
{
}

bool Native::Memory::Sanity::has_data() const
{
    return all.is_set
	|| buffer.is_set
	|| queue.is_set;
}

bool Native::Memory::Sanity::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(buffer.operation)
	|| is_set(queue.operation);
}

std::string Native::Memory::Sanity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sanity";

    return path_buffer.str();

}

const EntityPath Native::Memory::Sanity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (buffer.is_set || is_set(buffer.operation)) leaf_name_data.push_back(buffer.get_name_leafdata());
    if (queue.is_set || is_set(queue.operation)) leaf_name_data.push_back(queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Memory::Sanity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Sanity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Sanity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "buffer")
    {
        buffer = value;
    }
    if(value_path == "queue")
    {
        queue = value;
    }
}

Native::Location::Location()
    :
    civic_location(std::make_shared<Native::Location::CivicLocation>())
{
    civic_location->parent = this;

    yang_name = "location"; yang_parent_name = "native";
}

Native::Location::~Location()
{
}

bool Native::Location::has_data() const
{
    return (civic_location !=  nullptr && civic_location->has_data());
}

bool Native::Location::has_operation() const
{
    return is_set(operation)
	|| (civic_location !=  nullptr && civic_location->has_operation());
}

std::string Native::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";

    return path_buffer.str();

}

const EntityPath Native::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location != nullptr)
    {
        children["civic-location"] = civic_location;
    }

    return children;
}

void Native::Location::set_value(const std::string & value_path, std::string value)
{
}

Native::Location::CivicLocation::CivicLocation()
{
    yang_name = "civic-location"; yang_parent_name = "location";
}

Native::Location::CivicLocation::~CivicLocation()
{
}

bool Native::Location::CivicLocation::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Location::CivicLocation::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Location::CivicLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location";

    return path_buffer.str();

}

const EntityPath Native::Location::CivicLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/location/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Location::CivicLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Location::CivicLocation::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Location::CivicLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Location::CivicLocation::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "identifier"; yang_parent_name = "civic-location";
}

Native::Location::CivicLocation::Identifier::~Identifier()
{
}

bool Native::Location::CivicLocation::Identifier::has_data() const
{
    return identifier.is_set
	|| building.is_set
	|| floor.is_set
	|| landmark.is_set
	|| name.is_set
	|| number.is_set;
}

bool Native::Location::CivicLocation::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(building.operation)
	|| is_set(floor.operation)
	|| is_set(landmark.operation)
	|| is_set(name.operation)
	|| is_set(number.operation);
}

std::string Native::Location::CivicLocation::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[identifier='" <<identifier <<"']";

    return path_buffer.str();

}

const EntityPath Native::Location::CivicLocation::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/location/civic-location/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (building.is_set || is_set(building.operation)) leaf_name_data.push_back(building.get_name_leafdata());
    if (floor.is_set || is_set(floor.operation)) leaf_name_data.push_back(floor.get_name_leafdata());
    if (landmark.is_set || is_set(landmark.operation)) leaf_name_data.push_back(landmark.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Location::CivicLocation::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Location::CivicLocation::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Location::CivicLocation::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "building")
    {
        building = value;
    }
    if(value_path == "floor")
    {
        floor = value;
    }
    if(value_path == "landmark")
    {
        landmark = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::CallHome::CallHome()
    :
    contact_email_addr{YType::str, "Cisco-IOS-XE-call-home:contact-email-addr"}
    	,
    http_proxy(std::make_shared<Native::CallHome::HttpProxy>())
	,source_interface(std::make_shared<Native::CallHome::SourceInterface>())
{
    http_proxy->parent = this;

    source_interface->parent = this;

    yang_name = "call-home"; yang_parent_name = "native";
}

Native::CallHome::~CallHome()
{
}

bool Native::CallHome::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return contact_email_addr.is_set
	|| (http_proxy !=  nullptr && http_proxy->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::CallHome::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(contact_email_addr.operation)
	|| (http_proxy !=  nullptr && http_proxy->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";

    return path_buffer.str();

}

const EntityPath Native::CallHome::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contact_email_addr.is_set || is_set(contact_email_addr.operation)) leaf_name_data.push_back(contact_email_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http-proxy")
    {
        if(http_proxy == nullptr)
        {
            http_proxy = std::make_shared<Native::CallHome::HttpProxy>();
        }
        return http_proxy;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::CallHome::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http_proxy != nullptr)
    {
        children["http-proxy"] = http_proxy;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::CallHome::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "contact-email-addr")
    {
        contact_email_addr = value;
    }
}

Native::CallHome::SourceInterface::SourceInterface()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::CallHome::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::CallHome::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::CallHome::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::CallHome::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "call-home";
}

Native::CallHome::SourceInterface::~SourceInterface()
{
}

bool Native::CallHome::SourceInterface::has_data() const
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

bool Native::CallHome::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::CallHome::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:source-interface";

    return path_buffer.str();

}

const EntityPath Native::CallHome::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::CallHome::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::CallHome::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::CallHome::SourceInterface::LispSubinterface>();
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::get_children() const
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

void Native::CallHome::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::CallHome::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::CallHome::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::CallHome::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::CallHome::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::CallHome::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::CallHome::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::CallHome::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::CallHome::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::CallHome::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::CallHome::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::CallHome::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::CallHome::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::CallHome::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::CallHome::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::CallHome::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::CallHome::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::CallHome::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::CallHome::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::CallHome::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::CallHome::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::CallHome::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::CallHome::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::CallHome::HttpProxy::HttpProxy()
{
    yang_name = "http-proxy"; yang_parent_name = "call-home";
}

Native::CallHome::HttpProxy::~HttpProxy()
{
}

bool Native::CallHome::HttpProxy::has_data() const
{
    for (std::size_t index=0; index<proxy_servers.size(); index++)
    {
        if(proxy_servers[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::HttpProxy::has_operation() const
{
    for (std::size_t index=0; index<proxy_servers.size(); index++)
    {
        if(proxy_servers[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::CallHome::HttpProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:http-proxy";

    return path_buffer.str();

}

const EntityPath Native::CallHome::HttpProxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::HttpProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-servers")
    {
        for(auto const & c : proxy_servers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::HttpProxy::ProxyServers>();
        c->parent = this;
        proxy_servers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::HttpProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : proxy_servers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CallHome::HttpProxy::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::HttpProxy::ProxyServers::ProxyServers()
    :
    proxy_server{YType::str, "proxy-server"},
    port{YType::uint16, "port"}
{
    yang_name = "proxy-servers"; yang_parent_name = "http-proxy";
}

Native::CallHome::HttpProxy::ProxyServers::~ProxyServers()
{
}

bool Native::CallHome::HttpProxy::ProxyServers::has_data() const
{
    return proxy_server.is_set
	|| port.is_set;
}

bool Native::CallHome::HttpProxy::ProxyServers::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_server.operation)
	|| is_set(port.operation);
}

std::string Native::CallHome::HttpProxy::ProxyServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-servers" <<"[proxy-server='" <<proxy_server <<"']";

    return path_buffer.str();

}

const EntityPath Native::CallHome::HttpProxy::ProxyServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:http-proxy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_server.is_set || is_set(proxy_server.operation)) leaf_name_data.push_back(proxy_server.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::HttpProxy::ProxyServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::HttpProxy::ProxyServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::HttpProxy::ProxyServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-server")
    {
        proxy_server = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Native::CallHome::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    active{YType::boolean, "active"}
    	,
    destination(std::make_shared<Native::CallHome::Profile::Destination>())
	,subscribe_to_alert_group(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup>())
{
    destination->parent = this;

    subscribe_to_alert_group->parent = this;

    yang_name = "profile"; yang_parent_name = "call-home";
}

Native::CallHome::Profile::~Profile()
{
}

bool Native::CallHome::Profile::has_data() const
{
    return profile_name.is_set
	|| active.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_data());
}

bool Native::CallHome::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(active.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_operation());
}

std::string Native::CallHome::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(subscribe_to_alert_group != nullptr)
    {
        children["subscribe-to-alert-group"] = subscribe_to_alert_group;
    }

    return children;
}

void Native::CallHome::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
}

Native::CallHome::Profile::Destination::Destination()
    :
    transport_method{YType::enumeration, "transport-method"}
    	,
    address(std::make_shared<Native::CallHome::Profile::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "profile";
}

Native::CallHome::Profile::Destination::~Destination()
{
}

bool Native::CallHome::Profile::Destination::has_data() const
{
    return transport_method.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::CallHome::Profile::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_method.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::CallHome::Profile::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_method.is_set || is_set(transport_method.operation)) leaf_name_data.push_back(transport_method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::CallHome::Profile::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-method")
    {
        transport_method = value;
    }
}

Native::CallHome::Profile::Destination::Address::Address()
    :
    email{YType::str, "email"},
    http{YType::str, "http"}
{
    yang_name = "address"; yang_parent_name = "destination";
}

Native::CallHome::Profile::Destination::Address::~Address()
{
}

bool Native::CallHome::Profile::Destination::Address::has_data() const
{
    return email.is_set
	|| http.is_set;
}

bool Native::CallHome::Profile::Destination::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(email.operation)
	|| is_set(http.operation);
}

std::string Native::CallHome::Profile::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::Destination::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (email.is_set || is_set(email.operation)) leaf_name_data.push_back(email.get_name_leafdata());
    if (http.is_set || is_set(http.operation)) leaf_name_data.push_back(http.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::Destination::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "email")
    {
        email = value;
    }
    if(value_path == "http")
    {
        http = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::SubscribeToAlertGroup()
    :
    configuration(nullptr) // presence node
	,diagnostic(nullptr) // presence node
	,environment(nullptr) // presence node
	,inventory(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "subscribe-to-alert-group"; yang_parent_name = "profile";
}

Native::CallHome::Profile::SubscribeToAlertGroup::~SubscribeToAlertGroup()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (diagnostic !=  nullptr && diagnostic->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (inventory !=  nullptr && inventory->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (diagnostic !=  nullptr && diagnostic->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscribe-to-alert-group";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscribeToAlertGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration>();
        }
        return configuration;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(diagnostic != nullptr)
    {
        children["diagnostic"] = diagnostic;
    }

    if(environment != nullptr)
    {
        children["environment"] = environment;
    }

    if(inventory != nullptr)
    {
        children["inventory"] = inventory;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Diagnostic()
    :
    severity{YType::enumeration, "severity"}
{
    yang_name = "diagnostic"; yang_parent_name = "subscribe-to-alert-group";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::~Diagnostic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_data() const
{
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnostic";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Diagnostic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Environment()
    :
    severity{YType::enumeration, "severity"}
{
    yang_name = "environment"; yang_parent_name = "subscribe-to-alert-group";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::~Environment()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_data() const
{
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Environment' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Environment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Inventory()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic>())
{
    periodic->parent = this;

    yang_name = "inventory"; yang_parent_name = "subscribe-to-alert-group";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::~Inventory()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_data() const
{
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_operation() const
{
    return is_set(operation)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inventory' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily>())
	,monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly>())
	,weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly>())
{
    daily->parent = this;

    monthly->parent = this;

    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "inventory";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_operation() const
{
    return is_set(operation)
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

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{
    yang_name = "daily"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_data() const
{
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::Monthly()
    :
    begin_time{YType::str, "begin-time"},
    date{YType::uint8, "date"}
{
    yang_name = "monthly"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_data() const
{
    return begin_time.is_set
	|| date.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation)
	|| is_set(date.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monthly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
    if(value_path == "date")
    {
        date = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::Weekly()
    :
    begin_time{YType::str, "begin-time"},
    day{YType::enumeration, "day"}
{
    yang_name = "weekly"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_data() const
{
    return begin_time.is_set
	|| day.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation)
	|| is_set(day.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
    if(value_path == "day")
    {
        day = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Syslog()
{
    yang_name = "syslog"; yang_parent_name = "subscribe-to-alert-group";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::~Syslog()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_data() const
{
    for (std::size_t index=0; index<severity.size(); index++)
    {
        if(severity[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_operation() const
{
    for (std::size_t index=0; index<severity.size(); index++)
    {
        if(severity[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syslog' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "severity")
    {
        for(auto const & c : severity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity>();
        c->parent = this;
        severity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : severity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Severity()
    :
    value_{YType::enumeration, "value"},
    pattern{YType::str, "pattern"}
{
    yang_name = "severity"; yang_parent_name = "syslog";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::~Severity()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_data() const
{
    return value_.is_set
	|| pattern.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(pattern.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "severity" <<"[value='" <<value_ <<"']";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Severity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Configuration()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic>())
{
    periodic->parent = this;

    yang_name = "configuration"; yang_parent_name = "subscribe-to-alert-group";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::~Configuration()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_data() const
{
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_operation() const
{
    return is_set(operation)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily>())
	,monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly>())
	,weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly>())
{
    daily->parent = this;

    monthly->parent = this;

    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "configuration";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_operation() const
{
    return is_set(operation)
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

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::set_value(const std::string & value_path, std::string value)
{
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{
    yang_name = "daily"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_data() const
{
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::Monthly()
    :
    begin_time{YType::str, "begin-time"},
    date{YType::uint8, "date"}
{
    yang_name = "monthly"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_data() const
{
    return begin_time.is_set
	|| date.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation)
	|| is_set(date.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monthly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
    if(value_path == "date")
    {
        date = value;
    }
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::Weekly()
    :
    begin_time{YType::str, "begin-time"},
    day{YType::enumeration, "day"}
{
    yang_name = "weekly"; yang_parent_name = "periodic";
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_data() const
{
    return begin_time.is_set
	|| day.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(begin_time.operation)
	|| is_set(day.operation);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.operation)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
    }
    if(value_path == "day")
    {
        day = value;
    }
}

Native::HwModule::HwModule()
    :
    pvdm{YType::str, "pvdm"},
    sm{YType::uint8, "sm"}
    	,
    uplink(std::make_shared<Native::HwModule::Uplink>())
{
    uplink->parent = this;

    yang_name = "hw-module"; yang_parent_name = "native";
}

Native::HwModule::~HwModule()
{
}

bool Native::HwModule::has_data() const
{
    return pvdm.is_set
	|| sm.is_set
	|| (uplink !=  nullptr && uplink->has_data());
}

bool Native::HwModule::has_operation() const
{
    return is_set(operation)
	|| is_set(pvdm.operation)
	|| is_set(sm.operation)
	|| (uplink !=  nullptr && uplink->has_operation());
}

std::string Native::HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module";

    return path_buffer.str();

}

const EntityPath Native::HwModule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvdm.is_set || is_set(pvdm.operation)) leaf_name_data.push_back(pvdm.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uplink")
    {
        if(uplink == nullptr)
        {
            uplink = std::make_shared<Native::HwModule::Uplink>();
        }
        return uplink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(uplink != nullptr)
    {
        children["uplink"] = uplink;
    }

    return children;
}

void Native::HwModule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pvdm")
    {
        pvdm = value;
    }
    if(value_path == "sm")
    {
        sm = value;
    }
}

Native::HwModule::Uplink::Uplink()
    :
    mode{YType::enumeration, "mode"},
    select{YType::str, "select"}
{
    yang_name = "uplink"; yang_parent_name = "hw-module";
}

Native::HwModule::Uplink::~Uplink()
{
}

bool Native::HwModule::Uplink::has_data() const
{
    return mode.is_set
	|| select.is_set;
}

bool Native::HwModule::Uplink::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(select.operation);
}

std::string Native::HwModule::Uplink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uplink";

    return path_buffer.str();

}

const EntityPath Native::HwModule::Uplink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/hw-module/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwModule::Uplink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwModule::Uplink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::HwModule::Uplink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

Native::Cisp::Cisp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "cisp"; yang_parent_name = "native";
}

Native::Cisp::~Cisp()
{
}

bool Native::Cisp::has_data() const
{
    return enable.is_set;
}

bool Native::Cisp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Cisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisp";

    return path_buffer.str();

}

const EntityPath Native::Cisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Module::Module()
    :
    provision(std::make_shared<Native::Module::Provision>())
{
    provision->parent = this;

    yang_name = "module"; yang_parent_name = "native";
}

Native::Module::~Module()
{
}

bool Native::Module::has_data() const
{
    return (provision !=  nullptr && provision->has_data());
}

bool Native::Module::has_operation() const
{
    return is_set(operation)
	|| (provision !=  nullptr && provision->has_operation());
}

std::string Native::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";

    return path_buffer.str();

}

const EntityPath Native::Module::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "provision")
    {
        if(provision == nullptr)
        {
            provision = std::make_shared<Native::Module::Provision>();
        }
        return provision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(provision != nullptr)
    {
        children["provision"] = provision;
    }

    return children;
}

void Native::Module::set_value(const std::string & value_path, std::string value)
{
}

Native::Module::Provision::Provision()
{
    yang_name = "provision"; yang_parent_name = "module";
}

Native::Module::Provision::~Provision()
{
}

bool Native::Module::Provision::has_data() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Module::Provision::has_operation() const
{
    for (std::size_t index=0; index<switch.size(); index++)
    {
        if(switch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Module::Provision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:provision";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/module/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Module::Provision::Switch>();
        c->parent = this;
        switch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Module::Provision::set_value(const std::string & value_path, std::string value)
{
}

Native::Module::Provision::Switch::Switch()
    :
    number{YType::uint8, "number"}
    	,
    chassis(std::make_shared<Native::Module::Provision::Switch::Chassis>())
{
    chassis->parent = this;

    yang_name = "switch"; yang_parent_name = "provision";
}

Native::Module::Provision::Switch::~Switch()
{
}

bool Native::Module::Provision::Switch::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return number.is_set
	|| (chassis !=  nullptr && chassis->has_data());
}

bool Native::Module::Provision::Switch::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number.operation)
	|| (chassis !=  nullptr && chassis->has_operation());
}

std::string Native::Module::Provision::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/module/Cisco-IOS-XE-switch:provision/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Module::Provision::Switch::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis != nullptr)
    {
        children["chassis"] = chassis;
    }

    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Module::Provision::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Module::Provision::Switch::Chassis::Chassis()
    :
    base_mac{YType::str, "base-mac"},
    chassis_type{YType::uint32, "chassis-type"}
{
    yang_name = "chassis"; yang_parent_name = "switch";
}

Native::Module::Provision::Switch::Chassis::~Chassis()
{
}

bool Native::Module::Provision::Switch::Chassis::has_data() const
{
    return base_mac.is_set
	|| chassis_type.is_set;
}

bool Native::Module::Provision::Switch::Chassis::has_operation() const
{
    return is_set(operation)
	|| is_set(base_mac.operation)
	|| is_set(chassis_type.operation);
}

std::string Native::Module::Provision::Switch::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch::Chassis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Chassis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_mac.is_set || is_set(base_mac.operation)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.operation)) leaf_name_data.push_back(chassis_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch::Chassis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "base-mac")
    {
        base_mac = value;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
    }
}

Native::Module::Provision::Switch::Slot::Slot()
    :
    number{YType::uint8, "number"},
    base_mac{YType::str, "base-mac"},
    slot_type{YType::uint32, "slot-type"}
{
    yang_name = "slot"; yang_parent_name = "switch";
}

Native::Module::Provision::Switch::Slot::~Slot()
{
}

bool Native::Module::Provision::Switch::Slot::has_data() const
{
    return number.is_set
	|| base_mac.is_set
	|| slot_type.is_set;
}

bool Native::Module::Provision::Switch::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(base_mac.operation)
	|| is_set(slot_type.operation);
}

std::string Native::Module::Provision::Switch::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (base_mac.is_set || is_set(base_mac.operation)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (slot_type.is_set || is_set(slot_type.operation)) leaf_name_data.push_back(slot_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "base-mac")
    {
        base_mac = value;
    }
    if(value_path == "slot-type")
    {
        slot_type = value;
    }
}

Native::Domain::Domain()
    :
    name{YType::str, "name"}
{
    yang_name = "domain"; yang_parent_name = "native";
}

Native::Domain::~Domain()
{
}

bool Native::Domain::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Domain::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Domain::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Domain::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    border(std::make_shared<Native::Domain::Vrf::Border>())
	,master(std::make_shared<Native::Domain::Vrf::Master>())
{
    border->parent = this;

    master->parent = this;

    yang_name = "vrf"; yang_parent_name = "domain";
}

Native::Domain::Vrf::~Vrf()
{
}

bool Native::Domain::Vrf::has_data() const
{
    return name.is_set
	|| (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Domain::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Domain::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Domain::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Domain::Vrf::Border::Border()
    :
    master{YType::str, "master"}
    	,
    password(std::make_shared<Native::Domain::Vrf::Border::Password>())
	,source_interface(std::make_shared<Native::Domain::Vrf::Border::SourceInterface>())
{
    password->parent = this;

    source_interface->parent = this;

    yang_name = "border"; yang_parent_name = "vrf";
}

Native::Domain::Vrf::Border::~Border()
{
}

bool Native::Domain::Vrf::Border::has_data() const
{
    return master.is_set
	|| (password !=  nullptr && password->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Domain::Vrf::Border::has_operation() const
{
    return is_set(operation)
	|| is_set(master.operation)
	|| (password !=  nullptr && password->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Domain::Vrf::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Border::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Border' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.operation)) leaf_name_data.push_back(master.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Domain::Vrf::Border::Password>();
        }
        return password;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Domain::Vrf::Border::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Domain::Vrf::Border::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "master")
    {
        master = value;
    }
}

Native::Domain::Vrf::Border::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{
    yang_name = "source-interface"; yang_parent_name = "border";
}

Native::Domain::Vrf::Border::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Border::SourceInterface::has_data() const
{
    return loopback.is_set;
}

bool Native::Domain::Vrf::Border::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(loopback.operation);
}

std::string Native::Domain::Vrf::Border::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Border::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Border::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Loopback")
    {
        loopback = value;
    }
}

Native::Domain::Vrf::Border::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "border";
}

Native::Domain::Vrf::Border::Password::~Password()
{
}

bool Native::Domain::Vrf::Border::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Domain::Vrf::Border::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Domain::Vrf::Border::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Border::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Border::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

Native::Domain::Vrf::Master::Master()
    :
    branch{YType::empty, "branch"},
    hub{YType::empty, "hub"},
    hub_ip{YType::str, "hub-ip"},
    transit{YType::empty, "transit"}
    	,
    advanced(std::make_shared<Native::Domain::Vrf::Master::Advanced>())
	,collector(std::make_shared<Native::Domain::Vrf::Master::Collector>())
	,enterprise_prefix(std::make_shared<Native::Domain::Vrf::Master::EnterprisePrefix>())
	,load_balance(nullptr) // presence node
	,password(std::make_shared<Native::Domain::Vrf::Master::Password>())
	,site_prefixes(std::make_shared<Native::Domain::Vrf::Master::SitePrefixes>())
	,source_interface(std::make_shared<Native::Domain::Vrf::Master::SourceInterface>())
{
    advanced->parent = this;

    collector->parent = this;

    enterprise_prefix->parent = this;

    password->parent = this;

    site_prefixes->parent = this;

    source_interface->parent = this;

    yang_name = "master"; yang_parent_name = "vrf";
}

Native::Domain::Vrf::Master::~Master()
{
}

bool Native::Domain::Vrf::Master::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return branch.is_set
	|| hub.is_set
	|| hub_ip.is_set
	|| transit.is_set
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
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(branch.operation)
	|| is_set(hub.operation)
	|| is_set(hub_ip.operation)
	|| is_set(transit.operation)
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

const EntityPath Native::Domain::Vrf::Master::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Master' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (branch.is_set || is_set(branch.operation)) leaf_name_data.push_back(branch.get_name_leafdata());
    if (hub.is_set || is_set(hub.operation)) leaf_name_data.push_back(hub.get_name_leafdata());
    if (hub_ip.is_set || is_set(hub_ip.operation)) leaf_name_data.push_back(hub_ip.get_name_leafdata());
    if (transit.is_set || is_set(transit.operation)) leaf_name_data.push_back(transit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::Domain::Vrf::Master::Advanced>();
        }
        return advanced;
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
        auto c = std::make_shared<Native::Domain::Vrf::Master::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    if(collector != nullptr)
    {
        children["collector"] = collector;
    }

    if(enterprise_prefix != nullptr)
    {
        children["enterprise-prefix"] = enterprise_prefix;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(site_prefixes != nullptr)
    {
        children["site-prefixes"] = site_prefixes;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Domain::Vrf::Master::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "branch")
    {
        branch = value;
    }
    if(value_path == "hub")
    {
        hub = value;
    }
    if(value_path == "hub-ip")
    {
        hub_ip = value;
    }
    if(value_path == "transit")
    {
        transit = value;
    }
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
	,syslog(std::make_shared<Native::Domain::Vrf::Master::Advanced::Syslog>())
	,tcp(std::make_shared<Native::Domain::Vrf::Master::Advanced::Tcp>())
	,traffic_class_ageout_timer(std::make_shared<Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer>())
{
    smart_probes->parent = this;

    syslog->parent = this;

    tcp->parent = this;

    traffic_class_ageout_timer->parent = this;

    yang_name = "advanced"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::Advanced::~Advanced()
{
}

bool Native::Domain::Vrf::Master::Advanced::has_data() const
{
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
    return is_set(operation)
	|| is_set(byte_loss_threshold.operation)
	|| is_set(channel_unreachable_timer.operation)
	|| is_set(load_sharing.operation)
	|| is_set(minimum_mask_length.operation)
	|| is_set(mitigation_mode.operation)
	|| is_set(packet_loss_threshold.operation)
	|| is_set(threshold_variance.operation)
	|| is_set(transit_site_affinity.operation)
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

const EntityPath Native::Domain::Vrf::Master::Advanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advanced' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_loss_threshold.is_set || is_set(byte_loss_threshold.operation)) leaf_name_data.push_back(byte_loss_threshold.get_name_leafdata());
    if (channel_unreachable_timer.is_set || is_set(channel_unreachable_timer.operation)) leaf_name_data.push_back(channel_unreachable_timer.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.operation)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (minimum_mask_length.is_set || is_set(minimum_mask_length.operation)) leaf_name_data.push_back(minimum_mask_length.get_name_leafdata());
    if (mitigation_mode.is_set || is_set(mitigation_mode.operation)) leaf_name_data.push_back(mitigation_mode.get_name_leafdata());
    if (packet_loss_threshold.is_set || is_set(packet_loss_threshold.operation)) leaf_name_data.push_back(packet_loss_threshold.get_name_leafdata());
    if (threshold_variance.is_set || is_set(threshold_variance.operation)) leaf_name_data.push_back(threshold_variance.get_name_leafdata());
    if (transit_site_affinity.is_set || is_set(transit_site_affinity.operation)) leaf_name_data.push_back(transit_site_affinity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(smart_probes != nullptr)
    {
        children["smart-probes"] = smart_probes;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(traffic_class_ageout_timer != nullptr)
    {
        children["traffic-class-ageout-timer"] = traffic_class_ageout_timer;
    }

    return children;
}

void Native::Domain::Vrf::Master::Advanced::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-loss-threshold")
    {
        byte_loss_threshold = value;
    }
    if(value_path == "channel-unreachable-timer")
    {
        channel_unreachable_timer = value;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
    }
    if(value_path == "minimum-mask-length")
    {
        minimum_mask_length = value;
    }
    if(value_path == "mitigation-mode")
    {
        mitigation_mode = value;
    }
    if(value_path == "packet-loss-threshold")
    {
        packet_loss_threshold = value;
    }
    if(value_path == "threshold-variance")
    {
        threshold_variance = value;
    }
    if(value_path == "transit-site-affinity")
    {
        transit_site_affinity = value;
    }
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::SmartProbes()
    :
    destination_port{YType::uint16, "destination-port"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "smart-probes"; yang_parent_name = "advanced";
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::~SmartProbes()
{
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_port.operation)
	|| is_set(source_port.operation);
}

std::string Native::Domain::Vrf::Master::Advanced::SmartProbes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart-probes";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Advanced::SmartProbes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SmartProbes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::SmartProbes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

Native::Domain::Vrf::Master::Advanced::Syslog::Syslog()
    :
    tca_time_min{YType::uint32, "tca-time-min"}
{
    yang_name = "syslog"; yang_parent_name = "advanced";
}

Native::Domain::Vrf::Master::Advanced::Syslog::~Syslog()
{
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_data() const
{
    return tca_time_min.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(tca_time_min.operation);
}

std::string Native::Domain::Vrf::Master::Advanced::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Advanced::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syslog' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tca_time_min.is_set || is_set(tca_time_min.operation)) leaf_name_data.push_back(tca_time_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tca-time-min")
    {
        tca_time_min = value;
    }
}

Native::Domain::Vrf::Master::Advanced::Tcp::Tcp()
    :
    mc_port{YType::uint16, "mc-port"}
{
    yang_name = "tcp"; yang_parent_name = "advanced";
}

Native::Domain::Vrf::Master::Advanced::Tcp::~Tcp()
{
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_data() const
{
    return mc_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(mc_port.operation);
}

std::string Native::Domain::Vrf::Master::Advanced::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Advanced::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_port.is_set || is_set(mc_port.operation)) leaf_name_data.push_back(mc_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mc-port")
    {
        mc_port = value;
    }
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::TrafficClassAgeoutTimer()
    :
    interval{YType::uint16, "interval"},
    interval_unit{YType::enumeration, "interval-unit"}
{
    yang_name = "traffic-class-ageout-timer"; yang_parent_name = "advanced";
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::~TrafficClassAgeoutTimer()
{
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_data() const
{
    return interval.is_set
	|| interval_unit.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(interval_unit.operation);
}

std::string Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-ageout-timer";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClassAgeoutTimer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (interval_unit.is_set || is_set(interval_unit.operation)) leaf_name_data.push_back(interval_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "interval-unit")
    {
        interval_unit = value;
    }
}

Native::Domain::Vrf::Master::Collector::Collector()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "collector"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::Collector::~Collector()
{
}

bool Native::Domain::Vrf::Master::Collector::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool Native::Domain::Vrf::Master::Collector::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string Native::Domain::Vrf::Master::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Collector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Collector' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Collector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Collector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Domain::Vrf::Master::EnterprisePrefix::EnterprisePrefix()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "enterprise-prefix"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Domain::Vrf::Master::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::EnterprisePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnterprisePrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::EnterprisePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Domain::Vrf::Master::LoadBalance::LoadBalance()
    :
    advanced{YType::empty, "advanced"}
{
    yang_name = "load-balance"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::LoadBalance::~LoadBalance()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::has_data() const
{
    return advanced.is_set;
}

bool Native::Domain::Vrf::Master::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(advanced.operation);
}

std::string Native::Domain::Vrf::Master::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advanced.is_set || is_set(advanced.operation)) leaf_name_data.push_back(advanced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::LoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advanced")
    {
        advanced = value;
    }
}

Native::Domain::Vrf::Master::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::Password::~Password()
{
}

bool Native::Domain::Vrf::Master::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Domain::Vrf::Master::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Domain::Vrf::Master::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

Native::Domain::Vrf::Master::SitePrefixes::SitePrefixes()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "site-prefixes"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::SitePrefixes::~SitePrefixes()
{
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Domain::Vrf::Master::SitePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-prefixes";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::SitePrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SitePrefixes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::SitePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::SitePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::SitePrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Domain::Vrf::Master::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{
    yang_name = "source-interface"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Master::SourceInterface::has_data() const
{
    return loopback.is_set;
}

bool Native::Domain::Vrf::Master::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(loopback.operation);
}

std::string Native::Domain::Vrf::Master::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Loopback")
    {
        loopback = value;
    }
}

Native::Domain::Vrf::Master::Class_::Class_()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"}
    	,
    match(std::make_shared<Native::Domain::Vrf::Master::Class_::Match>())
	,path_preference(std::make_shared<Native::Domain::Vrf::Master::Class_::PathPreference>())
{
    match->parent = this;

    path_preference->parent = this;

    yang_name = "class"; yang_parent_name = "master";
}

Native::Domain::Vrf::Master::Class_::~Class_()
{
}

bool Native::Domain::Vrf::Master::Class_::has_data() const
{
    return name.is_set
	|| sequence.is_set
	|| (match !=  nullptr && match->has_data())
	|| (path_preference !=  nullptr && path_preference->has_data());
}

bool Native::Domain::Vrf::Master::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(sequence.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (path_preference !=  nullptr && path_preference->has_operation());
}

std::string Native::Domain::Vrf::Master::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Class_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Domain::Vrf::Master::Class_::Match>();
        }
        return match;
    }

    if(child_yang_name == "path-preference")
    {
        if(path_preference == nullptr)
        {
            path_preference = std::make_shared<Native::Domain::Vrf::Master::Class_::PathPreference>();
        }
        return path_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(path_preference != nullptr)
    {
        children["path-preference"] = path_preference;
    }

    return children;
}

void Native::Domain::Vrf::Master::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "sequence")
    {
        sequence = value;
    }
}

Native::Domain::Vrf::Master::Class_::Match::Match()
{
    yang_name = "match"; yang_parent_name = "class";
}

Native::Domain::Vrf::Master::Class_::Match::~Match()
{
}

bool Native::Domain::Vrf::Master::Class_::Match::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::Class_::Match::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Domain::Vrf::Master::Class_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Class_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Domain::Vrf::Master::Class_::Match::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Domain::Vrf::Master::Class_::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Domain::Vrf::Master::Class_::Match::Dscp::Dscp()
    :
    value_{YType::str, "value"},
    policy{YType::enumeration, "policy"}
{
    yang_name = "dscp"; yang_parent_name = "match";
}

Native::Domain::Vrf::Master::Class_::Match::Dscp::~Dscp()
{
}

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_data() const
{
    return value_.is_set
	|| policy.is_set;
}

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(policy.operation);
}

std::string Native::Domain::Vrf::Master::Class_::Match::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[value='" <<value_ <<"']";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Class_::Match::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::Match::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::Match::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Class_::Match::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::Domain::Vrf::Master::Class_::PathPreference::PathPreference()
    :
    fallback{YType::str, "fallback"},
    primary{YType::str, "primary"}
{
    yang_name = "path-preference"; yang_parent_name = "class";
}

Native::Domain::Vrf::Master::Class_::PathPreference::~PathPreference()
{
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_data() const
{
    for (auto const & leaf : fallback.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : primary.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_operation() const
{
    for (auto const & leaf : fallback.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : primary.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fallback.operation)
	|| is_set(primary.operation);
}

std::string Native::Domain::Vrf::Master::Class_::PathPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-preference";

    return path_buffer.str();

}

const EntityPath Native::Domain::Vrf::Master::Class_::PathPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathPreference' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto fallback_name_datas = fallback.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fallback_name_datas.begin(), fallback_name_datas.end());
    auto primary_name_datas = primary.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), primary_name_datas.begin(), primary_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::PathPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::PathPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Class_::PathPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback")
    {
        fallback.append(value);
    }
    if(value_path == "primary")
    {
        primary.append(value);
    }
}

Native::Parser::Parser()
    :
    config(std::make_shared<Native::Parser::Config>())
{
    config->parent = this;

    yang_name = "parser"; yang_parent_name = "native";
}

Native::Parser::~Parser()
{
}

bool Native::Parser::has_data() const
{
    return (config !=  nullptr && config->has_data());
}

bool Native::Parser::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Parser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser";

    return path_buffer.str();

}

const EntityPath Native::Parser::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Parser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Parser::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Parser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Parser::set_value(const std::string & value_path, std::string value)
{
}

Native::Parser::Config::Config()
    :
    cache{YType::enumeration, "cache"},
    partition{YType::empty, "partition"}
{
    yang_name = "config"; yang_parent_name = "parser";
}

Native::Parser::Config::~Config()
{
}

bool Native::Parser::Config::has_data() const
{
    return cache.is_set
	|| partition.is_set;
}

bool Native::Parser::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(partition.operation);
}

std::string Native::Parser::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Parser::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/parser/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (partition.is_set || is_set(partition.operation)) leaf_name_data.push_back(partition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Parser::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Parser::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Parser::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "partition")
    {
        partition = value;
    }
}

Native::Service::Service()
    :
    call_home{YType::empty, "call-home"},
    compress_config{YType::empty, "compress-config"},
    config{YType::empty, "config"},
    dhcp{YType::empty, "dhcp"},
    disable_ip_fast_frag{YType::empty, "disable-ip-fast-frag"},
    exec_callback{YType::empty, "exec-callback"},
    exec_wait{YType::empty, "exec-wait"},
    finger{YType::empty, "finger"},
    hide_telnet_addresses{YType::empty, "hide-telnet-addresses"},
    internal{YType::empty, "internal"},
    linenumber{YType::empty, "linenumber"},
    log_hidden{YType::empty, "log-hidden"},
    nagle{YType::empty, "nagle"},
    old_slip_prompts{YType::empty, "old-slip-prompts"},
    password_encryption{YType::empty, "password-encryption"},
    password_recovery{YType::boolean, "password-recovery"},
    pt_vty_logging{YType::empty, "pt-vty-logging"},
    sequence_numbers{YType::empty, "sequence-numbers"},
    slave_log{YType::empty, "slave-log"},
    tcp_keepalives_in{YType::empty, "tcp-keepalives-in"},
    tcp_keepalives_out{YType::empty, "tcp-keepalives-out"},
    tcp_small_servers{YType::empty, "tcp-small-servers"},
    telnet_zeroidle{YType::empty, "telnet-zeroidle"},
    udp_small_servers{YType::empty, "udp-small-servers"},
    unsupported_transceiver{YType::empty, "unsupported-transceiver"}
    	,
    alignment(std::make_shared<Native::Service::Alignment>())
	,counters(std::make_shared<Native::Service::Counters>())
	,heartbeat(std::make_shared<Native::Service::Heartbeat>())
	,pad(nullptr) // presence node
	,pad_conf(std::make_shared<Native::Service::PadConf>())
	,prompt(std::make_shared<Native::Service::Prompt>())
	,timestamps(nullptr) // presence node
{
    alignment->parent = this;

    counters->parent = this;

    heartbeat->parent = this;

    pad_conf->parent = this;

    prompt->parent = this;

    yang_name = "service"; yang_parent_name = "native";
}

Native::Service::~Service()
{
}

bool Native::Service::has_data() const
{
    return call_home.is_set
	|| compress_config.is_set
	|| config.is_set
	|| dhcp.is_set
	|| disable_ip_fast_frag.is_set
	|| exec_callback.is_set
	|| exec_wait.is_set
	|| finger.is_set
	|| hide_telnet_addresses.is_set
	|| internal.is_set
	|| linenumber.is_set
	|| log_hidden.is_set
	|| nagle.is_set
	|| old_slip_prompts.is_set
	|| password_encryption.is_set
	|| password_recovery.is_set
	|| pt_vty_logging.is_set
	|| sequence_numbers.is_set
	|| slave_log.is_set
	|| tcp_keepalives_in.is_set
	|| tcp_keepalives_out.is_set
	|| tcp_small_servers.is_set
	|| telnet_zeroidle.is_set
	|| udp_small_servers.is_set
	|| unsupported_transceiver.is_set
	|| (alignment !=  nullptr && alignment->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (heartbeat !=  nullptr && heartbeat->has_data())
	|| (pad !=  nullptr && pad->has_data())
	|| (pad_conf !=  nullptr && pad_conf->has_data())
	|| (prompt !=  nullptr && prompt->has_data())
	|| (timestamps !=  nullptr && timestamps->has_data());
}

bool Native::Service::has_operation() const
{
    return is_set(operation)
	|| is_set(call_home.operation)
	|| is_set(compress_config.operation)
	|| is_set(config.operation)
	|| is_set(dhcp.operation)
	|| is_set(disable_ip_fast_frag.operation)
	|| is_set(exec_callback.operation)
	|| is_set(exec_wait.operation)
	|| is_set(finger.operation)
	|| is_set(hide_telnet_addresses.operation)
	|| is_set(internal.operation)
	|| is_set(linenumber.operation)
	|| is_set(log_hidden.operation)
	|| is_set(nagle.operation)
	|| is_set(old_slip_prompts.operation)
	|| is_set(password_encryption.operation)
	|| is_set(password_recovery.operation)
	|| is_set(pt_vty_logging.operation)
	|| is_set(sequence_numbers.operation)
	|| is_set(slave_log.operation)
	|| is_set(tcp_keepalives_in.operation)
	|| is_set(tcp_keepalives_out.operation)
	|| is_set(tcp_small_servers.operation)
	|| is_set(telnet_zeroidle.operation)
	|| is_set(udp_small_servers.operation)
	|| is_set(unsupported_transceiver.operation)
	|| (alignment !=  nullptr && alignment->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (heartbeat !=  nullptr && heartbeat->has_operation())
	|| (pad !=  nullptr && pad->has_operation())
	|| (pad_conf !=  nullptr && pad_conf->has_operation())
	|| (prompt !=  nullptr && prompt->has_operation())
	|| (timestamps !=  nullptr && timestamps->has_operation());
}

std::string Native::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";

    return path_buffer.str();

}

const EntityPath Native::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_home.is_set || is_set(call_home.operation)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (compress_config.is_set || is_set(compress_config.operation)) leaf_name_data.push_back(compress_config.get_name_leafdata());
    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (disable_ip_fast_frag.is_set || is_set(disable_ip_fast_frag.operation)) leaf_name_data.push_back(disable_ip_fast_frag.get_name_leafdata());
    if (exec_callback.is_set || is_set(exec_callback.operation)) leaf_name_data.push_back(exec_callback.get_name_leafdata());
    if (exec_wait.is_set || is_set(exec_wait.operation)) leaf_name_data.push_back(exec_wait.get_name_leafdata());
    if (finger.is_set || is_set(finger.operation)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (hide_telnet_addresses.is_set || is_set(hide_telnet_addresses.operation)) leaf_name_data.push_back(hide_telnet_addresses.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (linenumber.is_set || is_set(linenumber.operation)) leaf_name_data.push_back(linenumber.get_name_leafdata());
    if (log_hidden.is_set || is_set(log_hidden.operation)) leaf_name_data.push_back(log_hidden.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.operation)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (old_slip_prompts.is_set || is_set(old_slip_prompts.operation)) leaf_name_data.push_back(old_slip_prompts.get_name_leafdata());
    if (password_encryption.is_set || is_set(password_encryption.operation)) leaf_name_data.push_back(password_encryption.get_name_leafdata());
    if (password_recovery.is_set || is_set(password_recovery.operation)) leaf_name_data.push_back(password_recovery.get_name_leafdata());
    if (pt_vty_logging.is_set || is_set(pt_vty_logging.operation)) leaf_name_data.push_back(pt_vty_logging.get_name_leafdata());
    if (sequence_numbers.is_set || is_set(sequence_numbers.operation)) leaf_name_data.push_back(sequence_numbers.get_name_leafdata());
    if (slave_log.is_set || is_set(slave_log.operation)) leaf_name_data.push_back(slave_log.get_name_leafdata());
    if (tcp_keepalives_in.is_set || is_set(tcp_keepalives_in.operation)) leaf_name_data.push_back(tcp_keepalives_in.get_name_leafdata());
    if (tcp_keepalives_out.is_set || is_set(tcp_keepalives_out.operation)) leaf_name_data.push_back(tcp_keepalives_out.get_name_leafdata());
    if (tcp_small_servers.is_set || is_set(tcp_small_servers.operation)) leaf_name_data.push_back(tcp_small_servers.get_name_leafdata());
    if (telnet_zeroidle.is_set || is_set(telnet_zeroidle.operation)) leaf_name_data.push_back(telnet_zeroidle.get_name_leafdata());
    if (udp_small_servers.is_set || is_set(udp_small_servers.operation)) leaf_name_data.push_back(udp_small_servers.get_name_leafdata());
    if (unsupported_transceiver.is_set || is_set(unsupported_transceiver.operation)) leaf_name_data.push_back(unsupported_transceiver.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "pad")
    {
        if(pad == nullptr)
        {
            pad = std::make_shared<Native::Service::Pad>();
        }
        return pad;
    }

    if(child_yang_name == "pad-conf")
    {
        if(pad_conf == nullptr)
        {
            pad_conf = std::make_shared<Native::Service::PadConf>();
        }
        return pad_conf;
    }

    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Service::Prompt>();
        }
        return prompt;
    }

    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<Native::Service::Timestamps>();
        }
        return timestamps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alignment != nullptr)
    {
        children["alignment"] = alignment;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(heartbeat != nullptr)
    {
        children["heartbeat"] = heartbeat;
    }

    if(pad != nullptr)
    {
        children["pad"] = pad;
    }

    if(pad_conf != nullptr)
    {
        children["pad-conf"] = pad_conf;
    }

    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    if(timestamps != nullptr)
    {
        children["timestamps"] = timestamps;
    }

    return children;
}

void Native::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "call-home")
    {
        call_home = value;
    }
    if(value_path == "compress-config")
    {
        compress_config = value;
    }
    if(value_path == "config")
    {
        config = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "disable-ip-fast-frag")
    {
        disable_ip_fast_frag = value;
    }
    if(value_path == "exec-callback")
    {
        exec_callback = value;
    }
    if(value_path == "exec-wait")
    {
        exec_wait = value;
    }
    if(value_path == "finger")
    {
        finger = value;
    }
    if(value_path == "hide-telnet-addresses")
    {
        hide_telnet_addresses = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "linenumber")
    {
        linenumber = value;
    }
    if(value_path == "log-hidden")
    {
        log_hidden = value;
    }
    if(value_path == "nagle")
    {
        nagle = value;
    }
    if(value_path == "old-slip-prompts")
    {
        old_slip_prompts = value;
    }
    if(value_path == "password-encryption")
    {
        password_encryption = value;
    }
    if(value_path == "password-recovery")
    {
        password_recovery = value;
    }
    if(value_path == "pt-vty-logging")
    {
        pt_vty_logging = value;
    }
    if(value_path == "sequence-numbers")
    {
        sequence_numbers = value;
    }
    if(value_path == "slave-log")
    {
        slave_log = value;
    }
    if(value_path == "tcp-keepalives-in")
    {
        tcp_keepalives_in = value;
    }
    if(value_path == "tcp-keepalives-out")
    {
        tcp_keepalives_out = value;
    }
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers = value;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle = value;
    }
    if(value_path == "udp-small-servers")
    {
        udp_small_servers = value;
    }
    if(value_path == "unsupported-transceiver")
    {
        unsupported_transceiver = value;
    }
}

Native::Service::PadConf::PadConf()
    :
    pad{YType::boolean, "pad"}
{
    yang_name = "pad-conf"; yang_parent_name = "service";
}

Native::Service::PadConf::~PadConf()
{
}

bool Native::Service::PadConf::has_data() const
{
    return pad.is_set;
}

bool Native::Service::PadConf::has_operation() const
{
    return is_set(operation)
	|| is_set(pad.operation);
}

std::string Native::Service::PadConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad-conf";

    return path_buffer.str();

}

const EntityPath Native::Service::PadConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad.is_set || is_set(pad.operation)) leaf_name_data.push_back(pad.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::PadConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::PadConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::PadConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pad")
    {
        pad = value;
    }
}

Native::Service::Pad::Pad()
    :
    cmns{YType::empty, "cmns"},
    from_xot{YType::empty, "from-xot"},
    to_xot{YType::empty, "to-xot"}
{
    yang_name = "pad"; yang_parent_name = "service";
}

Native::Service::Pad::~Pad()
{
}

bool Native::Service::Pad::has_data() const
{
    return cmns.is_set
	|| from_xot.is_set
	|| to_xot.is_set;
}

bool Native::Service::Pad::has_operation() const
{
    return is_set(operation)
	|| is_set(cmns.operation)
	|| is_set(from_xot.operation)
	|| is_set(to_xot.operation);
}

std::string Native::Service::Pad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad";

    return path_buffer.str();

}

const EntityPath Native::Service::Pad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmns.is_set || is_set(cmns.operation)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (from_xot.is_set || is_set(from_xot.operation)) leaf_name_data.push_back(from_xot.get_name_leafdata());
    if (to_xot.is_set || is_set(to_xot.operation)) leaf_name_data.push_back(to_xot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Pad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Pad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Pad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmns")
    {
        cmns = value;
    }
    if(value_path == "from-xot")
    {
        from_xot = value;
    }
    if(value_path == "to-xot")
    {
        to_xot = value;
    }
}

Native::Service::Timestamps::Timestamps()
    :
    debug(std::make_shared<Native::Service::Timestamps::Debug>())
	,log(std::make_shared<Native::Service::Timestamps::Log>())
{
    debug->parent = this;

    log->parent = this;

    yang_name = "timestamps"; yang_parent_name = "service";
}

Native::Service::Timestamps::~Timestamps()
{
}

bool Native::Service::Timestamps::has_data() const
{
    return (debug !=  nullptr && debug->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Service::Timestamps::has_operation() const
{
    return is_set(operation)
	|| (debug !=  nullptr && debug->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Service::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Service::Timestamps::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Debug()
    :
    uptime{YType::empty, "uptime"}
    	,
    datetime(nullptr) // presence node
{
    yang_name = "debug"; yang_parent_name = "timestamps";
}

Native::Service::Timestamps::Debug::~Debug()
{
}

bool Native::Service::Timestamps::Debug::has_data() const
{
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Debug::has_operation() const
{
    return is_set(operation)
	|| is_set(uptime.operation)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(datetime != nullptr)
    {
        children["datetime"] = datetime;
    }

    return children;
}

void Native::Service::Timestamps::Debug::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Datetime()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "datetime"; yang_parent_name = "debug";
}

Native::Service::Timestamps::Debug::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Msec()
    :
    show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_data() const
{
    return (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::ShowTimezone()
    :
    year{YType::empty, "year"}
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::Year()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::ShowTimezone()
    :
    msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::Msec()
    :
    year{YType::empty, "year"}
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::Year()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Year()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Debug::Datetime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Localtime()
    :
    show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_data() const
{
    return (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::ShowTimezone()
    :
    year{YType::empty, "year"}
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::Year()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::Localtime()
    :
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::Year()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Year()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::Msec()
    :
    year{YType::empty, "year"}
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::Year()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::Localtime()
    :
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::Year()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Year()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::Localtime()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::Msec()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::Year()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "year"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Debug::Datetime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Msec()
    :
    localtime(nullptr) // presence node
	,show_timezone(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::Localtime()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Localtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::Msec()
    :
    localtime{YType::empty, "localtime"}
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::has_data() const
{
    return localtime.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(localtime.operation);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.operation)) leaf_name_data.push_back(localtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localtime")
    {
        localtime = value;
    }
}

Native::Service::Timestamps::Log::Log()
    :
    uptime{YType::empty, "uptime"}
    	,
    datetime(nullptr) // presence node
{
    yang_name = "log"; yang_parent_name = "timestamps";
}

Native::Service::Timestamps::Log::~Log()
{
}

bool Native::Service::Timestamps::Log::has_data() const
{
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(uptime.operation)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime")
    {
        if(datetime == nullptr)
        {
            datetime = std::make_shared<Native::Service::Timestamps::Log::Datetime>();
        }
        return datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(datetime != nullptr)
    {
        children["datetime"] = datetime;
    }

    return children;
}

void Native::Service::Timestamps::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Datetime()
    :
    localtime(nullptr) // presence node
	,msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "datetime"; yang_parent_name = "log";
}

Native::Service::Timestamps::Log::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Log::Datetime::has_data() const
{
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::has_operation() const
{
    return is_set(operation)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(localtime != nullptr)
    {
        children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Localtime::Localtime()
    :
    msec(nullptr) // presence node
	,show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "localtime"; yang_parent_name = "datetime";
}

Native::Service::Timestamps::Log::Datetime::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Msec()
    :
    show_timezone(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::has_data() const
{
    return (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::has_operation() const
{
    return is_set(operation)
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(show_timezone != nullptr)
    {
        children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::ShowTimezone()
    :
    year{YType::empty, "year"}
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Msec::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::Year()
    :
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::has_data() const
{
    return show_timezone.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(show_timezone.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/msec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.operation)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::Msec::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::ShowTimezone()
    :
    msec(nullptr) // presence node
	,year(nullptr) // presence node
{
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::has_data() const
{
    return (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    if(year != nullptr)
    {
        children["year"] = year;
    }

    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::set_value(const std::string & value_path, std::string value)
{
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::Msec()
    :
    year{YType::empty, "year"}
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::has_data() const
{
    return year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::has_operation() const
{
    return is_set(operation)
	|| is_set(year.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Msec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::Year()
    :
    msec{YType::empty, "msec"}
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::has_data() const
{
    return msec.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";

    return path_buffer.str();

}

const EntityPath Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/datetime/localtime/show-timezone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::Localtime::ShowTimezone::Year::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

const Enum::YLeaf LoggingLevelTypeEnum::alerts {0, "alerts"};
const Enum::YLeaf LoggingLevelTypeEnum::critical {1, "critical"};
const Enum::YLeaf LoggingLevelTypeEnum::debugging {2, "debugging"};
const Enum::YLeaf LoggingLevelTypeEnum::emergencies {3, "emergencies"};
const Enum::YLeaf LoggingLevelTypeEnum::errors {4, "errors"};
const Enum::YLeaf LoggingLevelTypeEnum::informational {5, "informational"};
const Enum::YLeaf LoggingLevelTypeEnum::notifications {6, "notifications"};
const Enum::YLeaf LoggingLevelTypeEnum::warnings {7, "warnings"};
const Enum::YLeaf LoggingLevelTypeEnum::bogus {8, "bogus"};

const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethodEnum::http {0, "http"};
const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethodEnum::email {1, "email"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::SeverityEnum::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::SeverityEnum::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::ValueEnum::warning {9, "warning"};

const Enum::YLeaf Native::HwModule::Uplink::ModeEnum::shared_backplane {0, "shared-backplane"};

const Enum::YLeaf Native::Domain::Vrf::Border::MasterEnum::local {0, "local"};

const Enum::YLeaf Native::Domain::Vrf::Border::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Border::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::MitigationModeEnum::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnitEnum::hours {0, "hours"};
const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnitEnum::minutes {1, "minutes"};

const Enum::YLeaf Native::Domain::Vrf::Master::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Master::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::best_effort {0, "best-effort"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::custom {2, "custom"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::low_latency_data {3, "low-latency-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::real_time_video {4, "real-time-video"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::scavenger {5, "scavenger"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::PolicyEnum::voice {6, "voice"};

const Enum::YLeaf Native::Parser::Config::CacheEnum::interface {0, "interface"};


}
}

