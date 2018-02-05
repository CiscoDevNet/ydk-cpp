
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_cfg {

PolicyManager::PolicyManager()
    :
    class_maps(std::make_shared<PolicyManager::ClassMaps>())
	,policy_maps(std::make_shared<PolicyManager::PolicyMaps>())
{
    class_maps->parent = this;
    policy_maps->parent = this;

    yang_name = "policy-manager"; yang_parent_name = "Cisco-IOS-XR-infra-policymgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

PolicyManager::~PolicyManager()
{
}

bool PolicyManager::has_data() const
{
    return (class_maps !=  nullptr && class_maps->has_data())
	|| (policy_maps !=  nullptr && policy_maps->has_data());
}

bool PolicyManager::has_operation() const
{
    return is_set(yfilter)
	|| (class_maps !=  nullptr && class_maps->has_operation())
	|| (policy_maps !=  nullptr && policy_maps->has_operation());
}

std::string PolicyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-maps")
    {
        if(class_maps == nullptr)
        {
            class_maps = std::make_shared<PolicyManager::ClassMaps>();
        }
        return class_maps;
    }

    if(child_yang_name == "policy-maps")
    {
        if(policy_maps == nullptr)
        {
            policy_maps = std::make_shared<PolicyManager::PolicyMaps>();
        }
        return policy_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(class_maps != nullptr)
    {
        children["class-maps"] = class_maps;
    }

    if(policy_maps != nullptr)
    {
        children["policy-maps"] = policy_maps;
    }

    return children;
}

void PolicyManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PolicyManager::clone_ptr() const
{
    return std::make_shared<PolicyManager>();
}

std::string PolicyManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PolicyManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PolicyManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PolicyManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PolicyManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-maps" || name == "policy-maps")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMaps()
{

    yang_name = "class-maps"; yang_parent_name = "policy-manager"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::ClassMaps::~ClassMaps()
{
}

bool PolicyManager::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::ClassMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PolicyManager::ClassMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::ClassMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::ClassMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::ClassMap()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    class_map_mode_match_any{YType::empty, "class-map-mode-match-any"},
    class_map_mode_match_all{YType::empty, "class-map-mode-match-all"},
    description{YType::str, "description"}
    	,
    match(std::make_shared<PolicyManager::ClassMaps::ClassMap::Match>())
	,match_not(std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot>())
{
    match->parent = this;
    match_not->parent = this;

    yang_name = "class-map"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::ClassMaps::ClassMap::~ClassMap()
{
}

bool PolicyManager::ClassMaps::ClassMap::has_data() const
{
    return type.is_set
	|| name.is_set
	|| class_map_mode_match_any.is_set
	|| class_map_mode_match_all.is_set
	|| description.is_set
	|| (match !=  nullptr && match->has_data())
	|| (match_not !=  nullptr && match_not->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(class_map_mode_match_any.yfilter)
	|| ydk::is_set(class_map_mode_match_all.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (match_not !=  nullptr && match_not->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::ClassMaps::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (class_map_mode_match_any.is_set || is_set(class_map_mode_match_any.yfilter)) leaf_name_data.push_back(class_map_mode_match_any.get_name_leafdata());
    if (class_map_mode_match_all.is_set || is_set(class_map_mode_match_all.yfilter)) leaf_name_data.push_back(class_map_mode_match_all.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "match-not")
    {
        if(match_not == nullptr)
        {
            match_not = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot>();
        }
        return match_not;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(match_not != nullptr)
    {
        children["match-not"] = match_not;
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map-mode-match-any")
    {
        class_map_mode_match_any = value;
        class_map_mode_match_any.value_namespace = name_space;
        class_map_mode_match_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map-mode-match-all")
    {
        class_map_mode_match_all = value;
        class_map_mode_match_all.value_namespace = name_space;
        class_map_mode_match_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "class-map-mode-match-any")
    {
        class_map_mode_match_any.yfilter = yfilter;
    }
    if(value_path == "class-map-mode-match-all")
    {
        class_map_mode_match_all.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "match-not" || name == "type" || name == "name" || name == "class-map-mode-match-any" || name == "class-map-mode-match-all" || name == "description")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::Match()
    :
    ipv4_dscp{YType::str, "ipv4-dscp"},
    ipv6_dscp{YType::str, "ipv6-dscp"},
    dscp{YType::str, "dscp"},
    ipv4_precedence{YType::str, "ipv4-precedence"},
    ipv6_precedence{YType::str, "ipv6-precedence"},
    precedence{YType::str, "precedence"},
    qos_group{YType::str, "qos-group"},
    traffic_class{YType::str, "traffic-class"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    dei{YType::uint8, "dei"},
    dei_inner{YType::uint8, "dei-inner"},
    protocol{YType::str, "protocol"},
    ipv4_acl{YType::str, "ipv4-acl"},
    ipv6_acl{YType::str, "ipv6-acl"},
    ethernet_services_acl{YType::str, "ethernet-services-acl"},
    mpls_experimental_topmost{YType::uint8, "mpls-experimental-topmost"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    discard_class{YType::uint8, "discard-class"},
    ipv4_packet_length{YType::str, "ipv4-packet-length"},
    ipv6_packet_length{YType::str, "ipv6-packet-length"},
    packet_length{YType::str, "packet-length"},
    mpls_disposition_ipv4_access_list{YType::str, "mpls-disposition-ipv4-access-list"},
    mpls_disposition_ipv6_access_list{YType::str, "mpls-disposition-ipv6-access-list"},
    vlan{YType::str, "vlan"},
    inner_vlan{YType::str, "inner-vlan"},
    flow_tag{YType::str, "flow-tag"},
    ethertype{YType::str, "ethertype"},
    destination_port{YType::str, "destination-port"},
    fragment_type{YType::str, "fragment-type"},
    frame_relay_dlci{YType::str, "frame-relay-dlci"},
    fr_de{YType::uint8, "fr-de"},
    icmpv4_code{YType::str, "icmpv4-code"},
    icmpv4_type{YType::str, "icmpv4-type"},
    icmpv6_code{YType::str, "icmpv6-code"},
    icmpv6_type{YType::str, "icmpv6-type"},
    source_port{YType::str, "source-port"},
    tcp_flag{YType::uint16, "tcp-flag"},
    authen_status{YType::str, "authen-status"},
    circuit_id{YType::str, "circuit-id"},
    circuit_id_regex{YType::str, "circuit-id-regex"},
    remote_id{YType::str, "remote-id"},
    remote_id_regex{YType::str, "remote-id-regex"},
    service_name{YType::str, "service-name"},
    service_name_regex{YType::str, "service-name-regex"},
    timer{YType::str, "timer"},
    timer_regex{YType::str, "timer-regex"},
    user_name{YType::str, "user-name"},
    user_name_regex{YType::str, "user-name-regex"},
    source_mac{YType::str, "source-mac"},
    destination_mac{YType::str, "destination-mac"},
    vpls_control{YType::empty, "vpls-control"},
    vpls_broadcast{YType::empty, "vpls-broadcast"},
    vpls_multicast{YType::empty, "vpls-multicast"},
    vpls_known{YType::empty, "vpls-known"},
    vpls_unknown{YType::empty, "vpls-unknown"},
    atm_clp{YType::uint8, "atm-clp"},
    atm_oam{YType::empty, "atm-oam"},
    cac_admit{YType::empty, "cac-admit"},
    cac_unadmit{YType::empty, "cac-unadmit"}
    	,
    flow(std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::Flow>())
{
    flow->parent = this;

    yang_name = "match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::~Match()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id.size(); index++)
    {
        if(dhcp_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id_regex.size(); index++)
    {
        if(dhcp_client_id_regex[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_data())
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dei.is_set
	|| dei_inner.is_set
	|| ipv4_acl.is_set
	|| ipv6_acl.is_set
	|| ethernet_services_acl.is_set
	|| mpls_disposition_ipv4_access_list.is_set
	|| mpls_disposition_ipv6_access_list.is_set
	|| fr_de.is_set
	|| tcp_flag.is_set
	|| authen_status.is_set
	|| vpls_control.is_set
	|| vpls_broadcast.is_set
	|| vpls_multicast.is_set
	|| vpls_known.is_set
	|| vpls_unknown.is_set
	|| atm_clp.is_set
	|| atm_oam.is_set
	|| cac_admit.is_set
	|| cac_unadmit.is_set
	|| (flow !=  nullptr && flow->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id.size(); index++)
    {
        if(dhcp_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id_regex.size(); index++)
    {
        if(dhcp_client_id_regex[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : source_mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination_mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_dscp.yfilter)
	|| ydk::is_set(ipv6_dscp.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(ipv4_precedence.yfilter)
	|| ydk::is_set(ipv6_precedence.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_inner.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(ipv4_acl.yfilter)
	|| ydk::is_set(ipv6_acl.yfilter)
	|| ydk::is_set(ethernet_services_acl.yfilter)
	|| ydk::is_set(mpls_experimental_topmost.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(ipv4_packet_length.yfilter)
	|| ydk::is_set(ipv6_packet_length.yfilter)
	|| ydk::is_set(packet_length.yfilter)
	|| ydk::is_set(mpls_disposition_ipv4_access_list.yfilter)
	|| ydk::is_set(mpls_disposition_ipv6_access_list.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(inner_vlan.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(fragment_type.yfilter)
	|| ydk::is_set(frame_relay_dlci.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(icmpv4_code.yfilter)
	|| ydk::is_set(icmpv4_type.yfilter)
	|| ydk::is_set(icmpv6_code.yfilter)
	|| ydk::is_set(icmpv6_type.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(tcp_flag.yfilter)
	|| ydk::is_set(authen_status.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(circuit_id_regex.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(remote_id_regex.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(service_name_regex.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(timer_regex.yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(user_name_regex.yfilter)
	|| ydk::is_set(source_mac.yfilter)
	|| ydk::is_set(destination_mac.yfilter)
	|| ydk::is_set(vpls_control.yfilter)
	|| ydk::is_set(vpls_broadcast.yfilter)
	|| ydk::is_set(vpls_multicast.yfilter)
	|| ydk::is_set(vpls_known.yfilter)
	|| ydk::is_set(vpls_unknown.yfilter)
	|| ydk::is_set(atm_clp.yfilter)
	|| ydk::is_set(atm_oam.yfilter)
	|| ydk::is_set(cac_admit.yfilter)
	|| ydk::is_set(cac_unadmit.yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_inner.is_set || is_set(dei_inner.yfilter)) leaf_name_data.push_back(dei_inner.get_name_leafdata());
    if (ipv4_acl.is_set || is_set(ipv4_acl.yfilter)) leaf_name_data.push_back(ipv4_acl.get_name_leafdata());
    if (ipv6_acl.is_set || is_set(ipv6_acl.yfilter)) leaf_name_data.push_back(ipv6_acl.get_name_leafdata());
    if (ethernet_services_acl.is_set || is_set(ethernet_services_acl.yfilter)) leaf_name_data.push_back(ethernet_services_acl.get_name_leafdata());
    if (mpls_disposition_ipv4_access_list.is_set || is_set(mpls_disposition_ipv4_access_list.yfilter)) leaf_name_data.push_back(mpls_disposition_ipv4_access_list.get_name_leafdata());
    if (mpls_disposition_ipv6_access_list.is_set || is_set(mpls_disposition_ipv6_access_list.yfilter)) leaf_name_data.push_back(mpls_disposition_ipv6_access_list.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (tcp_flag.is_set || is_set(tcp_flag.yfilter)) leaf_name_data.push_back(tcp_flag.get_name_leafdata());
    if (authen_status.is_set || is_set(authen_status.yfilter)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (vpls_control.is_set || is_set(vpls_control.yfilter)) leaf_name_data.push_back(vpls_control.get_name_leafdata());
    if (vpls_broadcast.is_set || is_set(vpls_broadcast.yfilter)) leaf_name_data.push_back(vpls_broadcast.get_name_leafdata());
    if (vpls_multicast.is_set || is_set(vpls_multicast.yfilter)) leaf_name_data.push_back(vpls_multicast.get_name_leafdata());
    if (vpls_known.is_set || is_set(vpls_known.yfilter)) leaf_name_data.push_back(vpls_known.get_name_leafdata());
    if (vpls_unknown.is_set || is_set(vpls_unknown.yfilter)) leaf_name_data.push_back(vpls_unknown.get_name_leafdata());
    if (atm_clp.is_set || is_set(atm_clp.yfilter)) leaf_name_data.push_back(atm_clp.get_name_leafdata());
    if (atm_oam.is_set || is_set(atm_oam.yfilter)) leaf_name_data.push_back(atm_oam.get_name_leafdata());
    if (cac_admit.is_set || is_set(cac_admit.yfilter)) leaf_name_data.push_back(cac_admit.get_name_leafdata());
    if (cac_unadmit.is_set || is_set(cac_unadmit.yfilter)) leaf_name_data.push_back(cac_unadmit.get_name_leafdata());

    auto ipv4_dscp_name_datas = ipv4_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_dscp_name_datas.begin(), ipv4_dscp_name_datas.end());
    auto ipv6_dscp_name_datas = ipv6_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_dscp_name_datas.begin(), ipv6_dscp_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto ipv4_precedence_name_datas = ipv4_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_precedence_name_datas.begin(), ipv4_precedence_name_datas.end());
    auto ipv6_precedence_name_datas = ipv6_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_precedence_name_datas.begin(), ipv6_precedence_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto traffic_class_name_datas = traffic_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), traffic_class_name_datas.begin(), traffic_class_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto inner_cos_name_datas = inner_cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_cos_name_datas.begin(), inner_cos_name_datas.end());
    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    auto mpls_experimental_topmost_name_datas = mpls_experimental_topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_topmost_name_datas.begin(), mpls_experimental_topmost_name_datas.end());
    auto mpls_experimental_imposition_name_datas = mpls_experimental_imposition.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_imposition_name_datas.begin(), mpls_experimental_imposition_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto ipv4_packet_length_name_datas = ipv4_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_packet_length_name_datas.begin(), ipv4_packet_length_name_datas.end());
    auto ipv6_packet_length_name_datas = ipv6_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_packet_length_name_datas.begin(), ipv6_packet_length_name_datas.end());
    auto packet_length_name_datas = packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_length_name_datas.begin(), packet_length_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    auto inner_vlan_name_datas = inner_vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_vlan_name_datas.begin(), inner_vlan_name_datas.end());
    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());
    auto ethertype_name_datas = ethertype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethertype_name_datas.begin(), ethertype_name_datas.end());
    auto destination_port_name_datas = destination_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_port_name_datas.begin(), destination_port_name_datas.end());
    auto fragment_type_name_datas = fragment_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fragment_type_name_datas.begin(), fragment_type_name_datas.end());
    auto frame_relay_dlci_name_datas = frame_relay_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), frame_relay_dlci_name_datas.begin(), frame_relay_dlci_name_datas.end());
    auto icmpv4_code_name_datas = icmpv4_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_code_name_datas.begin(), icmpv4_code_name_datas.end());
    auto icmpv4_type_name_datas = icmpv4_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_type_name_datas.begin(), icmpv4_type_name_datas.end());
    auto icmpv6_code_name_datas = icmpv6_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_code_name_datas.begin(), icmpv6_code_name_datas.end());
    auto icmpv6_type_name_datas = icmpv6_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_type_name_datas.begin(), icmpv6_type_name_datas.end());
    auto source_port_name_datas = source_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_port_name_datas.begin(), source_port_name_datas.end());
    auto circuit_id_name_datas = circuit_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_name_datas.begin(), circuit_id_name_datas.end());
    auto circuit_id_regex_name_datas = circuit_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_regex_name_datas.begin(), circuit_id_regex_name_datas.end());
    auto remote_id_name_datas = remote_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_name_datas.begin(), remote_id_name_datas.end());
    auto remote_id_regex_name_datas = remote_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_regex_name_datas.begin(), remote_id_regex_name_datas.end());
    auto service_name_name_datas = service_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_name_datas.begin(), service_name_name_datas.end());
    auto service_name_regex_name_datas = service_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_regex_name_datas.begin(), service_name_regex_name_datas.end());
    auto timer_name_datas = timer.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_name_datas.begin(), timer_name_datas.end());
    auto timer_regex_name_datas = timer_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_regex_name_datas.begin(), timer_regex_name_datas.end());
    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    auto user_name_regex_name_datas = user_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_regex_name_datas.begin(), user_name_regex_name_datas.end());
    auto source_mac_name_datas = source_mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_mac_name_datas.begin(), source_mac_name_datas.end());
    auto destination_mac_name_datas = destination_mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_mac_name_datas.begin(), destination_mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address-ipv4")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4>();
        c->parent = this;
        destination_address_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "destination-address-ipv6")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6>();
        c->parent = this;
        destination_address_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-ipv4")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4>();
        c->parent = this;
        source_address_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-ipv6")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6>();
        c->parent = this;
        source_address_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp-client-id")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId>();
        c->parent = this;
        dhcp_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex>();
        c->parent = this;
        dhcp_client_id_regex.push_back(c);
        return c;
    }

    if(child_yang_name == "domain-name")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DomainName>();
        c->parent = this;
        domain_name.push_back(c);
        return c;
    }

    if(child_yang_name == "domain-name-regex")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex>();
        c->parent = this;
        domain_name_regex.push_back(c);
        return c;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : destination_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : destination_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : source_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : source_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : dhcp_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : dhcp_client_id_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : domain_name_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.append(value);
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.append(value);
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "traffic-class")
    {
        traffic_class.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "inner-cos")
    {
        inner_cos.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-inner")
    {
        dei_inner = value;
        dei_inner.value_namespace = name_space;
        dei_inner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl = value;
        ipv4_acl.value_namespace = name_space;
        ipv4_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl = value;
        ipv6_acl.value_namespace = name_space;
        ipv6_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl = value;
        ethernet_services_acl.value_namespace = name_space;
        ethernet_services_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.append(value);
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.append(value);
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.append(value);
    }
    if(value_path == "packet-length")
    {
        packet_length.append(value);
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list = value;
        mpls_disposition_ipv4_access_list.value_namespace = name_space;
        mpls_disposition_ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list = value;
        mpls_disposition_ipv6_access_list.value_namespace = name_space;
        mpls_disposition_ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.append(value);
    }
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
    if(value_path == "ethertype")
    {
        ethertype.append(value);
    }
    if(value_path == "destination-port")
    {
        destination_port.append(value);
    }
    if(value_path == "fragment-type")
    {
        fragment_type.append(value);
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.append(value);
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.append(value);
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.append(value);
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.append(value);
    }
    if(value_path == "source-port")
    {
        source_port.append(value);
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag = value;
        tcp_flag.value_namespace = name_space;
        tcp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-status")
    {
        authen_status = value;
        authen_status.value_namespace = name_space;
        authen_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.append(value);
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.append(value);
    }
    if(value_path == "remote-id")
    {
        remote_id.append(value);
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.append(value);
    }
    if(value_path == "service-name")
    {
        service_name.append(value);
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.append(value);
    }
    if(value_path == "timer")
    {
        timer.append(value);
    }
    if(value_path == "timer-regex")
    {
        timer_regex.append(value);
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.append(value);
    }
    if(value_path == "source-mac")
    {
        source_mac.append(value);
    }
    if(value_path == "destination-mac")
    {
        destination_mac.append(value);
    }
    if(value_path == "vpls-control")
    {
        vpls_control = value;
        vpls_control.value_namespace = name_space;
        vpls_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast = value;
        vpls_broadcast.value_namespace = name_space;
        vpls_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast = value;
        vpls_multicast.value_namespace = name_space;
        vpls_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-known")
    {
        vpls_known = value;
        vpls_known.value_namespace = name_space;
        vpls_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown = value;
        vpls_unknown.value_namespace = name_space;
        vpls_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-clp")
    {
        atm_clp = value;
        atm_clp.value_namespace = name_space;
        atm_clp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-oam")
    {
        atm_oam = value;
        atm_oam.value_namespace = name_space;
        atm_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cac-admit")
    {
        cac_admit = value;
        cac_admit.value_namespace = name_space;
        cac_admit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cac-unadmit")
    {
        cac_unadmit = value;
        cac_unadmit.value_namespace = name_space;
        cac_unadmit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.yfilter = yfilter;
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.yfilter = yfilter;
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-inner")
    {
        dei_inner.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl.yfilter = yfilter;
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl.yfilter = yfilter;
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.yfilter = yfilter;
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.yfilter = yfilter;
    }
    if(value_path == "packet-length")
    {
        packet_length.yfilter = yfilter;
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.yfilter = yfilter;
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.yfilter = yfilter;
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.yfilter = yfilter;
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.yfilter = yfilter;
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag.yfilter = yfilter;
    }
    if(value_path == "authen-status")
    {
        authen_status.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "timer-regex")
    {
        timer_regex.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.yfilter = yfilter;
    }
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
    if(value_path == "destination-mac")
    {
        destination_mac.yfilter = yfilter;
    }
    if(value_path == "vpls-control")
    {
        vpls_control.yfilter = yfilter;
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast.yfilter = yfilter;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast.yfilter = yfilter;
    }
    if(value_path == "vpls-known")
    {
        vpls_known.yfilter = yfilter;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown.yfilter = yfilter;
    }
    if(value_path == "atm-clp")
    {
        atm_clp.yfilter = yfilter;
    }
    if(value_path == "atm-oam")
    {
        atm_oam.yfilter = yfilter;
    }
    if(value_path == "cac-admit")
    {
        cac_admit.yfilter = yfilter;
    }
    if(value_path == "cac-unadmit")
    {
        cac_unadmit.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address-ipv4" || name == "destination-address-ipv6" || name == "source-address-ipv4" || name == "source-address-ipv6" || name == "dhcp-client-id" || name == "dhcp-client-id-regex" || name == "domain-name" || name == "domain-name-regex" || name == "flow" || name == "ipv4-dscp" || name == "ipv6-dscp" || name == "dscp" || name == "ipv4-precedence" || name == "ipv6-precedence" || name == "precedence" || name == "qos-group" || name == "traffic-class" || name == "cos" || name == "inner-cos" || name == "dei" || name == "dei-inner" || name == "protocol" || name == "ipv4-acl" || name == "ipv6-acl" || name == "ethernet-services-acl" || name == "mpls-experimental-topmost" || name == "mpls-experimental-imposition" || name == "discard-class" || name == "ipv4-packet-length" || name == "ipv6-packet-length" || name == "packet-length" || name == "mpls-disposition-ipv4-access-list" || name == "mpls-disposition-ipv6-access-list" || name == "vlan" || name == "inner-vlan" || name == "flow-tag" || name == "ethertype" || name == "destination-port" || name == "fragment-type" || name == "frame-relay-dlci" || name == "fr-de" || name == "icmpv4-code" || name == "icmpv4-type" || name == "icmpv6-code" || name == "icmpv6-type" || name == "source-port" || name == "tcp-flag" || name == "authen-status" || name == "circuit-id" || name == "circuit-id-regex" || name == "remote-id" || name == "remote-id-regex" || name == "service-name" || name == "service-name-regex" || name == "timer" || name == "timer-regex" || name == "user-name" || name == "user-name-regex" || name == "source-mac" || name == "destination-mac" || name == "vpls-control" || name == "vpls-broadcast" || name == "vpls-multicast" || name == "vpls-known" || name == "vpls-unknown" || name == "atm-clp" || name == "atm-oam" || name == "cac-admit" || name == "cac-unadmit")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::DestinationAddressIpv4()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"}
{

    yang_name = "destination-address-ipv4"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::~DestinationAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv4" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::DestinationAddressIpv6()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "destination-address-ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::~DestinationAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv6" <<"[address='" <<address <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::SourceAddressIpv4()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"}
{

    yang_name = "source-address-ipv4"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::~SourceAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv4" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::SourceAddressIpv6()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "source-address-ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::~SourceAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv6" <<"[address='" <<address <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::DhcpClientId()
    :
    value_{YType::str, "value"},
    flag{YType::str, "flag"}
{

    yang_name = "dhcp-client-id"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::has_data() const
{
    return value_.is_set
	|| flag.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id" <<"[value='" <<value_ <<"']" <<"[flag='" <<flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flag")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    value_{YType::str, "value"},
    flag{YType::str, "flag"}
{

    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::has_data() const
{
    return value_.is_set
	|| flag.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex" <<"[value='" <<value_ <<"']" <<"[flag='" <<flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DhcpClientIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flag")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DomainName::DomainName()
    :
    name{YType::str, "name"},
    format{YType::str, "format"}
{

    yang_name = "domain-name"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DomainName::~DomainName()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainName::has_data() const
{
    return name.is_set
	|| format.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[name='" <<name <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "format")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::DomainNameRegex()
    :
    regex{YType::str, "regex"},
    format{YType::str, "format"}
{

    yang_name = "domain-name-regex"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::~DomainNameRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::has_data() const
{
    return regex.is_set
	|| format.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name-regex" <<"[regex='" <<regex <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex" || name == "format")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::Flow()
    :
    flow_key{YType::str, "flow-key"}
    	,
    flow_cache(std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache>())
{
    flow_cache->parent = this;

    yang_name = "flow"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::~Flow()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::has_data() const
{
    for (auto const & leaf : flow_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flow_cache !=  nullptr && flow_cache->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::has_operation() const
{
    for (auto const & leaf : flow_key.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_key.yfilter)
	|| (flow_cache !=  nullptr && flow_cache->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::Match::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flow_key_name_datas = flow_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_key_name_datas.begin(), flow_key_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-cache")
    {
        if(flow_cache == nullptr)
        {
            flow_cache = std::make_shared<PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache>();
        }
        return flow_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_cache != nullptr)
    {
        children["flow-cache"] = flow_cache;
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-key")
    {
        flow_key.append(value);
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-key")
    {
        flow_key.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-cache" || name == "flow-key")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::FlowCache()
    :
    idle_timeout{YType::str, "idle-timeout"}
{

    yang_name = "flow-cache"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::~FlowCache()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::has_data() const
{
    return idle_timeout.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_timeout.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-timeout")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::MatchNot()
    :
    ipv4_dscp{YType::str, "ipv4-dscp"},
    ipv6_dscp{YType::str, "ipv6-dscp"},
    dscp{YType::str, "dscp"},
    ipv4_precedence{YType::str, "ipv4-precedence"},
    ipv6_precedence{YType::str, "ipv6-precedence"},
    precedence{YType::str, "precedence"},
    qos_group{YType::str, "qos-group"},
    traffic_class{YType::str, "traffic-class"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    dei{YType::uint8, "dei"},
    dei_inner{YType::uint8, "dei-inner"},
    protocol{YType::str, "protocol"},
    ipv4_acl{YType::str, "ipv4-acl"},
    ipv6_acl{YType::str, "ipv6-acl"},
    ethernet_services_acl{YType::str, "ethernet-services-acl"},
    mpls_experimental_topmost{YType::uint8, "mpls-experimental-topmost"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    discard_class{YType::uint8, "discard-class"},
    ipv4_packet_length{YType::str, "ipv4-packet-length"},
    ipv6_packet_length{YType::str, "ipv6-packet-length"},
    packet_length{YType::str, "packet-length"},
    mpls_disposition_ipv4_access_list{YType::str, "mpls-disposition-ipv4-access-list"},
    mpls_disposition_ipv6_access_list{YType::str, "mpls-disposition-ipv6-access-list"},
    vlan{YType::str, "vlan"},
    inner_vlan{YType::str, "inner-vlan"},
    flow_tag{YType::str, "flow-tag"},
    ethertype{YType::str, "ethertype"},
    destination_port{YType::str, "destination-port"},
    fragment_type{YType::str, "fragment-type"},
    frame_relay_dlci{YType::str, "frame-relay-dlci"},
    fr_de{YType::uint8, "fr-de"},
    icmpv4_code{YType::str, "icmpv4-code"},
    icmpv4_type{YType::str, "icmpv4-type"},
    icmpv6_code{YType::str, "icmpv6-code"},
    icmpv6_type{YType::str, "icmpv6-type"},
    source_port{YType::str, "source-port"},
    tcp_flag{YType::uint16, "tcp-flag"},
    authen_status{YType::str, "authen-status"},
    circuit_id{YType::str, "circuit-id"},
    circuit_id_regex{YType::str, "circuit-id-regex"},
    remote_id{YType::str, "remote-id"},
    remote_id_regex{YType::str, "remote-id-regex"},
    service_name{YType::str, "service-name"},
    service_name_regex{YType::str, "service-name-regex"},
    timer{YType::str, "timer"},
    timer_regex{YType::str, "timer-regex"},
    user_name{YType::str, "user-name"},
    user_name_regex{YType::str, "user-name-regex"},
    source_mac{YType::str, "source-mac"},
    destination_mac{YType::str, "destination-mac"},
    vpls_control{YType::empty, "vpls-control"},
    vpls_broadcast{YType::empty, "vpls-broadcast"},
    vpls_multicast{YType::empty, "vpls-multicast"},
    vpls_known{YType::empty, "vpls-known"},
    vpls_unknown{YType::empty, "vpls-unknown"}
    	,
    flow(std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::Flow>())
{
    flow->parent = this;

    yang_name = "match-not"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::~MatchNot()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::has_data() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id.size(); index++)
    {
        if(dhcp_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id_regex.size(); index++)
    {
        if(dhcp_client_id_regex[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_data())
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dei.is_set
	|| dei_inner.is_set
	|| ipv4_acl.is_set
	|| ipv6_acl.is_set
	|| ethernet_services_acl.is_set
	|| mpls_disposition_ipv4_access_list.is_set
	|| mpls_disposition_ipv6_access_list.is_set
	|| fr_de.is_set
	|| tcp_flag.is_set
	|| authen_status.is_set
	|| vpls_control.is_set
	|| vpls_broadcast.is_set
	|| vpls_multicast.is_set
	|| vpls_known.is_set
	|| vpls_unknown.is_set
	|| (flow !=  nullptr && flow->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::has_operation() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id.size(); index++)
    {
        if(dhcp_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dhcp_client_id_regex.size(); index++)
    {
        if(dhcp_client_id_regex[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : source_mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination_mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_dscp.yfilter)
	|| ydk::is_set(ipv6_dscp.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(ipv4_precedence.yfilter)
	|| ydk::is_set(ipv6_precedence.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_inner.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(ipv4_acl.yfilter)
	|| ydk::is_set(ipv6_acl.yfilter)
	|| ydk::is_set(ethernet_services_acl.yfilter)
	|| ydk::is_set(mpls_experimental_topmost.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(ipv4_packet_length.yfilter)
	|| ydk::is_set(ipv6_packet_length.yfilter)
	|| ydk::is_set(packet_length.yfilter)
	|| ydk::is_set(mpls_disposition_ipv4_access_list.yfilter)
	|| ydk::is_set(mpls_disposition_ipv6_access_list.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(inner_vlan.yfilter)
	|| ydk::is_set(flow_tag.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(fragment_type.yfilter)
	|| ydk::is_set(frame_relay_dlci.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(icmpv4_code.yfilter)
	|| ydk::is_set(icmpv4_type.yfilter)
	|| ydk::is_set(icmpv6_code.yfilter)
	|| ydk::is_set(icmpv6_type.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(tcp_flag.yfilter)
	|| ydk::is_set(authen_status.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(circuit_id_regex.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(remote_id_regex.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(service_name_regex.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(timer_regex.yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(user_name_regex.yfilter)
	|| ydk::is_set(source_mac.yfilter)
	|| ydk::is_set(destination_mac.yfilter)
	|| ydk::is_set(vpls_control.yfilter)
	|| ydk::is_set(vpls_broadcast.yfilter)
	|| ydk::is_set(vpls_multicast.yfilter)
	|| ydk::is_set(vpls_known.yfilter)
	|| ydk::is_set(vpls_unknown.yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-not";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_inner.is_set || is_set(dei_inner.yfilter)) leaf_name_data.push_back(dei_inner.get_name_leafdata());
    if (ipv4_acl.is_set || is_set(ipv4_acl.yfilter)) leaf_name_data.push_back(ipv4_acl.get_name_leafdata());
    if (ipv6_acl.is_set || is_set(ipv6_acl.yfilter)) leaf_name_data.push_back(ipv6_acl.get_name_leafdata());
    if (ethernet_services_acl.is_set || is_set(ethernet_services_acl.yfilter)) leaf_name_data.push_back(ethernet_services_acl.get_name_leafdata());
    if (mpls_disposition_ipv4_access_list.is_set || is_set(mpls_disposition_ipv4_access_list.yfilter)) leaf_name_data.push_back(mpls_disposition_ipv4_access_list.get_name_leafdata());
    if (mpls_disposition_ipv6_access_list.is_set || is_set(mpls_disposition_ipv6_access_list.yfilter)) leaf_name_data.push_back(mpls_disposition_ipv6_access_list.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (tcp_flag.is_set || is_set(tcp_flag.yfilter)) leaf_name_data.push_back(tcp_flag.get_name_leafdata());
    if (authen_status.is_set || is_set(authen_status.yfilter)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (vpls_control.is_set || is_set(vpls_control.yfilter)) leaf_name_data.push_back(vpls_control.get_name_leafdata());
    if (vpls_broadcast.is_set || is_set(vpls_broadcast.yfilter)) leaf_name_data.push_back(vpls_broadcast.get_name_leafdata());
    if (vpls_multicast.is_set || is_set(vpls_multicast.yfilter)) leaf_name_data.push_back(vpls_multicast.get_name_leafdata());
    if (vpls_known.is_set || is_set(vpls_known.yfilter)) leaf_name_data.push_back(vpls_known.get_name_leafdata());
    if (vpls_unknown.is_set || is_set(vpls_unknown.yfilter)) leaf_name_data.push_back(vpls_unknown.get_name_leafdata());

    auto ipv4_dscp_name_datas = ipv4_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_dscp_name_datas.begin(), ipv4_dscp_name_datas.end());
    auto ipv6_dscp_name_datas = ipv6_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_dscp_name_datas.begin(), ipv6_dscp_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto ipv4_precedence_name_datas = ipv4_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_precedence_name_datas.begin(), ipv4_precedence_name_datas.end());
    auto ipv6_precedence_name_datas = ipv6_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_precedence_name_datas.begin(), ipv6_precedence_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto traffic_class_name_datas = traffic_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), traffic_class_name_datas.begin(), traffic_class_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto inner_cos_name_datas = inner_cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_cos_name_datas.begin(), inner_cos_name_datas.end());
    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    auto mpls_experimental_topmost_name_datas = mpls_experimental_topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_topmost_name_datas.begin(), mpls_experimental_topmost_name_datas.end());
    auto mpls_experimental_imposition_name_datas = mpls_experimental_imposition.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_imposition_name_datas.begin(), mpls_experimental_imposition_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto ipv4_packet_length_name_datas = ipv4_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_packet_length_name_datas.begin(), ipv4_packet_length_name_datas.end());
    auto ipv6_packet_length_name_datas = ipv6_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_packet_length_name_datas.begin(), ipv6_packet_length_name_datas.end());
    auto packet_length_name_datas = packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_length_name_datas.begin(), packet_length_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    auto inner_vlan_name_datas = inner_vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_vlan_name_datas.begin(), inner_vlan_name_datas.end());
    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());
    auto ethertype_name_datas = ethertype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethertype_name_datas.begin(), ethertype_name_datas.end());
    auto destination_port_name_datas = destination_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_port_name_datas.begin(), destination_port_name_datas.end());
    auto fragment_type_name_datas = fragment_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fragment_type_name_datas.begin(), fragment_type_name_datas.end());
    auto frame_relay_dlci_name_datas = frame_relay_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), frame_relay_dlci_name_datas.begin(), frame_relay_dlci_name_datas.end());
    auto icmpv4_code_name_datas = icmpv4_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_code_name_datas.begin(), icmpv4_code_name_datas.end());
    auto icmpv4_type_name_datas = icmpv4_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_type_name_datas.begin(), icmpv4_type_name_datas.end());
    auto icmpv6_code_name_datas = icmpv6_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_code_name_datas.begin(), icmpv6_code_name_datas.end());
    auto icmpv6_type_name_datas = icmpv6_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_type_name_datas.begin(), icmpv6_type_name_datas.end());
    auto source_port_name_datas = source_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_port_name_datas.begin(), source_port_name_datas.end());
    auto circuit_id_name_datas = circuit_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_name_datas.begin(), circuit_id_name_datas.end());
    auto circuit_id_regex_name_datas = circuit_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_regex_name_datas.begin(), circuit_id_regex_name_datas.end());
    auto remote_id_name_datas = remote_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_name_datas.begin(), remote_id_name_datas.end());
    auto remote_id_regex_name_datas = remote_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_regex_name_datas.begin(), remote_id_regex_name_datas.end());
    auto service_name_name_datas = service_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_name_datas.begin(), service_name_name_datas.end());
    auto service_name_regex_name_datas = service_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_regex_name_datas.begin(), service_name_regex_name_datas.end());
    auto timer_name_datas = timer.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_name_datas.begin(), timer_name_datas.end());
    auto timer_regex_name_datas = timer_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_regex_name_datas.begin(), timer_regex_name_datas.end());
    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    auto user_name_regex_name_datas = user_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_regex_name_datas.begin(), user_name_regex_name_datas.end());
    auto source_mac_name_datas = source_mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_mac_name_datas.begin(), source_mac_name_datas.end());
    auto destination_mac_name_datas = destination_mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_mac_name_datas.begin(), destination_mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address-ipv4")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4>();
        c->parent = this;
        destination_address_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "destination-address-ipv6")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6>();
        c->parent = this;
        destination_address_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-ipv4")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4>();
        c->parent = this;
        source_address_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-ipv6")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6>();
        c->parent = this;
        source_address_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp-client-id")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId>();
        c->parent = this;
        dhcp_client_id.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex>();
        c->parent = this;
        dhcp_client_id_regex.push_back(c);
        return c;
    }

    if(child_yang_name == "domain-name")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName>();
        c->parent = this;
        domain_name.push_back(c);
        return c;
    }

    if(child_yang_name == "domain-name-regex")
    {
        auto c = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex>();
        c->parent = this;
        domain_name_regex.push_back(c);
        return c;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<PolicyManager::ClassMaps::ClassMap::MatchNot::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : destination_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : destination_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : source_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : source_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : dhcp_client_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : dhcp_client_id_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : domain_name_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.append(value);
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.append(value);
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "traffic-class")
    {
        traffic_class.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "inner-cos")
    {
        inner_cos.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-inner")
    {
        dei_inner = value;
        dei_inner.value_namespace = name_space;
        dei_inner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl = value;
        ipv4_acl.value_namespace = name_space;
        ipv4_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl = value;
        ipv6_acl.value_namespace = name_space;
        ipv6_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl = value;
        ethernet_services_acl.value_namespace = name_space;
        ethernet_services_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.append(value);
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.append(value);
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.append(value);
    }
    if(value_path == "packet-length")
    {
        packet_length.append(value);
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list = value;
        mpls_disposition_ipv4_access_list.value_namespace = name_space;
        mpls_disposition_ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list = value;
        mpls_disposition_ipv6_access_list.value_namespace = name_space;
        mpls_disposition_ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.append(value);
    }
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
    if(value_path == "ethertype")
    {
        ethertype.append(value);
    }
    if(value_path == "destination-port")
    {
        destination_port.append(value);
    }
    if(value_path == "fragment-type")
    {
        fragment_type.append(value);
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.append(value);
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.append(value);
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.append(value);
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.append(value);
    }
    if(value_path == "source-port")
    {
        source_port.append(value);
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag = value;
        tcp_flag.value_namespace = name_space;
        tcp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-status")
    {
        authen_status = value;
        authen_status.value_namespace = name_space;
        authen_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.append(value);
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.append(value);
    }
    if(value_path == "remote-id")
    {
        remote_id.append(value);
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.append(value);
    }
    if(value_path == "service-name")
    {
        service_name.append(value);
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.append(value);
    }
    if(value_path == "timer")
    {
        timer.append(value);
    }
    if(value_path == "timer-regex")
    {
        timer_regex.append(value);
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.append(value);
    }
    if(value_path == "source-mac")
    {
        source_mac.append(value);
    }
    if(value_path == "destination-mac")
    {
        destination_mac.append(value);
    }
    if(value_path == "vpls-control")
    {
        vpls_control = value;
        vpls_control.value_namespace = name_space;
        vpls_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast = value;
        vpls_broadcast.value_namespace = name_space;
        vpls_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast = value;
        vpls_multicast.value_namespace = name_space;
        vpls_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-known")
    {
        vpls_known = value;
        vpls_known.value_namespace = name_space;
        vpls_known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown = value;
        vpls_unknown.value_namespace = name_space;
        vpls_unknown.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.yfilter = yfilter;
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.yfilter = yfilter;
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-inner")
    {
        dei_inner.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl.yfilter = yfilter;
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl.yfilter = yfilter;
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.yfilter = yfilter;
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.yfilter = yfilter;
    }
    if(value_path == "packet-length")
    {
        packet_length.yfilter = yfilter;
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.yfilter = yfilter;
    }
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.yfilter = yfilter;
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.yfilter = yfilter;
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.yfilter = yfilter;
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.yfilter = yfilter;
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag.yfilter = yfilter;
    }
    if(value_path == "authen-status")
    {
        authen_status.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "timer-regex")
    {
        timer_regex.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.yfilter = yfilter;
    }
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
    if(value_path == "destination-mac")
    {
        destination_mac.yfilter = yfilter;
    }
    if(value_path == "vpls-control")
    {
        vpls_control.yfilter = yfilter;
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast.yfilter = yfilter;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast.yfilter = yfilter;
    }
    if(value_path == "vpls-known")
    {
        vpls_known.yfilter = yfilter;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address-ipv4" || name == "destination-address-ipv6" || name == "source-address-ipv4" || name == "source-address-ipv6" || name == "dhcp-client-id" || name == "dhcp-client-id-regex" || name == "domain-name" || name == "domain-name-regex" || name == "flow" || name == "ipv4-dscp" || name == "ipv6-dscp" || name == "dscp" || name == "ipv4-precedence" || name == "ipv6-precedence" || name == "precedence" || name == "qos-group" || name == "traffic-class" || name == "cos" || name == "inner-cos" || name == "dei" || name == "dei-inner" || name == "protocol" || name == "ipv4-acl" || name == "ipv6-acl" || name == "ethernet-services-acl" || name == "mpls-experimental-topmost" || name == "mpls-experimental-imposition" || name == "discard-class" || name == "ipv4-packet-length" || name == "ipv6-packet-length" || name == "packet-length" || name == "mpls-disposition-ipv4-access-list" || name == "mpls-disposition-ipv6-access-list" || name == "vlan" || name == "inner-vlan" || name == "flow-tag" || name == "ethertype" || name == "destination-port" || name == "fragment-type" || name == "frame-relay-dlci" || name == "fr-de" || name == "icmpv4-code" || name == "icmpv4-type" || name == "icmpv6-code" || name == "icmpv6-type" || name == "source-port" || name == "tcp-flag" || name == "authen-status" || name == "circuit-id" || name == "circuit-id-regex" || name == "remote-id" || name == "remote-id-regex" || name == "service-name" || name == "service-name-regex" || name == "timer" || name == "timer-regex" || name == "user-name" || name == "user-name-regex" || name == "source-mac" || name == "destination-mac" || name == "vpls-control" || name == "vpls-broadcast" || name == "vpls-multicast" || name == "vpls-known" || name == "vpls-unknown")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::DestinationAddressIpv4()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"}
{

    yang_name = "destination-address-ipv4"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::~DestinationAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv4" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::DestinationAddressIpv6()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "destination-address-ipv6"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::~DestinationAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv6" <<"[address='" <<address <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::SourceAddressIpv4()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"}
{

    yang_name = "source-address-ipv4"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::~SourceAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv4" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::SourceAddressIpv6()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "source-address-ipv6"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::~SourceAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv6" <<"[address='" <<address <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::DhcpClientId()
    :
    value_{YType::str, "value"},
    flag{YType::str, "flag"}
{

    yang_name = "dhcp-client-id"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::~DhcpClientId()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::has_data() const
{
    return value_.is_set
	|| flag.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id" <<"[value='" <<value_ <<"']" <<"[flag='" <<flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flag")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::DhcpClientIdRegex()
    :
    value_{YType::str, "value"},
    flag{YType::str, "flag"}
{

    yang_name = "dhcp-client-id-regex"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::~DhcpClientIdRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::has_data() const
{
    return value_.is_set
	|| flag.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-client-id-regex" <<"[value='" <<value_ <<"']" <<"[flag='" <<flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DhcpClientIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flag")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::DomainName()
    :
    name{YType::str, "name"},
    format{YType::str, "format"}
{

    yang_name = "domain-name"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::~DomainName()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::has_data() const
{
    return name.is_set
	|| format.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[name='" <<name <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "format")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::DomainNameRegex()
    :
    regex{YType::str, "regex"},
    format{YType::str, "format"}
{

    yang_name = "domain-name-regex"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::~DomainNameRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::has_data() const
{
    return regex.is_set
	|| format.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name-regex" <<"[regex='" <<regex <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex" || name == "format")
        return true;
    return false;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::Flow()
    :
    flow_tag{YType::uint16, "flow-tag"}
{

    yang_name = "flow"; yang_parent_name = "match-not"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::~Flow()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::has_data() const
{
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::has_operation() const
{
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_tag.yfilter);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-tag")
    {
        flow_tag.yfilter = yfilter;
    }
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-tag")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMaps()
{

    yang_name = "policy-maps"; yang_parent_name = "policy-manager"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::PolicyMaps::~PolicyMaps()
{
}

bool PolicyManager::PolicyMaps::has_data() const
{
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::PolicyMaps::has_operation() const
{
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::PolicyMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::PolicyMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PolicyManager::PolicyMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMap()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    description{YType::str, "description"}
{

    yang_name = "policy-map"; yang_parent_name = "policy-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::PolicyMaps::PolicyMap::~PolicyMap()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map_rule.size(); index++)
    {
        if(policy_map_rule[index]->has_data())
            return true;
    }
    return type.is_set
	|| name.is_set
	|| description.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map_rule.size(); index++)
    {
        if(policy_map_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/policy-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::PolicyMaps::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map" <<"[type='" <<type <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-map-rule")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule>();
        c->parent = this;
        policy_map_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : event)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : policy_map_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
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
}

void PolicyManager::PolicyMaps::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "policy-map-rule" || name == "type" || name == "name" || name == "description")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    event_mode_match_all{YType::empty, "event-mode-match-all"},
    event_mode_match_first{YType::empty, "event-mode-match-first"}
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::~Event()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| event_mode_match_all.is_set
	|| event_mode_match_first.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(event_mode_match_all.yfilter)
	|| ydk::is_set(event_mode_match_first.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (event_mode_match_all.is_set || is_set(event_mode_match_all.yfilter)) leaf_name_data.push_back(event_mode_match_all.get_name_leafdata());
    if (event_mode_match_first.is_set || is_set(event_mode_match_first.yfilter)) leaf_name_data.push_back(event_mode_match_first.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-mode-match-all")
    {
        event_mode_match_all = value;
        event_mode_match_all.value_namespace = name_space;
        event_mode_match_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-mode-match-first")
    {
        event_mode_match_first = value;
        event_mode_match_first.value_namespace = name_space;
        event_mode_match_first.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "event-mode-match-all")
    {
        event_mode_match_all.yfilter = yfilter;
    }
    if(value_path == "event-mode-match-first")
    {
        event_mode_match_first.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class" || name == "event-type" || name == "event-mode-match-all" || name == "event-mode-match-first")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::Class()
    :
    class_name{YType::str, "class-name"},
    class_type{YType::enumeration, "class-type"},
    class_execution_strategy{YType::enumeration, "class-execution-strategy"}
{

    yang_name = "class"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::~Class()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::has_data() const
{
    for (std::size_t index=0; index<action_rule.size(); index++)
    {
        if(action_rule[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_type.is_set
	|| class_execution_strategy.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::has_operation() const
{
    for (std::size_t index=0; index<action_rule.size(); index++)
    {
        if(action_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(class_execution_strategy.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (class_execution_strategy.is_set || is_set(class_execution_strategy.yfilter)) leaf_name_data.push_back(class_execution_strategy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-rule")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule>();
        c->parent = this;
        action_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : action_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-execution-strategy")
    {
        class_execution_strategy = value;
        class_execution_strategy.value_namespace = name_space;
        class_execution_strategy.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "class-execution-strategy")
    {
        class_execution_strategy.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-rule" || name == "class-name" || name == "class-type" || name == "class-execution-strategy")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActionRule()
    :
    action_sequence_number{YType::uint16, "action-sequence-number"},
    disconnect{YType::empty, "disconnect"},
    monitor{YType::empty, "monitor"}
    	,
    activate_dynamic_template(nullptr) // presence node
	,authenticate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate>())
	,authorize(nullptr) // presence node
	,deactivate_dynamic_template(nullptr) // presence node
	,set_timer(nullptr) // presence node
	,stop_timer(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer>())
{
    authenticate->parent = this;
    stop_timer->parent = this;

    yang_name = "action-rule"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::~ActionRule()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::has_data() const
{
    return action_sequence_number.is_set
	|| disconnect.is_set
	|| monitor.is_set
	|| (activate_dynamic_template !=  nullptr && activate_dynamic_template->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (authorize !=  nullptr && authorize->has_data())
	|| (deactivate_dynamic_template !=  nullptr && deactivate_dynamic_template->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_sequence_number.yfilter)
	|| ydk::is_set(disconnect.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| (activate_dynamic_template !=  nullptr && activate_dynamic_template->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (deactivate_dynamic_template !=  nullptr && deactivate_dynamic_template->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-rule" <<"[action-sequence-number='" <<action_sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_sequence_number.is_set || is_set(action_sequence_number.yfilter)) leaf_name_data.push_back(action_sequence_number.get_name_leafdata());
    if (disconnect.is_set || is_set(disconnect.yfilter)) leaf_name_data.push_back(disconnect.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activate-dynamic-template")
    {
        if(activate_dynamic_template == nullptr)
        {
            activate_dynamic_template = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate>();
        }
        return activate_dynamic_template;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "deactivate-dynamic-template")
    {
        if(deactivate_dynamic_template == nullptr)
        {
            deactivate_dynamic_template = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate>();
        }
        return deactivate_dynamic_template;
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer == nullptr)
        {
            set_timer = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer>();
        }
        return set_timer;
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer == nullptr)
        {
            stop_timer = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer>();
        }
        return stop_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(activate_dynamic_template != nullptr)
    {
        children["activate-dynamic-template"] = activate_dynamic_template;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    if(deactivate_dynamic_template != nullptr)
    {
        children["deactivate-dynamic-template"] = deactivate_dynamic_template;
    }

    if(set_timer != nullptr)
    {
        children["set-timer"] = set_timer;
    }

    if(stop_timer != nullptr)
    {
        children["stop-timer"] = stop_timer;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-sequence-number")
    {
        action_sequence_number = value;
        action_sequence_number.value_namespace = name_space;
        action_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect")
    {
        disconnect = value;
        disconnect.value_namespace = name_space;
        disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-sequence-number")
    {
        action_sequence_number.yfilter = yfilter;
    }
    if(value_path == "disconnect")
    {
        disconnect.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activate-dynamic-template" || name == "authenticate" || name == "authorize" || name == "deactivate-dynamic-template" || name == "set-timer" || name == "stop-timer" || name == "action-sequence-number" || name == "disconnect" || name == "monitor")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::ActivateDynamicTemplate()
    :
    name{YType::str, "name"},
    aaa_list{YType::str, "aaa-list"}
{

    yang_name = "activate-dynamic-template"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::~ActivateDynamicTemplate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::has_data() const
{
    return name.is_set
	|| aaa_list.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(aaa_list.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate-dynamic-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (aaa_list.is_set || is_set(aaa_list.yfilter)) leaf_name_data.push_back(aaa_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-list")
    {
        aaa_list = value;
        aaa_list.value_namespace = name_space;
        aaa_list.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "aaa-list")
    {
        aaa_list.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::ActivateDynamicTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "aaa-list")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::Authenticate()
    :
    aaa_list{YType::str, "aaa-list"}
{

    yang_name = "authenticate"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::~Authenticate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::has_data() const
{
    return aaa_list.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.yfilter)) leaf_name_data.push_back(aaa_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
        aaa_list.value_namespace = name_space;
        aaa_list.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list")
    {
        aaa_list.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::Authorize()
    :
    aaa_list{YType::str, "aaa-list"},
    format{YType::str, "format"},
    identifier{YType::enumeration, "identifier"},
    password{YType::str, "password"}
{

    yang_name = "authorize"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::~Authorize()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::has_data() const
{
    return aaa_list.is_set
	|| format.is_set
	|| identifier.is_set
	|| password.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.yfilter)) leaf_name_data.push_back(aaa_list.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
        aaa_list.value_namespace = name_space;
        aaa_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list")
    {
        aaa_list.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list" || name == "format" || name == "identifier" || name == "password")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::DeactivateDynamicTemplate()
    :
    name{YType::str, "name"},
    aaa_list{YType::str, "aaa-list"}
{

    yang_name = "deactivate-dynamic-template"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::~DeactivateDynamicTemplate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::has_data() const
{
    return name.is_set
	|| aaa_list.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(aaa_list.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deactivate-dynamic-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (aaa_list.is_set || is_set(aaa_list.yfilter)) leaf_name_data.push_back(aaa_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-list")
    {
        aaa_list = value;
        aaa_list.value_namespace = name_space;
        aaa_list.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "aaa-list")
    {
        aaa_list.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::DeactivateDynamicTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "aaa-list")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::SetTimer()
    :
    timer_name{YType::str, "timer-name"},
    timer_value{YType::uint32, "timer-value"}
{

    yang_name = "set-timer"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::~SetTimer()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::has_data() const
{
    return timer_name.is_set
	|| timer_value.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(timer_value.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_value.is_set || is_set(timer_value.yfilter)) leaf_name_data.push_back(timer_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-value")
    {
        timer_value = value;
        timer_value.value_namespace = name_space;
        timer_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "timer-value")
    {
        timer_value.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::SetTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name" || name == "timer-value")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::StopTimer()
    :
    timer_name{YType::str, "timer-name"}
{

    yang_name = "stop-timer"; yang_parent_name = "action-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::~StopTimer()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::has_data() const
{
    return timer_name.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class::ActionRule::StopTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PolicyMapRule()
    :
    class_name{YType::str, "class-name"},
    class_type{YType::enumeration, "class-type"},
    priority_level{YType::uint8, "priority-level"},
    default_red{YType::empty, "default-red"},
    ecn_red{YType::empty, "ecn-red"},
    http_redirect{YType::str, "http-redirect"},
    pbr_transmit{YType::empty, "pbr-transmit"},
    pbr_drop{YType::empty, "pbr-drop"},
    decap_gre{YType::empty, "decap-gre"},
    service_fragment{YType::str, "service-fragment"},
    fragment{YType::str, "fragment"}
    	,
    shape(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape>())
	,min_bandwidth(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth>())
	,bandwidth_remaining(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining>())
	,queue_limit(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit>())
	,pfc(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc>())
	,set(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set>())
	,police(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police>())
	,service_policy(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy>())
	,cac_local(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal>())
	,flow_params(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams>())
	,metrics_ipcbr(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr>())
	,react(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React>())
	,pbr_redirect(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect>())
	,pbr_forward(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward>())
	,service_function_path(nullptr) // presence node
{
    shape->parent = this;
    min_bandwidth->parent = this;
    bandwidth_remaining->parent = this;
    queue_limit->parent = this;
    pfc->parent = this;
    set->parent = this;
    police->parent = this;
    service_policy->parent = this;
    cac_local->parent = this;
    flow_params->parent = this;
    metrics_ipcbr->parent = this;
    react->parent = this;
    pbr_redirect->parent = this;
    pbr_forward->parent = this;

    yang_name = "policy-map-rule"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::~PolicyMapRule()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::has_data() const
{
    for (std::size_t index=0; index<random_detect.size(); index++)
    {
        if(random_detect[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_type.is_set
	|| priority_level.is_set
	|| default_red.is_set
	|| ecn_red.is_set
	|| http_redirect.is_set
	|| pbr_transmit.is_set
	|| pbr_drop.is_set
	|| decap_gre.is_set
	|| service_fragment.is_set
	|| fragment.is_set
	|| (shape !=  nullptr && shape->has_data())
	|| (min_bandwidth !=  nullptr && min_bandwidth->has_data())
	|| (bandwidth_remaining !=  nullptr && bandwidth_remaining->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (set !=  nullptr && set->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (cac_local !=  nullptr && cac_local->has_data())
	|| (flow_params !=  nullptr && flow_params->has_data())
	|| (metrics_ipcbr !=  nullptr && metrics_ipcbr->has_data())
	|| (react !=  nullptr && react->has_data())
	|| (pbr_redirect !=  nullptr && pbr_redirect->has_data())
	|| (pbr_forward !=  nullptr && pbr_forward->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::has_operation() const
{
    for (std::size_t index=0; index<random_detect.size(); index++)
    {
        if(random_detect[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(default_red.yfilter)
	|| ydk::is_set(ecn_red.yfilter)
	|| ydk::is_set(http_redirect.yfilter)
	|| ydk::is_set(pbr_transmit.yfilter)
	|| ydk::is_set(pbr_drop.yfilter)
	|| ydk::is_set(decap_gre.yfilter)
	|| ydk::is_set(service_fragment.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (min_bandwidth !=  nullptr && min_bandwidth->has_operation())
	|| (bandwidth_remaining !=  nullptr && bandwidth_remaining->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (set !=  nullptr && set->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (cac_local !=  nullptr && cac_local->has_operation())
	|| (flow_params !=  nullptr && flow_params->has_operation())
	|| (metrics_ipcbr !=  nullptr && metrics_ipcbr->has_operation())
	|| (react !=  nullptr && react->has_operation())
	|| (pbr_redirect !=  nullptr && pbr_redirect->has_operation())
	|| (pbr_forward !=  nullptr && pbr_forward->has_operation())
	|| (service_function_path !=  nullptr && service_function_path->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-rule" <<"[class-name='" <<class_name <<"']" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (default_red.is_set || is_set(default_red.yfilter)) leaf_name_data.push_back(default_red.get_name_leafdata());
    if (ecn_red.is_set || is_set(ecn_red.yfilter)) leaf_name_data.push_back(ecn_red.get_name_leafdata());
    if (http_redirect.is_set || is_set(http_redirect.yfilter)) leaf_name_data.push_back(http_redirect.get_name_leafdata());
    if (pbr_transmit.is_set || is_set(pbr_transmit.yfilter)) leaf_name_data.push_back(pbr_transmit.get_name_leafdata());
    if (pbr_drop.is_set || is_set(pbr_drop.yfilter)) leaf_name_data.push_back(pbr_drop.get_name_leafdata());
    if (decap_gre.is_set || is_set(decap_gre.yfilter)) leaf_name_data.push_back(decap_gre.get_name_leafdata());
    if (service_fragment.is_set || is_set(service_fragment.yfilter)) leaf_name_data.push_back(service_fragment.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "min-bandwidth")
    {
        if(min_bandwidth == nullptr)
        {
            min_bandwidth = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth>();
        }
        return min_bandwidth;
    }

    if(child_yang_name == "bandwidth-remaining")
    {
        if(bandwidth_remaining == nullptr)
        {
            bandwidth_remaining = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining>();
        }
        return bandwidth_remaining;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit>();
        }
        return queue_limit;
    }

    if(child_yang_name == "pfc")
    {
        if(pfc == nullptr)
        {
            pfc = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc>();
        }
        return pfc;
    }

    if(child_yang_name == "random-detect")
    {
        auto c = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect>();
        c->parent = this;
        random_detect.push_back(c);
        return c;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set>();
        }
        return set;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police>();
        }
        return police;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cac-local")
    {
        if(cac_local == nullptr)
        {
            cac_local = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal>();
        }
        return cac_local;
    }

    if(child_yang_name == "flow-params")
    {
        if(flow_params == nullptr)
        {
            flow_params = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams>();
        }
        return flow_params;
    }

    if(child_yang_name == "metrics-ipcbr")
    {
        if(metrics_ipcbr == nullptr)
        {
            metrics_ipcbr = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr>();
        }
        return metrics_ipcbr;
    }

    if(child_yang_name == "react")
    {
        if(react == nullptr)
        {
            react = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React>();
        }
        return react;
    }

    if(child_yang_name == "pbr-redirect")
    {
        if(pbr_redirect == nullptr)
        {
            pbr_redirect = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect>();
        }
        return pbr_redirect;
    }

    if(child_yang_name == "pbr-forward")
    {
        if(pbr_forward == nullptr)
        {
            pbr_forward = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward>();
        }
        return pbr_forward;
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path == nullptr)
        {
            service_function_path = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath>();
        }
        return service_function_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(min_bandwidth != nullptr)
    {
        children["min-bandwidth"] = min_bandwidth;
    }

    if(bandwidth_remaining != nullptr)
    {
        children["bandwidth-remaining"] = bandwidth_remaining;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    if(pfc != nullptr)
    {
        children["pfc"] = pfc;
    }

    count = 0;
    for (auto const & c : random_detect)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(cac_local != nullptr)
    {
        children["cac-local"] = cac_local;
    }

    if(flow_params != nullptr)
    {
        children["flow-params"] = flow_params;
    }

    if(metrics_ipcbr != nullptr)
    {
        children["metrics-ipcbr"] = metrics_ipcbr;
    }

    if(react != nullptr)
    {
        children["react"] = react;
    }

    if(pbr_redirect != nullptr)
    {
        children["pbr-redirect"] = pbr_redirect;
    }

    if(pbr_forward != nullptr)
    {
        children["pbr-forward"] = pbr_forward;
    }

    if(service_function_path != nullptr)
    {
        children["service-function-path"] = service_function_path;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-red")
    {
        default_red = value;
        default_red.value_namespace = name_space;
        default_red.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn-red")
    {
        ecn_red = value;
        ecn_red.value_namespace = name_space;
        ecn_red.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http-redirect")
    {
        http_redirect = value;
        http_redirect.value_namespace = name_space;
        http_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-transmit")
    {
        pbr_transmit = value;
        pbr_transmit.value_namespace = name_space;
        pbr_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbr-drop")
    {
        pbr_drop = value;
        pbr_drop.value_namespace = name_space;
        pbr_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap-gre")
    {
        decap_gre = value;
        decap_gre.value_namespace = name_space;
        decap_gre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment")
    {
        service_fragment = value;
        service_fragment.value_namespace = name_space;
        service_fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "default-red")
    {
        default_red.yfilter = yfilter;
    }
    if(value_path == "ecn-red")
    {
        ecn_red.yfilter = yfilter;
    }
    if(value_path == "http-redirect")
    {
        http_redirect.yfilter = yfilter;
    }
    if(value_path == "pbr-transmit")
    {
        pbr_transmit.yfilter = yfilter;
    }
    if(value_path == "pbr-drop")
    {
        pbr_drop.yfilter = yfilter;
    }
    if(value_path == "decap-gre")
    {
        decap_gre.yfilter = yfilter;
    }
    if(value_path == "service-fragment")
    {
        service_fragment.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "min-bandwidth" || name == "bandwidth-remaining" || name == "queue-limit" || name == "pfc" || name == "random-detect" || name == "set" || name == "police" || name == "service-policy" || name == "cac-local" || name == "flow-params" || name == "metrics-ipcbr" || name == "react" || name == "pbr-redirect" || name == "pbr-forward" || name == "service-function-path" || name == "class-name" || name == "class-type" || name == "priority-level" || name == "default-red" || name == "ecn-red" || name == "http-redirect" || name == "pbr-transmit" || name == "pbr-drop" || name == "decap-gre" || name == "service-fragment" || name == "fragment")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Shape()
    :
    rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate>())
	,burst(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst>())
{
    rate->parent = this;
    burst->parent = this;

    yang_name = "shape"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::~Shape()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::has_data() const
{
    return (rate !=  nullptr && rate->has_data())
	|| (burst !=  nullptr && burst->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (burst !=  nullptr && burst->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "burst")
    {
        if(burst == nullptr)
        {
            burst = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst>();
        }
        return burst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(burst != nullptr)
    {
        children["burst"] = burst;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "burst")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::Rate()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "rate"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::Burst()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "burst"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::~Burst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::MinBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "min-bandwidth"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::~MinBandwidth()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::BandwidthRemaining()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "bandwidth-remaining"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::~BandwidthRemaining()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-remaining";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::QueueLimit()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "queue-limit"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::~QueueLimit()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::Pfc()
    :
    pfc_pause_set{YType::empty, "pfc-pause-set"}
    	,
    pfc_buffer_size(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize>())
	,pfc_pause_threshold(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold>())
	,pfc_resume_threshold(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold>())
{
    pfc_buffer_size->parent = this;
    pfc_pause_threshold->parent = this;
    pfc_resume_threshold->parent = this;

    yang_name = "pfc"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::~Pfc()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::has_data() const
{
    return pfc_pause_set.is_set
	|| (pfc_buffer_size !=  nullptr && pfc_buffer_size->has_data())
	|| (pfc_pause_threshold !=  nullptr && pfc_pause_threshold->has_data())
	|| (pfc_resume_threshold !=  nullptr && pfc_resume_threshold->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfc_pause_set.yfilter)
	|| (pfc_buffer_size !=  nullptr && pfc_buffer_size->has_operation())
	|| (pfc_pause_threshold !=  nullptr && pfc_pause_threshold->has_operation())
	|| (pfc_resume_threshold !=  nullptr && pfc_resume_threshold->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfc_pause_set.is_set || is_set(pfc_pause_set.yfilter)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfc-buffer-size")
    {
        if(pfc_buffer_size == nullptr)
        {
            pfc_buffer_size = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize>();
        }
        return pfc_buffer_size;
    }

    if(child_yang_name == "pfc-pause-threshold")
    {
        if(pfc_pause_threshold == nullptr)
        {
            pfc_pause_threshold = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold>();
        }
        return pfc_pause_threshold;
    }

    if(child_yang_name == "pfc-resume-threshold")
    {
        if(pfc_resume_threshold == nullptr)
        {
            pfc_resume_threshold = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold>();
        }
        return pfc_resume_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pfc_buffer_size != nullptr)
    {
        children["pfc-buffer-size"] = pfc_buffer_size;
    }

    if(pfc_pause_threshold != nullptr)
    {
        children["pfc-pause-threshold"] = pfc_pause_threshold;
    }

    if(pfc_resume_threshold != nullptr)
    {
        children["pfc-resume-threshold"] = pfc_resume_threshold;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
        pfc_pause_set.value_namespace = name_space;
        pfc_pause_set.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfc-buffer-size" || name == "pfc-pause-threshold" || name == "pfc-resume-threshold" || name == "pfc-pause-set")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::PfcBufferSize()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "pfc-buffer-size"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::~PfcBufferSize()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::PfcPauseThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "pfc-pause-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::~PfcPauseThreshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-pause-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::PfcResumeThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::str, "unit"}
{

    yang_name = "pfc-resume-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::~PfcResumeThreshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-resume-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::RandomDetect()
    :
    threshold_min_value{YType::uint32, "threshold-min-value"},
    threshold_min_units{YType::str, "threshold-min-units"},
    threshold_max_value{YType::uint32, "threshold-max-value"},
    threshold_max_units{YType::str, "threshold-max-units"},
    cos{YType::str, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    mpls_exp{YType::uint8, "mpls-exp"},
    precedence{YType::str, "precedence"},
    dei{YType::uint8, "dei"},
    ecn{YType::empty, "ecn"}
{

    yang_name = "random-detect"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::~RandomDetect()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_exp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold_min_value.is_set
	|| threshold_min_units.is_set
	|| threshold_max_value.is_set
	|| threshold_max_units.is_set
	|| dei.is_set
	|| ecn.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mpls_exp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(threshold_min_value.yfilter)
	|| ydk::is_set(threshold_min_units.yfilter)
	|| ydk::is_set(threshold_max_value.yfilter)
	|| ydk::is_set(threshold_max_units.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(mpls_exp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-detect" <<"[threshold-min-value='" <<threshold_min_value <<"']" <<"[threshold-min-units='" <<threshold_min_units <<"']" <<"[threshold-max-value='" <<threshold_max_value <<"']" <<"[threshold-max-units='" <<threshold_max_units <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_min_value.is_set || is_set(threshold_min_value.yfilter)) leaf_name_data.push_back(threshold_min_value.get_name_leafdata());
    if (threshold_min_units.is_set || is_set(threshold_min_units.yfilter)) leaf_name_data.push_back(threshold_min_units.get_name_leafdata());
    if (threshold_max_value.is_set || is_set(threshold_max_value.yfilter)) leaf_name_data.push_back(threshold_max_value.get_name_leafdata());
    if (threshold_max_units.is_set || is_set(threshold_max_units.yfilter)) leaf_name_data.push_back(threshold_max_units.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto mpls_exp_name_datas = mpls_exp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_exp_name_datas.begin(), mpls_exp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-min-value")
    {
        threshold_min_value = value;
        threshold_min_value.value_namespace = name_space;
        threshold_min_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-min-units")
    {
        threshold_min_units = value;
        threshold_min_units.value_namespace = name_space;
        threshold_min_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-max-value")
    {
        threshold_max_value = value;
        threshold_max_value.value_namespace = name_space;
        threshold_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-max-units")
    {
        threshold_max_units = value;
        threshold_max_units.value_namespace = name_space;
        threshold_max_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "mpls-exp")
    {
        mpls_exp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-min-value")
    {
        threshold_min_value.yfilter = yfilter;
    }
    if(value_path == "threshold-min-units")
    {
        threshold_min_units.yfilter = yfilter;
    }
    if(value_path == "threshold-max-value")
    {
        threshold_max_value.yfilter = yfilter;
    }
    if(value_path == "threshold-max-units")
    {
        threshold_max_units.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "mpls-exp")
    {
        mpls_exp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-min-value" || name == "threshold-min-units" || name == "threshold-max-value" || name == "threshold-max-units" || name == "cos" || name == "discard-class" || name == "dscp" || name == "mpls-exp" || name == "precedence" || name == "dei" || name == "ecn")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::Set()
    :
    dscp{YType::str, "dscp"},
    qos_group{YType::uint16, "qos-group"},
    traffic_class{YType::uint8, "traffic-class"},
    discard_class{YType::uint8, "discard-class"},
    forward_class{YType::uint8, "forward-class"},
    df{YType::uint8, "df"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    precedence{YType::str, "precedence"},
    precedence_tunnel{YType::str, "precedence-tunnel"},
    mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    srp_priority{YType::uint8, "srp-priority"},
    fr_de{YType::uint8, "fr-de"},
    dei{YType::uint8, "dei"},
    dei_imposition{YType::uint8, "dei-imposition"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"}
{

    yang_name = "set"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::has_data() const
{
    return dscp.is_set
	|| qos_group.is_set
	|| traffic_class.is_set
	|| discard_class.is_set
	|| forward_class.is_set
	|| df.is_set
	|| cos.is_set
	|| inner_cos.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| mpls_experimental_top_most.is_set
	|| mpls_experimental_imposition.is_set
	|| srp_priority.is_set
	|| fr_de.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| source_address.is_set
	|| destination_address.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(df.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(precedence_tunnel.yfilter)
	|| ydk::is_set(mpls_experimental_top_most.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(srp_priority.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_imposition.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.yfilter)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.yfilter)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.yfilter)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.yfilter)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.yfilter)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
        precedence_tunnel.value_namespace = name_space;
        precedence_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
        mpls_experimental_top_most.value_namespace = name_space;
        mpls_experimental_top_most.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
        mpls_experimental_imposition.value_namespace = name_space;
        mpls_experimental_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
        srp_priority.value_namespace = name_space;
        srp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
        dei_imposition.value_namespace = name_space;
        dei_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "srp-priority")
    {
        srp_priority.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "qos-group" || name == "traffic-class" || name == "discard-class" || name == "forward-class" || name == "df" || name == "cos" || name == "inner-cos" || name == "precedence" || name == "precedence-tunnel" || name == "mpls-experimental-top-most" || name == "mpls-experimental-imposition" || name == "srp-priority" || name == "fr-de" || name == "dei" || name == "dei-imposition" || name == "source-address" || name == "destination-address")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Police()
    :
    rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate>())
	,peak_rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate>())
	,burst(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst>())
	,peak_burst(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst>())
	,conform_action(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction>())
	,exceed_action(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction>())
	,violate_action(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction>())
{
    rate->parent = this;
    peak_rate->parent = this;
    burst->parent = this;
    peak_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "police"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::~Police()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::has_data() const
{
    return (rate !=  nullptr && rate->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data())
	|| (burst !=  nullptr && burst->has_data())
	|| (peak_burst !=  nullptr && peak_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation())
	|| (burst !=  nullptr && burst->has_operation())
	|| (peak_burst !=  nullptr && peak_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate == nullptr)
        {
            peak_rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate>();
        }
        return peak_rate;
    }

    if(child_yang_name == "burst")
    {
        if(burst == nullptr)
        {
            burst = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst>();
        }
        return burst;
    }

    if(child_yang_name == "peak-burst")
    {
        if(peak_burst == nullptr)
        {
            peak_burst = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst>();
        }
        return peak_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction>();
        }
        return violate_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(peak_rate != nullptr)
    {
        children["peak-rate"] = peak_rate;
    }

    if(burst != nullptr)
    {
        children["burst"] = burst;
    }

    if(peak_burst != nullptr)
    {
        children["peak-burst"] = peak_burst;
    }

    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "peak-rate" || name == "burst" || name == "peak-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::Rate()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "rate"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::PeakRate()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "peak-rate"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::~PeakRate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::Burst()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "burst"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::~Burst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::PeakBurst()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "peak-burst"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::~PeakBurst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::ConformAction()
    :
    transmit{YType::empty, "Transmit"},
    drop{YType::empty, "drop"}
    	,
    set(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set>())
{
    set->parent = this;

    yang_name = "conform-action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::~ConformAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::has_data() const
{
    return transmit.is_set
	|| drop.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Transmit")
    {
        transmit.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "Transmit" || name == "drop")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::Set()
    :
    dscp{YType::str, "dscp"},
    qos_group{YType::uint16, "qos-group"},
    traffic_class{YType::uint8, "traffic-class"},
    discard_class{YType::uint8, "discard-class"},
    forward_class{YType::uint8, "forward-class"},
    df{YType::uint8, "df"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    precedence{YType::str, "precedence"},
    precedence_tunnel{YType::str, "precedence-tunnel"},
    mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    srp_priority{YType::uint8, "srp-priority"},
    fr_de{YType::uint8, "fr-de"},
    dei{YType::uint8, "dei"},
    dei_imposition{YType::uint8, "dei-imposition"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"}
{

    yang_name = "set"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::has_data() const
{
    return dscp.is_set
	|| qos_group.is_set
	|| traffic_class.is_set
	|| discard_class.is_set
	|| forward_class.is_set
	|| df.is_set
	|| cos.is_set
	|| inner_cos.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| mpls_experimental_top_most.is_set
	|| mpls_experimental_imposition.is_set
	|| srp_priority.is_set
	|| fr_de.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| source_address.is_set
	|| destination_address.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(df.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(precedence_tunnel.yfilter)
	|| ydk::is_set(mpls_experimental_top_most.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(srp_priority.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_imposition.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.yfilter)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.yfilter)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.yfilter)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.yfilter)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.yfilter)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
        precedence_tunnel.value_namespace = name_space;
        precedence_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
        mpls_experimental_top_most.value_namespace = name_space;
        mpls_experimental_top_most.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
        mpls_experimental_imposition.value_namespace = name_space;
        mpls_experimental_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
        srp_priority.value_namespace = name_space;
        srp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
        dei_imposition.value_namespace = name_space;
        dei_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "srp-priority")
    {
        srp_priority.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "qos-group" || name == "traffic-class" || name == "discard-class" || name == "forward-class" || name == "df" || name == "cos" || name == "inner-cos" || name == "precedence" || name == "precedence-tunnel" || name == "mpls-experimental-top-most" || name == "mpls-experimental-imposition" || name == "srp-priority" || name == "fr-de" || name == "dei" || name == "dei-imposition" || name == "source-address" || name == "destination-address")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::ExceedAction()
    :
    transmit{YType::empty, "Transmit"},
    drop{YType::empty, "drop"}
    	,
    set(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set>())
{
    set->parent = this;

    yang_name = "exceed-action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::~ExceedAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::has_data() const
{
    return transmit.is_set
	|| drop.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Transmit")
    {
        transmit.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "Transmit" || name == "drop")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::Set()
    :
    dscp{YType::str, "dscp"},
    qos_group{YType::uint16, "qos-group"},
    traffic_class{YType::uint8, "traffic-class"},
    discard_class{YType::uint8, "discard-class"},
    forward_class{YType::uint8, "forward-class"},
    df{YType::uint8, "df"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    precedence{YType::str, "precedence"},
    precedence_tunnel{YType::str, "precedence-tunnel"},
    mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    srp_priority{YType::uint8, "srp-priority"},
    fr_de{YType::uint8, "fr-de"},
    dei{YType::uint8, "dei"},
    dei_imposition{YType::uint8, "dei-imposition"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"}
{

    yang_name = "set"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::has_data() const
{
    return dscp.is_set
	|| qos_group.is_set
	|| traffic_class.is_set
	|| discard_class.is_set
	|| forward_class.is_set
	|| df.is_set
	|| cos.is_set
	|| inner_cos.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| mpls_experimental_top_most.is_set
	|| mpls_experimental_imposition.is_set
	|| srp_priority.is_set
	|| fr_de.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| source_address.is_set
	|| destination_address.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(df.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(precedence_tunnel.yfilter)
	|| ydk::is_set(mpls_experimental_top_most.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(srp_priority.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_imposition.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.yfilter)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.yfilter)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.yfilter)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.yfilter)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.yfilter)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
        precedence_tunnel.value_namespace = name_space;
        precedence_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
        mpls_experimental_top_most.value_namespace = name_space;
        mpls_experimental_top_most.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
        mpls_experimental_imposition.value_namespace = name_space;
        mpls_experimental_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
        srp_priority.value_namespace = name_space;
        srp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
        dei_imposition.value_namespace = name_space;
        dei_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "srp-priority")
    {
        srp_priority.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "qos-group" || name == "traffic-class" || name == "discard-class" || name == "forward-class" || name == "df" || name == "cos" || name == "inner-cos" || name == "precedence" || name == "precedence-tunnel" || name == "mpls-experimental-top-most" || name == "mpls-experimental-imposition" || name == "srp-priority" || name == "fr-de" || name == "dei" || name == "dei-imposition" || name == "source-address" || name == "destination-address")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::ViolateAction()
    :
    transmit{YType::empty, "Transmit"},
    drop{YType::empty, "drop"}
    	,
    set(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set>())
{
    set->parent = this;

    yang_name = "violate-action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::~ViolateAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::has_data() const
{
    return transmit.is_set
	|| drop.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Transmit")
    {
        transmit.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "Transmit" || name == "drop")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::Set()
    :
    dscp{YType::str, "dscp"},
    qos_group{YType::uint16, "qos-group"},
    traffic_class{YType::uint8, "traffic-class"},
    discard_class{YType::uint8, "discard-class"},
    forward_class{YType::uint8, "forward-class"},
    df{YType::uint8, "df"},
    cos{YType::uint8, "cos"},
    inner_cos{YType::uint8, "inner-cos"},
    precedence{YType::str, "precedence"},
    precedence_tunnel{YType::str, "precedence-tunnel"},
    mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
    mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
    srp_priority{YType::uint8, "srp-priority"},
    fr_de{YType::uint8, "fr-de"},
    dei{YType::uint8, "dei"},
    dei_imposition{YType::uint8, "dei-imposition"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"}
{

    yang_name = "set"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::has_data() const
{
    return dscp.is_set
	|| qos_group.is_set
	|| traffic_class.is_set
	|| discard_class.is_set
	|| forward_class.is_set
	|| df.is_set
	|| cos.is_set
	|| inner_cos.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| mpls_experimental_top_most.is_set
	|| mpls_experimental_imposition.is_set
	|| srp_priority.is_set
	|| fr_de.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| source_address.is_set
	|| destination_address.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(df.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(precedence_tunnel.yfilter)
	|| ydk::is_set(mpls_experimental_top_most.yfilter)
	|| ydk::is_set(mpls_experimental_imposition.yfilter)
	|| ydk::is_set(srp_priority.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(dei_imposition.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.yfilter)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.yfilter)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.yfilter)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.yfilter)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.yfilter)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
        precedence_tunnel.value_namespace = name_space;
        precedence_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
        mpls_experimental_top_most.value_namespace = name_space;
        mpls_experimental_top_most.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
        mpls_experimental_imposition.value_namespace = name_space;
        mpls_experimental_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
        srp_priority.value_namespace = name_space;
        srp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
        dei_imposition.value_namespace = name_space;
        dei_imposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most.yfilter = yfilter;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.yfilter = yfilter;
    }
    if(value_path == "srp-priority")
    {
        srp_priority.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "qos-group" || name == "traffic-class" || name == "discard-class" || name == "forward-class" || name == "df" || name == "cos" || name == "inner-cos" || name == "precedence" || name == "precedence-tunnel" || name == "mpls-experimental-top-most" || name == "mpls-experimental-imposition" || name == "srp-priority" || name == "fr-de" || name == "dei" || name == "dei-imposition" || name == "source-address" || name == "destination-address")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::ServicePolicy()
    :
    policy_name{YType::str, "policy-name"},
    type{YType::str, "type"}
{

    yang_name = "service-policy"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::~ServicePolicy()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::has_data() const
{
    return policy_name.is_set
	|| type.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "type")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::CacLocal()
    :
    flow_idle_timeout{YType::str, "flow-idle-timeout"}
    	,
    rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate>())
	,flow_rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate>())
{
    rate->parent = this;
    flow_rate->parent = this;

    yang_name = "cac-local"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::~CacLocal()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::has_data() const
{
    return flow_idle_timeout.is_set
	|| (rate !=  nullptr && rate->has_data())
	|| (flow_rate !=  nullptr && flow_rate->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_idle_timeout.yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (flow_rate !=  nullptr && flow_rate->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_idle_timeout.is_set || is_set(flow_idle_timeout.yfilter)) leaf_name_data.push_back(flow_idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "flow-rate")
    {
        if(flow_rate == nullptr)
        {
            flow_rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate>();
        }
        return flow_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(flow_rate != nullptr)
    {
        children["flow-rate"] = flow_rate;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-idle-timeout")
    {
        flow_idle_timeout = value;
        flow_idle_timeout.value_namespace = name_space;
        flow_idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-idle-timeout")
    {
        flow_idle_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "flow-rate" || name == "flow-idle-timeout")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::Rate()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "rate"; yang_parent_name = "cac-local"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::FlowRate()
    :
    value_{YType::uint32, "value"},
    units{YType::str, "units"}
{

    yang_name = "flow-rate"; yang_parent_name = "cac-local"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::~FlowRate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::has_data() const
{
    return value_.is_set
	|| units.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "units")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::FlowParams()
    :
    max_flow{YType::uint16, "max-flow"},
    interval_duration{YType::uint32, "interval-duration"},
    history{YType::uint32, "history"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "flow-params"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::~FlowParams()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::has_data() const
{
    return max_flow.is_set
	|| interval_duration.is_set
	|| history.is_set
	|| timeout.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flow.yfilter)
	|| ydk::is_set(interval_duration.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flow.is_set || is_set(max_flow.yfilter)) leaf_name_data.push_back(max_flow.get_name_leafdata());
    if (interval_duration.is_set || is_set(interval_duration.yfilter)) leaf_name_data.push_back(interval_duration.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flow")
    {
        max_flow = value;
        max_flow.value_namespace = name_space;
        max_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-duration")
    {
        interval_duration = value;
        interval_duration.value_namespace = name_space;
        interval_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flow")
    {
        max_flow.yfilter = yfilter;
    }
    if(value_path == "interval-duration")
    {
        interval_duration.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flow" || name == "interval-duration" || name == "history" || name == "timeout")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MetricsIpcbr()
    :
    rate(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate>())
	,media_packet(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket>())
{
    rate->parent = this;
    media_packet->parent = this;

    yang_name = "metrics-ipcbr"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::~MetricsIpcbr()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::has_data() const
{
    return (rate !=  nullptr && rate->has_data())
	|| (media_packet !=  nullptr && media_packet->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (media_packet !=  nullptr && media_packet->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics-ipcbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "media-packet")
    {
        if(media_packet == nullptr)
        {
            media_packet = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket>();
        }
        return media_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(media_packet != nullptr)
    {
        children["media-packet"] = media_packet;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "media-packet")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::Rate()
    :
    layer3{YType::uint32, "layer3"},
    packet{YType::uint32, "packet"},
    media{YType::uint32, "media"}
{

    yang_name = "rate"; yang_parent_name = "metrics-ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::has_data() const
{
    return layer3.is_set
	|| packet.is_set
	|| media.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(layer3.yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(media.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (layer3.is_set || is_set(layer3.yfilter)) leaf_name_data.push_back(layer3.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "layer3")
    {
        layer3 = value;
        layer3.value_namespace = name_space;
        layer3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "layer3")
    {
        layer3.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer3" || name == "packet" || name == "media")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::MediaPacket()
    :
    size{YType::uint16, "size"},
    count_in_layer3{YType::uint8, "count-in-layer3"}
{

    yang_name = "media-packet"; yang_parent_name = "metrics-ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::~MediaPacket()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::has_data() const
{
    return size.is_set
	|| count_in_layer3.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count_in_layer3.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count_in_layer3.is_set || is_set(count_in_layer3.yfilter)) leaf_name_data.push_back(count_in_layer3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-in-layer3")
    {
        count_in_layer3 = value;
        count_in_layer3.value_namespace = name_space;
        count_in_layer3.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count-in-layer3")
    {
        count_in_layer3.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count-in-layer3")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::React()
    :
    descrition{YType::str, "descrition"},
    criterion_delay_factor{YType::empty, "criterion-delay-factor"},
    criterion_media_stop{YType::empty, "criterion-media-stop"},
    criterion_mrv{YType::empty, "criterion-mrv"},
    criterion_flow_count{YType::empty, "criterion-flow-count"},
    criterion_packet_rate{YType::empty, "criterion-packet-rate"}
    	,
    action(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action>())
	,alarm(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm>())
	,threshold(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold>())
{
    action->parent = this;
    alarm->parent = this;
    threshold->parent = this;

    yang_name = "react"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::~React()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::has_data() const
{
    return descrition.is_set
	|| criterion_delay_factor.is_set
	|| criterion_media_stop.is_set
	|| criterion_mrv.is_set
	|| criterion_flow_count.is_set
	|| criterion_packet_rate.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descrition.yfilter)
	|| ydk::is_set(criterion_delay_factor.yfilter)
	|| ydk::is_set(criterion_media_stop.yfilter)
	|| ydk::is_set(criterion_mrv.yfilter)
	|| ydk::is_set(criterion_flow_count.yfilter)
	|| ydk::is_set(criterion_packet_rate.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descrition.is_set || is_set(descrition.yfilter)) leaf_name_data.push_back(descrition.get_name_leafdata());
    if (criterion_delay_factor.is_set || is_set(criterion_delay_factor.yfilter)) leaf_name_data.push_back(criterion_delay_factor.get_name_leafdata());
    if (criterion_media_stop.is_set || is_set(criterion_media_stop.yfilter)) leaf_name_data.push_back(criterion_media_stop.get_name_leafdata());
    if (criterion_mrv.is_set || is_set(criterion_mrv.yfilter)) leaf_name_data.push_back(criterion_mrv.get_name_leafdata());
    if (criterion_flow_count.is_set || is_set(criterion_flow_count.yfilter)) leaf_name_data.push_back(criterion_flow_count.get_name_leafdata());
    if (criterion_packet_rate.is_set || is_set(criterion_packet_rate.yfilter)) leaf_name_data.push_back(criterion_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action>();
        }
        return action;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descrition")
    {
        descrition = value;
        descrition.value_namespace = name_space;
        descrition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion-delay-factor")
    {
        criterion_delay_factor = value;
        criterion_delay_factor.value_namespace = name_space;
        criterion_delay_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion-media-stop")
    {
        criterion_media_stop = value;
        criterion_media_stop.value_namespace = name_space;
        criterion_media_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion-mrv")
    {
        criterion_mrv = value;
        criterion_mrv.value_namespace = name_space;
        criterion_mrv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion-flow-count")
    {
        criterion_flow_count = value;
        criterion_flow_count.value_namespace = name_space;
        criterion_flow_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion-packet-rate")
    {
        criterion_packet_rate = value;
        criterion_packet_rate.value_namespace = name_space;
        criterion_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descrition")
    {
        descrition.yfilter = yfilter;
    }
    if(value_path == "criterion-delay-factor")
    {
        criterion_delay_factor.yfilter = yfilter;
    }
    if(value_path == "criterion-media-stop")
    {
        criterion_media_stop.yfilter = yfilter;
    }
    if(value_path == "criterion-mrv")
    {
        criterion_mrv.yfilter = yfilter;
    }
    if(value_path == "criterion-flow-count")
    {
        criterion_flow_count.yfilter = yfilter;
    }
    if(value_path == "criterion-packet-rate")
    {
        criterion_packet_rate.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "alarm" || name == "threshold" || name == "descrition" || name == "criterion-delay-factor" || name == "criterion-media-stop" || name == "criterion-mrv" || name == "criterion-flow-count" || name == "criterion-packet-rate")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::Action()
    :
    syslog{YType::empty, "syslog"},
    snmp{YType::empty, "snmp"}
{

    yang_name = "action"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::~Action()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::has_data() const
{
    return syslog.is_set
	|| snmp.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog" || name == "snmp")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Alarm()
    :
    severity{YType::str, "severity"}
    	,
    type(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type>())
{
    type->parent = this;

    yang_name = "alarm"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::~Alarm()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "severity")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::Type()
    :
    discrete{YType::empty, "discrete"},
    group_count{YType::uint16, "group-count"},
    group_percent{YType::uint16, "group-percent"}
{

    yang_name = "type"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::~Type()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| group_count.is_set
	|| group_percent.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discrete.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(group_percent.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.yfilter)) leaf_name_data.push_back(discrete.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_percent.is_set || is_set(group_percent.yfilter)) leaf_name_data.push_back(group_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discrete")
    {
        discrete = value;
        discrete.value_namespace = name_space;
        discrete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-percent")
    {
        group_percent = value;
        group_percent.value_namespace = name_space;
        group_percent.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discrete")
    {
        discrete.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "group-percent")
    {
        group_percent.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discrete" || name == "group-count" || name == "group-percent")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::Threshold()
    :
    trigger_value(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue>())
	,trigger_type(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType>())
{
    trigger_value->parent = this;
    trigger_type->parent = this;

    yang_name = "threshold"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::~Threshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::has_data() const
{
    return (trigger_value !=  nullptr && trigger_value->has_data())
	|| (trigger_type !=  nullptr && trigger_type->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (trigger_value !=  nullptr && trigger_value->has_operation())
	|| (trigger_type !=  nullptr && trigger_type->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-value")
    {
        if(trigger_value == nullptr)
        {
            trigger_value = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue>();
        }
        return trigger_value;
    }

    if(child_yang_name == "trigger-type")
    {
        if(trigger_type == nullptr)
        {
            trigger_type = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType>();
        }
        return trigger_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trigger_value != nullptr)
    {
        children["trigger-value"] = trigger_value;
    }

    if(trigger_type != nullptr)
    {
        children["trigger-type"] = trigger_type;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-value" || name == "trigger-type")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::TriggerValue()
    :
    greater_than{YType::str, "greater-than"},
    greater_than_equal{YType::str, "greater-than-equal"},
    less_than{YType::str, "less-than"},
    less_than_equal{YType::str, "less-than-equal"},
    range{YType::str, "range"}
{

    yang_name = "trigger-value"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::~TriggerValue()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::has_data() const
{
    return greater_than.is_set
	|| greater_than_equal.is_set
	|| less_than.is_set
	|| less_than_equal.is_set
	|| range.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(greater_than.yfilter)
	|| ydk::is_set(greater_than_equal.yfilter)
	|| ydk::is_set(less_than.yfilter)
	|| ydk::is_set(less_than_equal.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greater_than.is_set || is_set(greater_than.yfilter)) leaf_name_data.push_back(greater_than.get_name_leafdata());
    if (greater_than_equal.is_set || is_set(greater_than_equal.yfilter)) leaf_name_data.push_back(greater_than_equal.get_name_leafdata());
    if (less_than.is_set || is_set(less_than.yfilter)) leaf_name_data.push_back(less_than.get_name_leafdata());
    if (less_than_equal.is_set || is_set(less_than_equal.yfilter)) leaf_name_data.push_back(less_than_equal.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "greater-than")
    {
        greater_than = value;
        greater_than.value_namespace = name_space;
        greater_than.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "greater-than-equal")
    {
        greater_than_equal = value;
        greater_than_equal.value_namespace = name_space;
        greater_than_equal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "less-than")
    {
        less_than = value;
        less_than.value_namespace = name_space;
        less_than.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "less-than-equal")
    {
        less_than_equal = value;
        less_than_equal.value_namespace = name_space;
        less_than_equal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "greater-than")
    {
        greater_than.yfilter = yfilter;
    }
    if(value_path == "greater-than-equal")
    {
        greater_than_equal.yfilter = yfilter;
    }
    if(value_path == "less-than")
    {
        less_than.yfilter = yfilter;
    }
    if(value_path == "less-than-equal")
    {
        less_than_equal.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "greater-than" || name == "greater-than-equal" || name == "less-than" || name == "less-than-equal" || name == "range")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::TriggerType()
    :
    immediate{YType::empty, "immediate"},
    average{YType::uint32, "average"}
{

    yang_name = "trigger-type"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::~TriggerType()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::has_data() const
{
    return immediate.is_set
	|| average.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate.yfilter)
	|| ydk::is_set(average.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate.is_set || is_set(immediate.yfilter)) leaf_name_data.push_back(immediate.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate")
    {
        immediate = value;
        immediate.value_namespace = name_space;
        immediate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate")
    {
        immediate.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "immediate" || name == "average")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::PbrRedirect()
    :
    ipv4(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4>())
	,ipv6(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6>())
	,next_hop(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    next_hop->parent = this;

    yang_name = "pbr-redirect"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::~PbrRedirect()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbr-redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "next-hop")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::Ipv4()
    :
    ipv4_next_hop{YType::str, "ipv4-next-hop"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv4"; yang_parent_name = "pbr-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::~Ipv4()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::has_data() const
{
    return ipv4_next_hop.is_set
	|| vrf.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_next_hop.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_next_hop.is_set || is_set(ipv4_next_hop.yfilter)) leaf_name_data.push_back(ipv4_next_hop.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop = value;
        ipv4_next_hop.value_namespace = name_space;
        ipv4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-next-hop")
    {
        ipv4_next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-next-hop" || name == "vrf")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::Ipv6()
    :
    ipv6_next_hop{YType::str, "ipv6-next-hop"},
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6"; yang_parent_name = "pbr-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::~Ipv6()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::has_data() const
{
    return ipv6_next_hop.is_set
	|| vrf.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_next_hop.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_next_hop.is_set || is_set(ipv6_next_hop.yfilter)) leaf_name_data.push_back(ipv6_next_hop.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop = value;
        ipv6_next_hop.value_namespace = name_space;
        ipv6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-next-hop")
    {
        ipv6_next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-next-hop" || name == "vrf")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::NextHop()
    :
    route_target(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget>())
{
    route_target->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pbr-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::~NextHop()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::has_data() const
{
    return (route_target !=  nullptr && route_target->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_target != nullptr)
    {
        children["route-target"] = route_target;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::RouteTarget()
    :
    as_number{YType::uint32, "as-number"},
    index_{YType::uint32, "index"}
    	,
    ipv4_address(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address>())
{
    ipv4_address->parent = this;

    yang_name = "route-target"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::~RouteTarget()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::has_data() const
{
    return as_number.is_set
	|| index_.is_set
	|| (ipv4_address !=  nullptr && ipv4_address->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address>();
        }
        return ipv4_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "as-number" || name == "index")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrRedirect::NextHop::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::PbrForward()
    :
    default_{YType::empty, "default"}
    	,
    next_hop(std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop>())
{
    next_hop->parent = this;

    yang_name = "pbr-forward"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::~PbrForward()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::has_data() const
{
    return default_.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbr-forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "default")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::NextHop()
    :
    vrf{YType::str, "vrf"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "pbr-forward"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::~NextHop()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::has_data() const
{
    return vrf.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_id{YType::uint32, "path-id"},
    index_{YType::uint8, "index"},
    metadata{YType::str, "metadata"}
{

    yang_name = "service-function-path"; yang_parent_name = "policy-map-rule"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::has_data() const
{
    return path_id.is_set
	|| index_.is_set
	|| metadata.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(metadata.yfilter);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (metadata.is_set || is_set(metadata.yfilter)) leaf_name_data.push_back(metadata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metadata")
    {
        metadata = value;
        metadata.value_namespace = name_space;
        metadata.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "metadata")
    {
        metadata.yfilter = yfilter;
    }
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id" || name == "index" || name == "metadata")
        return true;
    return false;
}

const Enum::YLeaf ClassMapType::qos {1, "qos"};
const Enum::YLeaf ClassMapType::traffic {3, "traffic"};
const Enum::YLeaf ClassMapType::control {4, "control"};

const Enum::YLeaf PolicyMapType::qos {1, "qos"};
const Enum::YLeaf PolicyMapType::pbr {2, "pbr"};
const Enum::YLeaf PolicyMapType::traffic {3, "traffic"};
const Enum::YLeaf PolicyMapType::subscriber_control {4, "subscriber-control"};
const Enum::YLeaf PolicyMapType::redirect {6, "redirect"};
const Enum::YLeaf PolicyMapType::flow_monitor {7, "flow-monitor"};

const Enum::YLeaf PmapClassMapType::qos {1, "qos"};
const Enum::YLeaf PmapClassMapType::traffic {2, "traffic"};
const Enum::YLeaf PmapClassMapType::subscriber_control {3, "subscriber-control"};

const Enum::YLeaf EventType::account_logoff {0, "account-logoff"};
const Enum::YLeaf EventType::account_logon {1, "account-logon"};
const Enum::YLeaf EventType::authentication_failure {2, "authentication-failure"};
const Enum::YLeaf EventType::authentication_no_response {3, "authentication-no-response"};
const Enum::YLeaf EventType::authorization_failure {4, "authorization-failure"};
const Enum::YLeaf EventType::authorization_no_response {5, "authorization-no-response"};
const Enum::YLeaf EventType::credit_exhausted {6, "credit-exhausted"};
const Enum::YLeaf EventType::exception {7, "exception"};
const Enum::YLeaf EventType::idle_timeout {8, "idle-timeout"};
const Enum::YLeaf EventType::quota_depleted {9, "quota-depleted"};
const Enum::YLeaf EventType::service_start {10, "service-start"};
const Enum::YLeaf EventType::service_stop {11, "service-stop"};
const Enum::YLeaf EventType::session_activate {12, "session-activate"};
const Enum::YLeaf EventType::session_start {13, "session-start"};
const Enum::YLeaf EventType::session_stop {14, "session-stop"};
const Enum::YLeaf EventType::timer_expiry {15, "timer-expiry"};

const Enum::YLeaf ExecutionStrategy::do_all {0, "do-all"};
const Enum::YLeaf ExecutionStrategy::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf ExecutionStrategy::do_until_success {2, "do-until-success"};

const Enum::YLeaf AuthorizeIdentifier::circuit_id {0, "circuit-id"};
const Enum::YLeaf AuthorizeIdentifier::dhcp_client_id {1, "dhcp-client-id"};
const Enum::YLeaf AuthorizeIdentifier::remote_id {2, "remote-id"};
const Enum::YLeaf AuthorizeIdentifier::source_address_ipv4 {3, "source-address-ipv4"};
const Enum::YLeaf AuthorizeIdentifier::source_address_ipv6 {4, "source-address-ipv6"};
const Enum::YLeaf AuthorizeIdentifier::source_address_mac {5, "source-address-mac"};
const Enum::YLeaf AuthorizeIdentifier::username {6, "username"};


}
}

