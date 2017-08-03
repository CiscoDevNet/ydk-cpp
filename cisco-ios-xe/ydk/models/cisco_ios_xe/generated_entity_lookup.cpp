#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace cisco_ios_xe
{

void cisco_ios_xe_augment_lookup_tables()
{

    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"},"2013-07-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-DIAL-CONTROL-MIB"},"2005-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-diffserv-policy"},"2015-04-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-virtual-service-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-igp"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSLA-ECHO-MIB"},"2007-08-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"NHRP-MIB"},"1999-08-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-native"},"2017-05-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"pim"},"2014-06-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-cfg"},"2017-03-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IP-MIB"},"2006-02-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-dhcp"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-route-map"},"2017-06-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ENTITY-STATE-TC-MIB"},"2005-11-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-udld"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-routing-ext"},"2016-07-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IP-LOCAL-POOL-MIB"},"2007-11-12", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SNMPv2-MIB"},"2002-10-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-xr-openconfig-interfaces-types"},"2016-10-12", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CONFIG-MAN-MIB"},"2007-04-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-oper"},"2017-03-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-QFP-MIB"},"2014-06-18", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-device-tracking"},"2017-06-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-routing-policy"},"2016-05-12", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"PerfHist-TC-MIB"},"1998-11-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CBP-TARGET-MIB"},"2006-05-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSEC-FLOW-MONITOR-MIB"},"2007-10-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"policy-attr"},"2015-04-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENHANCED-MEMPOOL-MIB"},"2008-12-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-FRR-MIB"},"2008-04-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-otv"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-vpdn"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ipv6"},"2017-02-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-FRU-CONTROL-MIB"},"2013-08-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-TC"},"2011-11-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-TDM-MIB"},"2006-07-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-LDP-GENERIC-STD-MIB"},"2004-06-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-PIM-MIB"},"2000-11-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-DATA-COLLECTION-MIB"},"2002-10-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-extensions"},"2015-10-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-call-home"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-sanet"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-ip"},"2014-06-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-policy-target"},"2016-03-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-rib-bgp-types"},"2016-04-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-FIREWALL-TC"},"2006-03-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-netconf-transactions"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-rest-query"},"2014-11-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-xsd-types"},"2009-03-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-utd"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VLAN-MEMBERSHIP-MIB"},"2007-12-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DS3-MIB"},"1998-08-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-common"},"2017-01-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-RF-MIB"},"2005-09-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-service-discovery"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RMON-MIB"},"2000-05-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ETHER-CFM-MIB"},"2004-12-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-MPLS-MIB"},"2003-02-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ATM-PVCTRAP-EXTN-MIB"},"2003-01-20", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-service-chain"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-if-aggregate"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-netconf-with-defaults"},"2011-06-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-ISIS-MIB"},"2005-08-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-EXT-MIB"},"2008-11-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-UBE-MIB"},"2010-11-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"HCNUM-TC"},"2000-06-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ST-TC"},"2012-08-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-netconf-query"},"2014-11-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"NOTIFICATION-LOG-MIB"},"2000-11-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ENTITY-SENSOR-MIB"},"2002-12-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-TAP2-MIB"},"2009-11-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-diffserv-action"},"2015-04-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-eem"},"2017-04-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SONET-MIB"},"2003-03-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"BRIDGE-MIB"},"2005-09-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-card"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-efp-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-interfaces"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-common-monitoring"},"2013-06-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-lisp"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-common"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-local-routing"},"2016-05-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-STP-EXTENSIONS-MIB"},"2013-03-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"TCP-MIB"},"2005-02-18", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-nhrp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-BGP-POLICY-ACCOUNTING-MIB"},"2002-07-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-MIB"},"2012-08-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VPDN-MGMT-MIB"},"2009-06-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-vstack"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-wccp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ap"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IF-MIB"},"2000-06-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"},"2012-06-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-common-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-storm-control"},"2016-12-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-MIB"},"2004-03-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-ospf"},"2015-03-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPMROUTE-MIB"},"2005-03-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IANA-RTPROTO-MIB"},"2000-09-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-power"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-acl"},"2017-06-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-UNIFIED-FIREWALL-MIB"},"2005-09-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-RTTMON-TC-MIB"},"2012-05-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-nat"},"2017-06-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-oper"},"2017-02-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-types"},"2017-06-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-BULK-FILE-MIB"},"2002-06-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-rsvp"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-bridge-domain"},"2016-12-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"BGP4-MIB"},"1994-05-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-atm"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SMI"},"2012-08-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SNMPv2-TC"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-ospf"},"2016-03-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-route-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ppp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-syslog-types"},"2015-11-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls-ldp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-voice"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SNMP-PROXY-MIB"},"2002-10-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Q-BRIDGE-MIB"},"2006-01-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-sla"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RFC-1215"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSLA-AUTOMEASURE-MIB"},"2007-06-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"iana-crypt-hash"},"2014-08-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-routing"},"2015-05-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-flow-monitor-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-transport-types"},"2016-06-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-license"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-inet-types"},"2013-07-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-types"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-pfr"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ETHERLIKE-EXT-MIB"},"2010-06-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-xe-openconfig-interfaces-ext"},"2017-03-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls"},"2017-02-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-nd"},"2017-04-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-TE-STD-MIB"},"2004-06-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-TC-MIB"},"2006-07-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SNMP-FRAMEWORK-MIB"},"2002-10-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SONET-MIB"},"2003-08-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"SNMP-TARGET-MIB"},"1998-08-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-diffserv-target-oper"},"2017-02-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-types"},"2016-05-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-xe-openconfig-if-ethernet-ext"},"2017-03-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CBP-TC-MIB"},"2008-06-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-netconf-monitoring"},"2016-11-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-AAL5-MIB"},"2003-09-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-interfaces"},"2017-05-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VTP-MIB"},"2013-10-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-LDP-STD-MIB"},"2004-06-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"},"2002-08-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-flow"},"2017-04-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-icmp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-ia"},"2017-03-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"common-mpls-static"},"2015-07-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-crypto"},"2017-05-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-peer-group"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-memory-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-netconf-monitoring"},"2010-10-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-policy"},"2017-06-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-NETSYNC-MIB"},"2010-10-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"OSPF-MIB"},"2006-11-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-yang-push"},"2016-10-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-ATM-MIB"},"2005-04-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-EIGRP-MIB"},"2004-11-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp"},"2017-03-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-interface-common"},"2017-03-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-MPLS-TC-EXT-STD-MIB"},"2012-02-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-spanning-tree"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"VPN-TC-STD-MIB"},"2005-11-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-TC-MIB"},"2012-01-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-common-structure"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-service-routing"},"2017-05-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IGMP-FILTER-MIB"},"2005-11-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-switch"},"2017-03-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-rest-error"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-RTTMON-MIB"},"2012-08-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-cfm-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-VPN-MIB"},"2001-10-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SYSLOG-MIB"},"2005-12-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-controller"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-QOS-PIB-MIB"},"2007-08-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SIP-UA-MIB"},"2004-02-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"LLDP-MIB"},"2005-05-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"P-BRIDGE-MIB"},"2006-01-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-confd-monitoring"},"2013-06-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-meta-extensions"},"2016-11-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-if-ethernet"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IMAGE-LICENSE-MGMT-MIB"},"2007-10-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-bridge-common"},"2016-12-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IMAGE-MIB"},"1995-08-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CEF-TC"},"2005-09-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IP-TAP-MIB"},"2004-03-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IEEE8021-TC-MIB"},"2008-10-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-VENDORTYPE-OID-MIB"},"2014-12-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"EXPRESSION-MIB"},"2005-11-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-platform-types"},"2016-06-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IGMP-STD-MIB"},"2000-09-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-FLASH-MIB"},"2013-08-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-ALARM-MIB"},"1999-07-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-global"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-lacp"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-PROCESS-MIB"},"2011-06-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-diagnostics"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-service-insertion"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-checkpoint-archive-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ENTITY-STATE-MIB"},"2005-11-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-te"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-pathmgr"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-coap"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-diffserv-classifier"},"2015-04-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"TUNNEL-MIB"},"2005-05-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-policy-filters"},"2016-03-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"oc-mapping-acl"},"2017-01-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ospfv3"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RFC1315-MIB"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-RADIUS-EXT-MIB"},"2010-05-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-dot1x"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-OSPF-TRAP-MIB"},"2003-07-18", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"PIM-MIB"},"2000-09-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-vlan"},"2017-05-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"INTEGRATED-SERVICES-MIB"},"1995-11-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RFC-1212"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-software-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENTITY-SENSOR-MIB"},"2015-01-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DISMAN-EVENT-MIB"},"2000-10-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DRAFT-MSDP-MIB"},"1999-12-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-STATS-MIB"},"2010-09-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-self-mgmt"},"2016-05-14", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-ipv4-unicast-routing"},"2015-05-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-common-multiprotocol"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-PW-ENET-MIB"},"2002-09-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-process-cpu-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-vtp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-AAA-SERVER-MIB"},"2003-11-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IPMROUTE-STD-MIB"},"2000-09-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IF-EXTENSION-MIB"},"2013-03-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-interfaces-ext"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"INET-ADDRESS-MIB"},"2005-02-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RFC1155-SMI"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CONTEXT-MAPPING-MIB"},"2008-11-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ATM-QOS-MIB"},"2002-06-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-AAA-SESSION-MIB"},"2006-03-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-yang-smiv2"},"2012-06-22", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ENTITY-MIB"},"2005-08-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DIAL-CONTROL-MIB"},"1996-09-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IANA-ADDRESS-FAMILY-NUMBERS-MIB"},"2000-09-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-restconf-monitoring"},"2016-08-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"iana-if-type"},"2014-05-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-ldp"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-platform"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSEC-POLICY-MAP-MIB"},"2000-08-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-L3VPN-STD-MIB"},"2006-01-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CONFIG-COPY-MIB"},"2005-04-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DIFFSERV-MIB"},"2002-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VOICE-DNIS-MIB"},"2002-05-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-HSRP-EXT-MIB"},"2010-09-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"policy-types"},"2013-10-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-eigrp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IP-FORWARD-MIB"},"1996-09-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"},"2010-06-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-BGP4-MIB"},"2010-09-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"},"2010-09-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-interfaces"},"2014-05-08", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-terminal-device"},"2016-06-17", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"UDP-MIB"},"2005-05-20", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IANAifType-MIB"},"2006-03-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-cef"},"2017-05-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-nbar"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-MIB"},"2007-09-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-cli-extensions"},"2017-01-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"IPV6-FLOW-LABEL-MIB"},"2003-08-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-snmp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-igmp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-tunnel"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-netconf-notifications"},"2012-02-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-platform"},"2016-06-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-qos"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-PRODUCTS-MIB"},"2014-11-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ATM-FORUM-TC-MIB"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"TOKENRING-MIB"},"1994-10-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-neighbor"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RFC1213-MIB"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-vlan"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RSVP-MIB"},"1998-08-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"EtherLike-MIB"},"2003-09-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ATM-EXT-MIB"},"2003-01-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"RMON2-MIB"},"1996-05-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"},"2000-07-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bba-group"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-platform-transceiver"},"2016-05-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ospf"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-process-memory-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB"},"1998-02-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-policy-types"},"2016-05-12", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ip-sla-oper"},"2017-04-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-object-group"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-track"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"FRAME-RELAY-DTE-MIB"},"1997-05-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-pw"},"2016-12-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-sr"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mld"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ETHER-WIS"},"2003-09-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-acl-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-IDENTITY-TC-MIB"},"2011-12-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CEF-MIB"},"2006-01-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IP-URPF-MIB"},"2011-12-29", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-device-sensor"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"OSPF-TRAP-MIB"},"2006-11-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-PTP-MIB"},"2011-01-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DIFFSERV-DSCP-TC"},"2002-05-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-ipv6-unicast-routing"},"2015-05-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSLA-JITTER-MIB"},"2007-07-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-netconf-inactive"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mka"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-zone"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-policy"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-trustsec-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-bgp-types"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-BFD-MIB"},"2011-04-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-rpc"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-telemetry"},"2016-02-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DS1-MIB"},"1998-08-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mmode"},"2017-03-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-odm"},"2017-04-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-MPLS-LSR-EXT-STD-MIB"},"2012-04-30", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-rsvp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-features"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-wsma"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-EMBEDDED-EVENT-MGR-MIB"},"2006-11-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"confd_dyncfg"},"2017-01-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-aaa"},"2017-06-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ntp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls-static"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ip"},"2017-04-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-mpls"},"2015-11-05", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-TC-STD-MIB"},"2004-06-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ATM-MIB"},"1998-10-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-rip"},"2017-04-12", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-segment-routing"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"TOKEN-RING-RMON-MIB"},"", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-key-chain"},"2015-02-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-FTP-CLIENT-MIB"},"2006-03-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSLA-TC-MIB"},"2007-03-23", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-TC-MIB"},"2001-01-04", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"MPLS-LSR-STD-MIB"},"2004-06-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CDP-MIB"},"2005-03-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-TC-MIB"},"2012-01-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-netconf"},"2011-06-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-LICENSE-MGMT-MIB"},"2012-04-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"tailf-common-query"},"2015-03-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-parser"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls-fwd-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-MEDIA-GATEWAY-MIB"},"2009-02-25", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"common-mpls-types"},"2015-05-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-yang-library"},"2016-06-21", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-l2vpn"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-common-defs"},"2017-03-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-environment-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-qos-common"},"2015-05-09", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-l3vpn"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-DOT3-OAM-MIB"},"2006-05-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-template"},"2017-02-13", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd-oper"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-http"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-ethernet"},"2016-05-10", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-NTP-MIB"},"2006-07-31", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ATM-TC-MIB"},"1998-10-19", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IETF-MPLS-ID-STD-03-MIB"},"2012-06-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-VOICE-DIAL-CONTROL-MIB"},"2012-05-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-yang-types"},"2013-07-15", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-arp"},"2017-01-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-ENVMON-MIB"},"2003-12-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-PING-MIB"},"2001-08-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ezpm"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-OSPF-MIB"},"2003-07-18", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-IPSEC-MIB"},"2000-08-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-logging"},"2017-06-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-rib-bgp"},"2016-04-11", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-isis"},"2017-04-28", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-HSRP-MIB"},"2010-09-06", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"CISCO-CBP-TARGET-TC-MIB"},"2006-03-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-if-ip"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-line"},"2017-03-24", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-event-notifications"},"2016-10-27", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-ethernet"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-bridge-domain"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"openconfig-vlan-types"},"2016-05-26", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"DISMAN-EXPRESSION-MIB"},"2000-10-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-cts"},"2017-06-16", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-multicast"},"2017-06-01", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"ietf-diffserv-target"},"2015-04-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"Cisco-IOS-XE-vservice"},"2017-02-07", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"INT-SERV-MIB"},"1997-10-03", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"nvo"},"2015-06-02", {}, {}});
    ydk::ydk_global_capabilities.push_back(ydk::path::Capability{std::string{"cisco-policy"},"2016-03-30", {}, {}});

}


std::map<std::pair<std::string, std::string>, std::string> cisco_ios_xe_namespace_identity_lookup {
    { {"atmClpTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTransparentScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTaggingScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpNoScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoTrafficDescriptor", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTaggingScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTransparentNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingMcr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"ciscoSipUaMIBNotificationPrefix", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB"},  "CISCO-SIP-UA-MIB"},
    { {"ciscoSipUaMIBNotifications", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB"},  "CISCO-SIP-UA-MIB"},
    { {"ciscoChipSetSaint4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"pakmon", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSets", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"lightstream", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPolicyAuto", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPolicy", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoProxy", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainIpx", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"workgroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoworks", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint1", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainTcpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoUnknownRptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainDdp", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainSctpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoAgentCapability", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"temporary", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2507RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoAdmin", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoRptrGroupObjectID", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainTcpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainUdpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoConfig", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoProducts", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainClns", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCIB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"newport", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoSMB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoWsx5020RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint2", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainSctpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint3", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2505RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainCons", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"otherEnterprises", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCibProvGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoExperiment", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCibMmiGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainUdpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPIB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPartnerProducts", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoModules", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPKI", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainLocal", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"local", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPibToMib", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoMgmt", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2516RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoDomains", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoSB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"outbound", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"direction", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"inbound", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"route-path-ip-backup", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-tcp-gbl", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-tp-create", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-lbl-owner", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"label-type", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-app-fail", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-internal", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-rx-notif", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"icpm-type-iccp", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-ip-protected", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-status-disabled", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-status-not-ready", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-none", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-p-end-sock-not-synced", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-ldp-gbl", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-peer-update-not-received", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-tbl-id-mismatch", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-lbl-owner-bgp", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-rx-bad-pie", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-no-p-end-sock", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-type", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-tcp-peer", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-app-not-found", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"iccp-type-mlacp", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-prep", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-no-peer-sess", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-na", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-state", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-lbl-owner-static", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-ldp-peer", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-ip-bgp-backup", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-ldp-sync-nack", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-rx-unexp-open", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-ready", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"label-type-mpls", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-no-ctx", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-oper", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-missing-elem", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-none", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-no-hello-adj", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"down-nbr-reason", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"iccp-type", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-pp-create", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-addr-bind", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"down-nbr-reason-na", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"label-type-unknown", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-lbl-owner-ldp", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"icpm-type", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-sync-prep", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-status", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-status-ready", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-app-invalid", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-lbl-owner-none", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"down-nbr-reason-disc-hello", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"down-nbr-reason-nbr-hold", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"label-type-un-labeled", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-unexp-peer-down", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"igp-sync-down-reason-peer-update-not-done", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-ip-backup-remote", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-peer-sync-err-none", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"route-path-ip-no-flag", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-app-wait", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"ldp-nsr-peer-sync-st-wait", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-dhc-add", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-enomem", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-pp-exists", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"nsr-sync-nack-rsn-err-adj-add", "http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-ldp"},  "Cisco-IOS-XE-mpls-ldp"},
    { {"diffServTBParamTrTCMAware", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamTswTCM", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamAvgRate", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServSchedulerWRR", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSimpleTokenBucket", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServSchedulerPriority", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSrTCMBlind", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSrTCMAware", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamTrTCMBlind", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServSchedulerWFQ", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"dot3TestTdr", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3ErrorInitError", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3ErrorLoopbackError", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3TestLoopBack", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"rmonEventsV2", "urn:ietf:params:xml:ns:yang:smiv2:RMON-MIB"},  "RMON-MIB"},
    { {"snmpAuthProtocols", "urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB"},  "SNMP-FRAMEWORK-MIB"},
    { {"snmpPrivProtocols", "urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB"},  "SNMP-FRAMEWORK-MIB"},
    { {"dot5ChipSetIBM16", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5ChipSetTItms380c16", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5TestFullDuplexLoopBack", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5TestInsertFunc", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5ChipSetTItms380", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"notif-none", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"mac-limit-notification-type", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-syslog", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-syslog-and-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"eth-if-speed-100mb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-10gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-1gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-100gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-10mb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-40gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"IPRoute", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"BridgeDomain", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"BFDNeighbors", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"FlowMonitor", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"EthernetCFMStats", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"parsername", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"Diffserv", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"BGP", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"MPLSLDPNeighbors", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"PlatformSoftware", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"MPLSForwardingTable", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"MPLSStaticBinding", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"VirtualService", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"OSPF", "http://cisco.com/yang/cisco-odm"},  "cisco-odm"},
    { {"pw-sequencing-receive", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-encap-mpls", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-vlan-passthrough", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-none", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-vlan", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-encapsulation-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-both", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-dst-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-src-dst-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-dst-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-ldp", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-load-balance-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ethernet-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-src-dst-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-ether", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-bgp", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-src-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-src-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-transmit", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"bgp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"mobile", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"eigrp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"rip", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"is-is", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"action-shutdown", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"action-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"storm-control-action", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"action-drop", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"AUTO", "http://cisco.com/ns/yang/cisco-xe-openconfig-if-ethernet-ext"},  "cisco-xe-openconfig-if-ethernet-ext"},
    { {"lsp", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"static-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"bgp-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-vrf", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"nexthop-resolution-type", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-type", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-IPv6", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"isis-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-IPv4", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"ospf-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lapf", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"miox25", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"actelisMetaLOOP", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88023Csmacd", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mocaVersion1", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmLogical", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"bridge", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee8023adLag", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmVciEndPt", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"softwareLoopback", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fcipLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88025Fiber", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"regular1822", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"x25mlp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee1394", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceEMFGD", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"adsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88024TokenBus", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ultra", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"infiniband", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"x86Laps", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbAsiIn", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"radioMAC", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pdnEtherLoop1", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"imt", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluEponLogicalLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmSubInterface", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"proteon10Mbit", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aal5", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"v11", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"para", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"linegroup", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"bgppolicyaccounting", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hyperchannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"digitalWrapperOverheadChannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"lapb", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"interleave", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iana-interface-type", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"g703at64k", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmFuni", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"myrinet", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"cableDownstreamRfPort", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"otnOtu", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"opticalTransport", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluEponPhysicalUni", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceEM", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbRcsTdma", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"wwanPP2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceOverAtm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbTdm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ds1FDL", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ipOverAtm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"x25huntGroup", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"nfas", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gigabitEthernet", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"lapd", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"escon", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"srp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceFGDOS", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmVirtual", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableUpstreamChannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ss7SigLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableMaclayer", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"rs232", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"smdsIcip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"stackToStack", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frameRelayInterconnect", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dcn", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sonet", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"v35", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"async", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"g9983", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sonetVT", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"termPad", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"msdsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propMultiplexor", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluEpon", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceOverIp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propBWAp2Mp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aal2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sdsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"tdlc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ddnX25", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"vmwareNicTeam", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hippi", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frameRelayMPI", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableUpstreamRfPort", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"tr008", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mpls", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"e1", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"h323Proxy", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pon155", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee80216WMAN", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hostPad", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ethernet3Mbit", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mpegTransport", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmbond", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ciscoISLvlan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"opticalChannelGroup", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fddi", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pppMultilinkBundle", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ds3", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ds1", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propDocsWirelessDownstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"x25ple", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propPointToPointSerial", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"tunnel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propDocsWirelessMaclayer", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sipSig", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"shdsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"v36", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"g703at2mb", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableMCmtsDownstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee802154", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ipOverClaw", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"homepna", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceFXS", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"v37", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ds0", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"isdn", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aflane8023", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pdnEtherLoop2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceOverCable", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"cctEmul", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"g9982", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frameRelayService", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"compositeLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"virtualTg", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmRadio", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propWirelessP2P", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"vdsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gtp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88022llc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"proteon80Mbit", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dtm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"opticalChannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fastEtherFX", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aflane8025", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"qam", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propVirtual", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"reachDSL", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluEponOnu", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"a12MppSwitch", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee80211", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sipTg", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fibreChannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88025Dtr", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceOverFrameRelay", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"slip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propDocsWirelessUpstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hdh1822", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frf16MfrBundle", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"arcnetPlus", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hdsl2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frameRelay", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"arap", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ifPwType", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbRccUpstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dlsw", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88025CRFPInt", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"teLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"other", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceFGDEANA", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ipSwitch", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mpc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"virtualIpAddress", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"adsl2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"radsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hippiInterface", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceDID", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"macSecControlledIF", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"smdsDxi", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"rsrb", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sdlc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ppp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluELP", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"isdns", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"lmp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88025TokenRing", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mediaMailOverIp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ieee80212", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"bsc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ipOverCdlc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"plc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gfp", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ds0Bundle", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"channel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"rfc1483", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mvl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"idsl", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"coffee", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"rfc877x25", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"digitalPowerline", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"localTalk", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"nsip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"transpHdlc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"capwapDot11Profile", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceEBS", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fastEther", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluGponPhysicalUni", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"vmwareVirtualNic", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"q2931", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aluGponOnu", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sonetPath", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"vdsl2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gr303IDT", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ethernetCsmacd", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"primaryISDN", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ilan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mplsTunnel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"eon", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"usb", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"cnr", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"arcnet", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hssi", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"l3ipvlan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ifVfiType", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sonetOverheadChannel", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"mfSigLink", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"sixToFour", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"l3ipxvlan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"fast", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"aviciOpticalEther", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hdlc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"cblVectaStar", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"x213", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ipForward", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"capwapDot11Bss", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"otnOdu", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmDxi", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"rpr", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frDlciEndPt", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gr303RDT", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"gpon", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"wwanPP", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceEncap", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableDownstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"starLan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"isup", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"modem", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ibm370parChan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propAtm", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"capwapWtpVirtualRadio", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"l2vlan", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"bits", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pon622", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"eplrs", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"iso88026Man", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"frForward", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"g9981", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbRcsMacLayer", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"h323Gatekeeper", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"if-gsn", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ip", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"basicISDN", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"propCnls", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"hiperlan2", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"qllc", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"atmIma", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbAsiOut", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"pos", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbRccMacLayer", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"dvbRccDownstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"macSecUncontrolledIF", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"isdnu", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"voiceFXO", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"econet", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"docsCableUpstream", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"ces", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"adsl2plus", "urn:ietf:params:xml:ns:yang:iana-if-type"},  "iana-if-type"},
    { {"always-drop", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"marking", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"tail-drop", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"min-rate", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"meter-action-set", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"max-rate", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"algorithmic-drop", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"meter-action-drop", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"meter", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"random-detect", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"meter-action-type", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"drop-type", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"priority", "urn:ietf:params:xml:ns:yang:ietf-diffserv-action"},  "ietf-diffserv-action"},
    { {"source-ip-address", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"destination-ip-address", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"match-any-filter", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"classifier-entry-filter-operation-type", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"match-all-filter", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"dscp", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"destination-port", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"protocol", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"filter-type", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"source-port", "urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier"},  "ietf-diffserv-classifier"},
    { {"action-type", "urn:ietf:params:xml:ns:yang:ietf-diffserv-policy"},  "ietf-diffserv-policy"},
    { {"direction", "urn:ietf:params:xml:ns:yang:ietf-diffserv-target"},  "ietf-diffserv-target"},
    { {"outbound", "urn:ietf:params:xml:ns:yang:ietf-diffserv-target"},  "ietf-diffserv-target"},
    { {"inbound", "urn:ietf:params:xml:ns:yang:ietf-diffserv-target"},  "ietf-diffserv-target"},
    { {"other", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"in-error", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"subscription-stream-status", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error-no-such-subscription", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"encode-json", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error-insufficient-resources", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"encodings", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"subscription-deleted", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"NETCONF", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"subscription-errors", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"no-resources", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error-no-such-option", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error-other", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"encode-xml", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"inactive", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"stream", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"netconf", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"transport", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"ok", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"active", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"internal-error", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"suspended", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"error-configured-subscription", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"subscription-result", "urn:ietf:params:xml:ns:yang:ietf-event-notifications"},  "ietf-event-notifications"},
    { {"interface-type", "urn:ietf:params:xml:ns:yang:ietf-interfaces"},  "ietf-interfaces"},
    { {"ipv4-unicast", "urn:ietf:params:xml:ns:yang:ietf-ipv4-unicast-routing"},  "ietf-ipv4-unicast-routing"},
    { {"ipv6-unicast", "urn:ietf:params:xml:ns:yang:ietf-ipv6-unicast-routing"},  "ietf-ipv6-unicast-routing"},
    { {"rnc", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"transport", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"netconf-beep", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"netconf-ssh", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"yin", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"yang", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"schema-format", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"netconf-soap-over-beep", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"xsd", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"netconf-tls", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"rng", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"netconf-soap-over-https", "urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring"},  "ietf-netconf-monitoring"},
    { {"normal", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"ships-in-the-night", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"if-link-type-virtual-link", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"ospfv3", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"if-link-type", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"ospf", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"if-link-type-sham-link", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"if-link-type-normal", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"area-type", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"nssa", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"ospfv2", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"stub", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"operation-mode", "urn:ietf:params:xml:ns:yang:ietf-ospf"},  "ietf-ospf"},
    { {"ipv4", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"static", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"vrf-routing-instance", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"ipv6", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"address-family", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"routing-instance", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"direct", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"default-routing-instance", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"routing-protocol", "urn:ietf:params:xml:ns:yang:ietf-routing"},  "ietf-routing"},
    { {"daemon", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"cron2", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"console", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local0", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local6", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local3", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"ftp", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local2", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"authpriv", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"audit", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"mail", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"lpr", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"uucp", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local1", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"ntp", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"user", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"kern", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"auth", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"syslog-facility", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"cron", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local7", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local5", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"news", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"syslog", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"local4", "urn:ietf:params:xml:ns:yang:ietf-syslog-types"},  "ietf-syslog-types"},
    { {"custom-stream", "urn:ietf:params:xml:ns:yang:ietf-yang-push"},  "ietf-yang-push"},
    { {"yang-push", "urn:ietf:params:xml:ns:yang:ietf-yang-push"},  "ietf-yang-push"},
    { {"http2", "urn:ietf:params:xml:ns:yang:ietf-yang-push"},  "ietf-yang-push"},
    { {"error-data-not-authorized", "urn:ietf:params:xml:ns:yang:ietf-yang-push"},  "ietf-yang-push"},
    { {"object-identity", "urn:ietf:params:xml:ns:yang:ietf-yang-smiv2"},  "ietf-yang-smiv2"},
    { {"overlay-encap-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"vxlan-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"nvgre-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"PRIVATE_AS_REMOVE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_ADVERTISE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ASN32", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_CAPABILITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_WELL_KNOWN_STD_COMMUNITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_EVPN", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"REMOVE_PRIVATE_AS_OPTION", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"PRIVATE_AS_REPLACE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_VPLS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"GRACEFUL_RESTART", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"MPBGP", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"AFI_SAFI_TYPE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT_SUBCONFED", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NOPEER", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ADD_PATHS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ROUTE_REFRESH", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"SPEED_50GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_UNKNOWN", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_10MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_1GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_25GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"ETHERNET_SPEED", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_10GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_40GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"DROP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LOCAL_DEFINED_NEXT_HOP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LOCAL_LINK", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"path-computation-method", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"locally-computed", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"externally-queried", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"explicitly-defined", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"lsp-oper-status", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"lsp-role", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-ldp", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"INGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"tunnel-admin-status", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2P", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"IMPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"tunnel-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2MP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"link-node-protection-requested", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EXPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"protection-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-rsvp", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-sr", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"unprotected", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-protocol", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"null-label-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TRANSIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"link-protection-requested", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TRANSCEIVER", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"POWER_SUPPLY", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"MODULE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"LINECARD", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CHASSIS", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPERATING_SYSTEM", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_SOFTWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"PORT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_HARDWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"BACKPLANE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"SENSOR", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"FAN", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CPU", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"INSTALL_PROTOCOL_TYPE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_GE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_LE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF3", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"BGP", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_EQ", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_COMPARISON", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"LOCAL_AGGREGATE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ISIS", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"STATIC", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"DIRECTLY_CONNECTED", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"INVALID_AS_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"REJECTED_IMPORT_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"NEXTHOP_COST_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ROUTE_REASON", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"AS_PATH_LONGER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_ROUTER_ID", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"LOCAL_PREF_LOWER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"PREFER_EXTERNAL", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ORIGINATOR", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"ORIGIN_TYPE_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_PEER_ADDRESS", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"MED_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_BESTPATH", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CLUSTER_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CONFED", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"TRIB_RATE_2.5G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC192", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2_ACO", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM16", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTUCN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM256", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_LAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_1G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"FIBER_CONNECTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTHER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM64", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_100G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LOGICAL_ELEMENT_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRANSCEIVER_FORM_FACTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC768", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETHERNET_PMD_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"X2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CWDM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100G_MLG", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP28", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"XFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ZR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_40G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_ACC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"NON_PLUGGABLE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"MPO_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ETHERNET", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R5", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1S1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OPTICAL_CHANNEL", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC48", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D1", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CLR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU1E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_WAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_AOC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_40GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_LRM", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP_PLUS", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR10", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_RATE_CLASS_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_1GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_10G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ADDRESS_FAMILY", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV6", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV4", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"TPID_0x8100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x8A88", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x9100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_TYPES", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0X9200", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"sm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"group-to-rp-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"ssm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"other-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"pim-bidir-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"asm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"dm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"access-control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"prec", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"src-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"policy-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-de", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"discard-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-ip", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"wlan-user-priority", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"application", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"perf-mon", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-map", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-length", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-tag", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ip-rtp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"input-interface", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-vci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-group", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"metadata", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-imp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-clp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-record", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"pbr", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dst-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-dlci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vpls", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-top", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"discard-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-ip", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"wlan-user-priority", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"application", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"perf-mon", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-map", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-length", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-tag", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ip-rtp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"input-interface", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-vci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-group", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"metadata", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-imp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-clp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-record", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"src-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dst-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-dlci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vpls", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-top", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"pbr", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"prec", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"policy-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-de", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"rest-https", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"netconf-tcp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"webui-https", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"cli-ssh", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"rest-http", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"snmp-udp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"cli-console", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"webui-http", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"cli-tcp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
};

}

