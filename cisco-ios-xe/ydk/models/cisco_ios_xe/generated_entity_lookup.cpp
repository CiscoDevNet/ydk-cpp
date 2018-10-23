#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace cisco_ios_xe
{

void cisco_ios_xe_augment_lookup_tables()
{

    ydk::ydk_global_capabilities_lookup_tables.clear();
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-policy"), ydk::path::Capability{std::string{"cisco-policy"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:cisco-policy"), ydk::path::Capability{std::string{"cisco-policy"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-atm"), ydk::path::Capability{std::string{"Cisco-IOS-XE-atm"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-atm"), ydk::path::Capability{std::string{"Cisco-IOS-XE-atm"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSEC-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-MIB"}, "2000-08-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSEC-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-MIB"}, "2000-08-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-qos"), ydk::path::Capability{std::string{"Cisco-IOS-XE-qos"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-qos"), ydk::path::Capability{std::string{"Cisco-IOS-XE-qos"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SIP-UA-MIB"), ydk::path::Capability{std::string{"CISCO-SIP-UA-MIB"}, "2004-02-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB"), ydk::path::Capability{std::string{"CISCO-SIP-UA-MIB"}, "2004-02-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SONET-MIB"), ydk::path::Capability{std::string{"SONET-MIB"}, "2003-08-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SONET-MIB"), ydk::path::Capability{std::string{"SONET-MIB"}, "2003-08-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-FLASH-MIB"), ydk::path::Capability{std::string{"CISCO-FLASH-MIB"}, "2013-08-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-FLASH-MIB"), ydk::path::Capability{std::string{"CISCO-FLASH-MIB"}, "2013-08-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ENTITY-MIB"), ydk::path::Capability{std::string{"ENTITY-MIB"}, "2005-08-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ENTITY-MIB"), ydk::path::Capability{std::string{"ENTITY-MIB"}, "2005-08-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-meta-extensions"), ydk::path::Capability{std::string{"tailf-meta-extensions"}, "2017-03-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VTP-MIB"), ydk::path::Capability{std::string{"CISCO-VTP-MIB"}, "2013-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VTP-MIB"), ydk::path::Capability{std::string{"CISCO-VTP-MIB"}, "2013-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-umbrella"), ydk::path::Capability{std::string{"Cisco-IOS-XE-umbrella"}, "2018-05-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-umbrella"), ydk::path::Capability{std::string{"Cisco-IOS-XE-umbrella"}, "2018-05-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-fib-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-fib-oper"}, "2018-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-fib-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-fib-oper"}, "2018-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-service-discovery"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-discovery"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-service-discovery"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-discovery"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VOICE-DNIS-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-DNIS-MIB"}, "2002-05-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VOICE-DNIS-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-DNIS-MIB"}, "2002-05-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bfd-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd-oper"}, "2017-09-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bfd-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd-oper"}, "2017-09-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mpls"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vtp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vtp"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vtp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vtp"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-smart-license-errors"), ydk::path::Capability{std::string{"cisco-smart-license-errors"}, "2017-10-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-ATM2-PVCTRAP-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB"}, "1998-02-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-ATM2-PVCTRAP-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB"}, "1998-02-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IANA-RTPROTO-MIB"), ydk::path::Capability{std::string{"IANA-RTPROTO-MIB"}, "2000-09-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IANA-RTPROTO-MIB"), ydk::path::Capability{std::string{"IANA-RTPROTO-MIB"}, "2000-09-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VLAN-MEMBERSHIP-MIB"), ydk::path::Capability{std::string{"CISCO-VLAN-MEMBERSHIP-MIB"}, "2007-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VLAN-MEMBERSHIP-MIB"), ydk::path::Capability{std::string{"CISCO-VLAN-MEMBERSHIP-MIB"}, "2007-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-service-routing"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-routing"}, "2017-07-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-service-routing"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-routing"}, "2017-07-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-tcam-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-tcam-oper"}, "2017-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-tcam-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-tcam-oper"}, "2017-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("OSPF-TRAP-MIB"), ydk::path::Capability{std::string{"OSPF-TRAP-MIB"}, "2006-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:OSPF-TRAP-MIB"), ydk::path::Capability{std::string{"OSPF-TRAP-MIB"}, "2006-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IPV6-FLOW-LABEL-MIB"), ydk::path::Capability{std::string{"IPV6-FLOW-LABEL-MIB"}, "2003-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IPV6-FLOW-LABEL-MIB"), ydk::path::Capability{std::string{"IPV6-FLOW-LABEL-MIB"}, "2003-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-LICENSE-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-LICENSE-MGMT-MIB"}, "2012-04-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-LICENSE-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-LICENSE-MGMT-MIB"}, "2012-04-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nbar"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nbar"}, "2018-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nbar"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nbar"}, "2018-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-diagnostics"), ydk::path::Capability{std::string{"Cisco-IOS-XE-diagnostics"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-diagnostics"), ydk::path::Capability{std::string{"Cisco-IOS-XE-diagnostics"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RFC-1215"), ydk::path::Capability{std::string{"RFC-1215"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RFC-1215"), ydk::path::Capability{std::string{"RFC-1215"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IANAifType-MIB"), ydk::path::Capability{std::string{"IANAifType-MIB"}, "2006-03-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IANAifType-MIB"), ydk::path::Capability{std::string{"IANAifType-MIB"}, "2006-03-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("BRIDGE-MIB"), ydk::path::Capability{std::string{"BRIDGE-MIB"}, "2005-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:BRIDGE-MIB"), ydk::path::Capability{std::string{"BRIDGE-MIB"}, "2005-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-UNIFIED-FIREWALL-MIB"), ydk::path::Capability{std::string{"CISCO-UNIFIED-FIREWALL-MIB"}, "2005-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-UNIFIED-FIREWALL-MIB"), ydk::path::Capability{std::string{"CISCO-UNIFIED-FIREWALL-MIB"}, "2005-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"), ydk::path::Capability{std::string{"CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"}, "2013-07-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"), ydk::path::Capability{std::string{"CISCO-VLAN-IFTABLE-RELATIONSHIP-MIB"}, "2013-07-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-ISIS-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-ISIS-MIB"}, "2005-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-ISIS-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-ISIS-MIB"}, "2005-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-NETSYNC-MIB"), ydk::path::Capability{std::string{"CISCO-NETSYNC-MIB"}, "2010-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-NETSYNC-MIB"), ydk::path::Capability{std::string{"CISCO-NETSYNC-MIB"}, "2010-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-dhcp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dhcp"}, "2018-06-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-dhcp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dhcp"}, "2018-06-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPMROUTE-MIB"), ydk::path::Capability{std::string{"CISCO-IPMROUTE-MIB"}, "2005-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPMROUTE-MIB"), ydk::path::Capability{std::string{"CISCO-IPMROUTE-MIB"}, "2005-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-license"), ydk::path::Capability{std::string{"Cisco-IOS-XE-license"}, "2017-12-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-dot1x"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dot1x"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-dot1x"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dot1x"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-acl-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-acl-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-acl-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-acl-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bgp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bgp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-segment-routing"), ydk::path::Capability{std::string{"Cisco-IOS-XE-segment-routing"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-segment-routing"), ydk::path::Capability{std::string{"Cisco-IOS-XE-segment-routing"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-BULK-FILE-MIB"), ydk::path::Capability{std::string{"CISCO-BULK-FILE-MIB"}, "2002-06-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-BULK-FILE-MIB"), ydk::path::Capability{std::string{"CISCO-BULK-FILE-MIB"}, "2002-06-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-template"), ydk::path::Capability{std::string{"Cisco-IOS-XE-template"}, "2017-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/ios-xe/template"), ydk::path::Capability{std::string{"Cisco-IOS-XE-template"}, "2017-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nam"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nam"}, "2017-12-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nam"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nam"}, "2017-12-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-udld"), ydk::path::Capability{std::string{"Cisco-IOS-XE-udld"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-udld"), ydk::path::Capability{std::string{"Cisco-IOS-XE-udld"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("PerfHist-TC-MIB"), ydk::path::Capability{std::string{"PerfHist-TC-MIB"}, "1998-11-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:PerfHist-TC-MIB"), ydk::path::Capability{std::string{"PerfHist-TC-MIB"}, "1998-11-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-diffserv-target-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-diffserv-target-oper"}, "2017-02-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-diffserv-target-oper"}, "2017-02-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-arp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-arp-oper"}, "2017-12-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-arp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-arp-oper"}, "2017-12-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-process-cpu-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-process-cpu-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-process-cpu-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-process-cpu-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-L2VPN-MIB"), ydk::path::Capability{std::string{"DOCS-L2VPN-MIB"}, "2006-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-L2VPN-MIB"), ydk::path::Capability{std::string{"DOCS-L2VPN-MIB"}, "2006-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSLA-ECHO-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-ECHO-MIB"}, "2007-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSLA-ECHO-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-ECHO-MIB"}, "2007-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-logging"), ydk::path::Capability{std::string{"Cisco-IOS-XE-logging"}, "2018-03-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-coap"), ydk::path::Capability{std::string{"Cisco-IOS-XE-coap"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-coap"), ydk::path::Capability{std::string{"Cisco-IOS-XE-coap"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-UBE-MIB"), ydk::path::Capability{std::string{"CISCO-UBE-MIB"}, "2010-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-UBE-MIB"), ydk::path::Capability{std::string{"CISCO-UBE-MIB"}, "2010-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-sanet"), ydk::path::Capability{std::string{"Cisco-IOS-XE-sanet"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-sanet"), ydk::path::Capability{std::string{"Cisco-IOS-XE-sanet"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mdt-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-oper"}, "2018-03-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mdt-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-oper"}, "2018-03-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-TE-STD-MIB"), ydk::path::Capability{std::string{"MPLS-TE-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-TE-STD-MIB"), ydk::path::Capability{std::string{"MPLS-TE-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vservice"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vservice"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vservice"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vservice"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-MPLS-LSR-EXT-STD-MIB"), ydk::path::Capability{std::string{"CISCO-MPLS-LSR-EXT-STD-MIB"}, "2012-04-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-MPLS-LSR-EXT-STD-MIB"), ydk::path::Capability{std::string{"CISCO-MPLS-LSR-EXT-STD-MIB"}, "2012-04-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-LSR-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LSR-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-LSR-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LSR-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-FIREWALL-TC"), ydk::path::Capability{std::string{"CISCO-FIREWALL-TC"}, "2006-03-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-FIREWALL-TC"), ydk::path::Capability{std::string{"CISCO-FIREWALL-TC"}, "2006-03-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENVMON-MIB"), ydk::path::Capability{std::string{"CISCO-ENVMON-MIB"}, "2003-12-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENVMON-MIB"), ydk::path::Capability{std::string{"CISCO-ENVMON-MIB"}, "2003-12-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ios-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ios-common-oper"}, "2018-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ios-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ios-common-oper"}, "2018-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CLAB-DEF-MIB"), ydk::path::Capability{std::string{"CLAB-DEF-MIB"}, "2012-08-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CLAB-DEF-MIB"), ydk::path::Capability{std::string{"CLAB-DEF-MIB"}, "2012-08-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("HCNUM-TC"), ydk::path::Capability{std::string{"HCNUM-TC"}, "2000-06-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:HCNUM-TC"), ydk::path::Capability{std::string{"HCNUM-TC"}, "2000-06-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-EMBEDDED-EVENT-MGR-MIB"), ydk::path::Capability{std::string{"CISCO-EMBEDDED-EVENT-MGR-MIB"}, "2006-11-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-EMBEDDED-EVENT-MGR-MIB"), ydk::path::Capability{std::string{"CISCO-EMBEDDED-EVENT-MGR-MIB"}, "2006-11-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DS1-MIB"), ydk::path::Capability{std::string{"DS1-MIB"}, "1998-08-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DS1-MIB"), ydk::path::Capability{std::string{"DS1-MIB"}, "1998-08-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mvrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mvrp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mvrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mvrp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Q-BRIDGE-MIB"), ydk::path::Capability{std::string{"Q-BRIDGE-MIB"}, "2006-01-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:Q-BRIDGE-MIB"), ydk::path::Capability{std::string{"Q-BRIDGE-MIB"}, "2006-01-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CDP-MIB"), ydk::path::Capability{std::string{"CISCO-CDP-MIB"}, "2005-03-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CDP-MIB"), ydk::path::Capability{std::string{"CISCO-CDP-MIB"}, "2005-03-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DIFFSERV-DSCP-TC"), ydk::path::Capability{std::string{"DIFFSERV-DSCP-TC"}, "2002-05-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-DSCP-TC"), ydk::path::Capability{std::string{"DIFFSERV-DSCP-TC"}, "2002-05-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("UDP-MIB"), ydk::path::Capability{std::string{"UDP-MIB"}, "2005-05-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:UDP-MIB"), ydk::path::Capability{std::string{"UDP-MIB"}, "2005-05-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-eigrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eigrp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-eigrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eigrp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-TDM-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-TDM-MIB"}, "2006-07-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-TDM-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-TDM-MIB"}, "2006-07-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RFC1213-MIB"), ydk::path::Capability{std::string{"RFC1213-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RFC1213-MIB"), ydk::path::Capability{std::string{"RFC1213-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-platform-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-oper"}, "2017-10-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-platform-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-oper"}, "2017-10-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-QFP-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-QFP-MIB"}, "2014-06-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-QFP-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-QFP-MIB"}, "2014-06-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cdp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp-oper"}, "2017-09-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cdp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp-oper"}, "2017-09-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-storm-control"), ydk::path::Capability{std::string{"cisco-storm-control"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:cisco-storm-control"), ydk::path::Capability{std::string{"cisco-storm-control"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-lisp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lisp-oper"}, "2018-02-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-lisp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lisp-oper"}, "2018-02-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSEC-POLICY-MAP-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-POLICY-MAP-MIB"}, "2000-08-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSEC-POLICY-MAP-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-POLICY-MAP-MIB"}, "2000-08-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-LDP-GENERIC-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LDP-GENERIC-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-LDP-GENERIC-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LDP-GENERIC-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VPDN-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-VPDN-MGMT-MIB"}, "2009-06-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VPDN-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-VPDN-MGMT-MIB"}, "2009-06-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("FRAME-RELAY-DTE-MIB"), ydk::path::Capability{std::string{"FRAME-RELAY-DTE-MIB"}, "1997-05-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:FRAME-RELAY-DTE-MIB"), ydk::path::Capability{std::string{"FRAME-RELAY-DTE-MIB"}, "1997-05-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-MIB"}, "2004-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-MIB"}, "2004-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-self-mgmt"), ydk::path::Capability{std::string{"cisco-self-mgmt"}, "2016-05-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/yang/cisco-self-mgmt"), ydk::path::Capability{std::string{"cisco-self-mgmt"}, "2016-05-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-aaa-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-aaa-oper"}, "2018-04-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-aaa-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-aaa-oper"}, "2018-04-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cef"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cef"}, "2017-05-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cef"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cef"}, "2017-05-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bgp-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-common-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bgp-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-common-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CABLE-SPECTRUM-MIB"), ydk::path::Capability{std::string{"CISCO-CABLE-SPECTRUM-MIB"}, "2011-04-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CABLE-SPECTRUM-MIB"), ydk::path::Capability{std::string{"CISCO-CABLE-SPECTRUM-MIB"}, "2011-04-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-PING-MIB"), ydk::path::Capability{std::string{"CISCO-PING-MIB"}, "2001-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-PING-MIB"), ydk::path::Capability{std::string{"CISCO-PING-MIB"}, "2001-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-avb"), ydk::path::Capability{std::string{"Cisco-IOS-XE-avb"}, "2017-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-avb"), ydk::path::Capability{std::string{"Cisco-IOS-XE-avb"}, "2017-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ATM-QOS-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-QOS-MIB"}, "2002-06-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ATM-QOS-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-QOS-MIB"}, "2002-06-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-platform-software-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-software-oper"}, "2018-03-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-platform-software-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform-software-oper"}, "2018-03-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ethernet"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ethernet"}, "2018-04-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ethernet"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ethernet"}, "2018-04-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ATM-TC-MIB"), ydk::path::Capability{std::string{"ATM-TC-MIB"}, "1998-10-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"), ydk::path::Capability{std::string{"ATM-TC-MIB"}, "1998-10-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ospf-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospf-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ospf-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospf-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-HSRP-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-HSRP-EXT-MIB"}, "2010-09-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-HSRP-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-HSRP-EXT-MIB"}, "2010-09-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ETHER-WIS"), ydk::path::Capability{std::string{"ETHER-WIS"}, "2003-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ETHER-WIS"), ydk::path::Capability{std::string{"ETHER-WIS"}, "2003-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-MPLS-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-MPLS-MIB"}, "2003-02-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-MPLS-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-MPLS-MIB"}, "2003-02-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-common-query"), ydk::path::Capability{std::string{"tailf-common-query"}, "2017-12-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/common/query"), ydk::path::Capability{std::string{"tailf-common-query"}, "2017-12-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-MEDIA-GATEWAY-MIB"), ydk::path::Capability{std::string{"CISCO-MEDIA-GATEWAY-MIB"}, "2009-02-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-MEDIA-GATEWAY-MIB"), ydk::path::Capability{std::string{"CISCO-MEDIA-GATEWAY-MIB"}, "2009-02-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-SUBMGT3-MIB"), ydk::path::Capability{std::string{"DOCS-SUBMGT3-MIB"}, "2007-05-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-SUBMGT3-MIB"), ydk::path::Capability{std::string{"DOCS-SUBMGT3-MIB"}, "2007-05-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CEF-TC"), ydk::path::Capability{std::string{"CISCO-CEF-TC"}, "2005-09-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CEF-TC"), ydk::path::Capability{std::string{"CISCO-CEF-TC"}, "2005-09-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DYNAMIC-TEMPLATE-TC-MIB"), ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-TC-MIB"}, "2012-01-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DYNAMIC-TEMPLATE-TC-MIB"), ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-TC-MIB"}, "2012-01-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IPMROUTE-STD-MIB"), ydk::path::Capability{std::string{"IPMROUTE-STD-MIB"}, "2000-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IPMROUTE-STD-MIB"), ydk::path::Capability{std::string{"IPMROUTE-STD-MIB"}, "2000-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-trustsec-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-trustsec-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-trustsec-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-trustsec-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-track"), ydk::path::Capability{std::string{"Cisco-IOS-XE-track"}, "2017-04-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-track"), ydk::path::Capability{std::string{"Cisco-IOS-XE-track"}, "2017-04-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-device-sensor"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-sensor"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-device-sensor"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-sensor"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-igmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-igmp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-igmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-igmp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SUBSCRIBER-SESSION-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-MIB"}, "2012-08-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SUBSCRIBER-SESSION-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-MIB"}, "2012-08-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-card"), ydk::path::Capability{std::string{"Cisco-IOS-XE-card"}, "2018-03-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-card"), ydk::path::Capability{std::string{"Cisco-IOS-XE-card"}, "2018-03-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IP-URPF-MIB"), ydk::path::Capability{std::string{"CISCO-IP-URPF-MIB"}, "2011-12-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IP-URPF-MIB"), ydk::path::Capability{std::string{"CISCO-IP-URPF-MIB"}, "2011-12-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IMAGE-LICENSE-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-IMAGE-LICENSE-MGMT-MIB"}, "2007-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IMAGE-LICENSE-MGMT-MIB"), ydk::path::Capability{std::string{"CISCO-IMAGE-LICENSE-MGMT-MIB"}, "2007-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RFC-1212"), ydk::path::Capability{std::string{"RFC-1212"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RFC-1212"), ydk::path::Capability{std::string{"RFC-1212"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SNMPv2-TC"), ydk::path::Capability{std::string{"SNMPv2-TC"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SNMPv2-TC"), ydk::path::Capability{std::string{"SNMPv2-TC"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VOICE-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-DIAL-CONTROL-MIB"}, "2012-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VOICE-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-DIAL-CONTROL-MIB"}, "2012-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-object-group"), ydk::path::Capability{std::string{"Cisco-IOS-XE-object-group"}, "2017-07-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-object-group"), ydk::path::Capability{std::string{"Cisco-IOS-XE-object-group"}, "2017-07-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-breakout-port-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-breakout-port-oper"}, "2018-01-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-breakout-port-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-breakout-port-oper"}, "2018-01-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-OSPF-MIB"), ydk::path::Capability{std::string{"CISCO-OSPF-MIB"}, "2003-07-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-OSPF-MIB"), ydk::path::Capability{std::string{"CISCO-OSPF-MIB"}, "2003-07-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ENTITY-SENSOR-MIB"), ydk::path::Capability{std::string{"ENTITY-SENSOR-MIB"}, "2002-12-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ENTITY-SENSOR-MIB"), ydk::path::Capability{std::string{"ENTITY-SENSOR-MIB"}, "2002-12-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-VENDORTYPE-OID-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-VENDORTYPE-OID-MIB"}, "2014-12-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-VENDORTYPE-OID-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-VENDORTYPE-OID-MIB"}, "2014-12-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CONTEXT-MAPPING-MIB"), ydk::path::Capability{std::string{"CISCO-CONTEXT-MAPPING-MIB"}, "2008-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CONTEXT-MAPPING-MIB"), ydk::path::Capability{std::string{"CISCO-CONTEXT-MAPPING-MIB"}, "2008-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-flow"), ydk::path::Capability{std::string{"Cisco-IOS-XE-flow"}, "2018-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-flow"), ydk::path::Capability{std::string{"Cisco-IOS-XE-flow"}, "2018-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-DIAL-CONTROL-MIB"}, "2005-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-DIAL-CONTROL-MIB"}, "2005-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-BGP4-MIB"), ydk::path::Capability{std::string{"CISCO-BGP4-MIB"}, "2010-09-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-BGP4-MIB"), ydk::path::Capability{std::string{"CISCO-BGP4-MIB"}, "2010-09-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-l3vpn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-l3vpn"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-l3vpn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-l3vpn"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-IETF-BPI2-MIB"), ydk::path::Capability{std::string{"DOCS-IETF-BPI2-MIB"}, "2004-09-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-IETF-BPI2-MIB"), ydk::path::Capability{std::string{"DOCS-IETF-BPI2-MIB"}, "2004-09-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mdt-common-defs"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-common-defs"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mdt-common-defs"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-common-defs"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-controller"), ydk::path::Capability{std::string{"Cisco-IOS-XE-controller"}, "2018-04-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-controller"), ydk::path::Capability{std::string{"Cisco-IOS-XE-controller"}, "2018-04-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ppp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ppp-oper"}, "2018-02-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ppp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ppp-oper"}, "2018-02-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SNMP-PROXY-MIB"), ydk::path::Capability{std::string{"SNMP-PROXY-MIB"}, "2002-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SNMP-PROXY-MIB"), ydk::path::Capability{std::string{"SNMP-PROXY-MIB"}, "2002-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-otv"), ydk::path::Capability{std::string{"Cisco-IOS-XE-otv"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-otv"), ydk::path::Capability{std::string{"Cisco-IOS-XE-otv"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SMI"), ydk::path::Capability{std::string{"CISCO-SMI"}, "2012-08-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"), ydk::path::Capability{std::string{"CISCO-SMI"}, "2012-08-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cellular"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cellular"}, "2017-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cellular"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cellular"}, "2017-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"), ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"}, "2000-07-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"), ydk::path::Capability{std::string{"CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"}, "2000-07-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-acl"), ydk::path::Capability{std::string{"Cisco-IOS-XE-acl"}, "2018-05-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-acl"), ydk::path::Capability{std::string{"Cisco-IOS-XE-acl"}, "2018-05-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-MPLS-ID-STD-03-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-MPLS-ID-STD-03-MIB"}, "2012-06-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-MPLS-ID-STD-03-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-MPLS-ID-STD-03-MIB"}, "2012-06-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("TOKEN-RING-RMON-MIB"), ydk::path::Capability{std::string{"TOKEN-RING-RMON-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:TOKEN-RING-RMON-MIB"), ydk::path::Capability{std::string{"TOKEN-RING-RMON-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSLA-JITTER-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-JITTER-MIB"}, "2007-07-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSLA-JITTER-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-JITTER-MIB"}, "2007-07-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vlan"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vlan"}, "2018-03-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vlan"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vlan"}, "2018-03-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DISMAN-EVENT-MIB"), ydk::path::Capability{std::string{"DISMAN-EVENT-MIB"}, "2000-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DISMAN-EVENT-MIB"), ydk::path::Capability{std::string{"DISMAN-EVENT-MIB"}, "2000-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-PROCESS-MIB"), ydk::path::Capability{std::string{"CISCO-PROCESS-MIB"}, "2011-06-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-PROCESS-MIB"), ydk::path::Capability{std::string{"CISCO-PROCESS-MIB"}, "2011-06-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-TAP2-MIB"), ydk::path::Capability{std::string{"CISCO-TAP2-MIB"}, "2009-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-TAP2-MIB"), ydk::path::Capability{std::string{"CISCO-TAP2-MIB"}, "2009-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-PRODUCTS-MIB"), ydk::path::Capability{std::string{"CISCO-PRODUCTS-MIB"}, "2014-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-PRODUCTS-MIB"), ydk::path::Capability{std::string{"CISCO-PRODUCTS-MIB"}, "2014-11-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ATM-FORUM-TC-MIB"), ydk::path::Capability{std::string{"ATM-FORUM-TC-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ATM-FORUM-TC-MIB"), ydk::path::Capability{std::string{"ATM-FORUM-TC-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-RADIUS-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-RADIUS-EXT-MIB"}, "2010-05-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-RADIUS-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-RADIUS-EXT-MIB"}, "2010-05-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-eta"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eta"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-eta"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eta"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("INTEGRATED-SERVICES-MIB"), ydk::path::Capability{std::string{"INTEGRATED-SERVICES-MIB"}, "1995-11-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:INTEGRATED-SERVICES-MIB"), ydk::path::Capability{std::string{"INTEGRATED-SERVICES-MIB"}, "1995-11-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-RF-MIB"), ydk::path::Capability{std::string{"CISCO-RF-MIB"}, "2005-09-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-RF-MIB"), ydk::path::Capability{std::string{"CISCO-RF-MIB"}, "2005-09-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IMAGE-MIB"), ydk::path::Capability{std::string{"CISCO-IMAGE-MIB"}, "1995-08-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IMAGE-MIB"), ydk::path::Capability{std::string{"CISCO-IMAGE-MIB"}, "1995-08-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ip"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ip"}, "2018-05-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ip-sla-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ip-sla-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ip-sla-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ip-sla-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-interface-common"), ydk::path::Capability{std::string{"Cisco-IOS-XE-interface-common"}, "2018-02-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-interface-common"), ydk::path::Capability{std::string{"Cisco-IOS-XE-interface-common"}, "2018-02-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("TUNNEL-MIB"), ydk::path::Capability{std::string{"TUNNEL-MIB"}, "2005-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:TUNNEL-MIB"), ydk::path::Capability{std::string{"TUNNEL-MIB"}, "2005-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DATA-COLLECTION-MIB"), ydk::path::Capability{std::string{"CISCO-DATA-COLLECTION-MIB"}, "2002-10-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DATA-COLLECTION-MIB"), ydk::path::Capability{std::string{"CISCO-DATA-COLLECTION-MIB"}, "2002-10-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-VPN-MIB"), ydk::path::Capability{std::string{"MPLS-VPN-MIB"}, "2001-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-VPN-MIB"), ydk::path::Capability{std::string{"MPLS-VPN-MIB"}, "2001-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-spanning-tree-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-spanning-tree-oper"}, "2017-08-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-spanning-tree-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-spanning-tree-oper"}, "2017-08-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-snmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-snmp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-snmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-snmp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-xsd-types"), ydk::path::Capability{std::string{"tailf-xsd-types"}, "2009-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://www.w3.org/2001/XMLSchema"), ydk::path::Capability{std::string{"tailf-xsd-types"}, "2009-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ios-events-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ios-events-oper"}, "2017-10-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ios-events-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ios-events-oper"}, "2017-10-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("BGP4-MIB"), ydk::path::Capability{std::string{"BGP4-MIB"}, "1994-05-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:BGP4-MIB"), ydk::path::Capability{std::string{"BGP4-MIB"}, "1994-05-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RFC1155-SMI"), ydk::path::Capability{std::string{"RFC1155-SMI"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RFC1155-SMI"), ydk::path::Capability{std::string{"RFC1155-SMI"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CABLE-WIDEBAND-MIB"), ydk::path::Capability{std::string{"CISCO-CABLE-WIDEBAND-MIB"}, "2011-01-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CABLE-WIDEBAND-MIB"), ydk::path::Capability{std::string{"CISCO-CABLE-WIDEBAND-MIB"}, "2011-01-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DS3-MIB"), ydk::path::Capability{std::string{"DS3-MIB"}, "1998-08-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DS3-MIB"), ydk::path::Capability{std::string{"DS3-MIB"}, "1998-08-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ETHER-CFM-MIB"), ydk::path::Capability{std::string{"CISCO-ETHER-CFM-MIB"}, "2004-12-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ETHER-CFM-MIB"), ydk::path::Capability{std::string{"CISCO-ETHER-CFM-MIB"}, "2004-12-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bridge-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bridge-oper"}, "2018-03-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bridge-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bridge-oper"}, "2018-03-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IANA-ADDRESS-FAMILY-NUMBERS-MIB"), ydk::path::Capability{std::string{"IANA-ADDRESS-FAMILY-NUMBERS-MIB"}, "2000-09-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IANA-ADDRESS-FAMILY-NUMBERS-MIB"), ydk::path::Capability{std::string{"IANA-ADDRESS-FAMILY-NUMBERS-MIB"}, "2000-09-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CBP-TARGET-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TARGET-MIB"}, "2006-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CBP-TARGET-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TARGET-MIB"}, "2006-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SUBSCRIBER-IDENTITY-TC-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-IDENTITY-TC-MIB"}, "2011-12-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SUBSCRIBER-IDENTITY-TC-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-IDENTITY-TC-MIB"}, "2011-12-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DIFFSERV-MIB"), ydk::path::Capability{std::string{"DIFFSERV-MIB"}, "2002-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"), ydk::path::Capability{std::string{"DIFFSERV-MIB"}, "2002-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-policy-target"), ydk::path::Capability{std::string{"cisco-policy-target"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:cisco-policy-target"), ydk::path::Capability{std::string{"cisco-policy-target"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-common-monitoring"), ydk::path::Capability{std::string{"tailf-common-monitoring"}, "2013-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/yang/common-monitoring"), ydk::path::Capability{std::string{"tailf-common-monitoring"}, "2013-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-smart-license"), ydk::path::Capability{std::string{"cisco-smart-license"}, "2017-10-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/cisco-smart-license"), ydk::path::Capability{std::string{"cisco-smart-license"}, "2017-10-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vstack"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vstack"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vstack"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vstack"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENHANCED-MEMPOOL-MIB"), ydk::path::Capability{std::string{"CISCO-ENHANCED-MEMPOOL-MIB"}, "2008-12-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENHANCED-MEMPOOL-MIB"), ydk::path::Capability{std::string{"CISCO-ENHANCED-MEMPOOL-MIB"}, "2008-12-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("nvo"), ydk::path::Capability{std::string{"nvo"}, "2015-06-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:nvo"), ydk::path::Capability{std::string{"nvo"}, "2015-06-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-lldp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-lldp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-ethernet"), ydk::path::Capability{std::string{"cisco-ethernet"}, "2016-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:cisco-ethernet"), ydk::path::Capability{std::string{"cisco-ethernet"}, "2016-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-L3VPN-STD-MIB"), ydk::path::Capability{std::string{"MPLS-L3VPN-STD-MIB"}, "2006-01-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-L3VPN-STD-MIB"), ydk::path::Capability{std::string{"MPLS-L3VPN-STD-MIB"}, "2006-01-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-netconf-inactive"), ydk::path::Capability{std::string{"tailf-netconf-inactive"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/netconf/inactive/1.0"), ydk::path::Capability{std::string{"tailf-netconf-inactive"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bba-group"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bba-group"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bba-group"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bba-group"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-utd-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd-oper"}, "2018-04-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-utd-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd-oper"}, "2018-04-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("INET-ADDRESS-MIB"), ydk::path::Capability{std::string{"INET-ADDRESS-MIB"}, "2005-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:INET-ADDRESS-MIB"), ydk::path::Capability{std::string{"INET-ADDRESS-MIB"}, "2005-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SNMP-TARGET-MIB"), ydk::path::Capability{std::string{"SNMP-TARGET-MIB"}, "1998-08-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SNMP-TARGET-MIB"), ydk::path::Capability{std::string{"SNMP-TARGET-MIB"}, "1998-08-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-types"}, "2018-05-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-types"}, "2018-05-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-BGP-POLICY-ACCOUNTING-MIB"), ydk::path::Capability{std::string{"CISCO-BGP-POLICY-ACCOUNTING-MIB"}, "2002-07-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-BGP-POLICY-ACCOUNTING-MIB"), ydk::path::Capability{std::string{"CISCO-BGP-POLICY-ACCOUNTING-MIB"}, "2002-07-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IP-MIB"), ydk::path::Capability{std::string{"IP-MIB"}, "2006-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IP-MIB"), ydk::path::Capability{std::string{"IP-MIB"}, "2006-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("OSPF-MIB"), ydk::path::Capability{std::string{"OSPF-MIB"}, "2006-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:OSPF-MIB"), ydk::path::Capability{std::string{"OSPF-MIB"}, "2006-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nat"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nat"}, "2018-06-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nat"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nat"}, "2018-06-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-TC-MIB"), ydk::path::Capability{std::string{"MPLS-TC-MIB"}, "2001-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-TC-MIB"), ydk::path::Capability{std::string{"MPLS-TC-MIB"}, "2001-01-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-POWER-ETHERNET-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-POWER-ETHERNET-EXT-MIB"}, "2018-01-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-POWER-ETHERNET-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-POWER-ETHERNET-EXT-MIB"}, "2018-01-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ezpm"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ezpm"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ezpm"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ezpm"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-confd-monitoring"), ydk::path::Capability{std::string{"tailf-confd-monitoring"}, "2013-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/yang/confd-monitoring"), ydk::path::Capability{std::string{"tailf-confd-monitoring"}, "2013-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSEC-FLOW-MONITOR-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-FLOW-MONITOR-MIB"}, "2007-10-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSEC-FLOW-MONITOR-MIB"), ydk::path::Capability{std::string{"CISCO-IPSEC-FLOW-MONITOR-MIB"}, "2007-10-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ospf"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospf"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ospf"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospf"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-SENSOR-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-SENSOR-MIB"}, "2015-01-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-SENSOR-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-SENSOR-MIB"}, "2015-01-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-lldp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-lldp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lldp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-interfaces-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-interfaces-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-interfaces-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-interfaces-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-voice"), ydk::path::Capability{std::string{"Cisco-IOS-XE-voice"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-voice"), ydk::path::Capability{std::string{"Cisco-IOS-XE-voice"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("PIM-MIB"), ydk::path::Capability{std::string{"PIM-MIB"}, "2000-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:PIM-MIB"), ydk::path::Capability{std::string{"PIM-MIB"}, "2000-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("NHRP-MIB"), ydk::path::Capability{std::string{"NHRP-MIB"}, "1999-08-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:NHRP-MIB"), ydk::path::Capability{std::string{"NHRP-MIB"}, "1999-08-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-memory-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-memory-oper"}, "2017-04-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-memory-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-memory-oper"}, "2017-04-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-line"), ydk::path::Capability{std::string{"Cisco-IOS-XE-line"}, "2018-03-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CLAB-TOPO-MIB"), ydk::path::Capability{std::string{"CLAB-TOPO-MIB"}, "2006-12-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CLAB-TOPO-MIB"), ydk::path::Capability{std::string{"CLAB-TOPO-MIB"}, "2006-12-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nd"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nd"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ENTITY-STATE-MIB"), ydk::path::Capability{std::string{"ENTITY-STATE-MIB"}, "2005-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ENTITY-STATE-MIB"), ydk::path::Capability{std::string{"ENTITY-STATE-MIB"}, "2005-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cts"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cts"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cts"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cts"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSLA-AUTOMEASURE-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-AUTOMEASURE-MIB"}, "2007-06-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSLA-AUTOMEASURE-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-AUTOMEASURE-MIB"}, "2007-06-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-EIGRP-MIB"), ydk::path::Capability{std::string{"CISCO-EIGRP-MIB"}, "2004-11-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-EIGRP-MIB"), ydk::path::Capability{std::string{"CISCO-EIGRP-MIB"}, "2004-11-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ntp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ntp-oper"}, "2018-01-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ntp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ntp-oper"}, "2018-01-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"), ydk::path::Capability{std::string{"CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"}, "2002-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"), ydk::path::Capability{std::string{"CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"}, "2002-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mmode"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mmode"}, "2017-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mmode"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mmode"}, "2017-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-HSRP-MIB"), ydk::path::Capability{std::string{"CISCO-HSRP-MIB"}, "2010-09-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-HSRP-MIB"), ydk::path::Capability{std::string{"CISCO-HSRP-MIB"}, "2010-09-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-aaa"), ydk::path::Capability{std::string{"Cisco-IOS-XE-aaa"}, "2018-01-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-aaa"), ydk::path::Capability{std::string{"Cisco-IOS-XE-aaa"}, "2018-01-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("TCP-MIB"), ydk::path::Capability{std::string{"TCP-MIB"}, "2005-02-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:TCP-MIB"), ydk::path::Capability{std::string{"TCP-MIB"}, "2005-02-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-AAL5-MIB"), ydk::path::Capability{std::string{"CISCO-AAL5-MIB"}, "2003-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-AAL5-MIB"), ydk::path::Capability{std::string{"CISCO-AAL5-MIB"}, "2003-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-IF-MIB"), ydk::path::Capability{std::string{"DOCS-IF-MIB"}, "2007-09-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-IF-MIB"), ydk::path::Capability{std::string{"DOCS-IF-MIB"}, "2007-09-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-PTP-MIB"), ydk::path::Capability{std::string{"CISCO-PTP-MIB"}, "2011-01-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-PTP-MIB"), ydk::path::Capability{std::string{"CISCO-PTP-MIB"}, "2011-01-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-CABLE-DEVICE-MIB"), ydk::path::Capability{std::string{"DOCS-CABLE-DEVICE-MIB"}, "2006-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-CABLE-DEVICE-MIB"), ydk::path::Capability{std::string{"DOCS-CABLE-DEVICE-MIB"}, "2006-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("policy-attr"), ydk::path::Capability{std::string{"policy-attr"}, "2015-04-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:policy-attr"), ydk::path::Capability{std::string{"policy-attr"}, "2015-04-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-native"), ydk::path::Capability{std::string{"Cisco-IOS-XE-native"}, "2018-05-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-native"), ydk::path::Capability{std::string{"Cisco-IOS-XE-native"}, "2018-05-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-QOS-PIB-MIB"), ydk::path::Capability{std::string{"CISCO-QOS-PIB-MIB"}, "2007-08-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-QOS-PIB-MIB"), ydk::path::Capability{std::string{"CISCO-QOS-PIB-MIB"}, "2007-08-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-tunnel"), ydk::path::Capability{std::string{"Cisco-IOS-XE-tunnel"}, "2017-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-tunnel"), ydk::path::Capability{std::string{"Cisco-IOS-XE-tunnel"}, "2017-08-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SONET-MIB"), ydk::path::Capability{std::string{"CISCO-SONET-MIB"}, "2003-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SONET-MIB"), ydk::path::Capability{std::string{"CISCO-SONET-MIB"}, "2003-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-TC-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-TC-MIB"}, "2006-07-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-TC-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-TC-MIB"}, "2006-07-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-PIM-MIB"), ydk::path::Capability{std::string{"CISCO-PIM-MIB"}, "2000-11-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-PIM-MIB"), ydk::path::Capability{std::string{"CISCO-PIM-MIB"}, "2000-11-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CBP-TC-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TC-MIB"}, "2008-06-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CBP-TC-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TC-MIB"}, "2008-06-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cdp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cdp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cdp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-TC-STD-MIB"), ydk::path::Capability{std::string{"MPLS-TC-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-TC-STD-MIB"), ydk::path::Capability{std::string{"MPLS-TC-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-l2vpn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-l2vpn"}, "2018-02-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-l2vpn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-l2vpn"}, "2018-02-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DISMAN-EXPRESSION-MIB"), ydk::path::Capability{std::string{"DISMAN-EXPRESSION-MIB"}, "2000-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DISMAN-EXPRESSION-MIB"), ydk::path::Capability{std::string{"DISMAN-EXPRESSION-MIB"}, "2000-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cellwan-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cellwan-oper"}, "2018-09-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cellwan-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cellwan-oper"}, "2018-09-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IGMP-FILTER-MIB"), ydk::path::Capability{std::string{"CISCO-IGMP-FILTER-MIB"}, "2005-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IGMP-FILTER-MIB"), ydk::path::Capability{std::string{"CISCO-IGMP-FILTER-MIB"}, "2005-11-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RSVP-MIB"), ydk::path::Capability{std::string{"RSVP-MIB"}, "1998-08-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RSVP-MIB"), ydk::path::Capability{std::string{"RSVP-MIB"}, "1998-08-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ATM-MIB"), ydk::path::Capability{std::string{"ATM-MIB"}, "1998-10-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ATM-MIB"), ydk::path::Capability{std::string{"ATM-MIB"}, "1998-10-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("OLD-CISCO-INTERFACES-MIB"), ydk::path::Capability{std::string{"OLD-CISCO-INTERFACES-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:OLD-CISCO-INTERFACES-MIB"), ydk::path::Capability{std::string{"OLD-CISCO-INTERFACES-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mka"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mka"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mka"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mka"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-RTTMON-TC-MIB"), ydk::path::Capability{std::string{"CISCO-RTTMON-TC-MIB"}, "2012-05-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-RTTMON-TC-MIB"), ydk::path::Capability{std::string{"CISCO-RTTMON-TC-MIB"}, "2012-05-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IEEE8021-TC-MIB"), ydk::path::Capability{std::string{"IEEE8021-TC-MIB"}, "2008-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IEEE8021-TC-MIB"), ydk::path::Capability{std::string{"IEEE8021-TC-MIB"}, "2008-10-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-interfaces"), ydk::path::Capability{std::string{"Cisco-IOS-XE-interfaces"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ptp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ptp"}, "2017-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ptp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ptp"}, "2017-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ppp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ppp"}, "2018-02-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ppp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ppp"}, "2018-02-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("LLDP-MIB"), ydk::path::Capability{std::string{"LLDP-MIB"}, "2005-05-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:LLDP-MIB"), ydk::path::Capability{std::string{"LLDP-MIB"}, "2005-05-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("NOTIFICATION-LOG-MIB"), ydk::path::Capability{std::string{"NOTIFICATION-LOG-MIB"}, "2000-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:NOTIFICATION-LOG-MIB"), ydk::path::Capability{std::string{"NOTIFICATION-LOG-MIB"}, "2000-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"}, "2010-06-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"}, "2010-06-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RFC1315-MIB"), ydk::path::Capability{std::string{"RFC1315-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RFC1315-MIB"), ydk::path::Capability{std::string{"RFC1315-MIB"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-dhcp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dhcp-oper"}, "2018-02-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-dhcp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-dhcp-oper"}, "2018-02-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-boot-integrity-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-boot-integrity-oper"}, "2018-01-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-boot-integrity-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-boot-integrity-oper"}, "2018-01-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("INT-SERV-MIB"), ydk::path::Capability{std::string{"INT-SERV-MIB"}, "1997-10-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:INT-SERV-MIB"), ydk::path::Capability{std::string{"INT-SERV-MIB"}, "1997-10-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-process-memory-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-process-memory-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-process-memory-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-process-memory-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-AAA-SESSION-MIB"), ydk::path::Capability{std::string{"CISCO-AAA-SESSION-MIB"}, "2006-03-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-AAA-SESSION-MIB"), ydk::path::Capability{std::string{"CISCO-AAA-SESSION-MIB"}, "2006-03-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bridge-domain"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bridge-domain"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bridge-domain"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bridge-domain"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("POWER-ETHERNET-MIB"), ydk::path::Capability{std::string{"POWER-ETHERNET-MIB"}, "2003-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:POWER-ETHERNET-MIB"), ydk::path::Capability{std::string{"POWER-ETHERNET-MIB"}, "2003-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mld"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mld"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mld"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mld"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ospfv3"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospfv3"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ospfv3"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ospfv3"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-netconf-monitoring"), ydk::path::Capability{std::string{"tailf-netconf-monitoring"}, "2016-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/yang/netconf-monitoring"), ydk::path::Capability{std::string{"tailf-netconf-monitoring"}, "2016-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RMON-MIB"), ydk::path::Capability{std::string{"RMON-MIB"}, "2000-05-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RMON-MIB"), ydk::path::Capability{std::string{"RMON-MIB"}, "2000-05-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bfd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bfd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bfd"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("pim"), ydk::path::Capability{std::string{"pim"}, "2014-06-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:pim"), ydk::path::Capability{std::string{"pim"}, "2014-06-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-parser"), ydk::path::Capability{std::string{"Cisco-IOS-XE-parser"}, "2018-03-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-wccp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-wccp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-wccp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-wccp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SESS-BORDER-CTRLR-STATS-MIB"), ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-STATS-MIB"}, "2010-09-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SESS-BORDER-CTRLR-STATS-MIB"), ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-STATS-MIB"}, "2010-09-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-common-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-common-types"}, "2017-12-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-common-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-common-types"}, "2017-12-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IF-EXTENSION-MIB"), ydk::path::Capability{std::string{"CISCO-IF-EXTENSION-MIB"}, "2013-03-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IF-EXTENSION-MIB"), ydk::path::Capability{std::string{"CISCO-IF-EXTENSION-MIB"}, "2013-03-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SNMPv2-MIB"), ydk::path::Capability{std::string{"SNMPv2-MIB"}, "2002-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SNMPv2-MIB"), ydk::path::Capability{std::string{"SNMPv2-MIB"}, "2002-10-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vrrp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vrrp-oper"}, "2018-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vrrp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vrrp-oper"}, "2018-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ntp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ntp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ntp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ntp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-poe-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-poe-oper"}, "2018-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-poe-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-poe-oper"}, "2018-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-rsvp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rsvp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-rsvp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rsvp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-iwanfabric"), ydk::path::Capability{std::string{"Cisco-IOS-XE-iwanfabric"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-iwanfabric"), ydk::path::Capability{std::string{"Cisco-IOS-XE-iwanfabric"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("SNMP-FRAMEWORK-MIB"), ydk::path::Capability{std::string{"SNMP-FRAMEWORK-MIB"}, "2002-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB"), ydk::path::Capability{std::string{"SNMP-FRAMEWORK-MIB"}, "2002-10-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-device-hardware-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-hardware-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-device-hardware-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-hardware-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vlan-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vlan-oper"}, "2018-04-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vlan-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vlan-oper"}, "2018-04-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CEF-MIB"), ydk::path::Capability{std::string{"CISCO-CEF-MIB"}, "2006-01-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CEF-MIB"), ydk::path::Capability{std::string{"CISCO-CEF-MIB"}, "2006-01-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-common"), ydk::path::Capability{std::string{"tailf-common"}, "2017-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/yang/common"), ydk::path::Capability{std::string{"tailf-common"}, "2017-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-TC"), ydk::path::Capability{std::string{"CISCO-TC"}, "2011-11-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-TC"), ydk::path::Capability{std::string{"CISCO-TC"}, "2011-11-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-OSPF-TRAP-MIB"), ydk::path::Capability{std::string{"CISCO-OSPF-TRAP-MIB"}, "2003-07-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-OSPF-TRAP-MIB"), ydk::path::Capability{std::string{"CISCO-OSPF-TRAP-MIB"}, "2003-07-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CONFIG-MAN-MIB"), ydk::path::Capability{std::string{"CISCO-CONFIG-MAN-MIB"}, "2007-04-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CONFIG-MAN-MIB"), ydk::path::Capability{std::string{"CISCO-CONFIG-MAN-MIB"}, "2007-04-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-ALARM-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-ALARM-MIB"}, "1999-07-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-ALARM-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-ALARM-MIB"}, "1999-07-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("common-mpls-types"), ydk::path::Capability{std::string{"common-mpls-types"}, "2015-05-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:common-mpls-types"), ydk::path::Capability{std::string{"common-mpls-types"}, "2015-05-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-power"), ydk::path::Capability{std::string{"Cisco-IOS-XE-power"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-power"), ydk::path::Capability{std::string{"Cisco-IOS-XE-power"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-device-tracking"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-tracking"}, "2017-06-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-device-tracking"), ydk::path::Capability{std::string{"Cisco-IOS-XE-device-tracking"}, "2017-06-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-netconf-query"), ydk::path::Capability{std::string{"tailf-netconf-query"}, "2017-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/netconf/query"), ydk::path::Capability{std::string{"tailf-netconf-query"}, "2017-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("TOKENRING-MIB"), ydk::path::Capability{std::string{"TOKENRING-MIB"}, "1994-10-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"), ydk::path::Capability{std::string{"TOKENRING-MIB"}, "1994-10-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-IF3-MIB"), ydk::path::Capability{std::string{"DOCS-IF3-MIB"}, "2016-05-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-IF3-MIB"), ydk::path::Capability{std::string{"DOCS-IF3-MIB"}, "2016-05-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-cli-extensions"), ydk::path::Capability{std::string{"tailf-cli-extensions"}, "2017-08-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("policy-types"), ydk::path::Capability{std::string{"policy-types"}, "2013-10-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:c3pl-types"), ydk::path::Capability{std::string{"policy-types"}, "2013-10-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-switch"), ydk::path::Capability{std::string{"Cisco-IOS-XE-switch"}, "2018-01-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-switch"), ydk::path::Capability{std::string{"Cisco-IOS-XE-switch"}, "2018-01-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-pathmgr"), ydk::path::Capability{std::string{"Cisco-IOS-XE-pathmgr"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-pathmgr"), ydk::path::Capability{std::string{"Cisco-IOS-XE-pathmgr"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-bridge-domain"), ydk::path::Capability{std::string{"cisco-bridge-domain"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:cisco-bridge-domain"), ydk::path::Capability{std::string{"cisco-bridge-domain"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-multicast"), ydk::path::Capability{std::string{"Cisco-IOS-XE-multicast"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-multicast"), ydk::path::Capability{std::string{"Cisco-IOS-XE-multicast"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-efp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-efp-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-efp-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-efp-oper"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IF-MIB"), ydk::path::Capability{std::string{"IF-MIB"}, "2000-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IF-MIB"), ydk::path::Capability{std::string{"IF-MIB"}, "2000-06-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-policy"), ydk::path::Capability{std::string{"Cisco-IOS-XE-policy"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-policy"), ydk::path::Capability{std::string{"Cisco-IOS-XE-policy"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-route-map"), ydk::path::Capability{std::string{"Cisco-IOS-XE-route-map"}, "2018-03-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-route-map"), ydk::path::Capability{std::string{"Cisco-IOS-XE-route-map"}, "2018-03-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"}, "2012-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"}, "2012-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-FRR-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-FRR-MIB"}, "2008-04-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-FRR-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-FRR-MIB"}, "2008-04-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DYNAMIC-TEMPLATE-MIB"), ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-MIB"}, "2007-09-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DYNAMIC-TEMPLATE-MIB"), ydk::path::Capability{std::string{"CISCO-DYNAMIC-TEMPLATE-MIB"}, "2007-09-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ATM-PVCTRAP-EXTN-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-PVCTRAP-EXTN-MIB"}, "2003-01-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ATM-PVCTRAP-EXTN-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-PVCTRAP-EXTN-MIB"}, "2003-01-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CONFIG-COPY-MIB"), ydk::path::Capability{std::string{"CISCO-CONFIG-COPY-MIB"}, "2005-04-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CONFIG-COPY-MIB"), ydk::path::Capability{std::string{"CISCO-CONFIG-COPY-MIB"}, "2005-04-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("EXPRESSION-MIB"), ydk::path::Capability{std::string{"EXPRESSION-MIB"}, "2005-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:EXPRESSION-MIB"), ydk::path::Capability{std::string{"EXPRESSION-MIB"}, "2005-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ATM-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-EXT-MIB"}, "2003-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ATM-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ATM-EXT-MIB"}, "2003-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ETHERLIKE-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ETHERLIKE-EXT-MIB"}, "2010-06-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ETHERLIKE-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ETHERLIKE-EXT-MIB"}, "2010-06-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("RMON2-MIB"), ydk::path::Capability{std::string{"RMON2-MIB"}, "1996-05-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:RMON2-MIB"), ydk::path::Capability{std::string{"RMON2-MIB"}, "1996-05-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-EXT-MIB"}, "2008-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-EXT-MIB"}, "2008-11-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IP-FORWARD-MIB"), ydk::path::Capability{std::string{"IP-FORWARD-MIB"}, "1996-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IP-FORWARD-MIB"), ydk::path::Capability{std::string{"IP-FORWARD-MIB"}, "1996-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SYSLOG-MIB"), ydk::path::Capability{std::string{"CISCO-SYSLOG-MIB"}, "2005-12-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SYSLOG-MIB"), ydk::path::Capability{std::string{"CISCO-SYSLOG-MIB"}, "2005-12-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"DIAL-CONTROL-MIB"}, "1996-09-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DIAL-CONTROL-MIB"), ydk::path::Capability{std::string{"DIAL-CONTROL-MIB"}, "1996-09-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-ia"), ydk::path::Capability{std::string{"cisco-ia"}, "2018-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/yang/cisco-ia"), ydk::path::Capability{std::string{"cisco-ia"}, "2018-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vpdn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vpdn"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vpdn"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vpdn"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SUBSCRIBER-SESSION-TC-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-TC-MIB"}, "2012-01-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SUBSCRIBER-SESSION-TC-MIB"), ydk::path::Capability{std::string{"CISCO-SUBSCRIBER-SESSION-TC-MIB"}, "2012-01-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-BFD-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-BFD-MIB"}, "2011-04-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-BFD-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-BFD-MIB"}, "2011-04-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-NTP-MIB"), ydk::path::Capability{std::string{"CISCO-NTP-MIB"}, "2006-07-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-NTP-MIB"), ydk::path::Capability{std::string{"CISCO-NTP-MIB"}, "2006-07-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"), ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"}, "2010-09-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"), ydk::path::Capability{std::string{"CISCO-SESS-BORDER-CTRLR-CALL-STATS-MIB"}, "2010-09-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-STP-EXTENSIONS-MIB"), ydk::path::Capability{std::string{"CISCO-STP-EXTENSIONS-MIB"}, "2013-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-STP-EXTENSIONS-MIB"), ydk::path::Capability{std::string{"CISCO-STP-EXTENSIONS-MIB"}, "2013-03-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-FTP-CLIENT-MIB"), ydk::path::Capability{std::string{"CISCO-FTP-CLIENT-MIB"}, "2006-03-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-FTP-CLIENT-MIB"), ydk::path::Capability{std::string{"CISCO-FTP-CLIENT-MIB"}, "2006-03-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-MPLS-TC-EXT-STD-MIB"), ydk::path::Capability{std::string{"CISCO-MPLS-TC-EXT-STD-MIB"}, "2012-02-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-MPLS-TC-EXT-STD-MIB"), ydk::path::Capability{std::string{"CISCO-MPLS-TC-EXT-STD-MIB"}, "2012-02-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-flow-monitor-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-flow-monitor-oper"}, "2017-11-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-flow-monitor-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-flow-monitor-oper"}, "2017-11-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mdt-cfg"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-cfg"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mdt-cfg"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mdt-cfg"}, "2018-02-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IP-TAP-MIB"), ydk::path::Capability{std::string{"CISCO-IP-TAP-MIB"}, "2004-03-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IP-TAP-MIB"), ydk::path::Capability{std::string{"CISCO-IP-TAP-MIB"}, "2004-03-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IPSLA-TC-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-TC-MIB"}, "2007-03-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IPSLA-TC-MIB"), ydk::path::Capability{std::string{"CISCO-IPSLA-TC-MIB"}, "2007-03-23", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-lisp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lisp"}, "2018-04-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-lisp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-lisp"}, "2018-04-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-ATM-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-ATM-MIB"}, "2005-04-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-ATM-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-ATM-MIB"}, "2005-04-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-isis"), ydk::path::Capability{std::string{"Cisco-IOS-XE-isis"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-isis"), ydk::path::Capability{std::string{"Cisco-IOS-XE-isis"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-fw-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-fw-oper"}, "2018-02-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-fw-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-fw-oper"}, "2018-02-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IP-LOCAL-POOL-MIB"), ydk::path::Capability{std::string{"CISCO-IP-LOCAL-POOL-MIB"}, "2007-11-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IP-LOCAL-POOL-MIB"), ydk::path::Capability{std::string{"CISCO-IP-LOCAL-POOL-MIB"}, "2007-11-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-cfm-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cfm-oper"}, "2017-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-cfm-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-cfm-oper"}, "2017-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-service-chain"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-chain"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-service-chain"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-chain"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-virtual-service-cfg"), ydk::path::Capability{std::string{"Cisco-IOS-XE-virtual-service-cfg"}, "2018-01-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-virtual-service-cfg"), ydk::path::Capability{std::string{"Cisco-IOS-XE-virtual-service-cfg"}, "2018-01-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-policy-filters"), ydk::path::Capability{std::string{"cisco-policy-filters"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:cisco-policy-filters"), ydk::path::Capability{std::string{"cisco-policy-filters"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-icmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-icmp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-icmp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-icmp"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bgp-route-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-route-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bgp-route-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp-route-oper"}, "2017-09-25", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-pfr"), ydk::path::Capability{std::string{"Cisco-IOS-XE-pfr"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-pfr"), ydk::path::Capability{std::string{"Cisco-IOS-XE-pfr"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DOT3-OAM-MIB"), ydk::path::Capability{std::string{"CISCO-DOT3-OAM-MIB"}, "2006-05-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DOT3-OAM-MIB"), ydk::path::Capability{std::string{"CISCO-DOT3-OAM-MIB"}, "2006-05-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-utd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-utd"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-platform"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform"}, "2018-05-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-platform"), ydk::path::Capability{std::string{"Cisco-IOS-XE-platform"}, "2018-05-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-environment-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-environment-oper"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-environment-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-environment-oper"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-IETF-PW-ENET-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-ENET-MIB"}, "2002-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-IETF-PW-ENET-MIB"), ydk::path::Capability{std::string{"CISCO-IETF-PW-ENET-MIB"}, "2002-09-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-crypto"), ydk::path::Capability{std::string{"Cisco-IOS-XE-crypto"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-crypto"), ydk::path::Capability{std::string{"Cisco-IOS-XE-crypto"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("EtherLike-MIB"), ydk::path::Capability{std::string{"EtherLike-MIB"}, "2003-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"), ydk::path::Capability{std::string{"EtherLike-MIB"}, "2003-09-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("common-mpls-static"), ydk::path::Capability{std::string{"common-mpls-static"}, "2015-07-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:common-mpls-static"), ydk::path::Capability{std::string{"common-mpls-static"}, "2015-07-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-RTTMON-MIB"), ydk::path::Capability{std::string{"CISCO-RTTMON-MIB"}, "2012-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-RTTMON-MIB"), ydk::path::Capability{std::string{"CISCO-RTTMON-MIB"}, "2012-08-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-controller-vdsl-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-controller-vdsl-oper"}, "2018-01-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-controller-vdsl-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-controller-vdsl-oper"}, "2018-01-31", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-virtual-service-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-virtual-service-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-virtual-service-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-virtual-service-oper"}, "2018-02-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-transceiver-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-transceiver-oper"}, "2018-01-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-transceiver-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-transceiver-oper"}, "2018-01-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-call-home"), ydk::path::Capability{std::string{"Cisco-IOS-XE-call-home"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-call-home"), ydk::path::Capability{std::string{"Cisco-IOS-XE-call-home"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("MPLS-LDP-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LDP-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:MPLS-LDP-STD-MIB"), ydk::path::Capability{std::string{"MPLS-LDP-STD-MIB"}, "2004-06-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-features"), ydk::path::Capability{std::string{"Cisco-IOS-XE-features"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-features"), ydk::path::Capability{std::string{"Cisco-IOS-XE-features"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-sla"), ydk::path::Capability{std::string{"Cisco-IOS-XE-sla"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-sla"), ydk::path::Capability{std::string{"Cisco-IOS-XE-sla"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DRAFT-MSDP-MIB"), ydk::path::Capability{std::string{"DRAFT-MSDP-MIB"}, "1999-12-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DRAFT-MSDP-MIB"), ydk::path::Capability{std::string{"DRAFT-MSDP-MIB"}, "1999-12-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-routing-ext"), ydk::path::Capability{std::string{"cisco-routing-ext"}, "2016-07-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:cisco-routing-ext"), ydk::path::Capability{std::string{"cisco-routing-ext"}, "2016-07-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-checkpoint-archive-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-checkpoint-archive-oper"}, "2017-04-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-checkpoint-archive-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-checkpoint-archive-oper"}, "2017-04-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-vrrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vrrp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-vrrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-vrrp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-CBP-TARGET-TC-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TARGET-TC-MIB"}, "2006-03-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-CBP-TARGET-TC-MIB"), ydk::path::Capability{std::string{"CISCO-CBP-TARGET-TC-MIB"}, "2006-03-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-eem"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eem"}, "2017-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-eem"), ydk::path::Capability{std::string{"Cisco-IOS-XE-eem"}, "2017-12-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-bridge-common"), ydk::path::Capability{std::string{"cisco-bridge-common"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:cisco-bridge-common"), ydk::path::Capability{std::string{"cisco-bridge-common"}, "2016-12-14", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-utd-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd-common-oper"}, "2018-04-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-utd-common-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-utd-common-oper"}, "2018-04-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-event-history-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-event-history-types"}, "2018-03-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-event-history-types"), ydk::path::Capability{std::string{"Cisco-IOS-XE-event-history-types"}, "2018-03-20", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-DOCS-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-DOCS-EXT-MIB"}, "2017-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-DOCS-EXT-MIB"), ydk::path::Capability{std::string{"CISCO-DOCS-EXT-MIB"}, "2017-11-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("IGMP-STD-MIB"), ydk::path::Capability{std::string{"IGMP-STD-MIB"}, "2000-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:IGMP-STD-MIB"), ydk::path::Capability{std::string{"IGMP-STD-MIB"}, "2000-09-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-zone"), ydk::path::Capability{std::string{"Cisco-IOS-XE-zone"}, "2018-06-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-zone"), ydk::path::Capability{std::string{"Cisco-IOS-XE-zone"}, "2018-06-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-linecard-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-linecard-oper"}, "2018-03-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-linecard-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-linecard-oper"}, "2018-03-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-service-insertion"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-insertion"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-service-insertion"), ydk::path::Capability{std::string{"Cisco-IOS-XE-service-insertion"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-bgp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-bgp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-bgp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-pw"), ydk::path::Capability{std::string{"cisco-pw"}, "2016-12-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:cisco:params:xml:ns:yang:pw"), ydk::path::Capability{std::string{"cisco-pw"}, "2016-12-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-wsma"), ydk::path::Capability{std::string{"Cisco-IOS-XE-wsma"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-wsma"), ydk::path::Capability{std::string{"Cisco-IOS-XE-wsma"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-stackwise-virtual"), ydk::path::Capability{std::string{"Cisco-IOS-XE-stackwise-virtual"}, "2017-06-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-stackwise-virtual"), ydk::path::Capability{std::string{"Cisco-IOS-XE-stackwise-virtual"}, "2017-06-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-http"), ydk::path::Capability{std::string{"Cisco-IOS-XE-http"}, "2018-01-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-http"), ydk::path::Capability{std::string{"Cisco-IOS-XE-http"}, "2018-01-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ipv6"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ipv6"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-netconf-transactions"), ydk::path::Capability{std::string{"tailf-netconf-transactions"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/netconf/transactions/1.0"), ydk::path::Capability{std::string{"tailf-netconf-transactions"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-rest-error"), ydk::path::Capability{std::string{"tailf-rest-error"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/tailf-rest-error"), ydk::path::Capability{std::string{"tailf-rest-error"}, "", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-AAA-SERVER-MIB"), ydk::path::Capability{std::string{"CISCO-AAA-SERVER-MIB"}, "2003-11-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-AAA-SERVER-MIB"), ydk::path::Capability{std::string{"CISCO-AAA-SERVER-MIB"}, "2003-11-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-ipv6-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ipv6-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-ipv6-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-ipv6-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("tailf-rest-query"), ydk::path::Capability{std::string{"tailf-rest-query"}, "2017-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://tail-f.com/ns/tailf-rest-query"), ydk::path::Capability{std::string{"tailf-rest-query"}, "2017-01-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-rpc"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rpc"}, "2018-04-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-rpc"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rpc"}, "2018-04-18", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("ENTITY-STATE-TC-MIB"), ydk::path::Capability{std::string{"ENTITY-STATE-TC-MIB"}, "2005-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:ENTITY-STATE-TC-MIB"), ydk::path::Capability{std::string{"ENTITY-STATE-TC-MIB"}, "2005-11-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ENTITY-FRU-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-FRU-CONTROL-MIB"}, "2013-08-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ENTITY-FRU-CONTROL-MIB"), ydk::path::Capability{std::string{"CISCO-ENTITY-FRU-CONTROL-MIB"}, "2013-08-19", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("P-BRIDGE-MIB"), ydk::path::Capability{std::string{"P-BRIDGE-MIB"}, "2006-01-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:P-BRIDGE-MIB"), ydk::path::Capability{std::string{"P-BRIDGE-MIB"}, "2006-01-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("VPN-TC-STD-MIB"), ydk::path::Capability{std::string{"VPN-TC-STD-MIB"}, "2005-11-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:VPN-TC-STD-MIB"), ydk::path::Capability{std::string{"VPN-TC-STD-MIB"}, "2005-11-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-arp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-arp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-arp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-arp"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("CISCO-ST-TC"), ydk::path::Capability{std::string{"CISCO-ST-TC"}, "2012-08-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:CISCO-ST-TC"), ydk::path::Capability{std::string{"CISCO-ST-TC"}, "2012-08-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-mpls-forwarding-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls-forwarding-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-mpls-forwarding-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-mpls-forwarding-oper"}, "2017-11-01", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nat-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nat-oper"}, "2018-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nat-oper"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nat-oper"}, "2018-03-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-ospf"), ydk::path::Capability{std::string{"cisco-ospf"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:cisco-ospf"), ydk::path::Capability{std::string{"cisco-ospf"}, "2016-03-30", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-nhrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nhrp"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-nhrp"), ydk::path::Capability{std::string{"Cisco-IOS-XE-nhrp"}, "2017-02-07", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-rip"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rip"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-rip"), ydk::path::Capability{std::string{"Cisco-IOS-XE-rip"}, "2018-06-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("Cisco-IOS-XE-spanning-tree"), ydk::path::Capability{std::string{"Cisco-IOS-XE-spanning-tree"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/Cisco-IOS-XE-spanning-tree"), ydk::path::Capability{std::string{"Cisco-IOS-XE-spanning-tree"}, "2017-11-27", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("DOCS-QOS-MIB"), ydk::path::Capability{std::string{"DOCS-QOS-MIB"}, "2001-11-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("urn:ietf:params:xml:ns:yang:smiv2:DOCS-QOS-MIB"), ydk::path::Capability{std::string{"DOCS-QOS-MIB"}, "2001-11-09", {}, {}}));

}


std::map<std::pair<std::string, std::string>, std::string> cisco_ios_xe_namespace_identity_lookup {
    { {"atmNoClpTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingMcr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTaggingScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTransparentNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoTrafficDescriptor", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTransparentScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpTaggingScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpNoScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpNoScr", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmClpNoTaggingScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"atmNoClpScrCdvt", "urn:ietf:params:xml:ns:yang:smiv2:ATM-TC-MIB"},  "ATM-TC-MIB"},
    { {"ciscoSipUaMIBNotificationPrefix", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB"},  "CISCO-SIP-UA-MIB"},
    { {"ciscoSipUaMIBNotifications", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SIP-UA-MIB"},  "CISCO-SIP-UA-MIB"},
    { {"ciscoChipSets", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPibToMib", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCIB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainIpx", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCibMmiGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainSctpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoUnknownRptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainTcpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"newport", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoModules", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"otherEnterprises", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoSB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainTcpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoProducts", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoAdmin", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainLocal", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainClns", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainDdp", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoProxy", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoWsx5020RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint3", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint1", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2507RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPolicy", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"temporary", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoCibProvGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"workgroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint2", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoChipSetSaint4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoworks", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"local", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"pakmon", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"lightstream", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPolicyAuto", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2516RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoAgentCapability", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPartnerProducts", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainUdpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainUdpIpv4", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainCons", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPIB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoExperiment", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoDomains", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoMgmt", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"cisco2505RptrGroup", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoPKI", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoSMB", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoRptrGroupObjectID", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoConfig", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"ciscoTDomainSctpIpv6", "urn:ietf:params:xml:ns:yang:smiv2:CISCO-SMI"},  "CISCO-SMI"},
    { {"outbound", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"inbound", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"direction", "http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper"},  "Cisco-IOS-XE-diffserv-target-oper"},
    { {"diffServSchedulerPriority", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServSchedulerWFQ", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamAvgRate", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamTrTCMBlind", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServSchedulerWRR", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSrTCMAware", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSrTCMBlind", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamTswTCM", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamSimpleTokenBucket", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"diffServTBParamTrTCMAware", "urn:ietf:params:xml:ns:yang:smiv2:DIFFSERV-MIB"},  "DIFFSERV-MIB"},
    { {"dot3ErrorLoopbackError", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3ErrorInitError", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3TestLoopBack", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"dot3TestTdr", "urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB"},  "EtherLike-MIB"},
    { {"rmonEventsV2", "urn:ietf:params:xml:ns:yang:smiv2:RMON-MIB"},  "RMON-MIB"},
    { {"snmpPrivProtocols", "urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB"},  "SNMP-FRAMEWORK-MIB"},
    { {"snmpAuthProtocols", "urn:ietf:params:xml:ns:yang:smiv2:SNMP-FRAMEWORK-MIB"},  "SNMP-FRAMEWORK-MIB"},
    { {"dot5ChipSetIBM16", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5ChipSetTItms380", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5TestFullDuplexLoopBack", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5ChipSetTItms380c16", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"dot5TestInsertFunc", "urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB"},  "TOKENRING-MIB"},
    { {"notif-syslog", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"mac-limit-notification-type", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-syslog-and-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"notif-none", "urn:cisco:params:xml:ns:yang:cisco-bridge-common"},  "cisco-bridge-common"},
    { {"eth-if-speed-40gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-10mb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-100mb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-10gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-100gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed-1gb", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"eth-if-speed", "urn:cisco:params:xml:ns:yang:cisco-ethernet"},  "cisco-ethernet"},
    { {"pw-load-balance-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-transmit", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-both", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-vlan-passthrough", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-vlan", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-encapsulation-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-encap-mpls", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-src-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-dst-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-dst-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-vc-type-ether", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ip-src-dst-ip", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-receive", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-bgp", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-src-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-none", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-eth-src-dst-mac", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-sequencing-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-signaling-protocol-ldp", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"pw-lb-ethernet-type", "urn:cisco:params:xml:ns:yang:pw"},  "cisco-pw"},
    { {"lisp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"igrp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"is-is", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"nhrp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"hsrp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"rip", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"bgp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"eigrp", "urn:cisco:params:xml:ns:yang:cisco-routing-ext"},  "cisco-routing-ext"},
    { {"action-shutdown", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"storm-control-action", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"action-drop", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"action-snmp-trap", "urn:cisco:params:xml:ns:yang:cisco-storm-control"},  "cisco-storm-control"},
    { {"bgp-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"ospf-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-vrf", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"isis-route-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-type", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"nexthop-resolution-type", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-IPv6", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"lsp-IPv4", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"static-nexthop", "urn:ietf:params:xml:ns:yang:common-mpls-static"},  "common-mpls-static"},
    { {"nvgre-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"overlay-encap-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"vxlan-type", "urn:ietf:params:xml:ns:yang:nvo"},  "nvo"},
    { {"pim-bidir-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"asm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"other-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"ssm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"sm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"group-to-rp-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"dm-mapping-mode", "urn:cisco:params:xml:ns:yang:pim"},  "pim"},
    { {"vpls", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"policy-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-length", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-de", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-ip", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-record", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-vci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"metadata", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"pbr", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"src-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"prec", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-map", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-tag", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-group", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"wlan-user-priority", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ip-rtp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"perf-mon", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dst-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"input-interface", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-top", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-clp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-dlci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"discard-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-imp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"application", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"policy-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"metadata", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vlan", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-vci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"input-interface", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"pbr", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"inspect", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-map", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-record", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-group", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"wlan-user-priority", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"security-group-tag", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ip-rtp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"qos-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"perf-mon", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"application", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-service", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-top", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-dlci", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"atm-clp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"mpls-exp-imp", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"appnav-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"discard-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"class-type", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dei", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cos-inner", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"prec", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"vpls", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"access-control-class", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"dst-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"packet-length", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv4-acl", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"src-mac", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-de", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"flow-ip", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"ipv6-acl-name", "urn:ietf:params:xml:ns:yang:c3pl-types"},  "policy-types"},
    { {"cli-ssh", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"cli-console", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"webui-https", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"snmp-udp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"webui-http", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"rest-http", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"rest-https", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"netconf-tcp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
    { {"cli-tcp", "http://tail-f.com/yang/netconf-monitoring"},  "tailf-netconf-monitoring"},
};

}

