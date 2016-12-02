#include "openconfig_bgp.hpp"
#include "openconfig_bgp_policy.hpp"
#include "openconfig_bgp_types.hpp"
#include "openconfig_if_aggregate.hpp"
#include "openconfig_if_ethernet.hpp"
#include "openconfig_if_ip.hpp"
#include "openconfig_interfaces.hpp"
#include "openconfig_mpls.hpp"
#include "openconfig_mpls_types.hpp"
#include "openconfig_platform.hpp"
#include "openconfig_platform_types.hpp"
#include "openconfig_policy_types.hpp"
#include "openconfig_routing_policy.hpp"
#include "openconfig_telemetry.hpp"
#include "openconfig_transport_types.hpp"
#include "openconfig_types.hpp"
#include "openconfig_vlan.hpp"
#include "ydk/entity_lookup.hpp"
#include "ydk/path_api.hpp"
#include "ydk/types.hpp"
#include "ydk_ietf/ietf_interfaces.hpp"

namespace ydk
{

void augment_lookup_tables()
{
    ydk_top_entities_table.insert(std::string{"/openconfig-routing-policy:routing-policy"},std::make_unique<openconfig_routing_policy::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/mpls:mpls"},std::make_unique<openconfig_mpls::Mpls>());
    ydk_top_entities_table.insert(std::string{"/openconfig-interfaces:interfaces"},std::make_unique<openconfig_interfaces::Interfaces>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/interfaces:interfaces"},std::make_unique<openconfig_interfaces::Interfaces>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/platform:components"},std::make_unique<openconfig_platform::Components>());
    ydk_top_entities_table.insert(std::string{"/openconfig-platform:components"},std::make_unique<openconfig_platform::Components>());
    ydk_top_entities_table.insert(std::string{"/openconfig-vlan:vlans"},std::make_unique<openconfig_vlan::Vlans>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/vlan:vlans"},std::make_unique<openconfig_vlan::Vlans>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/routing-policy:routing-policy"},std::make_unique<openconfig_routing_policy::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"/openconfig-telemetry:telemetry-system"},std::make_unique<openconfig_telemetry::TelemetrySystem>());
    ydk_top_entities_table.insert(std::string{"/openconfig-mpls:mpls"},std::make_unique<openconfig_mpls::Mpls>());
    ydk_top_entities_table.insert(std::string{"/openconfig-bgp:bgp"},std::make_unique<openconfig_bgp::Bgp>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/bgp:bgp"},std::make_unique<openconfig_bgp::Bgp>());
    ydk_top_entities_table.insert(std::string{"http://openconfig.net/yang/telemetry:telemetry-system"},std::make_unique<openconfig_telemetry::TelemetrySystem>());


    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-if-ip"},"2015-11-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-if-ethernet"},"2015-11-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-platform-types"},"2016-06-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-transport-types"},"2016-06-17", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-interfaces"},"2015-11-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-routing-policy"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-types"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-platform"},"2016-06-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-telemetry"},"2016-02-04", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-ldp"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-bgp-policy"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-static"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-igp"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-vlan"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-bgp-multiprotocol"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-platform-transceiver"},"2016-05-24", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-if-aggregate"},"2015-11-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-rsvp"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-bgp-types"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-bgp"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-sr"},"2015-11-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-types"},"2016-05-31", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-extensions"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-bgp-operational"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-policy-types"},"2015-10-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"openconfig-mpls-te"},"2015-11-05", {}, {}});
}

}
