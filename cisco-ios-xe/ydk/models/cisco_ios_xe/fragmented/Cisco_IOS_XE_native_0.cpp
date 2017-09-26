
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_3.hpp"
#include "Cisco_IOS_XE_native_95.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_176.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_175.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_4.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_93.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_86.hpp"
#include "Cisco_IOS_XE_native_94.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_5.hpp"
#include "Cisco_IOS_XE_native_179.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Native()
    :
    aqm_register_fnf{YType::empty, "aqm-register-fnf"},
    boot_end_marker{YType::empty, "boot-end-marker"},
    boot_start_marker{YType::empty, "boot-start-marker"},
    captive_portal_bypass{YType::empty, "captive-portal-bypass"},
    config_register{YType::str, "config-register"},
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
	,bba_group(std::make_shared<Native::BbaGroup>())
	,bfd(std::make_shared<Native::Bfd>())
	,bfd_template(std::make_shared<Native::BfdTemplate>())
	,boot(std::make_shared<Native::Boot>())
	,bridge_domain(std::make_shared<Native::BridgeDomain>())
	,call_home(nullptr) // presence node
	,card(std::make_shared<Native::Card>())
	,cdp(std::make_shared<Native::Cdp>())
	,cef(std::make_shared<Native::Cef>())
	,cisco_ios_xe_native_template(std::make_shared<Native::CiscoIOSXENativeTemplate>())
	,cisco_ios_xe_switch_template(std::make_shared<Native::CiscoIOSXESwitchTemplate>())
	,cisp(std::make_shared<Native::Cisp>())
	,clock_(std::make_shared<Native::Clock_>())
	,coap(std::make_shared<Native::Coap>())
	,control_plane(nullptr) // presence node
	,control_plane_host(std::make_shared<Native::ControlPlaneHost>())
	,controller(std::make_shared<Native::Controller>())
	,crypto(std::make_shared<Native::Crypto>())
	,cts(std::make_shared<Native::Cts>())
	,default_(std::make_shared<Native::Default_>())
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
	,iox(nullptr) // presence node
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
	,named_ordering_route_map(std::make_shared<Native::NamedOrderingRouteMap>())
	,nat66(std::make_shared<Native::Nat66>())
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
	,software(std::make_shared<Native::Software>())
	,spanning_tree(std::make_shared<Native::SpanningTree>())
	,stack_mac(std::make_shared<Native::StackMac>())
	,subscriber(std::make_shared<Native::Subscriber>())
	,system(std::make_shared<Native::System>())
	,tacacs(std::make_shared<Native::Tacacs>())
	,tacacs_server(std::make_shared<Native::TacacsServer>())
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
    bba_group->parent = this;
    bfd->parent = this;
    bfd_template->parent = this;
    boot->parent = this;
    bridge_domain->parent = this;
    card->parent = this;
    cdp->parent = this;
    cef->parent = this;
    cisco_ios_xe_native_template->parent = this;
    cisco_ios_xe_switch_template->parent = this;
    cisp->parent = this;
    clock_->parent = this;
    coap->parent = this;
    control_plane_host->parent = this;
    controller->parent = this;
    crypto->parent = this;
    cts->parent = this;
    default_->parent = this;
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
    named_ordering_route_map->parent = this;
    nat66->parent = this;
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
    software->parent = this;
    spanning_tree->parent = this;
    stack_mac->parent = this;
    subscriber->parent = this;
    system->parent = this;
    tacacs->parent = this;
    tacacs_server->parent = this;
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

    yang_name = "native"; yang_parent_name = "Cisco-IOS-XE-native"; is_top_level_class = true; has_list_ancestor = false;
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
    for (std::size_t index=0; index<maintenance_template.size(); index++)
    {
        if(maintenance_template[index]->has_data())
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
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
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
	|| config_register.is_set
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
	|| (bba_group !=  nullptr && bba_group->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bfd_template !=  nullptr && bfd_template->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (card !=  nullptr && card->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (cisco_ios_xe_native_template !=  nullptr && cisco_ios_xe_native_template->has_data())
	|| (cisco_ios_xe_switch_template !=  nullptr && cisco_ios_xe_switch_template->has_data())
	|| (cisp !=  nullptr && cisp->has_data())
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (coap !=  nullptr && coap->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (control_plane_host !=  nullptr && control_plane_host->has_data())
	|| (controller !=  nullptr && controller->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (default_ !=  nullptr && default_->has_data())
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
	|| (iox !=  nullptr && iox->has_data())
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
	|| (named_ordering_route_map !=  nullptr && named_ordering_route_map->has_data())
	|| (nat66 !=  nullptr && nat66->has_data())
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
	|| (software !=  nullptr && software->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (stack_mac !=  nullptr && stack_mac->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (tacacs_server !=  nullptr && tacacs_server->has_data())
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
    for (std::size_t index=0; index<maintenance_template.size(); index++)
    {
        if(maintenance_template[index]->has_operation())
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
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
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
    return is_set(yfilter)
	|| ydk::is_set(aqm_register_fnf.yfilter)
	|| ydk::is_set(boot_end_marker.yfilter)
	|| ydk::is_set(boot_start_marker.yfilter)
	|| ydk::is_set(captive_portal_bypass.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(disable_eadi.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (alias !=  nullptr && alias->has_operation())
	|| (ap !=  nullptr && ap->has_operation())
	|| (archive !=  nullptr && archive->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bba_group !=  nullptr && bba_group->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bfd_template !=  nullptr && bfd_template->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (card !=  nullptr && card->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (cisco_ios_xe_native_template !=  nullptr && cisco_ios_xe_native_template->has_operation())
	|| (cisco_ios_xe_switch_template !=  nullptr && cisco_ios_xe_switch_template->has_operation())
	|| (cisp !=  nullptr && cisp->has_operation())
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (coap !=  nullptr && coap->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (control_plane_host !=  nullptr && control_plane_host->has_operation())
	|| (controller !=  nullptr && controller->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
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
	|| (iox !=  nullptr && iox->has_operation())
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
	|| (named_ordering_route_map !=  nullptr && named_ordering_route_map->has_operation())
	|| (nat66 !=  nullptr && nat66->has_operation())
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
	|| (software !=  nullptr && software->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (stack_mac !=  nullptr && stack_mac->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (tacacs_server !=  nullptr && tacacs_server->has_operation())
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

std::vector<std::pair<std::string, LeafData> > Native::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aqm_register_fnf.is_set || is_set(aqm_register_fnf.yfilter)) leaf_name_data.push_back(aqm_register_fnf.get_name_leafdata());
    if (boot_end_marker.is_set || is_set(boot_end_marker.yfilter)) leaf_name_data.push_back(boot_end_marker.get_name_leafdata());
    if (boot_start_marker.is_set || is_set(boot_start_marker.yfilter)) leaf_name_data.push_back(boot_start_marker.get_name_leafdata());
    if (captive_portal_bypass.is_set || is_set(captive_portal_bypass.yfilter)) leaf_name_data.push_back(captive_portal_bypass.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (disable_eadi.is_set || is_set(disable_eadi.yfilter)) leaf_name_data.push_back(disable_eadi.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "Cisco-IOS-XE-native_template")
    {
        if(cisco_ios_xe_native_template == nullptr)
        {
            cisco_ios_xe_native_template = std::make_shared<Native::CiscoIOSXENativeTemplate>();
        }
        return cisco_ios_xe_native_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch_template")
    {
        if(cisco_ios_xe_switch_template == nullptr)
        {
            cisco_ios_xe_switch_template = std::make_shared<Native::CiscoIOSXESwitchTemplate>();
        }
        return cisco_ios_xe_switch_template;
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
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Clock_>();
        }
        return clock_;
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

    if(child_yang_name == "control-plane-host")
    {
        if(control_plane_host == nullptr)
        {
            control_plane_host = std::make_shared<Native::ControlPlaneHost>();
        }
        return control_plane_host;
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

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Default_>();
        }
        return default_;
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

    if(child_yang_name == "iox")
    {
        if(iox == nullptr)
        {
            iox = std::make_shared<Native::Iox>();
        }
        return iox;
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

    if(child_yang_name == "maintenance-template")
    {
        for(auto const & c : maintenance_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MaintenanceTemplate>();
        c->parent = this;
        maintenance_template.push_back(c);
        return c;
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

    if(child_yang_name == "named-ordering-route-map")
    {
        if(named_ordering_route_map == nullptr)
        {
            named_ordering_route_map = std::make_shared<Native::NamedOrderingRouteMap>();
        }
        return named_ordering_route_map;
    }

    if(child_yang_name == "nat66")
    {
        if(nat66 == nullptr)
        {
            nat66 = std::make_shared<Native::Nat66>();
        }
        return nat66;
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

    if(child_yang_name == "software")
    {
        if(software == nullptr)
        {
            software = std::make_shared<Native::Software>();
        }
        return software;
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
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Switch_>();
        c->parent = this;
        switch_.push_back(c);
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

    if(cisco_ios_xe_native_template != nullptr)
    {
        children["Cisco-IOS-XE-native_template"] = cisco_ios_xe_native_template;
    }

    if(cisco_ios_xe_switch_template != nullptr)
    {
        children["Cisco-IOS-XE-switch_template"] = cisco_ios_xe_switch_template;
    }

    if(cisp != nullptr)
    {
        children["cisp"] = cisp;
    }

    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    if(coap != nullptr)
    {
        children["coap"] = coap;
    }

    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    if(control_plane_host != nullptr)
    {
        children["control-plane-host"] = control_plane_host;
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

    if(default_ != nullptr)
    {
        children["default"] = default_;
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

    if(iox != nullptr)
    {
        children["iox"] = iox;
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

    for (auto const & c : maintenance_template)
    {
        children[c->get_segment_path()] = c;
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

    if(named_ordering_route_map != nullptr)
    {
        children["named-ordering-route-map"] = named_ordering_route_map;
    }

    if(nat66 != nullptr)
    {
        children["nat66"] = nat66;
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

    if(software != nullptr)
    {
        children["software"] = software;
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

    for (auto const & c : switch_)
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

void Native::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aqm-register-fnf")
    {
        aqm_register_fnf = value;
        aqm_register_fnf.value_namespace = name_space;
        aqm_register_fnf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-end-marker")
    {
        boot_end_marker = value;
        boot_end_marker.value_namespace = name_space;
        boot_end_marker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-start-marker")
    {
        boot_start_marker = value;
        boot_start_marker.value_namespace = name_space;
        boot_start_marker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captive-portal-bypass")
    {
        captive_portal_bypass = value;
        captive_portal_bypass.value_namespace = name_space;
        captive_portal_bypass.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aqm-register-fnf")
    {
        aqm_register_fnf.yfilter = yfilter;
    }
    if(value_path == "boot-end-marker")
    {
        boot_end_marker.yfilter = yfilter;
    }
    if(value_path == "boot-start-marker")
    {
        boot_start_marker.yfilter = yfilter;
    }
    if(value_path == "captive-portal-bypass")
    {
        captive_portal_bypass.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "disable-eadi")
    {
        disable_eadi.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Native::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Native::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "access-list" || name == "access-session" || name == "alarm-contact" || name == "alias" || name == "ap" || name == "archive" || name == "arp" || name == "authentication" || name == "bba-group" || name == "bfd" || name == "bfd-template" || name == "boot" || name == "bridge-domain" || name == "call-home" || name == "card" || name == "cdp" || name == "cef" || name == "Cisco-IOS-XE-native_template" || name == "Cisco-IOS-XE-switch_template" || name == "cisp" || name == "clock" || name == "coap" || name == "control-plane" || name == "control-plane-host" || name == "controller" || name == "crypto" || name == "cts" || name == "default" || name == "device" || name == "device-sensor" || name == "device-tracking" || name == "diagnostic" || name == "domain" || name == "dot1x" || name == "eap" || name == "enable" || name == "energywise" || name == "epm" || name == "errdisable" || name == "esmc" || name == "ethernet" || name == "event" || name == "exception" || name == "fabric" || name == "facility-alarm" || name == "fallback" || name == "fhrp" || name == "flow" || name == "hw-module" || name == "hw-switch" || name == "identity" || name == "interface" || name == "iox" || name == "ip" || name == "ipv6" || name == "key" || name == "l2" || name == "l2protocol-tunnel" || name == "l2vpn" || name == "l2vpn-config" || name == "l3vpn" || name == "license" || name == "line" || name == "lldp" || name == "location" || name == "logging" || name == "login" || name == "mac" || name == "mac-address-table" || name == "macro" || name == "maintenance-template" || name == "memory" || name == "memory-size" || name == "metadata" || name == "mka" || name == "mls" || name == "module" || name == "monitor" || name == "mpls" || name == "multilink" || name == "named-ordering-route-map" || name == "nat66" || name == "network-clock" || name == "network-policy" || name == "ntp" || name == "object-group" || name == "otv" || name == "parameter-map" || name == "parser" || name == "password" || name == "performance" || name == "pfr" || name == "pfr-map" || name == "platform" || name == "pm-agent" || name == "policy" || name == "port-channel" || name == "power" || name == "ppp" || name == "privilege" || name == "process" || name == "profile" || name == "pseudowire-class" || name == "qos" || name == "radius" || name == "radius-server" || name == "redundancy" || name == "remote-management" || name == "rep" || name == "rmon" || name == "route-map" || name == "route-tag" || name == "router" || name == "sampler" || name == "scheduler" || name == "sdm" || name == "segment-routing" || name == "service" || name == "service-chain" || name == "service-insertion" || name == "service-list" || name == "service-routing" || name == "service-template" || name == "setup" || name == "snmp" || name == "snmp-server" || name == "software" || name == "spanning-tree" || name == "stack-mac" || name == "subscriber" || name == "switch" || name == "switch-virtual" || name == "system" || name == "table-map" || name == "tacacs" || name == "tacacs-server" || name == "tftp-server" || name == "time-range" || name == "tod-clock" || name == "track" || name == "transceiver" || name == "udld" || name == "upgrade" || name == "username" || name == "utd" || name == "utd-engine" || name == "virtual-service" || name == "vlan" || name == "voice" || name == "voice-card" || name == "vpdn" || name == "vrf" || name == "vstack" || name == "vtp" || name == "wireless" || name == "wsma" || name == "xconnect" || name == "zone" || name == "zone-pair" || name == "aqm-register-fnf" || name == "boot-end-marker" || name == "boot-start-marker" || name == "captive-portal-bypass" || name == "config-register" || name == "disable-eadi" || name == "hostname" || name == "version")
        return true;
    return false;
}

Native::Aaa::Aaa()
    :
    new_model{YType::empty, "Cisco-IOS-XE-aaa:new-model"},
    session_id{YType::enumeration, "Cisco-IOS-XE-aaa:session-id"}
    	,
    accounting(std::make_shared<Native::Aaa::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Authentication>())
	,authorization(std::make_shared<Native::Aaa::Authorization>())
	,group(std::make_shared<Native::Aaa::Group>())
	,login(std::make_shared<Native::Aaa::Login>())
	,server(std::make_shared<Native::Aaa::Server>())
{
    accounting->parent = this;
    authentication->parent = this;
    authorization->parent = this;
    group->parent = this;
    login->parent = this;
    server->parent = this;

    yang_name = "aaa"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::~Aaa()
{
}

bool Native::Aaa::has_data() const
{
    return new_model.is_set
	|| session_id.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(new_model.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_model.is_set || is_set(new_model.yfilter)) leaf_name_data.push_back(new_model.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Group>();
        }
        return group;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Aaa::Login>();
        }
        return login;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-model")
    {
        new_model = value;
        new_model.value_namespace = name_space;
        new_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-model")
    {
        new_model.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool Native::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "authorization" || name == "group" || name == "login" || name == "server" || name == "new-model" || name == "session-id")
        return true;
    return false;
}

Native::Aaa::Accounting::Accounting()
    :
    auth_proxy(std::make_shared<Native::Aaa::Accounting::AuthProxy>())
	,delay_start(std::make_shared<Native::Aaa::Accounting::DelayStart>())
	,exec_submode(std::make_shared<Native::Aaa::Accounting::ExecSubmode>())
	,send(std::make_shared<Native::Aaa::Accounting::Send>())
	,system(std::make_shared<Native::Aaa::Accounting::System>())
	,update(std::make_shared<Native::Aaa::Accounting::Update>())
{
    auth_proxy->parent = this;
    delay_start->parent = this;
    exec_submode->parent = this;
    send->parent = this;
    system->parent = this;
    update->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::~Accounting()
{
}

bool Native::Aaa::Accounting::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (delay_start !=  nullptr && delay_start->has_data())
	|| (exec_submode !=  nullptr && exec_submode->has_data())
	|| (send !=  nullptr && send->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Aaa::Accounting::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (delay_start !=  nullptr && delay_start->has_operation())
	|| (exec_submode !=  nullptr && exec_submode->has_operation())
	|| (send !=  nullptr && send->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Aaa::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Accounting::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "connection")
    {
        for(auto const & c : connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Connection>();
        c->parent = this;
        connection.push_back(c);
        return c;
    }

    if(child_yang_name == "delay-start")
    {
        if(delay_start == nullptr)
        {
            delay_start = std::make_shared<Native::Aaa::Accounting::DelayStart>();
        }
        return delay_start;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "exec-submode")
    {
        if(exec_submode == nullptr)
        {
            exec_submode = std::make_shared<Native::Aaa::Accounting::ExecSubmode>();
        }
        return exec_submode;
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
        auto c = std::make_shared<Native::Aaa::Accounting::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Accounting::Send>();
        }
        return send;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Aaa::Accounting::System>();
        }
        return system;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Aaa::Accounting::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connection)
    {
        children[c->get_segment_path()] = c;
    }

    if(delay_start != nullptr)
    {
        children["delay-start"] = delay_start;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    if(exec_submode != nullptr)
    {
        children["exec-submode"] = exec_submode;
    }

    for (auto const & c : identity)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-proxy" || name == "commands" || name == "connection" || name == "delay-start" || name == "exec" || name == "exec-submode" || name == "identity" || name == "network" || name == "send" || name == "system" || name == "update")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Accounting::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default_::Default_()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_data() const
{
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::AuthProxy::Default_::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    action_type{YType::enumeration, "action-type"},
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "commands"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Commands::~Commands()
{
}

bool Native::Aaa::Accounting::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| action_type.is_set
	|| broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "action-type" || name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::Connection()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Connection::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "connection"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Connection::~Connection()
{
}

bool Native::Aaa::Accounting::Connection::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Connection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Connection::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Connection::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Connection::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Connection::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::DelayStart::DelayStart()
    :
    all{YType::empty, "all"},
    extended_delay{YType::uint8, "extended-delay"}
{

    yang_name = "delay-start"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::DelayStart::~DelayStart()
{
}

bool Native::Aaa::Accounting::DelayStart::has_data() const
{
    return all.is_set
	|| extended_delay.is_set;
}

bool Native::Aaa::Accounting::DelayStart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(extended_delay.yfilter);
}

std::string Native::Aaa::Accounting::DelayStart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::DelayStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::DelayStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (extended_delay.is_set || is_set(extended_delay.yfilter)) leaf_name_data.push_back(extended_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::DelayStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::DelayStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::DelayStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-delay")
    {
        extended_delay = value;
        extended_delay.value_namespace = name_space;
        extended_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::DelayStart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "extended-delay")
    {
        extended_delay.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::DelayStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "extended-delay")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::Exec()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Exec::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "exec"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::Exec::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Exec::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Exec::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Exec::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Exec::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::ExecSubmode()
{

    yang_name = "exec-submode"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::ExecSubmode::~ExecSubmode()
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Accounting::ExecSubmode::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::ExecSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    action_type(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>())
{
    action_type->parent = this;

    yang_name = "exec"; yang_parent_name = "exec-submode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_data() const
{
    return name.is_set
	|| (action_type !=  nullptr && action_type->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/exec-submode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action_type != nullptr)
    {
        children["action-type"] = action_type;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::ActionType()
    :
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "action-type"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::~ActionType()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_data() const
{
    return none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::Identity()
    :
    name{YType::str, "name"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Identity::StartStop>())
{
    start_stop->parent = this;

    yang_name = "identity"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Identity::~Identity()
{
}

bool Native::Aaa::Accounting::Identity::has_data() const
{
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Identity::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Identity::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Identity::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Identity::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Identity::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Identity::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::Network()
    :
    id{YType::str, "id"},
    broadcast{YType::empty, "broadcast"},
    mode{YType::enumeration, "mode"},
    none{YType::empty, "none"}
    	,
    a1(std::make_shared<Native::Aaa::Accounting::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Accounting::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Accounting::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Accounting::Network::A4>())
	,start_stop(std::make_shared<Native::Aaa::Accounting::Network::StartStop>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;
    start_stop->parent = this;

    yang_name = "network"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Network::~Network()
{
}

bool Native::Aaa::Accounting::Network::has_data() const
{
    return id.is_set
	|| broadcast.is_set
	|| mode.is_set
	|| none.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data())
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation())
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Accounting::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Accounting::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Accounting::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Accounting::Network::A4>();
        }
        return a4;
    }

    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Network::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "start-stop" || name == "id" || name == "broadcast" || name == "mode" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A1::A1()
    :
    group{YType::str, "group"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A1::~A1()
{
}

bool Native::Aaa::Accounting::Network::A1::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A2::A2()
    :
    group{YType::str, "group"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A2::~A2()
{
}

bool Native::Aaa::Accounting::Network::A2::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A3::A3()
    :
    group{YType::str, "group"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A3::~A3()
{
}

bool Native::Aaa::Accounting::Network::A3::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A4::A4()
    :
    group{YType::str, "group"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A4::~A4()
{
}

bool Native::Aaa::Accounting::Network::A4::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Network::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Send()
    :
    counters(std::make_shared<Native::Aaa::Accounting::Send::Counters>())
	,stop_record(std::make_shared<Native::Aaa::Accounting::Send::StopRecord>())
{
    counters->parent = this;
    stop_record->parent = this;

    yang_name = "send"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::~Send()
{
}

bool Native::Aaa::Accounting::Send::has_data() const
{
    return (counters !=  nullptr && counters->has_data())
	|| (stop_record !=  nullptr && stop_record->has_data());
}

bool Native::Aaa::Accounting::Send::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (stop_record !=  nullptr && stop_record->has_operation());
}

std::string Native::Aaa::Accounting::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Aaa::Accounting::Send::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "stop-record")
    {
        if(stop_record == nullptr)
        {
            stop_record = std::make_shared<Native::Aaa::Accounting::Send::StopRecord>();
        }
        return stop_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(stop_record != nullptr)
    {
        children["stop-record"] = stop_record;
    }

    return children;
}

void Native::Aaa::Accounting::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "stop-record")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Counters::Counters()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "counters"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::Counters::~Counters()
{
}

bool Native::Aaa::Accounting::Send::Counters::has_data() const
{
    return ipv6.is_set;
}

bool Native::Aaa::Accounting::Send::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Aaa::Accounting::Send::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::StopRecord()
    :
    always{YType::empty, "always"}
    	,
    authentication(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>())
{
    authentication->parent = this;

    yang_name = "stop-record"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::~StopRecord()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::has_data() const
{
    return always.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "always")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Authentication()
    :
    failure(nullptr) // presence node
	,success(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>())
{
    success->parent = this;

    yang_name = "authentication"; yang_parent_name = "stop-record"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::~Authentication()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(success != nullptr)
    {
        children["success"] = success;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "success")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::Failure()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "failure"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::~Failure()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::Success()
    :
    remote_server(nullptr) // presence node
{

    yang_name = "success"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::~Success()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_data() const
{
    return (remote_server !=  nullptr && remote_server->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_operation() const
{
    return is_set(yfilter)
	|| (remote_server !=  nullptr && remote_server->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-server")
    {
        if(remote_server == nullptr)
        {
            remote_server = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer>();
        }
        return remote_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_server != nullptr)
    {
        children["remote-server"] = remote_server;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-server")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::RemoteServer()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "remote-server"; yang_parent_name = "success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::~RemoteServer()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::System::System()
    :
    guarantee_first{YType::boolean, "guarantee-first"}
    	,
    default_(nullptr) // presence node
{

    yang_name = "system"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::~System()
{
}

bool Native::Aaa::Accounting::System::has_data() const
{
    return guarantee_first.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guarantee_first.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guarantee_first.is_set || is_set(guarantee_first.yfilter)) leaf_name_data.push_back(guarantee_first.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::System::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first = value;
        guarantee_first.value_namespace = name_space;
        guarantee_first.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "guarantee-first")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default_::Default_()
    :
    none{YType::empty, "none"},
    vrf{YType::str, "vrf"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::System::Default_::has_data() const
{
    return none.is_set
	|| vrf.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::System::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::System::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::System::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "none" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default_::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::System::Default_::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default_::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::System::Default_::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default_::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Update::Update()
    :
    periodic{YType::uint32, "periodic"}
{

    yang_name = "update"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Update::~Update()
{
}

bool Native::Aaa::Accounting::Update::has_data() const
{
    return periodic.is_set;
}

bool Native::Aaa::Accounting::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Aaa::Accounting::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::Aaa::Authentication::Authentication()
    :
    attempts(std::make_shared<Native::Aaa::Authentication::Attempts>())
	,dot1x(std::make_shared<Native::Aaa::Authentication::Dot1X>())
	,enable(std::make_shared<Native::Aaa::Authentication::Enable>())
	,eou(std::make_shared<Native::Aaa::Authentication::Eou>())
	,onep(std::make_shared<Native::Aaa::Authentication::Onep>())
{
    attempts->parent = this;
    dot1x->parent = this;
    enable->parent = this;
    eou->parent = this;
    onep->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::~Authentication()
{
}

bool Native::Aaa::Authentication::has_data() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return (attempts !=  nullptr && attempts->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (eou !=  nullptr && eou->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authentication::has_operation() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attempts !=  nullptr && attempts->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (eou !=  nullptr && eou->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attempts")
    {
        if(attempts == nullptr)
        {
            attempts = std::make_shared<Native::Aaa::Authentication::Attempts>();
        }
        return attempts;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Aaa::Authentication::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Aaa::Authentication::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "eou")
    {
        if(eou == nullptr)
        {
            eou = std::make_shared<Native::Aaa::Authentication::Eou>();
        }
        return eou;
    }

    if(child_yang_name == "login")
    {
        for(auto const & c : login)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Login>();
        c->parent = this;
        login.push_back(c);
        return c;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authentication::Onep>();
        }
        return onep;
    }

    if(child_yang_name == "ppp")
    {
        for(auto const & c : ppp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Ppp>();
        c->parent = this;
        ppp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attempts != nullptr)
    {
        children["attempts"] = attempts;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(eou != nullptr)
    {
        children["eou"] = eou;
    }

    for (auto const & c : login)
    {
        children[c->get_segment_path()] = c;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    for (auto const & c : ppp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts" || name == "dot1x" || name == "enable" || name == "eou" || name == "login" || name == "onep" || name == "ppp")
        return true;
    return false;
}

Native::Aaa::Authentication::Attempts::Attempts()
    :
    login{YType::uint8, "login"}
{

    yang_name = "attempts"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Attempts::~Attempts()
{
}

bool Native::Aaa::Authentication::Attempts::has_data() const
{
    return login.is_set;
}

bool Native::Aaa::Authentication::Attempts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Aaa::Authentication::Attempts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Attempts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attempts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Attempts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Attempts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Attempts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Attempts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Attempts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Attempts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Dot1X()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>())
{
    default_->parent = this;

    yang_name = "dot1x"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::~Dot1X()
{
}

bool Native::Aaa::Authentication::Dot1X::has_data() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dot1x-list")
    {
        for(auto const & c : dot1x_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Dot1X::Dot1XList>();
        c->parent = this;
        dot1x_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : dot1x_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authentication::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dot1x-list")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Default_::Default_()
    :
    group{YType::str, "group"}
{

    yang_name = "default"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authentication::Dot1X::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1X::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Dot1XList::Dot1XList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
{

    yang_name = "dot1x-list"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::Dot1XList::~Dot1XList()
{
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_data() const
{
    return name.is_set
	|| group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authentication::Dot1X::Dot1XList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::Dot1XList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::Dot1XList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Dot1XList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Dot1XList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Dot1XList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1X::Dot1XList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Enable()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Enable::Default_>())
{
    default_->parent = this;

    yang_name = "enable"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Enable::~Enable()
{
}

bool Native::Aaa::Authentication::Enable::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Enable::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Default_::Default_()
    :
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    line{YType::empty, "line"},
    none{YType::empty, "none"}
{

    yang_name = "default"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Enable::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Enable::Default_::has_data() const
{
    return enable.is_set
	|| group.is_set
	|| line.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Enable::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Enable::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Enable::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Enable::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Enable::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "group" || name == "line" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Eou()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Eou::Default_>())
{
    default_->parent = this;

    yang_name = "eou"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::~Eou()
{
}

bool Native::Aaa::Authentication::Eou::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Eou::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Eou::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eou";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Eou::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "eou"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Eou::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authentication::Eou::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authentication::Eou::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default_::Group::Group()
    :
    radius{YType::empty, "radius"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::Default_::Group::~Group()
{
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_data() const
{
    return radius.is_set;
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Authentication::Eou::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Eou::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Eou::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::Login()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Login::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Login::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Login::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Login::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "login"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Login::~Login()
{
}

bool Native::Aaa::Authentication::Login::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Login::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Login::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Login::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Login::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A1::A1()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a1"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A1::~A1()
{
}

bool Native::Aaa::Authentication::Login::A1::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Login::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "enable" || name == "group" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A2::A2()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a2"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A2::~A2()
{
}

bool Native::Aaa::Authentication::Login::A2::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Login::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "enable" || name == "group" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A3::A3()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a3"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A3::~A3()
{
}

bool Native::Aaa::Authentication::Login::A3::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Login::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "enable" || name == "group" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A4::A4()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a4"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A4::~A4()
{
}

bool Native::Aaa::Authentication::Login::A4::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Login::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "enable" || name == "group" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::~Onep()
{
}

bool Native::Aaa::Authentication::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default_::Default_()
    :
    local(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Onep::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Aaa::Authentication::Onep::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Aaa::Authentication::Onep::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Aaa::Authentication::Onep::Default_::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default_::Local::Local()
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::Default_::Local::~Local()
{
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_data() const
{
    return false;
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Aaa::Authentication::Onep::Default_::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default_::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default_::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Onep::Default_::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default_::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Aaa::Authentication::Ppp::Ppp()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Ppp::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Ppp::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Ppp::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Ppp::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "ppp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Ppp::~Ppp()
{
}

bool Native::Aaa::Authentication::Ppp::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Ppp::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Ppp::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Ppp::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Ppp::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_needed{YType::empty, "if-needed"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a1"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A1::~A1()
{
}

bool Native::Aaa::Authentication::Ppp::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_needed.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_needed.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_needed.is_set || is_set(if_needed.yfilter)) leaf_name_data.push_back(if_needed.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-needed")
    {
        if_needed = value;
        if_needed.value_namespace = name_space;
        if_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-needed")
    {
        if_needed.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-needed" || name == "krb5" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a2"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A2::~A2()
{
}

bool Native::Aaa::Authentication::Ppp::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "krb5" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a3"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A3::~A3()
{
}

bool Native::Aaa::Authentication::Ppp::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "krb5" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{

    yang_name = "a4"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A4::~A4()
{
}

bool Native::Aaa::Authentication::Ppp::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "krb5" || name == "local" || name == "local-case" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Authorization()
    :
    config_commands{YType::empty, "config-commands"},
    console{YType::empty, "console"}
    	,
    auth_proxy(std::make_shared<Native::Aaa::Authorization::AuthProxy>())
	,auth_type(std::make_shared<Native::Aaa::Authorization::AuthType>())
	,configuration(std::make_shared<Native::Aaa::Authorization::Configuration>())
	,onep(std::make_shared<Native::Aaa::Authorization::Onep>())
{
    auth_proxy->parent = this;
    auth_type->parent = this;
    configuration->parent = this;
    onep->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::~Authorization()
{
}

bool Native::Aaa::Authorization::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return config_commands.is_set
	|| console.is_set
	|| (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (auth_type !=  nullptr && auth_type->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authorization::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(config_commands.yfilter)
	|| ydk::is_set(console.yfilter)
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (auth_type !=  nullptr && auth_type->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_commands.is_set || is_set(config_commands.yfilter)) leaf_name_data.push_back(config_commands.get_name_leafdata());
    if (console.is_set || is_set(console.yfilter)) leaf_name_data.push_back(console.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Authorization::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "auth-type")
    {
        if(auth_type == nullptr)
        {
            auth_type = std::make_shared<Native::Aaa::Authorization::AuthType>();
        }
        return auth_type;
    }

    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Aaa::Authorization::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "eventmanager")
    {
        for(auto const & c : eventmanager)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Eventmanager>();
        c->parent = this;
        eventmanager.push_back(c);
        return c;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authorization::Onep>();
        }
        return onep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    if(auth_type != nullptr)
    {
        children["auth-type"] = auth_type;
    }

    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : eventmanager)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    return children;
}

void Native::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-commands")
    {
        config_commands = value;
        config_commands.value_namespace = name_space;
        config_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "console")
    {
        console = value;
        console.value_namespace = name_space;
        console.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-commands")
    {
        config_commands.yfilter = yfilter;
    }
    if(value_path == "console")
    {
        console.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-proxy" || name == "auth-type" || name == "commands" || name == "configuration" || name == "eventmanager" || name == "exec" || name == "network" || name == "onep" || name == "config-commands" || name == "console")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Authorization::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::Group()
    :
    group_name{YType::str, "group-name"},
    radius{YType::empty, "radius"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_data() const
{
    return group_name.is_set
	|| radius.is_set;
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthProxy::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "radius")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::AuthType()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthType::Default_>())
{
    default_->parent = this;

    yang_name = "auth-type"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthType::~AuthType()
{
}

bool Native::Aaa::Authorization::AuthType::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthType::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthType::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::Default_::Default_()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "default"; yang_parent_name = "auth-type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthType::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthType::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authorization::AuthType::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authorization::AuthType::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthType::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthType::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthType::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "commands"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Commands::~Commands()
{
}

bool Native::Aaa::Authorization::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Configuration()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Configuration::Default_>())
{
    default_->parent = this;

    yang_name = "configuration"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::~Configuration()
{
}

bool Native::Aaa::Authorization::Configuration::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Configuration::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Configuration::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::Group()
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_data() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_operation() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-name")
    {
        for(auto const & c : group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group::GroupName>();
        c->parent = this;
        group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::GroupName()
    :
    group_name{YType::str, "group-name"}
{

    yang_name = "group-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::~GroupName()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_data() const
{
    return group_name.is_set;
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Eventmanager::Eventmanager()
    :
    name{YType::str, "name"},
    group{YType::str, "group"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "eventmanager"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Eventmanager::~Eventmanager()
{
}

bool Native::Aaa::Authorization::Eventmanager::has_data() const
{
    return name.is_set
	|| group.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Eventmanager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Eventmanager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Eventmanager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventmanager" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Eventmanager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Eventmanager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Eventmanager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Eventmanager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Eventmanager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Eventmanager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Exec::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Exec::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Exec::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Exec::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Exec::~Exec()
{
}

bool Native::Aaa::Authorization::Exec::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Exec::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Exec::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Exec::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Exec::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a1"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A1::~A1()
{
}

bool Native::Aaa::Authorization::Exec::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "krb5-instance" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a2"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A2::~A2()
{
}

bool Native::Aaa::Authorization::Exec::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "krb5-instance" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a3"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A3::~A3()
{
}

bool Native::Aaa::Authorization::Exec::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "krb5-instance" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a4"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A4::~A4()
{
}

bool Native::Aaa::Authorization::Exec::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "krb5-instance" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::Network()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Network::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "network"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Network::~Network()
{
}

bool Native::Aaa::Authorization::Network::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A1::~A1()
{
}

bool Native::Aaa::Authorization::Network::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A2::~A2()
{
}

bool Native::Aaa::Authorization::Network::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A3::~A3()
{
}

bool Native::Aaa::Authorization::Network::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A4::~A4()
{
}

bool Native::Aaa::Authorization::Network::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::~Onep()
{
}

bool Native::Aaa::Authorization::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::Onep::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Onep::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Onep::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Group::Group()
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_data() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_operation() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-word")
    {
        for(auto const & c : group_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group::GroupWord>();
        c->parent = this;
        group_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::GroupWord()
    :
    group_word{YType::str, "group-word"}
{

    yang_name = "group-word"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::~GroupWord()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_data() const
{
    return group_word.is_set;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_word.yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-word" <<"[group-word='" <<group_word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_word.is_set || is_set(group_word.yfilter)) leaf_name_data.push_back(group_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-word")
    {
        group_word = value;
        group_word.value_namespace = name_space;
        group_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-word")
    {
        group_word.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Group::Group()
    :
    server(std::make_shared<Native::Aaa::Group::Server>())
{
    server->parent = this;

    yang_name = "group"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::~Group()
{
}

bool Native::Aaa::Group::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Aaa::Group::Server::Server()
{

    yang_name = "server"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::~Server()
{
}

bool Native::Aaa::Group::Server::has_data() const
{
    for (std::size_t index=0; index<radius.size(); index++)
    {
        if(radius[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tacacs.size(); index++)
    {
        if(tacacs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tacacsplus.size(); index++)
    {
        if(tacacsplus[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Group::Server::has_operation() const
{
    for (std::size_t index=0; index<radius.size(); index++)
    {
        if(radius[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tacacs.size(); index++)
    {
        if(tacacs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tacacsplus.size(); index++)
    {
        if(tacacsplus[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Group::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        for(auto const & c : radius)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius>();
        c->parent = this;
        radius.push_back(c);
        return c;
    }

    if(child_yang_name == "tacacs")
    {
        for(auto const & c : tacacs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacs>();
        c->parent = this;
        tacacs.push_back(c);
        return c;
    }

    if(child_yang_name == "tacacsplus")
    {
        for(auto const & c : tacacsplus)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacsplus>();
        c->parent = this;
        tacacsplus.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radius)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tacacs)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tacacsplus)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius" || name == "tacacs" || name == "tacacsplus")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Radius()
    :
    name{YType::str, "name"},
    deadtime{YType::uint16, "deadtime"}
    	,
    ip(std::make_shared<Native::Aaa::Group::Server::Radius::Ip>())
	,load_balance(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>())
	,server(std::make_shared<Native::Aaa::Group::Server::Radius::Server_>())
{
    ip->parent = this;
    load_balance->parent = this;
    server->parent = this;

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::Radius::~Radius()
{
}

bool Native::Aaa::Group::Server::Radius::has_data() const
{
    return name.is_set
	|| deadtime.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::Server::Radius::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Aaa::Group::Server::Radius::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server::Radius::Server_>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "load-balance" || name == "server" || name == "name" || name == "deadtime")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Ip()
    :
    radius(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>())
	,vrf(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>())
{
    radius->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::~Ip()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::has_data() const
{
    return (radius !=  nullptr && radius->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Aaa::Group::Server::Radius::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>();
        }
        return radius;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::Radius_()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "radius"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::~Radius_()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_data() const
{
    return source_interface.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Radius_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::Radius_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Radius_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Ip::Radius_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::~LoadBalance()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::Method()
    :
    least_outstanding(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>())
{
    least_outstanding->parent = this;

    yang_name = "method"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::~Method()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_data() const
{
    return (least_outstanding !=  nullptr && least_outstanding->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_operation() const
{
    return is_set(yfilter)
	|| (least_outstanding !=  nullptr && least_outstanding->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "least-outstanding")
    {
        if(least_outstanding == nullptr)
        {
            least_outstanding = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>();
        }
        return least_outstanding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(least_outstanding != nullptr)
    {
        children["least-outstanding"] = least_outstanding;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "least-outstanding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::LeastOutstanding()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::empty, "ignore-preferred-server"}
{

    yang_name = "least-outstanding"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::~LeastOutstanding()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "least-outstanding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Server_()
{

    yang_name = "server"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::~Server_()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::has_data() const
{
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Group::Server::Radius::Server_::has_operation() const
{
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direct")
    {
        for(auto const & c : direct)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Direct>();
        c->parent = this;
        direct.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : direct)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::Server_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::Server_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct" || name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Direct::Direct()
    :
    name{YType::str, "name"},
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"}
{

    yang_name = "direct"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::Direct::~Direct()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_data() const
{
    return name.is_set
	|| acct_port.is_set
	|| auth_port.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(auth_port.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Direct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direct" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::Direct::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Direct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Direct::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Direct::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Server_::Direct::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "acct-port" || name == "auth-port")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Name::Name()
    :
    name{YType::str, "name"}
{

    yang_name = "name"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::Name::~Name()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Server_::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacs::Tacacs()
    :
    name{YType::str, "name"}
{

    yang_name = "tacacs"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::Tacacs::~Tacacs()
{
}

bool Native::Aaa::Group::Server::Tacacs::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Tacacsplus()
    :
    name{YType::str, "name"}
    	,
    ip(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip>())
	,server(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Server_>())
{
    ip->parent = this;
    server->parent = this;

    yang_name = "tacacsplus"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::Tacacsplus::~Tacacsplus()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::has_data() const
{
    for (std::size_t index=0; index<server_private.size(); index++)
    {
        if(server_private[index]->has_data())
            return true;
    }
    return name.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::has_operation() const
{
    for (std::size_t index=0; index<server_private.size(); index++)
    {
        if(server_private[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::Tacacsplus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplus" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Server_>();
        }
        return server;
    }

    if(child_yang_name == "server-private")
    {
        for(auto const & c : server_private)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate>();
        c->parent = this;
        server_private.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    for (auto const & c : server_private)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "server" || name == "server-private" || name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Ip()
    :
    tacacs(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs>())
	,vrf(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf>())
{
    tacacs->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "tacacsplus"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::~Ip()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::has_data() const
{
    return (tacacs !=  nullptr && tacacs->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tacacs != nullptr)
    {
        children["tacacs"] = tacacs;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tacacs" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::~Tacacs()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::SourceInterface()
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
    atm_acrsubinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::has_data() const
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

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::has_operation() const
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

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_children() const
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

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::ServerPrivate()
    :
    name{YType::str, "name"},
    timeout{YType::uint16, "timeout"}
    	,
    key(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key>())
{
    key->parent = this;

    yang_name = "server-private"; yang_parent_name = "tacacsplus"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::~ServerPrivate()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::has_data() const
{
    return name.is_set
	|| timeout.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-private" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "timeout")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server-private"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::~Key()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Server_::Server_()
    :
    name{YType::str, "name"}
{

    yang_name = "server"; yang_parent_name = "tacacsplus"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Server_::~Server_()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Server_::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Server_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Server_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Server_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Server_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Server_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Login::Login()
    :
    display{YType::enumeration, "display"},
    max_sessions{YType::uint16, "max-sessions"},
    password{YType::enumeration, "password"},
    success_track_conf_time{YType::uint8, "success-track-conf-time"},
    traceback{YType::enumeration, "traceback"}
    	,
    memory(std::make_shared<Native::Aaa::Login::Memory>())
	,policy(std::make_shared<Native::Aaa::Login::Policy>())
	,route(std::make_shared<Native::Aaa::Login::Route>())
	,server(std::make_shared<Native::Aaa::Login::Server>())
{
    memory->parent = this;
    policy->parent = this;
    route->parent = this;
    server->parent = this;

    yang_name = "login"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::~Login()
{
}

bool Native::Aaa::Login::has_data() const
{
    return display.is_set
	|| max_sessions.is_set
	|| password.is_set
	|| success_track_conf_time.is_set
	|| traceback.is_set
	|| (memory !=  nullptr && memory->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display.yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(success_track_conf_time.yfilter)
	|| ydk::is_set(traceback.yfilter)
	|| (memory !=  nullptr && memory->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display.is_set || is_set(display.yfilter)) leaf_name_data.push_back(display.get_name_leafdata());
    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (success_track_conf_time.is_set || is_set(success_track_conf_time.yfilter)) leaf_name_data.push_back(success_track_conf_time.get_name_leafdata());
    if (traceback.is_set || is_set(traceback.yfilter)) leaf_name_data.push_back(traceback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::Aaa::Login::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Aaa::Login::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Aaa::Login::Route>();
        }
        return route;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Login::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display")
    {
        display = value;
        display.value_namespace = name_space;
        display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time = value;
        success_track_conf_time.value_namespace = name_space;
        success_track_conf_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceback")
    {
        traceback = value;
        traceback.value_namespace = name_space;
        traceback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display")
    {
        display.yfilter = yfilter;
    }
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time.yfilter = yfilter;
    }
    if(value_path == "traceback")
    {
        traceback.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory" || name == "policy" || name == "route" || name == "server" || name == "display" || name == "max-sessions" || name == "password" || name == "success-track-conf-time" || name == "traceback")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Memory()
    :
    threshold(std::make_shared<Native::Aaa::Login::Memory::Threshold>())
{
    threshold->parent = this;

    yang_name = "memory"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::~Memory()
{
}

bool Native::Aaa::Login::Memory::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Aaa::Login::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Aaa::Login::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Aaa::Login::Memory::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Aaa::Login::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Threshold()
    :
    accounting(std::make_shared<Native::Aaa::Login::Memory::Threshold::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Login::Memory::Threshold::Authentication>())
{
    accounting->parent = this;
    authentication->parent = this;

    yang_name = "threshold"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::~Threshold()
{
}

bool Native::Aaa::Login::Memory::Threshold::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Login::Memory::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Login::Memory::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Login::Memory::Threshold::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Login::Memory::Threshold::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Login::Memory::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Memory::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Memory::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Accounting::Accounting()
    :
    disable{YType::uint8, "disable"}
{

    yang_name = "accounting"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::Accounting::~Accounting()
{
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_data() const
{
    return disable.is_set;
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Aaa::Login::Memory::Threshold::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Memory::Threshold::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Memory::Threshold::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Authentication::Authentication()
    :
    reject{YType::uint8, "reject"}
{

    yang_name = "authentication"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::Authentication::~Authentication()
{
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_data() const
{
    return reject.is_set;
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reject.yfilter);
}

std::string Native::Aaa::Login::Memory::Threshold::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Memory::Threshold::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Memory::Threshold::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reject")
        return true;
    return false;
}

Native::Aaa::Login::Policy::Policy()
    :
    interface_config{YType::enumeration, "interface-config"}
{

    yang_name = "policy"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Policy::~Policy()
{
}

bool Native::Aaa::Login::Policy::has_data() const
{
    return interface_config.is_set;
}

bool Native::Aaa::Login::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_config.yfilter);
}

std::string Native::Aaa::Login::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_config.is_set || is_set(interface_config.yfilter)) leaf_name_data.push_back(interface_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-config")
    {
        interface_config = value;
        interface_config.value_namespace = name_space;
        interface_config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-config")
    {
        interface_config.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config")
        return true;
    return false;
}

Native::Aaa::Login::Route::Route()
    :
    download(std::make_shared<Native::Aaa::Login::Route::Download>())
{
    download->parent = this;

    yang_name = "route"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Route::~Route()
{
}

bool Native::Aaa::Login::Route::has_data() const
{
    return (download !=  nullptr && download->has_data());
}

bool Native::Aaa::Login::Route::has_operation() const
{
    return is_set(yfilter)
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Aaa::Login::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Aaa::Login::Route::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Aaa::Login::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download")
        return true;
    return false;
}

Native::Aaa::Login::Route::Download::Download()
    :
    authorization{YType::str, "authorization"},
    update_period{YType::uint16, "update-period"}
{

    yang_name = "download"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Route::Download::~Download()
{
}

bool Native::Aaa::Login::Route::Download::has_data() const
{
    return authorization.is_set
	|| update_period.is_set;
}

bool Native::Aaa::Login::Route::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(update_period.yfilter);
}

std::string Native::Aaa::Login::Route::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Route::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Route::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (update_period.is_set || is_set(update_period.yfilter)) leaf_name_data.push_back(update_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Route::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Route::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Route::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-period")
    {
        update_period = value;
        update_period.value_namespace = name_space;
        update_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Route::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "update-period")
    {
        update_period.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Route::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "update-period")
        return true;
    return false;
}

Native::Aaa::Login::Server::Server()
    :
    radius{YType::enumeration, "radius"}
{

    yang_name = "server"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Server::~Server()
{
}

bool Native::Aaa::Login::Server::has_data() const
{
    return radius.is_set;
}

bool Native::Aaa::Login::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Login::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Server::Server()
    :
    radius(std::make_shared<Native::Aaa::Server::Radius>())
{
    radius->parent = this;

    yang_name = "server"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::~Server()
{
}

bool Native::Aaa::Server::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool Native::Aaa::Server::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string Native::Aaa::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Server::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
}

void Native::Aaa::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Radius()
    :
    dynamic_author(nullptr) // presence node
{

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::~Radius()
{
}

bool Native::Aaa::Server::Radius::has_data() const
{
    return (dynamic_author !=  nullptr && dynamic_author->has_data());
}

bool Native::Aaa::Server::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_author !=  nullptr && dynamic_author->has_operation());
}

std::string Native::Aaa::Server::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-author")
    {
        if(dynamic_author == nullptr)
        {
            dynamic_author = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor>();
        }
        return dynamic_author;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic_author != nullptr)
    {
        children["dynamic-author"] = dynamic_author;
    }

    return children;
}

void Native::Aaa::Server::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-author")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::DynamicAuthor()
    :
    auth_type{YType::enumeration, "auth-type"}
    	,
    domain(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>())
	,server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>())
{
    domain->parent = this;
    server_key->parent = this;

    yang_name = "dynamic-author"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::~DynamicAuthor()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return auth_type.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| (domain !=  nullptr && domain->has_operation())
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-author";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>();
        }
        return server_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "domain" || name == "server-key" || name == "auth-type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Client()
    :
    ip{YType::str, "ip"}
    	,
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>())
{
    server_key->parent = this;

    yang_name = "client"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>();
        }
        return server_key;
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
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-key" || name == "vrf" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Domain()
    :
    delimiter{YType::str, "delimiter"}
    	,
    stripping(nullptr) // presence node
{

    yang_name = "domain"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::~Domain()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_data() const
{
    return delimiter.is_set
	|| (stripping !=  nullptr && stripping->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delimiter.yfilter)
	|| (stripping !=  nullptr && stripping->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stripping")
    {
        if(stripping == nullptr)
        {
            stripping = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping>();
        }
        return stripping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stripping != nullptr)
    {
        children["stripping"] = stripping;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stripping" || name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::Stripping()
    :
    right_to_left{YType::empty, "right-to-left"}
{

    yang_name = "stripping"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::~Stripping()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_data() const
{
    return right_to_left.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(right_to_left.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stripping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (right_to_left.is_set || is_set(right_to_left.yfilter)) leaf_name_data.push_back(right_to_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "right-to-left")
    {
        right_to_left = value;
        right_to_left.value_namespace = name_space;
        right_to_left.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "right-to-left")
    {
        right_to_left.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "right-to-left")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessList::~AccessList()
{
}

bool Native::AccessList::has_data() const
{
    return false;
}

bool Native::AccessList::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::AccessSession::AccessSession()
    :
    attributes(std::make_shared<Native::AccessSession::Attributes>())
	,mac_move(std::make_shared<Native::AccessSession::MacMove>())
{
    attributes->parent = this;
    mac_move->parent = this;

    yang_name = "access-session"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::~AccessSession()
{
}

bool Native::AccessSession::has_data() const
{
    return (attributes !=  nullptr && attributes->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::AccessSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Native::AccessSession::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::AccessSession::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void Native::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "mac-move")
        return true;
    return false;
}

Native::AccessSession::Attributes::Attributes()
    :
    filter_list(std::make_shared<Native::AccessSession::Attributes::FilterList>())
{
    filter_list->parent = this;

    yang_name = "attributes"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::~Attributes()
{
}

bool Native::AccessSession::Attributes::has_data() const
{
    return (filter_list !=  nullptr && filter_list->has_data());
}

bool Native::AccessSession::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (filter_list !=  nullptr && filter_list->has_operation());
}

std::string Native::AccessSession::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<Native::AccessSession::Attributes::FilterList>();
        }
        return filter_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter_list != nullptr)
    {
        children["filter-list"] = filter_list;
    }

    return children;
}

void Native::AccessSession::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::FilterList()
{

    yang_name = "filter-list"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::FilterList::~FilterList()
{
}

bool Native::AccessSession::Attributes::FilterList::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessSession::Attributes::FilterList::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessSession::Attributes::FilterList::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessSession::Attributes::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::List::List()
    :
    name{YType::str, "name"},
    cdp{YType::empty, "cdp"},
    dhcp{YType::empty, "dhcp"},
    lldp{YType::empty, "lldp"}
{

    yang_name = "list"; yang_parent_name = "filter-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::FilterList::List::~List()
{
}

bool Native::AccessSession::Attributes::FilterList::List::has_data() const
{
    return name.is_set
	|| cdp.is_set
	|| dhcp.is_set
	|| lldp.is_set;
}

bool Native::AccessSession::Attributes::FilterList::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(lldp.yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/filter-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::FilterList::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::FilterList::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessSession::Attributes::FilterList::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::Attributes::FilterList::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
}

bool Native::AccessSession::Attributes::FilterList::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cdp" || name == "dhcp" || name == "lldp")
        return true;
    return false;
}

Native::AccessSession::MacMove::MacMove()
    :
    deny{YType::empty, "deny"}
{

    yang_name = "mac-move"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::MacMove::~MacMove()
{
}

bool Native::AccessSession::MacMove::has_data() const
{
    return deny.is_set;
}

bool Native::AccessSession::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny.yfilter);
}

std::string Native::AccessSession::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny.is_set || is_set(deny.yfilter)) leaf_name_data.push_back(deny.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessSession::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny")
    {
        deny = value;
        deny.value_namespace = name_space;
        deny.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny")
    {
        deny.yfilter = yfilter;
    }
}

bool Native::AccessSession::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny")
        return true;
    return false;
}

Native::AlarmContact::AlarmContact()
    :
    name{YType::uint8, "name"},
    description{YType::str, "description"},
    severity{YType::enumeration, "severity"},
    trigger{YType::enumeration, "trigger"}
{

    yang_name = "alarm-contact"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AlarmContact::~AlarmContact()
{
}

bool Native::AlarmContact::has_data() const
{
    return name.is_set
	|| description.is_set
	|| severity.is_set
	|| trigger.is_set;
}

bool Native::AlarmContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::AlarmContact::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AlarmContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-contact" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AlarmContact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AlarmContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AlarmContact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AlarmContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AlarmContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::AlarmContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "severity" || name == "trigger")
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

Native::Ap::Ap()
    :
    dot11(std::make_shared<Native::Ap::Dot11>())
{
    dot11->parent = this;

    yang_name = "ap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::~Ap()
{
}

bool Native::Ap::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ap:ap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Dot11>();
        }
        return dot11;
    }

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
        auto c = std::make_shared<Native::Ap::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11" || name == "group")
        return true;
    return false;
}

Native::Ap::Dot11::Dot11()
    :
    airtime_fairness(std::make_shared<Native::Ap::Dot11::AirtimeFairness>())
	,y_24ghz(std::make_shared<Native::Ap::Dot11::Y_24ghz>())
	,y_49ghz(std::make_shared<Native::Ap::Dot11::Y_49ghz>())
	,y_5ghz(std::make_shared<Native::Ap::Dot11::Y_5ghz>())
{
    airtime_fairness->parent = this;
    y_24ghz->parent = this;
    y_49ghz->parent = this;
    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "ap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::~Dot11()
{
}

bool Native::Ap::Dot11::has_data() const
{
    return (airtime_fairness !=  nullptr && airtime_fairness->has_data())
	|| (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_49ghz !=  nullptr && y_49ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation())
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_49ghz !=  nullptr && y_49ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Dot11::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Dot11::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    if(child_yang_name == "_24ghz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Dot11::Y_24ghz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_49ghz")
    {
        if(y_49ghz == nullptr)
        {
            y_49ghz = std::make_shared<Native::Ap::Dot11::Y_49ghz>();
        }
        return y_49ghz;
    }

    if(child_yang_name == "_5ghz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Dot11::Y_5ghz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    if(y_24ghz != nullptr)
    {
        children["_24ghz"] = y_24ghz;
    }

    if(y_49ghz != nullptr)
    {
        children["_49ghz"] = y_49ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5ghz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "airtime-fairness" || name == "_24ghz" || name == "_49ghz" || name == "_5ghz")
        return true;
    return false;
}

Native::Ap::Dot11::AirtimeFairness::AirtimeFairness()
{

    yang_name = "airtime-fairness"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Dot11::AirtimeFairness::has_data() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ap::Dot11::AirtimeFairness::has_operation() const
{
    for (std::size_t index=0; index<policy_name.size(); index++)
    {
        if(policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ap::Dot11::AirtimeFairness::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-name")
    {
        for(auto const & c : policy_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Dot11::AirtimeFairness::PolicyName>();
        c->parent = this;
        policy_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Dot11::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::PolicyName()
    :
    policy_name{YType::str, "policy-name"},
    policy_id{YType::uint16, "policy-id"}
{

    yang_name = "policy-name"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::AirtimeFairness::PolicyName::~PolicyName()
{
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_data() const
{
    return policy_name.is_set
	|| policy_id.is_set;
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_id.yfilter);
}

std::string Native::Ap::Dot11::AirtimeFairness::PolicyName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/airtime-fairness/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::AirtimeFairness::PolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-name" <<"[policy-name='" <<policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::AirtimeFairness::PolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_id.is_set || is_set(policy_id.yfilter)) leaf_name_data.push_back(policy_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::AirtimeFairness::PolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::AirtimeFairness::PolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-id")
    {
        policy_id = value;
        policy_id.value_namespace = name_space;
        policy_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::AirtimeFairness::PolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-id")
    {
        policy_id.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::AirtimeFairness::PolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "policy-id")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Y_24ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_24ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::~Y_24ghz()
{
}

bool Native::Ap::Dot11::Y_24ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_24ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_24ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_24ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_24ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_24ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE55M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE9M>())
{
    rate_11m->parent = this;
    rate_12m->parent = this;
    rate_18m->parent = this;
    rate_1m->parent = this;
    rate_24m->parent = this;
    rate_2m->parent = this;
    rate_36m->parent = this;
    rate_48m->parent = this;
    rate_54m->parent = this;
    rate_5_5m->parent = this;
    rate_6m->parent = this;
    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_24ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE55M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_24ghz::Rate::RATE9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_24ghz::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RATE_11M" || name == "RATE_12M" || name == "RATE_18M" || name == "RATE_1M" || name == "RATE_24M" || name == "RATE_2M" || name == "RATE_36M" || name == "RATE_48M" || name == "RATE_54M" || name == "RATE_5_5M" || name == "RATE_6M" || name == "RATE_9M")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::RATE11M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_11M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::~RATE11M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE11M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::RATE12M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_12M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::~RATE12M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE12M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::RATE18M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_18M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::~RATE18M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE18M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::RATE1M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_1M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::~RATE1M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE1M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::RATE24M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_24M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::~RATE24M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE24M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

const Enum::YLeaf LoggingLevelType::alerts {0, "alerts"};
const Enum::YLeaf LoggingLevelType::critical {1, "critical"};
const Enum::YLeaf LoggingLevelType::debugging {2, "debugging"};
const Enum::YLeaf LoggingLevelType::emergencies {3, "emergencies"};
const Enum::YLeaf LoggingLevelType::errors {4, "errors"};
const Enum::YLeaf LoggingLevelType::informational {5, "informational"};
const Enum::YLeaf LoggingLevelType::notifications {6, "notifications"};
const Enum::YLeaf LoggingLevelType::warnings {7, "warnings"};
const Enum::YLeaf LoggingLevelType::bogus {8, "bogus"};

const Enum::YLeaf Native::Aaa::SessionId::common {0, "common"};
const Enum::YLeaf Native::Aaa::SessionId::unique {1, "unique"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::none {0, "none"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::start_stop {1, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::stop_only {2, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::start_stop {0, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::stop_only {1, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::StartStop::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::Name::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::AuthType::Default_::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Aaa::Login::Display::last_failure {0, "last-failure"};
const Enum::YLeaf Native::Aaa::Login::Display::last_success {1, "last-success"};
const Enum::YLeaf Native::Aaa::Login::Display::number_failures {2, "number-failures"};

const Enum::YLeaf Native::Aaa::Login::Password::restriction {0, "restriction"};

const Enum::YLeaf Native::Aaa::Login::Traceback::recording {0, "recording"};

const Enum::YLeaf Native::Aaa::Login::Policy::InterfaceConfig::allow_subinterface {0, "allow-subinterface"};

const Enum::YLeaf Native::Aaa::Login::Server::Radius::dynamic_author {0, "dynamic-author"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::policy_device {1, "policy-device"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::proxy {2, "proxy"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::sesm {3, "sesm"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::all {0, "all"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::any {1, "any"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::session_key {2, "session-key"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::AlarmContact::Severity::critical {0, "critical"};
const Enum::YLeaf Native::AlarmContact::Severity::major {1, "major"};
const Enum::YLeaf Native::AlarmContact::Severity::minor {2, "minor"};

const Enum::YLeaf Native::AlarmContact::Trigger::open {0, "open"};
const Enum::YLeaf Native::AlarmContact::Trigger::closed {1, "closed"};


}
}

