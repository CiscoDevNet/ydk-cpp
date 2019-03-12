#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace openconfig
{

void openconfig_augment_lookup_tables()
{

    ydk::ydk_global_capabilities_lookup_tables.clear();
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-packet-match"), ydk::path::Capability{std::string{"openconfig-packet-match"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/header-fields"), ydk::path::Capability{std::string{"openconfig-packet-match"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-types"), ydk::path::Capability{std::string{"openconfig-mpls-types"}, "2017-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/mpls-types"), ydk::path::Capability{std::string{"openconfig-mpls-types"}, "2017-06-21", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-global"), ydk::path::Capability{std::string{"openconfig-bgp-global"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-policy"), ydk::path::Capability{std::string{"openconfig-bgp-policy"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp-policy"), ydk::path::Capability{std::string{"openconfig-bgp-policy"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-extensions"), ydk::path::Capability{std::string{"openconfig-extensions"}, "2017-01-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-ext"), ydk::path::Capability{std::string{"openconfig-extensions"}, "2017-01-29", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-terminal-device"), ydk::path::Capability{std::string{"openconfig-terminal-device"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/terminal-device"), ydk::path::Capability{std::string{"openconfig-terminal-device"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-vlan-types"), ydk::path::Capability{std::string{"openconfig-vlan-types"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/vlan-types"), ydk::path::Capability{std::string{"openconfig-vlan-types"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-network-instance"), ydk::path::Capability{std::string{"openconfig-network-instance"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/network-instance"), ydk::path::Capability{std::string{"openconfig-network-instance"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-pf"), ydk::path::Capability{std::string{"openconfig-aft-pf"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-telemetry"), ydk::path::Capability{std::string{"openconfig-telemetry"}, "2016-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/telemetry"), ydk::path::Capability{std::string{"openconfig-telemetry"}, "2016-02-04", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-ipv6"), ydk::path::Capability{std::string{"openconfig-aft-ipv6"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-network-instance"), ydk::path::Capability{std::string{"openconfig-aft-network-instance"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/aft/ni"), ydk::path::Capability{std::string{"openconfig-aft-network-instance"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-local-routing"), ydk::path::Capability{std::string{"openconfig-local-routing"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/local-routing"), ydk::path::Capability{std::string{"openconfig-local-routing"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-network-instance-l2"), ydk::path::Capability{std::string{"openconfig-network-instance-l2"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-ip"), ydk::path::Capability{std::string{"openconfig-if-ip"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/ip"), ydk::path::Capability{std::string{"openconfig-if-ip"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis-lsp"), ydk::path::Capability{std::string{"openconfig-isis-lsp"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-neighbor"), ydk::path::Capability{std::string{"openconfig-bgp-neighbor"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common-multiprotocol"), ydk::path::Capability{std::string{"openconfig-bgp-common-multiprotocol"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-policy-types"), ydk::path::Capability{std::string{"openconfig-policy-types"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/policy-types"), ydk::path::Capability{std::string{"openconfig-policy-types"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common"), ydk::path::Capability{std::string{"openconfig-bgp-common"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-channel-monitor"), ydk::path::Capability{std::string{"openconfig-channel-monitor"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/channel-monitor"), ydk::path::Capability{std::string{"openconfig-channel-monitor"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-types"), ydk::path::Capability{std::string{"openconfig-bgp-types"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp-types"), ydk::path::Capability{std::string{"openconfig-bgp-types"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-rsvp-sr-ext"), ydk::path::Capability{std::string{"openconfig-rsvp-sr-ext"}, "2017-03-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rsvp-sr-ext"), ydk::path::Capability{std::string{"openconfig-rsvp-sr-ext"}, "2017-03-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-optical-amplifier"), ydk::path::Capability{std::string{"openconfig-optical-amplifier"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/optical-amplfier"), ydk::path::Capability{std::string{"openconfig-optical-amplifier"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-peer-group"), ydk::path::Capability{std::string{"openconfig-bgp-peer-group"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-ipv4"), ydk::path::Capability{std::string{"openconfig-aft-ipv4"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-types"), ydk::path::Capability{std::string{"openconfig-aft-types"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/fib-types"), ydk::path::Capability{std::string{"openconfig-aft-types"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-ldp"), ydk::path::Capability{std::string{"openconfig-mpls-ldp"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/ldp"), ydk::path::Capability{std::string{"openconfig-mpls-ldp"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-ethernet"), ydk::path::Capability{std::string{"openconfig-aft-ethernet"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform-types"), ydk::path::Capability{std::string{"openconfig-platform-types"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform-types"), ydk::path::Capability{std::string{"openconfig-platform-types"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-lldp-types"), ydk::path::Capability{std::string{"openconfig-lldp-types"}, "2016-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/lldp/types"), ydk::path::Capability{std::string{"openconfig-lldp-types"}, "2016-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-rsvp"), ydk::path::Capability{std::string{"openconfig-mpls-rsvp"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rsvp"), ydk::path::Capability{std::string{"openconfig-mpls-rsvp"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis"), ydk::path::Capability{std::string{"openconfig-isis"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-isis"), ydk::path::Capability{std::string{"openconfig-isis"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-line-protection"), ydk::path::Capability{std::string{"openconfig-transport-line-protection"}, "2017-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/optical-transport-line-protection"), ydk::path::Capability{std::string{"openconfig-transport-line-protection"}, "2017-03-28", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-line-common"), ydk::path::Capability{std::string{"openconfig-transport-line-common"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/transport-line-common"), ydk::path::Capability{std::string{"openconfig-transport-line-common"}, "2017-07-08", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp-common-structure"), ydk::path::Capability{std::string{"openconfig-bgp-common-structure"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-packet-match-types"), ydk::path::Capability{std::string{"openconfig-packet-match-types"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/packet-match-types"), ydk::path::Capability{std::string{"openconfig-packet-match-types"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-inet-types"), ydk::path::Capability{std::string{"openconfig-inet-types"}, "2017-04-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/types/inet"), ydk::path::Capability{std::string{"openconfig-inet-types"}, "2017-04-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-network-instance-types"), ydk::path::Capability{std::string{"openconfig-network-instance-types"}, "2016-12-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/network-instance-types"), ydk::path::Capability{std::string{"openconfig-network-instance-types"}, "2016-12-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-vlan"), ydk::path::Capability{std::string{"openconfig-vlan"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/vlan"), ydk::path::Capability{std::string{"openconfig-vlan"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls"), ydk::path::Capability{std::string{"openconfig-mpls"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/mpls"), ydk::path::Capability{std::string{"openconfig-mpls"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-rib-bgp"), ydk::path::Capability{std::string{"openconfig-rib-bgp"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rib/bgp"), ydk::path::Capability{std::string{"openconfig-rib-bgp"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-transport-types"), ydk::path::Capability{std::string{"openconfig-transport-types"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/transport-types"), ydk::path::Capability{std::string{"openconfig-transport-types"}, "2016-06-17", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft"), ydk::path::Capability{std::string{"openconfig-aft"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/aft"), ydk::path::Capability{std::string{"openconfig-aft"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-lldp"), ydk::path::Capability{std::string{"openconfig-lldp"}, "2016-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/lldp"), ydk::path::Capability{std::string{"openconfig-lldp"}, "2016-05-16", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-routing-policy"), ydk::path::Capability{std::string{"openconfig-routing-policy"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/routing-policy"), ydk::path::Capability{std::string{"openconfig-routing-policy"}, "2016-05-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform-transceiver"), ydk::path::Capability{std::string{"openconfig-platform-transceiver"}, "2016-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform/transceiver"), ydk::path::Capability{std::string{"openconfig-platform-transceiver"}, "2016-05-24", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-aggregate"), ydk::path::Capability{std::string{"openconfig-if-aggregate"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/aggregate"), ydk::path::Capability{std::string{"openconfig-if-aggregate"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-segment-routing"), ydk::path::Capability{std::string{"openconfig-segment-routing"}, "2017-01-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/sr"), ydk::path::Capability{std::string{"openconfig-segment-routing"}, "2017-01-12", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-te"), ydk::path::Capability{std::string{"openconfig-mpls-te"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis-routing"), ydk::path::Capability{std::string{"openconfig-isis-routing"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-common"), ydk::path::Capability{std::string{"openconfig-aft-common"}, "2017-05-10", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-network-instance-l3"), ydk::path::Capability{std::string{"openconfig-network-instance-l3"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/network-instance-l3"), ydk::path::Capability{std::string{"openconfig-network-instance-l3"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-lacp"), ydk::path::Capability{std::string{"openconfig-lacp"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/lacp"), ydk::path::Capability{std::string{"openconfig-lacp"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis-policy"), ydk::path::Capability{std::string{"openconfig-isis-policy"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-isis-policy"), ydk::path::Capability{std::string{"openconfig-isis-policy"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-igp"), ydk::path::Capability{std::string{"openconfig-mpls-igp"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-if-ethernet"), ydk::path::Capability{std::string{"openconfig-if-ethernet"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces/ethernet"), ydk::path::Capability{std::string{"openconfig-if-ethernet"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-yang-types"), ydk::path::Capability{std::string{"openconfig-yang-types"}, "2017-04-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/types/yang"), ydk::path::Capability{std::string{"openconfig-yang-types"}, "2017-04-03", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-static"), ydk::path::Capability{std::string{"openconfig-mpls-static"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-mpls-sr"), ydk::path::Capability{std::string{"openconfig-mpls-sr"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/mpls-sr"), ydk::path::Capability{std::string{"openconfig-mpls-sr"}, "2017-03-22", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-acl"), ydk::path::Capability{std::string{"openconfig-acl"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/acl"), ydk::path::Capability{std::string{"openconfig-acl"}, "2017-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-bgp"), ydk::path::Capability{std::string{"openconfig-bgp"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/bgp"), ydk::path::Capability{std::string{"openconfig-bgp"}, "2017-02-02", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-types"), ydk::path::Capability{std::string{"openconfig-types"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/openconfig-types"), ydk::path::Capability{std::string{"openconfig-types"}, "2017-01-13", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-rib-bgp-types"), ydk::path::Capability{std::string{"openconfig-rib-bgp-types"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/rib/bgp-types"), ydk::path::Capability{std::string{"openconfig-rib-bgp-types"}, "2016-04-11", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-platform"), ydk::path::Capability{std::string{"openconfig-platform"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/platform"), ydk::path::Capability{std::string{"openconfig-platform"}, "2016-06-06", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis-lsdb-types"), ydk::path::Capability{std::string{"openconfig-isis-lsdb-types"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/isis-lsdb-types"), ydk::path::Capability{std::string{"openconfig-isis-lsdb-types"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-isis-types"), ydk::path::Capability{std::string{"openconfig-isis-types"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/isis-types"), ydk::path::Capability{std::string{"openconfig-isis-types"}, "2017-05-15", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-interfaces"), ydk::path::Capability{std::string{"openconfig-interfaces"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("http://openconfig.net/yang/interfaces"), ydk::path::Capability{std::string{"openconfig-interfaces"}, "2016-05-26", {}, {}}));
    ydk::ydk_global_capabilities_lookup_tables.insert(std::make_pair<std::string, ydk::path::Capability>(std::string("openconfig-aft-mpls"), ydk::path::Capability{std::string{"openconfig-aft-mpls"}, "2017-05-10", {}, {}}));

}


std::map<std::pair<std::string, std::string>, std::string> openconfig_namespace_identity_lookup {
    { {"LOG_SYSLOG", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"AGGREGATE_ONLY", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_TYPE", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_COUNTER_CAPABILITY", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"LOG_ACTION", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_IPV6", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"LOG_NONE", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_IPV4", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"DROP", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACCEPT", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"FORWARDING_ACTION", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"INTERFACE_ONLY", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_MIXED", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ACL_L2", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"INTERFACE_AGGREGATE", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"REJECT", "http://openconfig.net/yang/acl"},  "openconfig-acl"},
    { {"ADD_PATHS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ROUTE_REFRESH", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"REMOVE_PRIVATE_AS_OPTION", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"PRIVATE_AS_REPLACE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"ASN32", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_WELL_KNOWN_STD_COMMUNITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"BGP_CAPABILITY", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_VPLS", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV4_MULTICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"MPBGP", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L3VPN_IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV4_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT_SUBCONFED", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"AFI_SAFI_TYPE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"GRACEFUL_RESTART", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_ADVERTISE", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"L2VPN_EVPN", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NO_EXPORT", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"NOPEER", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"PRIVATE_AS_REMOVE_ALL", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"IPV6_LABELED_UNICAST", "http://openconfig.net/yang/bgp-types"},  "openconfig-bgp-types"},
    { {"SPEED_10MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_40GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_UNKNOWN", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_50GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_100MB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_25GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"ETHERNET_SPEED", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_10GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"SPEED_1GB", "http://openconfig.net/yang/interfaces/ethernet"},  "openconfig-if-ethernet"},
    { {"IPV6_SRLG", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_BANDWIDTH_CONSTRAINTS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV6_TE_ROUTER_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV4_TE_ROUTER_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ISIS_ALIAS_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV4_INTERNAL_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_LINK_PROTECTION_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"NLPID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"DYNAMIC_NAME", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"MT_IPV4_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ROUTER_CAPABILITY_SUBTLVS_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ROUTER_CAPABILITY_SR_CAPABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_ADJ_SID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"AREA_ADDRESSES", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_LINK_ATTRIBUTES", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_ADMIN_GROUP", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"INSTANCE_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ISIS_SUBTLV_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_LINK_DELAY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ROUTER_CAPABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_TE_DEFAULT_METRIC", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_TAG", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV4_SRLG", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_AVAILABLE_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ISIS_TLV_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_UNCONSTRAINED_LSP", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"AUTHENTICATION", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_IPV6_NEIGHBOR_ADDRESS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV4_EXTERNAL_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_RESIDUAL_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"EXTENDED_IS_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_MAX_LINK_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_ADJ_LAN_SID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"ROUTER_CAPABILITY_SR_ALGORITHM", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_IPV6_INTERFACE_ADDRESS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_IPV6_ROUTER_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_MAX_RESERVABLE_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_EXTENDED_ADMIN_GROUP", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_SUBTLVS_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_LINK_DELAY_VARIATION", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IIS_NEIGHBORS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_UTILIZED_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"MT_ISN", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"MT_IS_NEIGHBOR_ATTRIBUTE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV6_INTERFACE_ADDRESSES", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_IPV4_INTERFACE_ADDRESS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_IPV4_NEIGHBOR_ADDRESS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_UNRESERVED_BANDWIDTH", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"EXTENDED_IPV4_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_PREFIX_SID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_PREFIX_FLAGS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV4_INTERFACE_ADDRESSES", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"MT_IPV6_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_MIN_MAX_LINK_DELAY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"PURGE_OI", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_TAG64", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"MULTI_TOPOLOGY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_NEIGHBOR_ATTRIBUTE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_SUBTLVS_TYPE", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IPV6_REACHABILITY", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IS_REACHABILITY_LINK_LOSS", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"IP_REACHABILITY_IPV4_ROUTER_ID", "http://openconfig.net/yang/isis-lsdb-types"},  "openconfig-isis-lsdb-types"},
    { {"AFI_SAFI_TYPE", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV4", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"SAFI_TYPE", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV4_UNICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"OVERLOAD_RESET_TRIGGER_TYPE", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV4_MULTICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV6_UNICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"AFI_TYPE", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"WAIT_FOR_BGP", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"UNICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV6", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"MT_TYPE", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"MULTICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"WAIT_FOR_SYSTEM", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"IPV6_MULTICAST", "http://openconfig.net/yang/isis-types"},  "openconfig-isis-types"},
    { {"SYSTEM_DESCRIPTION", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"LLDP_TLV", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"C_VLAN", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"S_VLAN", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"TWO_PORT_MAC_RELAY", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"REPEATER", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"WLAN_ACCESS_POINT", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"MAC_BRIDGE", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"TELEPHONE", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"SYSTEM_NAME", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"CHASSIS_ID", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"DOCSIS_CABLE_DEVICE", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"PORT_DESCRIPTION", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"OTHER", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"SYSTEM_CAPABILITIES", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"MANAGEMENT_ADDRESS", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"ROUTER", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"LLDP_SYSTEM_CAPABILITY", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"PORT_ID", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"STATION_ONLY", "http://openconfig.net/yang/lldp/types"},  "openconfig-lldp-types"},
    { {"LOCAL_LINK", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"DROP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LOCAL_DEFINED_NEXT_HOP", "http://openconfig.net/yang/local-routing"},  "openconfig-local-routing"},
    { {"LSP_METRIC_TYPE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"IMPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LSP_METRIC_RELATIVE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LINK_NODE_PROTECTION_REQUESTED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LSP_METRIC_ABSOLUTE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EXTERNALLY_QUERIED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EXPLICITLY_DEFINED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TRANSIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"DOWN", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PROTECTION_TYPE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"UNPROTECTED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LSP_ROLE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2P", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LOCALLY_COMPUTED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LSP_OPER_STATUS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PATH_SETUP_SR", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"INGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PATH_SETUP_RSVP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PATH_SETUP_LDP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EXPLICIT", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ADMIN_UP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PATH_SETUP_PROTOCOL", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"P2MP", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"PATH_COMPUTATION_METHOD", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LINK_PROTECTION_REQUIRED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TUNNEL_ADMIN_STATUS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"TUNNEL_TYPE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"LSP_METRIC_INHERITED", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"EGRESS", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"NULL_LABEL_TYPE", "http://openconfig.net/yang/mpls-types"},  "openconfig-mpls-types"},
    { {"ENDPOINT_TYPE", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"ENCAPSULATION", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"REMOTE", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"L2P2P", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"NETWORK_INSTANCE_TYPE", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"DEFAULT_INSTANCE", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"LOCAL", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"L2VSI", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"L2L3", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"L3VRF", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"INSTANCE_LABEL", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"PER_NEXTHOP", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"LDP", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"PER_PREFIX", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"SIGNALLING_PROTOCOL", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"VXLAN", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"MPLS", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"BGP_VPLS", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"BGP_EVPN", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"LABEL_ALLOCATION_MODE", "http://openconfig.net/yang/network-instance-types"},  "openconfig-network-instance-types"},
    { {"CONSTANT_POWER", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"FORWARD_RAMAN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"LOW_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"EDFA", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"MID_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"BACKWARD_RAMAN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"OPTICAL_AMPLIFIER_TYPE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"FIXED_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"OPTICAL_AMPLIFIER_MODE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"HIGH_GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"HYBRID", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"GAIN_RANGE", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"CONSTANT_GAIN", "http://openconfig.net/yang/optical-amplfier"},  "openconfig-optical-amplifier"},
    { {"TCP_RST", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_PIM", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_UDP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_IPV4", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_TCP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_ICMP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_IPV6", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_URG", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_SYN", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_VLAN", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_MPLS", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_PSH", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_ECE", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_AUTH", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_RSVP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_FIN", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_GRE", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_ARP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_IGMP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_PROTOCOL", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_LLDP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_CWR", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_ACK", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"IP_L2TP", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"TCP_FLAGS", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"ETHERTYPE_ROCE", "http://openconfig.net/yang/packet-match-types"},  "openconfig-packet-match-types"},
    { {"FAN", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"BACKPLANE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"PORT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_SOFTWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPERATING_SYSTEM", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"OPENCONFIG_HARDWARE_COMPONENT", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"MODULE", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CPU", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"LINECARD", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"TRANSCEIVER", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"SENSOR", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"CHASSIS", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"POWER_SUPPLY", "http://openconfig.net/yang/platform-types"},  "openconfig-platform-types"},
    { {"INSTALL_PROTOCOL_TYPE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"STATIC", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_GE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_COMPARISON", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"DIRECTLY_CONNECTED", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_LE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"LOCAL_AGGREGATE", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ATTRIBUTE_EQ", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"OSPF3", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"BGP", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"ISIS", "http://openconfig.net/yang/policy-types"},  "openconfig-policy-types"},
    { {"LOCAL_PREF_LOWER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"PREFER_EXTERNAL", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ORIGINATOR", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"AS_PATH_LONGER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_PEER_ADDRESS", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"NEXTHOP_COST_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CLUSTER_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"HIGHER_ROUTER_ID", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_CONFED", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"REJECTED_IMPORT_POLICY", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_ROUTE_REASON", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"ORIGIN_TYPE_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"MED_HIGHER", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INVALID_AS_LOOP", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"BGP_NOT_SELECTED_BESTPATH", "http://openconfig.net/yang/rib/bgp-types"},  "openconfig-rib-bgp-types"},
    { {"INGRESS", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"EGRESS", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"MONITOR", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"DROP", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"OPTICAL_LINE_PORT_TYPE", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"ADD", "http://openconfig.net/yang/transport-line-common"},  "openconfig-transport-line-common"},
    { {"PRIMARY", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"APS_PATHS", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"SECONDARY", "http://openconfig.net/yang/optical-transport-line-protection"},  "openconfig-transport-line-protection"},
    { {"TRIB_RATE_1G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP28", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_LRM", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_AOC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_40GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_SR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CLR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ZR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRANSCEIVER_FORM_FACTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1L1_2D1", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_10G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC48", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_40G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"MPO_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"FIBER_CONNECTOR_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100G_MLG", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LC_CONNECTOR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTHER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU2E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_ER4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ODU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"P1S1_2D2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100G_ACC", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC768", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_2.5G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_WAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_LR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OTN_APPLICATION_CODE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OC192", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"OPTICAL_CHANNEL", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM16", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTUCN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"LOGICAL_ELEMENT_PROTOCOL_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_40GBASE_CR4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2_ACO", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"X2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"XFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_1GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"VSR2000_3R5", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_100GE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_CWDM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU3", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM64", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIBUTARY_RATE_CLASS_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"QSFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_ETHERNET", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"TRIB_RATE_100G", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_STM256", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_OTU1E", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETHERNET_PMD_TYPE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SONET_UNDEFINED", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_4X10GBASE_LR", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_SR10", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_100GBASE_PSM4", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"SFP_PLUS", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ETH_10GBASE_ER", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"PROT_10GE_LAN", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"NON_PLUGGABLE", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"CFP2", "http://openconfig.net/yang/transport-types"},  "openconfig-transport-types"},
    { {"ADDRESS_FAMILY", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"L2_ETHERNET", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV4", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"IPV6", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"MPLS", "http://openconfig.net/yang/openconfig-types"},  "openconfig-types"},
    { {"TPID_0X9200", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x9100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x8100", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_0x8A88", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
    { {"TPID_TYPES", "http://openconfig.net/yang/vlan-types"},  "openconfig-vlan-types"},
};

}

