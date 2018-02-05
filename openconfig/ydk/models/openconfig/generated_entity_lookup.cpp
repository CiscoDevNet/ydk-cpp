#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace openconfig
{

void openconfig_augment_lookup_tables()
{

    ydk::ydk_global_capabilities_lookup_tables.clear();
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform-transceiver"), ydk::path::Capability{std::string{"openconfig-platform-transceiver"}, "2016-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform/transceiver"), ydk::path::Capability{std::string{"openconfig-platform-transceiver"}, "2016-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-static"), ydk::path::Capability{std::string{"openconfig-mpls-static"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-te"), ydk::path::Capability{std::string{"openconfig-mpls-te"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-types"), ydk::path::Capability{std::string{"openconfig-transport-types"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/transport-types"), ydk::path::Capability{std::string{"openconfig-transport-types"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-ethernet"), ydk::path::Capability{std::string{"openconfig-if-ethernet"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/ethernet"), ydk::path::Capability{std::string{"openconfig-if-ethernet"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform"), ydk::path::Capability{std::string{"openconfig-platform"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform"), ydk::path::Capability{std::string{"openconfig-platform"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-peer-group"), ydk::path::Capability{std::string{"openconfig-bgp-peer-group"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-policy"), ydk::path::Capability{std::string{"openconfig-bgp-policy"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp-policy"), ydk::path::Capability{std::string{"openconfig-bgp-policy"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-local-routing"), ydk::path::Capability{std::string{"openconfig-local-routing"}, "2016-05-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/local-routing"), ydk::path::Capability{std::string{"openconfig-local-routing"}, "2016-05-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform-types"), ydk::path::Capability{std::string{"openconfig-platform-types"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform-types"), ydk::path::Capability{std::string{"openconfig-platform-types"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp"), ydk::path::Capability{std::string{"openconfig-bgp"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp"), ydk::path::Capability{std::string{"openconfig-bgp"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-line-protection"), ydk::path::Capability{std::string{"openconfig-transport-line-protection"}, "2017-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/optical-transport-line-protection"), ydk::path::Capability{std::string{"openconfig-transport-line-protection"}, "2017-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-extensions"), ydk::path::Capability{std::string{"openconfig-extensions"}, "2015-10-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-ext"), ydk::path::Capability{std::string{"openconfig-extensions"}, "2015-10-09", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-channel-monitor"), ydk::path::Capability{std::string{"openconfig-channel-monitor"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/channel-monitor"), ydk::path::Capability{std::string{"openconfig-channel-monitor"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-vlan"), ydk::path::Capability{std::string{"openconfig-vlan"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/vlan"), ydk::path::Capability{std::string{"openconfig-vlan"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-vlan-types"), ydk::path::Capability{std::string{"openconfig-vlan-types"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/vlan-types"), ydk::path::Capability{std::string{"openconfig-vlan-types"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-lacp"), ydk::path::Capability{std::string{"openconfig-lacp"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/lacp"), ydk::path::Capability{std::string{"openconfig-lacp"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-optical-amplifier"), ydk::path::Capability{std::string{"openconfig-optical-amplifier"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/optical-amplfier"), ydk::path::Capability{std::string{"openconfig-optical-amplifier"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-interfaces"), ydk::path::Capability{std::string{"openconfig-interfaces"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces"), ydk::path::Capability{std::string{"openconfig-interfaces"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common-structure"), ydk::path::Capability{std::string{"openconfig-bgp-common-structure"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-neighbor"), ydk::path::Capability{std::string{"openconfig-bgp-neighbor"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-types"), ydk::path::Capability{std::string{"openconfig-mpls-types"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/mpls-types"), ydk::path::Capability{std::string{"openconfig-mpls-types"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-terminal-device"), ydk::path::Capability{std::string{"openconfig-terminal-device"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/terminal-device"), ydk::path::Capability{std::string{"openconfig-terminal-device"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-aggregate"), ydk::path::Capability{std::string{"openconfig-if-aggregate"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/aggregate"), ydk::path::Capability{std::string{"openconfig-if-aggregate"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-ip"), ydk::path::Capability{std::string{"openconfig-if-ip"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/ip"), ydk::path::Capability{std::string{"openconfig-if-ip"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-global"), ydk::path::Capability{std::string{"openconfig-bgp-global"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-types"), ydk::path::Capability{std::string{"openconfig-bgp-types"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp-types"), ydk::path::Capability{std::string{"openconfig-bgp-types"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-igp"), ydk::path::Capability{std::string{"openconfig-mpls-igp"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-telemetry"), ydk::path::Capability{std::string{"openconfig-telemetry"}, "2016-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/telemetry"), ydk::path::Capability{std::string{"openconfig-telemetry"}, "2016-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-ldp"), ydk::path::Capability{std::string{"openconfig-mpls-ldp"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/ldp"), ydk::path::Capability{std::string{"openconfig-mpls-ldp"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-types"), ydk::path::Capability{std::string{"openconfig-types"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-types"), ydk::path::Capability{std::string{"openconfig-types"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common"), ydk::path::Capability{std::string{"openconfig-bgp-common"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-sr"), ydk::path::Capability{std::string{"openconfig-mpls-sr"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/sr"), ydk::path::Capability{std::string{"openconfig-mpls-sr"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-policy-types"), ydk::path::Capability{std::string{"openconfig-policy-types"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/policy-types"), ydk::path::Capability{std::string{"openconfig-policy-types"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-rib-bgp-types"), ydk::path::Capability{std::string{"openconfig-rib-bgp-types"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rib/bgp-types"), ydk::path::Capability{std::string{"openconfig-rib-bgp-types"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-routing-policy"), ydk::path::Capability{std::string{"openconfig-routing-policy"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/routing-policy"), ydk::path::Capability{std::string{"openconfig-routing-policy"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-rib-bgp"), ydk::path::Capability{std::string{"openconfig-rib-bgp"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rib/bgp"), ydk::path::Capability{std::string{"openconfig-rib-bgp"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-line-common"), ydk::path::Capability{std::string{"openconfig-transport-line-common"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/transport-line-common"), ydk::path::Capability{std::string{"openconfig-transport-line-common"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-rsvp"), ydk::path::Capability{std::string{"openconfig-mpls-rsvp"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rsvp"), ydk::path::Capability{std::string{"openconfig-mpls-rsvp"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common-multiprotocol"), ydk::path::Capability{std::string{"openconfig-bgp-common-multiprotocol"}, "2016-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls"), ydk::path::Capability{std::string{"openconfig-mpls"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/mpls"), ydk::path::Capability{std::string{"openconfig-mpls"}, "2015-11-05", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("cisco-xr-openconfig-interfaces-types"), ydk::path::Capability{std::string{"cisco-xr-openconfig-interfaces-types"}, "2016-10-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://cisco.com/ns/yang/cisco-xr-openconfig-interfaces-types"), ydk::path::Capability{std::string{"cisco-xr-openconfig-interfaces-types"}, "2016-10-12", {}, {}}));

}


std::map<std::pair<std::string, std::string>, std::string> openconfig_namespace_identity_lookup {
    { {"REMOVE_PRIVATE_AS_OPTION", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ADD_PATHS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"PRIVATE_AS_REMOVE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"AFI_SAFI_TYPE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"PRIVATE_AS_REPLACE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"MPBGP", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ROUTE_REFRESH", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_CAPABILITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"GRACEFUL_RESTART", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ASN32", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_VPLS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_EVPN", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_WELL_KNOWN_STD_COMMUNITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_ADVERTISE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT_SUBCONFED", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NOPEER", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ETHERNET_SPEED", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_25GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_40GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_50GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_10MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_UNKNOWN", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_1GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_10GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"DROP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LOCAL_DEFINED_NEXT_HOP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LOCAL_LINK", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"path-computation-method", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"explicitly-defined", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"locally-computed", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"externally-queried", "http://openconfig.net/yang/mpls"},  "openconfig-mpls"},
    { {"path-setup-ldp", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-sr", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"protection-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"null-label-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"INGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TRANSIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EXPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"link-protection-requested", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"IMPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"lsp-role", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"tunnel-type", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"unprotected", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-protocol", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"lsp-oper-status", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2P", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2MP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"link-node-protection-requested", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"path-setup-rsvp", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"tunnel-admin-status", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"HYBRID", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"CONSTANT_GAIN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"EDFA", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"LOW_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"FORWARD_RAMAN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"BACKWARD_RAMAN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"MID_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"OPTICAL_AMPLIFIER_MODE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"HIGH_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"OPTICAL_AMPLIFIER_TYPE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"FIXED_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"CONSTANT_POWER", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"TRANSCEIVER", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CPU", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPERATING_SYSTEM", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"PORT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CHASSIS", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_SOFTWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_HARDWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"BACKPLANE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"SENSOR", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"MODULE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"LINECARD", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"POWER_SUPPLY", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"FAN", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"ATTRIBUTE_EQ", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_LE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"DIRECTLY_CONNECTED", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"LOCAL_AGGREGATE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ISIS", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_GE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_COMPARISON", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"BGP", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF3", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"STATIC", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"INSTALL_PROTOCOL_TYPE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"MED_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"PREFER_EXTERNAL", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"NEXTHOP_COST_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_BESTPATH", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_ROUTER_ID", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_AS_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_PEER_ADDRESS", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CLUSTER_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CONFED", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"REJECTED_IMPORT_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ORIGINATOR", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ROUTE_REASON", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"LOCAL_PREF_LOWER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"AS_PATH_LONGER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"ORIGIN_TYPE_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"OPTICAL_LINE_PORT_TYPE", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"DROP", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"INGRESS", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"MONITOR", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"ADD", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"EGRESS", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"PRIMARY", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"SECONDARY", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"APS_PATHS", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"ETH_10GBASE_LRM", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ZR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_AOC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_ACC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR10", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CWDM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CLR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC192", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_WAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC48", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM16", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R5", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D1", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1S1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM64", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_RATE_CLASS_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_1G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_2.5G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU1E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_10G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_40G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_100G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_40GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LOGICAL_ELEMENT_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC768", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ETHERNET", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM256", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OPTICAL_CHANNEL", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100G_MLG", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTUCN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRANSCEIVER_FORM_FACTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2_ACO", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP28", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP_PLUS", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"XFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"MPO_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"X2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"NON_PLUGGABLE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTHER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_1GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"FIBER_CONNECTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_LAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETHERNET_PMD_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ADDRESS_FAMILY", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"MPLS", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"L2_ETHERNET", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV4", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV6", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"TPID_0x8100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x8A88", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x9100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0X9200", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_TYPES", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
};

}

