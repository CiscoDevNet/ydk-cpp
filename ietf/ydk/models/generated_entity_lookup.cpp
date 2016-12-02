#include "iana_if_type.hpp"
#include "ietf_inet_types.hpp"
#include "ietf_interfaces.hpp"
#include "ietf_netconf.hpp"
#include "ietf_netconf_acm.hpp"
#include "ietf_netconf_monitoring.hpp"
#include "ietf_netconf_with_defaults.hpp"
#include "ietf_syslog_types.hpp"
#include "ietf_system.hpp"
#include "ietf_yang_smiv2.hpp"
#include "ydk/entity_lookup.hpp"
#include "ydk/path_api.hpp"
#include "ydk/types.hpp"

namespace ydk
{

void augment_lookup_tables()
{
    ydk_top_entities_table.insert(std::string{"/ietf-system:system-state"},std::make_unique<ietf_system::SystemState>());
    ydk_top_entities_table.insert(std::string{"/ietf-netconf-monitoring:netconf-state"},std::make_unique<ietf_netconf_monitoring::NetconfState>());
    ydk_top_entities_table.insert(std::string{"/ietf-interfaces:interfaces"},std::make_unique<ietf_interfaces::Interfaces>());
    ydk_top_entities_table.insert(std::string{"/ietf-netconf-acm:nacm"},std::make_unique<ietf_netconf_acm::Nacm>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-system:system-state"},std::make_unique<ietf_system::SystemState>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-netconf-acm:nacm"},std::make_unique<ietf_netconf_acm::Nacm>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-interfaces:interfaces"},std::make_unique<ietf_interfaces::Interfaces>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-interfaces:interfaces-state"},std::make_unique<ietf_interfaces::InterfacesState>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-system:system"},std::make_unique<ietf_system::System>());
    ydk_top_entities_table.insert(std::string{"/ietf-system:system"},std::make_unique<ietf_system::System>());
    ydk_top_entities_table.insert(std::string{"urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring:netconf-state"},std::make_unique<ietf_netconf_monitoring::NetconfState>());
    ydk_top_entities_table.insert(std::string{"/ietf-interfaces:interfaces-state"},std::make_unique<ietf_interfaces::InterfacesState>());


    ydk_global_capabilities.push_back(path::Capability{std::string{"iana-crypt-hash"},"2014-08-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-interfaces-ext"},"", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-yang-types"},"2013-07-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"iana-if-type"},"2014-05-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-monitoring"},"2010-10-04", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-acm"},"2012-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-interfaces"},"2014-05-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-with-defaults"},"2011-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-yang-smiv2"},"2012-06-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf"},"2011-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-inet-types"},"2013-07-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-system"},"2014-08-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-syslog-types"},"2015-10-14", {}, {}});
}

}
