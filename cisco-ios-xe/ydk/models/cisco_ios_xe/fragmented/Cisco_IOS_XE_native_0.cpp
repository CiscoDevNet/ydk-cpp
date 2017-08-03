
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_78.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_172.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_169.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_171.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_75.hpp"
#include "Cisco_IOS_XE_native_179.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_168.hpp"
#include "Cisco_IOS_XE_native_170.hpp"
#include "Cisco_IOS_XE_native_175.hpp"
#include "Cisco_IOS_XE_native_77.hpp"
#include "Cisco_IOS_XE_native_74.hpp"
#include "Cisco_IOS_XE_native_167.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_176.hpp"

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
	,cisco_ios_xe_native_template(std::make_shared<Native::CiscoIosXeNative_Template>())
	,cisco_ios_xe_switch_template(std::make_shared<Native::CiscoIosXeSwitch_Template>())
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

const EntityPath Native::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aqm_register_fnf.is_set || is_set(aqm_register_fnf.yfilter)) leaf_name_data.push_back(aqm_register_fnf.get_name_leafdata());
    if (boot_end_marker.is_set || is_set(boot_end_marker.yfilter)) leaf_name_data.push_back(boot_end_marker.get_name_leafdata());
    if (boot_start_marker.is_set || is_set(boot_start_marker.yfilter)) leaf_name_data.push_back(boot_start_marker.get_name_leafdata());
    if (captive_portal_bypass.is_set || is_set(captive_portal_bypass.yfilter)) leaf_name_data.push_back(captive_portal_bypass.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (disable_eadi.is_set || is_set(disable_eadi.yfilter)) leaf_name_data.push_back(disable_eadi.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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
            cisco_ios_xe_native_template = std::make_shared<Native::CiscoIosXeNative_Template>();
        }
        return cisco_ios_xe_native_template;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch_template")
    {
        if(cisco_ios_xe_switch_template == nullptr)
        {
            cisco_ios_xe_switch_template = std::make_shared<Native::CiscoIosXeSwitch_Template>();
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

Native::Default_::Default_()
    :
    crypto(std::make_shared<Native::Default_::Crypto>())
{
    crypto->parent = this;

    yang_name = "default"; yang_parent_name = "native";
}

Native::Default_::~Default_()
{
}

bool Native::Default_::has_data() const
{
    return (crypto !=  nullptr && crypto->has_data());
}

bool Native::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (crypto !=  nullptr && crypto->has_operation());
}

std::string Native::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Default_::Crypto>();
        }
        return crypto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    return children;
}

void Native::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto")
        return true;
    return false;
}

Native::Default_::Crypto::Crypto()
    :
    ikev2(std::make_shared<Native::Default_::Crypto::Ikev2>())
{
    ikev2->parent = this;

    yang_name = "crypto"; yang_parent_name = "default";
}

Native::Default_::Crypto::~Crypto()
{
}

bool Native::Default_::Crypto::has_data() const
{
    return (ikev2 !=  nullptr && ikev2->has_data());
}

bool Native::Default_::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ikev2 !=  nullptr && ikev2->has_operation());
}

std::string Native::Default_::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";

    return path_buffer.str();

}

const EntityPath Native::Default_::Crypto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Default_::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Default_::Crypto::Ikev2>();
        }
        return ikev2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ikev2 != nullptr)
    {
        children["ikev2"] = ikev2;
    }

    return children;
}

void Native::Default_::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default_::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default_::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikev2")
        return true;
    return false;
}

Native::Default_::Crypto::Ikev2::Ikev2()
    :
    policy{YType::empty, "policy"},
    proposal{YType::empty, "proposal"}
{
    yang_name = "ikev2"; yang_parent_name = "crypto";
}

Native::Default_::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Default_::Crypto::Ikev2::has_data() const
{
    return policy.is_set
	|| proposal.is_set;
}

bool Native::Default_::Crypto::Ikev2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(proposal.yfilter);
}

std::string Native::Default_::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikev2";

    return path_buffer.str();

}

const EntityPath Native::Default_::Crypto::Ikev2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/default/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (proposal.is_set || is_set(proposal.yfilter)) leaf_name_data.push_back(proposal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Default_::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Default_::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Default_::Crypto::Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal")
    {
        proposal = value;
        proposal.value_namespace = name_space;
        proposal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Default_::Crypto::Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
}

bool Native::Default_::Crypto::Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "proposal")
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
    return is_set(yfilter)
	|| ydk::is_set(l2cos.yfilter)
	|| ydk::is_set(slow_timers.yfilter)
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

    if (l2cos.is_set || is_set(l2cos.yfilter)) leaf_name_data.push_back(l2cos.get_name_leafdata());
    if (slow_timers.is_set || is_set(slow_timers.yfilter)) leaf_name_data.push_back(slow_timers.get_name_leafdata());


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

void Native::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2cos")
    {
        l2cos = value;
        l2cos.value_namespace = name_space;
        l2cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-timers")
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
    return is_set(yfilter)
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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(dest_ip.yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(template_name.yfilter);
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

    if (dest_ip.is_set || is_set(dest_ip.yfilter)) leaf_name_data.push_back(dest_ip.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());


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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
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

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(dp_ipv6_prefix.yfilter)
	|| ydk::is_set(bfd_nm.yfilter)
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

    if (dp_ipv6_prefix.is_set || is_set(dp_ipv6_prefix.yfilter)) leaf_name_data.push_back(dp_ipv6_prefix.get_name_leafdata());
    if (bfd_nm.is_set || is_set(bfd_nm.yfilter)) leaf_name_data.push_back(bfd_nm.get_name_leafdata());


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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "vrf" || name == "dp-ipv6_prefix" || name == "bfd-nm")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(src_ipv6_prefix0.yfilter)
	|| ydk::is_set(bfd_name.yfilter);
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

    if (src_ipv6_prefix0.is_set || is_set(src_ipv6_prefix0.yfilter)) leaf_name_data.push_back(src_ipv6_prefix0.get_name_leafdata());
    if (bfd_name.is_set || is_set(bfd_name.yfilter)) leaf_name_data.push_back(bfd_name.get_name_leafdata());


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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::SrcIpv6_Prefix0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "bfd-name")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(src_vrf.yfilter)
	|| ydk::is_set(src_ipv6_prefix.yfilter);
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

    if (src_vrf.is_set || is_set(src_vrf.yfilter)) leaf_name_data.push_back(src_vrf.get_name_leafdata());
    if (src_ipv6_prefix.is_set || is_set(src_ipv6_prefix.yfilter)) leaf_name_data.push_back(src_ipv6_prefix.get_name_leafdata());


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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Bfd::Map::Ipv6::DpIpv6_Prefix::Vrf::SrcVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf" || name == "src-ipv6_prefix")
        return true;
    return false;
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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(dst_ipv6_prefix.yfilter);
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

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (dst_ipv6_prefix.is_set || is_set(dst_ipv6_prefix.yfilter)) leaf_name_data.push_back(dst_ipv6_prefix.get_name_leafdata());


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
    return is_set(yfilter)
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

void Native::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-break" || name == "manual" || name == "system")
        return true;
    return false;
}

Native::Boot::System::System()
    :
    tftp{YType::str, "tftp"},
    tftp_path{YType::str, "tftp-path"}
    	,
    bootfile(std::make_shared<Native::Boot::System::Bootfile>())
	,flash(std::make_shared<Native::Boot::System::Flash>())
	,switch_(std::make_shared<Native::Boot::System::Switch_>())
{
    bootfile->parent = this;

    flash->parent = this;

    switch_->parent = this;

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
	|| (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Boot::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(tftp_path.yfilter)
	|| (bootfile !=  nullptr && bootfile->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation());
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

    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());


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
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Boot::System::Switch_>();
        }
        return switch_;
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

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::Boot::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
        tftp_path.value_namespace = name_space;
        tftp_path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "tftp-path")
    {
        tftp_path.yfilter = yfilter;
    }
}

bool Native::Boot::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootfile" || name == "flash" || name == "switch" || name == "tftp" || name == "tftp-path")
        return true;
    return false;
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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter);
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

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());


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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(flash_leaf.yfilter);
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

    if (flash_leaf.is_set || is_set(flash_leaf.yfilter)) leaf_name_data.push_back(flash_leaf.get_name_leafdata());


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

Native::Boot::System::Switch_::Switch_()
    :
    all(std::make_shared<Native::Boot::System::Switch_::All>())
{
    all->parent = this;

    yang_name = "switch"; yang_parent_name = "system";
}

Native::Boot::System::Switch_::~Switch_()
{
}

bool Native::Boot::System::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Boot::System::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Boot::System::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Boot::System::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Boot::System::Switch_::All>();
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
        auto c = std::make_shared<Native::Boot::System::Switch_::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::get_children() const
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

void Native::Boot::System::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "switch-number")
        return true;
    return false;
}

Native::Boot::System::Switch_::SwitchNumber::SwitchNumber()
    :
    range{YType::uint8, "range"},
    flash_1_path{YType::str, "flash-1-path"},
    flash_path{YType::str, "flash-path"},
    tftp_path{YType::str, "tftp-path"}
{
    yang_name = "switch-number"; yang_parent_name = "switch";
}

Native::Boot::System::Switch_::SwitchNumber::~SwitchNumber()
{
}

bool Native::Boot::System::Switch_::SwitchNumber::has_data() const
{
    return range.is_set
	|| flash_1_path.is_set
	|| flash_path.is_set
	|| tftp_path.is_set;
}

bool Native::Boot::System::Switch_::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(flash_1_path.yfilter)
	|| ydk::is_set(flash_path.yfilter)
	|| ydk::is_set(tftp_path.yfilter);
}

std::string Native::Boot::System::Switch_::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch_::SwitchNumber::get_entity_path(Entity* ancestor) const
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

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (flash_1_path.is_set || is_set(flash_1_path.yfilter)) leaf_name_data.push_back(flash_1_path.get_name_leafdata());
    if (flash_path.is_set || is_set(flash_path.yfilter)) leaf_name_data.push_back(flash_path.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Switch_::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch_::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Boot::System::Switch_::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Boot::System::Switch_::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "flash-1-path" || name == "flash-path" || name == "tftp-path")
        return true;
    return false;
}

Native::Boot::System::Switch_::All::All()
    :
    flash{YType::str, "flash"},
    flash_1{YType::str, "flash-1"},
    tftp{YType::str, "tftp"}
{
    yang_name = "all"; yang_parent_name = "switch";
}

Native::Boot::System::Switch_::All::~All()
{
}

bool Native::Boot::System::Switch_::All::has_data() const
{
    return flash.is_set
	|| flash_1.is_set
	|| tftp.is_set;
}

bool Native::Boot::System::Switch_::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash.yfilter)
	|| ydk::is_set(flash_1.yfilter)
	|| ydk::is_set(tftp.yfilter);
}

std::string Native::Boot::System::Switch_::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Boot::System::Switch_::All::get_entity_path(Entity* ancestor) const
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

    if (flash.is_set || is_set(flash.yfilter)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flash_1.is_set || is_set(flash_1.yfilter)) leaf_name_data.push_back(flash_1.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Boot::System::Switch_::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Boot::System::Switch_::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Boot::System::Switch_::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash")
    {
        flash = value;
        flash.value_namespace = name_space;
        flash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-1")
    {
        flash_1 = value;
        flash_1.value_namespace = name_space;
        flash_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Switch_::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash")
    {
        flash.yfilter = yfilter;
    }
    if(value_path == "flash-1")
    {
        flash_1.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
}

bool Native::Boot::System::Switch_::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash" || name == "flash-1" || name == "tftp")
        return true;
    return false;
}

Native::Boot::EnableBreak::EnableBreak()
    :
    switch_{YType::uint8, "switch"}
{
    yang_name = "enable-break"; yang_parent_name = "boot";
}

Native::Boot::EnableBreak::~EnableBreak()
{
}

bool Native::Boot::EnableBreak::has_data() const
{
    return switch_.is_set;
}

bool Native::Boot::EnableBreak::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
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

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


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
    yang_name = "manual"; yang_parent_name = "boot";
}

Native::Boot::Manual::~Manual()
{
}

bool Native::Boot::Manual::has_data() const
{
    return switch_.is_set;
}

bool Native::Boot::Manual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
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

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(lite.yfilter)
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

    if (lite.is_set || is_set(lite.yfilter)) leaf_name_data.push_back(lite.get_name_leafdata());


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
    if(name == "chunk" || name == "free" || name == "reserve" || name == "sanity" || name == "statistics" || name == "lite")
        return true;
    return false;
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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
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

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
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

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(io.yfilter)
	|| ydk::is_set(processor.yfilter);
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

    if (io.is_set || is_set(io.yfilter)) leaf_name_data.push_back(io.get_name_leafdata());
    if (processor.is_set || is_set(processor.yfilter)) leaf_name_data.push_back(processor.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(memory_range.yfilter);
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

    if (memory_range.is_set || is_set(memory_range.yfilter)) leaf_name_data.push_back(memory_range.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(buffer.yfilter)
	|| ydk::is_set(queue.yfilter);
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

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());
    if (queue.is_set || is_set(queue.yfilter)) leaf_name_data.push_back(queue.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(building.yfilter)
	|| ydk::is_set(floor.yfilter)
	|| ydk::is_set(landmark.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter);
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

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (building.is_set || is_set(building.yfilter)) leaf_name_data.push_back(building.get_name_leafdata());
    if (floor.is_set || is_set(floor.yfilter)) leaf_name_data.push_back(floor.get_name_leafdata());
    if (landmark.is_set || is_set(landmark.yfilter)) leaf_name_data.push_back(landmark.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(contact_email_addr.yfilter)
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

    if (contact_email_addr.is_set || is_set(contact_email_addr.yfilter)) leaf_name_data.push_back(contact_email_addr.get_name_leafdata());


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

void Native::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contact-email-addr")
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
    if(name == "http-proxy" || name == "profile" || name == "source-interface" || name == "contact-email-addr")
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

bool Native::CallHome::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
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

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


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

void Native::CallHome::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
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

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


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

void Native::CallHome::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
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

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


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

void Native::CallHome::SourceInterface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
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

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(proxy_server.yfilter)
	|| ydk::is_set(port.yfilter);
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

    if (proxy_server.is_set || is_set(proxy_server.yfilter)) leaf_name_data.push_back(proxy_server.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(active.yfilter)
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

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());


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

    if (transport_method.is_set || is_set(transport_method.yfilter)) leaf_name_data.push_back(transport_method.get_name_leafdata());


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

    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());


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
    return is_set(yfilter)
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

void Native::CallHome::Profile::SubscribeToAlertGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "diagnostic" || name == "environment" || name == "inventory" || name == "syslog")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
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

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
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

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(date.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());


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

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "date")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(day.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());


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

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "day")
        return true;
    return false;
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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(pattern.yfilter);
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

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(date.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());


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

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "date")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter)
	|| ydk::is_set(day.yfilter);
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

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());


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

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time" || name == "day")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(pvdm.yfilter)
	|| ydk::is_set(sm.yfilter)
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

    if (pvdm.is_set || is_set(pvdm.yfilter)) leaf_name_data.push_back(pvdm.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());


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

void Native::HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvdm")
    {
        pvdm = value;
        pvdm.value_namespace = name_space;
        pvdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sm")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvdm")
    {
        pvdm.yfilter = yfilter;
    }
    if(value_path == "sm")
    {
        sm.yfilter = yfilter;
    }
}

bool Native::HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uplink" || name == "pvdm" || name == "sm")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(select.yfilter);
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

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());


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

void Native::HwModule::Uplink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Uplink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
}

bool Native::HwModule::Uplink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "select")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
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

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


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
    return is_set(yfilter)
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
{
    yang_name = "provision"; yang_parent_name = "module";
}

Native::Module::Provision::~Provision()
{
}

bool Native::Module::Provision::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Module::Provision::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Module::Provision::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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

Native::Module::Provision::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    chassis(std::make_shared<Native::Module::Provision::Switch_::Chassis>())
{
    chassis->parent = this;

    yang_name = "switch"; yang_parent_name = "provision";
}

Native::Module::Provision::Switch_::~Switch_()
{
}

bool Native::Module::Provision::Switch_::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return number.is_set
	|| (chassis !=  nullptr && chassis->has_data());
}

bool Native::Module::Provision::Switch_::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (chassis !=  nullptr && chassis->has_operation());
}

std::string Native::Module::Provision::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch_::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Native::Module::Provision::Switch_::Chassis>();
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
        auto c = std::make_shared<Native::Module::Provision::Switch_::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::get_children() const
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

void Native::Module::Provision::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis" || name == "slot" || name == "number")
        return true;
    return false;
}

Native::Module::Provision::Switch_::Chassis::Chassis()
    :
    base_mac{YType::str, "base-mac"},
    chassis_type{YType::uint32, "chassis-type"}
{
    yang_name = "chassis"; yang_parent_name = "switch";
}

Native::Module::Provision::Switch_::Chassis::~Chassis()
{
}

bool Native::Module::Provision::Switch_::Chassis::has_data() const
{
    return base_mac.is_set
	|| chassis_type.is_set;
}

bool Native::Module::Provision::Switch_::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(base_mac.yfilter)
	|| ydk::is_set(chassis_type.yfilter);
}

std::string Native::Module::Provision::Switch_::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch_::Chassis::get_entity_path(Entity* ancestor) const
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

    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch_::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-mac" || name == "chassis-type")
        return true;
    return false;
}

Native::Module::Provision::Switch_::Slot::Slot()
    :
    number{YType::uint8, "number"},
    base_mac{YType::str, "base-mac"},
    slot_type{YType::uint32, "slot-type"}
{
    yang_name = "slot"; yang_parent_name = "switch";
}

Native::Module::Provision::Switch_::Slot::~Slot()
{
}

bool Native::Module::Provision::Switch_::Slot::has_data() const
{
    return number.is_set
	|| base_mac.is_set
	|| slot_type.is_set;
}

bool Native::Module::Provision::Switch_::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(base_mac.yfilter)
	|| ydk::is_set(slot_type.yfilter);
}

std::string Native::Module::Provision::Switch_::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Module::Provision::Switch_::Slot::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (slot_type.is_set || is_set(slot_type.yfilter)) leaf_name_data.push_back(slot_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch_::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-type")
    {
        slot_type = value;
        slot_type.value_namespace = name_space;
        slot_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
    if(value_path == "slot-type")
    {
        slot_type.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "base-mac" || name == "slot-type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
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

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());


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
    if(name == "password" || name == "source-interface" || name == "master")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
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

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
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

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());


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

void Native::Domain::Vrf::Border::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(branch.yfilter)
	|| ydk::is_set(hub.yfilter)
	|| ydk::is_set(hub_ip.yfilter)
	|| ydk::is_set(transit.yfilter)
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

    if (branch.is_set || is_set(branch.yfilter)) leaf_name_data.push_back(branch.get_name_leafdata());
    if (hub.is_set || is_set(hub.yfilter)) leaf_name_data.push_back(hub.get_name_leafdata());
    if (hub_ip.is_set || is_set(hub_ip.yfilter)) leaf_name_data.push_back(hub_ip.get_name_leafdata());
    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());


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
    if(value_path == "hub-ip")
    {
        hub_ip = value;
        hub_ip.value_namespace = name_space;
        hub_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hub-ip")
    {
        hub_ip.yfilter = yfilter;
    }
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "class" || name == "collector" || name == "enterprise-prefix" || name == "load-balance" || name == "password" || name == "site-prefixes" || name == "source-interface" || name == "branch" || name == "hub" || name == "hub-ip" || name == "transit")
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

    if (byte_loss_threshold.is_set || is_set(byte_loss_threshold.yfilter)) leaf_name_data.push_back(byte_loss_threshold.get_name_leafdata());
    if (channel_unreachable_timer.is_set || is_set(channel_unreachable_timer.yfilter)) leaf_name_data.push_back(channel_unreachable_timer.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (minimum_mask_length.is_set || is_set(minimum_mask_length.yfilter)) leaf_name_data.push_back(minimum_mask_length.get_name_leafdata());
    if (mitigation_mode.is_set || is_set(mitigation_mode.yfilter)) leaf_name_data.push_back(mitigation_mode.get_name_leafdata());
    if (packet_loss_threshold.is_set || is_set(packet_loss_threshold.yfilter)) leaf_name_data.push_back(packet_loss_threshold.get_name_leafdata());
    if (threshold_variance.is_set || is_set(threshold_variance.yfilter)) leaf_name_data.push_back(threshold_variance.get_name_leafdata());
    if (transit_site_affinity.is_set || is_set(transit_site_affinity.yfilter)) leaf_name_data.push_back(transit_site_affinity.get_name_leafdata());


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

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(tca_time_min.yfilter);
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

    if (tca_time_min.is_set || is_set(tca_time_min.yfilter)) leaf_name_data.push_back(tca_time_min.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(mc_port.yfilter);
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

    if (mc_port.is_set || is_set(mc_port.yfilter)) leaf_name_data.push_back(mc_port.get_name_leafdata());


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

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (interval_unit.is_set || is_set(interval_unit.yfilter)) leaf_name_data.push_back(interval_unit.get_name_leafdata());


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

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
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

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(advanced.yfilter);
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

    if (advanced.is_set || is_set(advanced.yfilter)) leaf_name_data.push_back(advanced.get_name_leafdata());


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

void Native::Domain::Vrf::Master::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advanced")
    {
        advanced = value;
        advanced.value_namespace = name_space;
        advanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advanced")
    {
        advanced.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
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

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());


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

void Native::Domain::Vrf::Master::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
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

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
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

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence.yfilter)
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());


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

void Native::Domain::Vrf::Master::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Domain::Vrf::Master::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "path-preference" || name == "name" || name == "sequence")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Domain::Vrf::Master::Class_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Domain::Vrf::Master::Class_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Domain::Vrf::Master::Class_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(policy.yfilter);
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

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


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

void Native::Domain::Vrf::Master::Class_::Match::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Domain::Vrf::Master::Class_::Match::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "policy")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : primary.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(primary.yfilter);
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

void Native::Domain::Vrf::Master::Class_::PathPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Domain::Vrf::Master::Class_::PathPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "primary")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Parser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(partition.yfilter);
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

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (partition.is_set || is_set(partition.yfilter)) leaf_name_data.push_back(partition.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(call_home.yfilter)
	|| ydk::is_set(compress_config.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(disable_ip_fast_frag.yfilter)
	|| ydk::is_set(exec_callback.yfilter)
	|| ydk::is_set(exec_wait.yfilter)
	|| ydk::is_set(finger.yfilter)
	|| ydk::is_set(hide_telnet_addresses.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(linenumber.yfilter)
	|| ydk::is_set(log_hidden.yfilter)
	|| ydk::is_set(nagle.yfilter)
	|| ydk::is_set(old_slip_prompts.yfilter)
	|| ydk::is_set(password_encryption.yfilter)
	|| ydk::is_set(password_recovery.yfilter)
	|| ydk::is_set(pt_vty_logging.yfilter)
	|| ydk::is_set(sequence_numbers.yfilter)
	|| ydk::is_set(slave_log.yfilter)
	|| ydk::is_set(tcp_keepalives_in.yfilter)
	|| ydk::is_set(tcp_keepalives_out.yfilter)
	|| ydk::is_set(tcp_small_servers.yfilter)
	|| ydk::is_set(telnet_zeroidle.yfilter)
	|| ydk::is_set(udp_small_servers.yfilter)
	|| ydk::is_set(unsupported_transceiver.yfilter)
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

    if (call_home.is_set || is_set(call_home.yfilter)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (compress_config.is_set || is_set(compress_config.yfilter)) leaf_name_data.push_back(compress_config.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (disable_ip_fast_frag.is_set || is_set(disable_ip_fast_frag.yfilter)) leaf_name_data.push_back(disable_ip_fast_frag.get_name_leafdata());
    if (exec_callback.is_set || is_set(exec_callback.yfilter)) leaf_name_data.push_back(exec_callback.get_name_leafdata());
    if (exec_wait.is_set || is_set(exec_wait.yfilter)) leaf_name_data.push_back(exec_wait.get_name_leafdata());
    if (finger.is_set || is_set(finger.yfilter)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (hide_telnet_addresses.is_set || is_set(hide_telnet_addresses.yfilter)) leaf_name_data.push_back(hide_telnet_addresses.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (linenumber.is_set || is_set(linenumber.yfilter)) leaf_name_data.push_back(linenumber.get_name_leafdata());
    if (log_hidden.is_set || is_set(log_hidden.yfilter)) leaf_name_data.push_back(log_hidden.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.yfilter)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (old_slip_prompts.is_set || is_set(old_slip_prompts.yfilter)) leaf_name_data.push_back(old_slip_prompts.get_name_leafdata());
    if (password_encryption.is_set || is_set(password_encryption.yfilter)) leaf_name_data.push_back(password_encryption.get_name_leafdata());
    if (password_recovery.is_set || is_set(password_recovery.yfilter)) leaf_name_data.push_back(password_recovery.get_name_leafdata());
    if (pt_vty_logging.is_set || is_set(pt_vty_logging.yfilter)) leaf_name_data.push_back(pt_vty_logging.get_name_leafdata());
    if (sequence_numbers.is_set || is_set(sequence_numbers.yfilter)) leaf_name_data.push_back(sequence_numbers.get_name_leafdata());
    if (slave_log.is_set || is_set(slave_log.yfilter)) leaf_name_data.push_back(slave_log.get_name_leafdata());
    if (tcp_keepalives_in.is_set || is_set(tcp_keepalives_in.yfilter)) leaf_name_data.push_back(tcp_keepalives_in.get_name_leafdata());
    if (tcp_keepalives_out.is_set || is_set(tcp_keepalives_out.yfilter)) leaf_name_data.push_back(tcp_keepalives_out.get_name_leafdata());
    if (tcp_small_servers.is_set || is_set(tcp_small_servers.yfilter)) leaf_name_data.push_back(tcp_small_servers.get_name_leafdata());
    if (telnet_zeroidle.is_set || is_set(telnet_zeroidle.yfilter)) leaf_name_data.push_back(telnet_zeroidle.get_name_leafdata());
    if (udp_small_servers.is_set || is_set(udp_small_servers.yfilter)) leaf_name_data.push_back(udp_small_servers.get_name_leafdata());
    if (unsupported_transceiver.is_set || is_set(unsupported_transceiver.yfilter)) leaf_name_data.push_back(unsupported_transceiver.get_name_leafdata());


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

void Native::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers = value;
        tcp_small_servers.value_namespace = name_space;
        tcp_small_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle = value;
        telnet_zeroidle.value_namespace = name_space;
        telnet_zeroidle.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
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
    if(value_path == "password-encryption")
    {
        password_encryption.yfilter = yfilter;
    }
    if(value_path == "password-recovery")
    {
        password_recovery.yfilter = yfilter;
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
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers.yfilter = yfilter;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle.yfilter = yfilter;
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
    if(name == "alignment" || name == "counters" || name == "heartbeat" || name == "pad" || name == "pad-conf" || name == "prompt" || name == "timestamps" || name == "call-home" || name == "compress-config" || name == "config" || name == "dhcp" || name == "disable-ip-fast-frag" || name == "exec-callback" || name == "exec-wait" || name == "finger" || name == "hide-telnet-addresses" || name == "internal" || name == "linenumber" || name == "log-hidden" || name == "nagle" || name == "old-slip-prompts" || name == "password-encryption" || name == "password-recovery" || name == "pt-vty-logging" || name == "sequence-numbers" || name == "slave-log" || name == "tcp-keepalives-in" || name == "tcp-keepalives-out" || name == "tcp-small-servers" || name == "telnet-zeroidle" || name == "udp-small-servers" || name == "unsupported-transceiver")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(pad.yfilter);
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

    if (pad.is_set || is_set(pad.yfilter)) leaf_name_data.push_back(pad.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(cmns.yfilter)
	|| ydk::is_set(from_xot.yfilter)
	|| ydk::is_set(to_xot.yfilter);
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

    if (cmns.is_set || is_set(cmns.yfilter)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (from_xot.is_set || is_set(from_xot.yfilter)) leaf_name_data.push_back(from_xot.get_name_leafdata());
    if (to_xot.is_set || is_set(to_xot.yfilter)) leaf_name_data.push_back(to_xot.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
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

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
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
    yang_name = "msec"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_data() const
{
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    yang_name = "show-timezone"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_data() const
{
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Year()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "localtime";
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_data() const
{
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
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

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Service::Timestamps::Debug::Datetime::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_data() const
{
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{
    yang_name = "show-timezone"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_data() const
{
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "year"; yang_parent_name = "msec";
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_data() const
{
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    year{YType::empty, "year"}
{
    yang_name = "localtime"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_data() const
{
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{
    yang_name = "msec"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_data() const
{
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{
    yang_name = "year"; yang_parent_name = "show-timezone";
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_data() const
{
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Service::Timestamps::Debug::Datetime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "localtime"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_data() const
{
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
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

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{
    yang_name = "msec"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_data() const
{
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{
    yang_name = "show-timezone"; yang_parent_name = "year";
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_data() const
{
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
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

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


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

void Native::Service::Timestamps::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime" || name == "uptime")
        return true;
    return false;
}

Native::Service::Timestamps::Log::Datetime::Datetime()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{
    yang_name = "datetime"; yang_parent_name = "log";
}

Native::Service::Timestamps::Log::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Log::Datetime::has_data() const
{
    return localtime.is_set
	|| msec.is_set
	|| show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
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

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Timestamps::Log::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Timestamps::Log::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Timestamps::Log::Datetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Service::Timestamps::Log::Datetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::Datetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Alignment::Alignment()
    :
    detection{YType::empty, "detection"},
    logging{YType::empty, "logging"}
{
    yang_name = "alignment"; yang_parent_name = "service";
}

Native::Service::Alignment::~Alignment()
{
}

bool Native::Service::Alignment::has_data() const
{
    return detection.is_set
	|| logging.is_set;
}

bool Native::Service::Alignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Service::Alignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alignment";

    return path_buffer.str();

}

const EntityPath Native::Service::Alignment::get_entity_path(Entity* ancestor) const
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

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Alignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Alignment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Alignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Alignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Service::Alignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "logging")
        return true;
    return false;
}

Native::Service::Counters::Counters()
    :
    max(std::make_shared<Native::Service::Counters::Max>())
{
    max->parent = this;

    yang_name = "counters"; yang_parent_name = "service";
}

Native::Service::Counters::~Counters()
{
}

bool Native::Service::Counters::has_data() const
{
    return (max !=  nullptr && max->has_data());
}

bool Native::Service::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (max !=  nullptr && max->has_operation());
}

std::string Native::Service::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Native::Service::Counters::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Service::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Service::Counters::Max>();
        }
        return max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max != nullptr)
    {
        children["max"] = max;
    }

    return children;
}

void Native::Service::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Service::Counters::Max::Max()
    :
    age{YType::uint8, "age"}
{
    yang_name = "max"; yang_parent_name = "counters";
}

Native::Service::Counters::Max::~Max()
{
}

bool Native::Service::Counters::Max::has_data() const
{
    return age.is_set;
}

bool Native::Service::Counters::Max::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter);
}

std::string Native::Service::Counters::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";

    return path_buffer.str();

}

const EntityPath Native::Service::Counters::Max::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Counters::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Counters::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Counters::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Counters::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
}

bool Native::Service::Counters::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age")
        return true;
    return false;
}

Native::Service::Heartbeat::Heartbeat()
    :
    fatal_count{YType::uint8, "fatal-count"},
    interrupt_interval{YType::uint8, "interrupt-interval"},
    interrupt_max{YType::uint8, "interrupt-max"},
    transmit_interval{YType::uint8, "transmit-interval"},
    warning_timeout{YType::uint8, "warning-timeout"}
{
    yang_name = "heartbeat"; yang_parent_name = "service";
}

Native::Service::Heartbeat::~Heartbeat()
{
}

bool Native::Service::Heartbeat::has_data() const
{
    return fatal_count.is_set
	|| interrupt_interval.is_set
	|| interrupt_max.is_set
	|| transmit_interval.is_set
	|| warning_timeout.is_set;
}

bool Native::Service::Heartbeat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fatal_count.yfilter)
	|| ydk::is_set(interrupt_interval.yfilter)
	|| ydk::is_set(interrupt_max.yfilter)
	|| ydk::is_set(transmit_interval.yfilter)
	|| ydk::is_set(warning_timeout.yfilter);
}

std::string Native::Service::Heartbeat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeat";

    return path_buffer.str();

}

const EntityPath Native::Service::Heartbeat::get_entity_path(Entity* ancestor) const
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

    if (fatal_count.is_set || is_set(fatal_count.yfilter)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (interrupt_interval.is_set || is_set(interrupt_interval.yfilter)) leaf_name_data.push_back(interrupt_interval.get_name_leafdata());
    if (interrupt_max.is_set || is_set(interrupt_max.yfilter)) leaf_name_data.push_back(interrupt_max.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.yfilter)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_timeout.is_set || is_set(warning_timeout.yfilter)) leaf_name_data.push_back(warning_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Heartbeat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Heartbeat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Heartbeat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
        fatal_count.value_namespace = name_space;
        fatal_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval = value;
        interrupt_interval.value_namespace = name_space;
        interrupt_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max = value;
        interrupt_max.value_namespace = name_space;
        interrupt_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
        transmit_interval.value_namespace = name_space;
        transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout = value;
        warning_timeout.value_namespace = name_space;
        warning_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Heartbeat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fatal-count")
    {
        fatal_count.yfilter = yfilter;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval.yfilter = yfilter;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max.yfilter = yfilter;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval.yfilter = yfilter;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout.yfilter = yfilter;
    }
}

bool Native::Service::Heartbeat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fatal-count" || name == "interrupt-interval" || name == "interrupt-max" || name == "transmit-interval" || name == "warning-timeout")
        return true;
    return false;
}

Native::Service::Prompt::Prompt()
    :
    config{YType::empty, "config"}
{
    yang_name = "prompt"; yang_parent_name = "service";
}

Native::Service::Prompt::~Prompt()
{
}

bool Native::Service::Prompt::has_data() const
{
    return config.is_set;
}

bool Native::Service::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Native::Service::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Service::Prompt::get_entity_path(Entity* ancestor) const
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

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Service::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Service::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Service::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Native::Service::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Platform::Platform()
    :
    atm_cdvt{YType::boolean, "Cisco-IOS-XE-platform:atm-cdvt"},
    bfd_debug_trace{YType::uint8, "Cisco-IOS-XE-platform:bfd-debug-trace"},
    cfm{YType::empty, "Cisco-IOS-XE-platform:cfm"},
    shell{YType::boolean, "Cisco-IOS-XE-platform:shell"},
    tcam_parity_error{YType::enumeration, "Cisco-IOS-XE-platform:tcam-parity-error"}
    	,
    bfd(std::make_shared<Native::Platform::Bfd>())
	,console(nullptr) // presence node
	,enable(std::make_shared<Native::Platform::Enable>())
	,external_alarm(std::make_shared<Native::Platform::ExternalAlarm>())
	,hardware(std::make_shared<Native::Platform::Hardware>())
	,icmp(std::make_shared<Native::Platform::Icmp>())
	,ip_ports(std::make_shared<Native::Platform::IpPorts>())
	,ipsec(std::make_shared<Native::Platform::Ipsec>())
	,l2vpn(std::make_shared<Native::Platform::L2Vpn>())
	,multicast(std::make_shared<Native::Platform::Multicast>())
	,punt_keepalive(nullptr) // presence node
	,punt_policer(std::make_shared<Native::Platform::PuntPolicer>())
	,qos(std::make_shared<Native::Platform::Qos>())
	,reload(std::make_shared<Native::Platform::Reload>())
	,tcam_threshold(std::make_shared<Native::Platform::TcamThreshold>())
	,trace(std::make_shared<Native::Platform::Trace>())
	,urpf(std::make_shared<Native::Platform::Urpf>())
{
    bfd->parent = this;

    enable->parent = this;

    external_alarm->parent = this;

    hardware->parent = this;

    icmp->parent = this;

    ip_ports->parent = this;

    ipsec->parent = this;

    l2vpn->parent = this;

    multicast->parent = this;

    punt_policer->parent = this;

    qos->parent = this;

    reload->parent = this;

    tcam_threshold->parent = this;

    trace->parent = this;

    urpf->parent = this;

    yang_name = "platform"; yang_parent_name = "native";
}

Native::Platform::~Platform()
{
}

bool Native::Platform::has_data() const
{
    return atm_cdvt.is_set
	|| bfd_debug_trace.is_set
	|| cfm.is_set
	|| shell.is_set
	|| tcam_parity_error.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (external_alarm !=  nullptr && external_alarm->has_data())
	|| (hardware !=  nullptr && hardware->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (ip_ports !=  nullptr && ip_ports->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_data())
	|| (punt_policer !=  nullptr && punt_policer->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (urpf !=  nullptr && urpf->has_data());
}

bool Native::Platform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_cdvt.yfilter)
	|| ydk::is_set(bfd_debug_trace.yfilter)
	|| ydk::is_set(cfm.yfilter)
	|| ydk::is_set(shell.yfilter)
	|| ydk::is_set(tcam_parity_error.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (external_alarm !=  nullptr && external_alarm->has_operation())
	|| (hardware !=  nullptr && hardware->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (ip_ports !=  nullptr && ip_ports->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_operation())
	|| (punt_policer !=  nullptr && punt_policer->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (urpf !=  nullptr && urpf->has_operation());
}

std::string Native::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";

    return path_buffer.str();

}

const EntityPath Native::Platform::get_entity_path(Entity* ancestor) const
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

    if (atm_cdvt.is_set || is_set(atm_cdvt.yfilter)) leaf_name_data.push_back(atm_cdvt.get_name_leafdata());
    if (bfd_debug_trace.is_set || is_set(bfd_debug_trace.yfilter)) leaf_name_data.push_back(bfd_debug_trace.get_name_leafdata());
    if (cfm.is_set || is_set(cfm.yfilter)) leaf_name_data.push_back(cfm.get_name_leafdata());
    if (shell.is_set || is_set(shell.yfilter)) leaf_name_data.push_back(shell.get_name_leafdata());
    if (tcam_parity_error.is_set || is_set(tcam_parity_error.yfilter)) leaf_name_data.push_back(tcam_parity_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Platform::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Platform::Console>();
        }
        return console;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Platform::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "external-alarm")
    {
        if(external_alarm == nullptr)
        {
            external_alarm = std::make_shared<Native::Platform::ExternalAlarm>();
        }
        return external_alarm;
    }

    if(child_yang_name == "hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<Native::Platform::Hardware>();
        }
        return hardware;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Platform::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "ip-ports")
    {
        if(ip_ports == nullptr)
        {
            ip_ports = std::make_shared<Native::Platform::IpPorts>();
        }
        return ip_ports;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Platform::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Platform::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Platform::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "punt-keepalive")
    {
        if(punt_keepalive == nullptr)
        {
            punt_keepalive = std::make_shared<Native::Platform::PuntKeepalive>();
        }
        return punt_keepalive;
    }

    if(child_yang_name == "punt-policer")
    {
        if(punt_policer == nullptr)
        {
            punt_policer = std::make_shared<Native::Platform::PuntPolicer>();
        }
        return punt_policer;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Platform::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<Native::Platform::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "tcam-threshold")
    {
        if(tcam_threshold == nullptr)
        {
            tcam_threshold = std::make_shared<Native::Platform::TcamThreshold>();
        }
        return tcam_threshold;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Platform::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "urpf")
    {
        if(urpf == nullptr)
        {
            urpf = std::make_shared<Native::Platform::Urpf>();
        }
        return urpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(external_alarm != nullptr)
    {
        children["external-alarm"] = external_alarm;
    }

    if(hardware != nullptr)
    {
        children["hardware"] = hardware;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(ip_ports != nullptr)
    {
        children["ip-ports"] = ip_ports;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(punt_keepalive != nullptr)
    {
        children["punt-keepalive"] = punt_keepalive;
    }

    if(punt_policer != nullptr)
    {
        children["punt-policer"] = punt_policer;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reload != nullptr)
    {
        children["reload"] = reload;
    }

    if(tcam_threshold != nullptr)
    {
        children["tcam-threshold"] = tcam_threshold;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    if(urpf != nullptr)
    {
        children["urpf"] = urpf;
    }

    return children;
}

void Native::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt = value;
        atm_cdvt.value_namespace = name_space;
        atm_cdvt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace = value;
        bfd_debug_trace.value_namespace = name_space;
        bfd_debug_trace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfm")
    {
        cfm = value;
        cfm.value_namespace = name_space;
        cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shell")
    {
        shell = value;
        shell.value_namespace = name_space;
        shell.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error = value;
        tcam_parity_error.value_namespace = name_space;
        tcam_parity_error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt.yfilter = yfilter;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace.yfilter = yfilter;
    }
    if(value_path == "cfm")
    {
        cfm.yfilter = yfilter;
    }
    if(value_path == "shell")
    {
        shell.yfilter = yfilter;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error.yfilter = yfilter;
    }
}

bool Native::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "console" || name == "enable" || name == "external-alarm" || name == "hardware" || name == "icmp" || name == "ip-ports" || name == "ipsec" || name == "l2vpn" || name == "multicast" || name == "punt-keepalive" || name == "punt-policer" || name == "qos" || name == "reload" || name == "tcam-threshold" || name == "trace" || name == "urpf" || name == "atm-cdvt" || name == "bfd-debug-trace" || name == "cfm" || name == "shell" || name == "tcam-parity-error")
        return true;
    return false;
}

Native::Platform::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Platform::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "platform";
}

Native::Platform::Icmp::~Icmp()
{
}

bool Native::Platform::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Platform::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Platform::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:icmp";

    return path_buffer.str();

}

const EntityPath Native::Platform::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Platform::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Platform::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Platform::Icmp::RateLimit::RateLimit()
    :
    duration{YType::uint32, "duration"},
    packet{YType::uint32, "packet"}
{
    yang_name = "rate-limit"; yang_parent_name = "icmp";
}

Native::Platform::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Platform::Icmp::RateLimit::has_data() const
{
    return duration.is_set
	|| packet.is_set;
}

bool Native::Platform::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Native::Platform::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

const EntityPath Native::Platform::Icmp::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:icmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::Platform::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "packet")
        return true;
    return false;
}

Native::Platform::IpPorts::IpPorts()
    :
    ephemeral_max{YType::uint16, "ephemeral-max"}
{
    yang_name = "ip-ports"; yang_parent_name = "platform";
}

Native::Platform::IpPorts::~IpPorts()
{
}

bool Native::Platform::IpPorts::has_data() const
{
    return ephemeral_max.is_set;
}

bool Native::Platform::IpPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ephemeral_max.yfilter);
}

std::string Native::Platform::IpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ip-ports";

    return path_buffer.str();

}

const EntityPath Native::Platform::IpPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ephemeral_max.is_set || is_set(ephemeral_max.yfilter)) leaf_name_data.push_back(ephemeral_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::IpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::IpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::IpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max = value;
        ephemeral_max.value_namespace = name_space;
        ephemeral_max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::IpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max.yfilter = yfilter;
    }
}

bool Native::Platform::IpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ephemeral-max")
        return true;
    return false;
}

Native::Platform::Bfd::Bfd()
    :
    allow_svi{YType::empty, "allow-svi"},
    disable_offload{YType::empty, "disable-offload"},
    enable_offload{YType::empty, "enable-offload"}
{
    yang_name = "bfd"; yang_parent_name = "platform";
}

Native::Platform::Bfd::~Bfd()
{
}

bool Native::Platform::Bfd::has_data() const
{
    return allow_svi.is_set
	|| disable_offload.is_set
	|| enable_offload.is_set;
}

bool Native::Platform::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_svi.yfilter)
	|| ydk::is_set(disable_offload.yfilter)
	|| ydk::is_set(enable_offload.yfilter);
}

std::string Native::Platform::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:bfd";

    return path_buffer.str();

}

const EntityPath Native::Platform::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_svi.is_set || is_set(allow_svi.yfilter)) leaf_name_data.push_back(allow_svi.get_name_leafdata());
    if (disable_offload.is_set || is_set(disable_offload.yfilter)) leaf_name_data.push_back(disable_offload.get_name_leafdata());
    if (enable_offload.is_set || is_set(enable_offload.yfilter)) leaf_name_data.push_back(enable_offload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-svi")
    {
        allow_svi = value;
        allow_svi.value_namespace = name_space;
        allow_svi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-offload")
    {
        disable_offload = value;
        disable_offload.value_namespace = name_space;
        disable_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-offload")
    {
        enable_offload = value;
        enable_offload.value_namespace = name_space;
        enable_offload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-svi")
    {
        allow_svi.yfilter = yfilter;
    }
    if(value_path == "disable-offload")
    {
        disable_offload.yfilter = yfilter;
    }
    if(value_path == "enable-offload")
    {
        enable_offload.yfilter = yfilter;
    }
}

bool Native::Platform::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-svi" || name == "disable-offload" || name == "enable-offload")
        return true;
    return false;
}

Native::Platform::Console::Console()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "console"; yang_parent_name = "platform";
}

Native::Platform::Console::~Console()
{
}

bool Native::Platform::Console::has_data() const
{
    return output.is_set;
}

bool Native::Platform::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Platform::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:console";

    return path_buffer.str();

}

const EntityPath Native::Platform::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Platform::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Platform::Enable::Enable()
{
    yang_name = "enable"; yang_parent_name = "platform";
}

Native::Platform::Enable::~Enable()
{
}

bool Native::Platform::Enable::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Enable::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:enable";

    return path_buffer.str();

}

const EntityPath Native::Platform::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Enable::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Native::Platform::Enable::Controller::Controller()
    :
    sonet{YType::str, "SONET"}
{
    yang_name = "controller"; yang_parent_name = "enable";
}

Native::Platform::Enable::Controller::~Controller()
{
}

bool Native::Platform::Enable::Controller::has_data() const
{
    return sonet.is_set;
}

bool Native::Platform::Enable::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sonet.yfilter);
}

std::string Native::Platform::Enable::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[SONET='" <<sonet <<"']";

    return path_buffer.str();

}

const EntityPath Native::Platform::Enable::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Enable::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Enable::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "SONET")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Enable::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "SONET")
    {
        sonet.yfilter = yfilter;
    }
}

bool Native::Platform::Enable::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SONET")
        return true;
    return false;
}

Native::Platform::ExternalAlarm::ExternalAlarm()
    :
    alarm{YType::str, "alarm"},
    line{YType::uint32, "line"}
{
    yang_name = "external-alarm"; yang_parent_name = "platform";
}

Native::Platform::ExternalAlarm::~ExternalAlarm()
{
}

bool Native::Platform::ExternalAlarm::has_data() const
{
    return alarm.is_set
	|| line.is_set;
}

bool Native::Platform::ExternalAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Platform::ExternalAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:external-alarm";

    return path_buffer.str();

}

const EntityPath Native::Platform::ExternalAlarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::ExternalAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::ExternalAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::ExternalAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::ExternalAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Platform::ExternalAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "line")
        return true;
    return false;
}

Native::Platform::Hardware::Hardware()
    :
    lite(std::make_shared<Native::Platform::Hardware::Lite>())
	,throughput(std::make_shared<Native::Platform::Hardware::Throughput>())
{
    lite->parent = this;

    throughput->parent = this;

    yang_name = "hardware"; yang_parent_name = "platform";
}

Native::Platform::Hardware::~Hardware()
{
}

bool Native::Platform::Hardware::has_data() const
{
    return (lite !=  nullptr && lite->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Platform::Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (lite !=  nullptr && lite->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Platform::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:hardware";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::Platform::Hardware::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Platform::Hardware::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Platform::Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lite" || name == "throughput")
        return true;
    return false;
}

Native::Platform::Hardware::Lite::Lite()
    :
    license{YType::enumeration, "license"}
{
    yang_name = "lite"; yang_parent_name = "hardware";
}

Native::Platform::Hardware::Lite::~Lite()
{
}

bool Native::Platform::Hardware::Lite::has_data() const
{
    return license.is_set;
}

bool Native::Platform::Hardware::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(license.yfilter);
}

std::string Native::Platform::Hardware::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Lite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (license.is_set || is_set(license.yfilter)) leaf_name_data.push_back(license.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "license")
    {
        license = value;
        license.value_namespace = name_space;
        license.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "license")
    {
        license.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Throughput()
    :
    disable{YType::enumeration, "disable"}
    	,
    level(std::make_shared<Native::Platform::Hardware::Throughput::Level>())
{
    level->parent = this;

    yang_name = "throughput"; yang_parent_name = "hardware";
}

Native::Platform::Hardware::Throughput::~Throughput()
{
}

bool Native::Platform::Hardware::Throughput::has_data() const
{
    return disable.is_set
	|| (level !=  nullptr && level->has_data());
}

bool Native::Platform::Hardware::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Platform::Hardware::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Platform::Hardware::Throughput::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Platform::Hardware::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "disable")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Level::Level()
    :
    eval_only{YType::empty, "eval-only"},
    kbps{YType::enumeration, "kbps"}
{
    yang_name = "level"; yang_parent_name = "throughput";
}

Native::Platform::Hardware::Throughput::Level::~Level()
{
}

bool Native::Platform::Hardware::Throughput::Level::has_data() const
{
    return eval_only.is_set
	|| kbps.is_set;
}

bool Native::Platform::Hardware::Throughput::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eval_only.yfilter)
	|| ydk::is_set(kbps.yfilter);
}

std::string Native::Platform::Hardware::Throughput::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Platform::Hardware::Throughput::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/throughput/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eval_only.is_set || is_set(eval_only.yfilter)) leaf_name_data.push_back(eval_only.get_name_leafdata());
    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Throughput::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eval-only")
    {
        eval_only = value;
        eval_only.value_namespace = name_space;
        eval_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eval-only")
    {
        eval_only.yfilter = yfilter;
    }
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eval-only" || name == "kbps")
        return true;
    return false;
}

Native::Platform::Ipsec::Ipsec()
    :
    arlog_supress{YType::empty, "arlog-supress"},
    fips_mode{YType::empty, "fips-mode"},
    gdoi{YType::enumeration, "gdoi"}
    	,
    llq(std::make_shared<Native::Platform::Ipsec::Llq>())
	,reassemble(std::make_shared<Native::Platform::Ipsec::Reassemble>())
{
    llq->parent = this;

    reassemble->parent = this;

    yang_name = "ipsec"; yang_parent_name = "platform";
}

Native::Platform::Ipsec::~Ipsec()
{
}

bool Native::Platform::Ipsec::has_data() const
{
    return arlog_supress.is_set
	|| fips_mode.is_set
	|| gdoi.is_set
	|| (llq !=  nullptr && llq->has_data())
	|| (reassemble !=  nullptr && reassemble->has_data());
}

bool Native::Platform::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arlog_supress.yfilter)
	|| ydk::is_set(fips_mode.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| (llq !=  nullptr && llq->has_operation())
	|| (reassemble !=  nullptr && reassemble->has_operation());
}

std::string Native::Platform::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ipsec";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arlog_supress.is_set || is_set(arlog_supress.yfilter)) leaf_name_data.push_back(arlog_supress.get_name_leafdata());
    if (fips_mode.is_set || is_set(fips_mode.yfilter)) leaf_name_data.push_back(fips_mode.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "llq")
    {
        if(llq == nullptr)
        {
            llq = std::make_shared<Native::Platform::Ipsec::Llq>();
        }
        return llq;
    }

    if(child_yang_name == "reassemble")
    {
        if(reassemble == nullptr)
        {
            reassemble = std::make_shared<Native::Platform::Ipsec::Reassemble>();
        }
        return reassemble;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(llq != nullptr)
    {
        children["llq"] = llq;
    }

    if(reassemble != nullptr)
    {
        children["reassemble"] = reassemble;
    }

    return children;
}

void Native::Platform::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress = value;
        arlog_supress.value_namespace = name_space;
        arlog_supress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fips-mode")
    {
        fips_mode = value;
        fips_mode.value_namespace = name_space;
        fips_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress.yfilter = yfilter;
    }
    if(value_path == "fips-mode")
    {
        fips_mode.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "llq" || name == "reassemble" || name == "arlog-supress" || name == "fips-mode" || name == "gdoi")
        return true;
    return false;
}

Native::Platform::Ipsec::Llq::Llq()
    :
    qos_group{YType::uint8, "qos-group"}
{
    yang_name = "llq"; yang_parent_name = "ipsec";
}

Native::Platform::Ipsec::Llq::~Llq()
{
}

bool Native::Platform::Ipsec::Llq::has_data() const
{
    return qos_group.is_set;
}

bool Native::Platform::Ipsec::Llq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group.yfilter);
}

std::string Native::Platform::Ipsec::Llq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "llq";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::Llq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Llq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Llq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Llq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Llq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Llq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group")
        return true;
    return false;
}

Native::Platform::Ipsec::Reassemble::Reassemble()
    :
    transit{YType::empty, "transit"}
{
    yang_name = "reassemble"; yang_parent_name = "ipsec";
}

Native::Platform::Ipsec::Reassemble::~Reassemble()
{
}

bool Native::Platform::Ipsec::Reassemble::has_data() const
{
    return transit.is_set;
}

bool Native::Platform::Ipsec::Reassemble::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transit.yfilter);
}

std::string Native::Platform::Ipsec::Reassemble::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reassemble";

    return path_buffer.str();

}

const EntityPath Native::Platform::Ipsec::Reassemble::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Reassemble::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Reassemble::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Reassemble::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Reassemble::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Reassemble::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transit")
        return true;
    return false;
}

Native::Platform::L2Vpn::L2Vpn()
    :
    hdlc_pass_through{YType::empty, "hdlc-pass-through"}
    	,
    statistics(std::make_shared<Native::Platform::L2Vpn::Statistics>())
{
    statistics->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "platform";
}

Native::Platform::L2Vpn::~L2Vpn()
{
}

bool Native::Platform::L2Vpn::has_data() const
{
    return hdlc_pass_through.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Platform::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hdlc_pass_through.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Platform::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:l2vpn";

    return path_buffer.str();

}

const EntityPath Native::Platform::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hdlc_pass_through.is_set || is_set(hdlc_pass_through.yfilter)) leaf_name_data.push_back(hdlc_pass_through.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Platform::L2Vpn::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Platform::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through = value;
        hdlc_pass_through.value_namespace = name_space;
        hdlc_pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through.yfilter = yfilter;
    }
}

bool Native::Platform::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "hdlc-pass-through")
        return true;
    return false;
}

Native::Platform::L2Vpn::Statistics::Statistics()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "statistics"; yang_parent_name = "l2vpn";
}

Native::Platform::L2Vpn::Statistics::~Statistics()
{
}

bool Native::Platform::L2Vpn::Statistics::has_data() const
{
    return enable.is_set;
}

bool Native::Platform::L2Vpn::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Platform::L2Vpn::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Native::Platform::L2Vpn::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::L2Vpn::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2Vpn::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Platform::L2Vpn::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Platform::Multicast::Multicast()
    :
    mgre(std::make_shared<Native::Platform::Multicast::Mgre>())
	,oce(std::make_shared<Native::Platform::Multicast::Oce>())
{
    mgre->parent = this;

    oce->parent = this;

    yang_name = "multicast"; yang_parent_name = "platform";
}

Native::Platform::Multicast::~Multicast()
{
}

bool Native::Platform::Multicast::has_data() const
{
    return (mgre !=  nullptr && mgre->has_data())
	|| (oce !=  nullptr && oce->has_data());
}

bool Native::Platform::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (mgre !=  nullptr && mgre->has_operation())
	|| (oce !=  nullptr && oce->has_operation());
}

std::string Native::Platform::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:multicast";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgre")
    {
        if(mgre == nullptr)
        {
            mgre = std::make_shared<Native::Platform::Multicast::Mgre>();
        }
        return mgre;
    }

    if(child_yang_name == "oce")
    {
        if(oce == nullptr)
        {
            oce = std::make_shared<Native::Platform::Multicast::Oce>();
        }
        return oce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mgre != nullptr)
    {
        children["mgre"] = mgre;
    }

    if(oce != nullptr)
    {
        children["oce"] = oce;
    }

    return children;
}

void Native::Platform::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgre" || name == "oce")
        return true;
    return false;
}

Native::Platform::Multicast::Mgre::Mgre()
    :
    injection{YType::empty, "injection"}
{
    yang_name = "mgre"; yang_parent_name = "multicast";
}

Native::Platform::Multicast::Mgre::~Mgre()
{
}

bool Native::Platform::Multicast::Mgre::has_data() const
{
    return injection.is_set;
}

bool Native::Platform::Multicast::Mgre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(injection.yfilter);
}

std::string Native::Platform::Multicast::Mgre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgre";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Mgre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (injection.is_set || is_set(injection.yfilter)) leaf_name_data.push_back(injection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Mgre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Mgre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Mgre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "injection")
    {
        injection = value;
        injection.value_namespace = name_space;
        injection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Mgre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "injection")
    {
        injection.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Mgre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "injection")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Oce()
    :
    flag(std::make_shared<Native::Platform::Multicast::Oce::Flag>())
{
    flag->parent = this;

    yang_name = "oce"; yang_parent_name = "multicast";
}

Native::Platform::Multicast::Oce::~Oce()
{
}

bool Native::Platform::Multicast::Oce::has_data() const
{
    return (flag !=  nullptr && flag->has_data());
}

bool Native::Platform::Multicast::Oce::has_operation() const
{
    return is_set(yfilter)
	|| (flag !=  nullptr && flag->has_operation());
}

std::string Native::Platform::Multicast::Oce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oce";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Oce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flag")
    {
        if(flag == nullptr)
        {
            flag = std::make_shared<Native::Platform::Multicast::Oce::Flag>();
        }
        return flag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flag != nullptr)
    {
        children["flag"] = flag;
    }

    return children;
}

void Native::Platform::Multicast::Oce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::Oce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::Oce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flag")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Flag::Flag()
    :
    suppress{YType::empty, "suppress"}
{
    yang_name = "flag"; yang_parent_name = "oce";
}

Native::Platform::Multicast::Oce::Flag::~Flag()
{
}

bool Native::Platform::Multicast::Oce::Flag::has_data() const
{
    return suppress.is_set;
}

bool Native::Platform::Multicast::Oce::Flag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppress.yfilter);
}

std::string Native::Platform::Multicast::Oce::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag";

    return path_buffer.str();

}

const EntityPath Native::Platform::Multicast::Oce::Flag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/oce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::Flag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Oce::Flag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Oce::Flag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Oce::Flag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Platform::PuntKeepalive::PuntKeepalive()
    :
    disable_kernel_core{YType::boolean, "disable-kernel-core"}
    	,
    settings(std::make_shared<Native::Platform::PuntKeepalive::Settings>())
{
    settings->parent = this;

    yang_name = "punt-keepalive"; yang_parent_name = "platform";
}

Native::Platform::PuntKeepalive::~PuntKeepalive()
{
}

bool Native::Platform::PuntKeepalive::has_data() const
{
    return disable_kernel_core.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool Native::Platform::PuntKeepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_kernel_core.yfilter)
	|| (settings !=  nullptr && settings->has_operation());
}

std::string Native::Platform::PuntKeepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-keepalive";

    return path_buffer.str();

}

const EntityPath Native::Platform::PuntKeepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_kernel_core.is_set || is_set(disable_kernel_core.yfilter)) leaf_name_data.push_back(disable_kernel_core.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Platform::PuntKeepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "settings")
    {
        if(settings == nullptr)
        {
            settings = std::make_shared<Native::Platform::PuntKeepalive::Settings>();
        }
        return settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntKeepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(settings != nullptr)
    {
        children["settings"] = settings;
    }

    return children;
}

void Native::Platform::PuntKeepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core = value;
        disable_kernel_core.value_namespace = name_space;
        disable_kernel_core.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntKeepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core.yfilter = yfilter;
    }
}

bool Native::Platform::PuntKeepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "settings" || name == "disable-kernel-core")
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

const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::http {0, "http"};
const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::email {1, "email"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::major {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::major {5, "major"};
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

const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::best_effort {0, "best-effort"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::custom {2, "custom"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::low_latency_data {3, "low-latency-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::real_time_video {4, "real-time-video"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::scavenger {5, "scavenger"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::voice {6, "voice"};

const Enum::YLeaf Native::Parser::Config::Cache::interface {0, "interface"};

const Enum::YLeaf Native::Platform::TcamParityError::enable {0, "enable"};
const Enum::YLeaf Native::Platform::TcamParityError::disable {1, "disable"};

const Enum::YLeaf Native::Platform::Console::Output::auto_ {0, "auto"};
const Enum::YLeaf Native::Platform::Console::Output::serial {1, "serial"};
const Enum::YLeaf Native::Platform::Console::Output::virtual_ {2, "virtual"};

const Enum::YLeaf Native::Platform::Hardware::Lite::License::enable {0, "enable"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Disable::internal_license {0, "internal-license"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_10000 {0, "10000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_25000 {1, "25000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_50000 {2, "50000"};

const Enum::YLeaf Native::Platform::Ipsec::Gdoi::accept_both {0, "accept-both"};


}
}

