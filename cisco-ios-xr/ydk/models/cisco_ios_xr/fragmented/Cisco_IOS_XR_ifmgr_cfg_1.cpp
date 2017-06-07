
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::EthernetService::EthernetService()
    :
    encapsulation(nullptr) // presence node
	,local_traffic_default_encapsulation(nullptr) // presence node
	,rewrite(nullptr) // presence node
{
    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::~EthernetService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetService' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "local-traffic-default-encapsulation")
    {
        if(local_traffic_default_encapsulation == nullptr)
        {
            local_traffic_default_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation>();
        }
        return local_traffic_default_encapsulation;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite>();
        }
        return rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(local_traffic_default_encapsulation != nullptr)
    {
        children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::LocalTrafficDefaultEncapsulation()
    :
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"}
{
    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::~LocalTrafficDefaultEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_data() const
{
    return inner_vlan_id.is_set
	|| outer_tag_type.is_set
	|| outer_vlan_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(outer_vlan_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-default-encapsulation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTrafficDefaultEncapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::Encapsulation()
    :
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    exact{YType::empty, "exact"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    outer_range1_high{YType::str, "outer-range1-high"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"}
{
    yang_name = "encapsulation"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_data() const
{
    return additional_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range2_high.is_set
	|| additional_range2_low.is_set
	|| additional_range3_high.is_set
	|| additional_range3_low.is_set
	|| additional_range4_high.is_set
	|| additional_range4_low.is_set
	|| additional_range5_high.is_set
	|| additional_range5_low.is_set
	|| additional_range6_high.is_set
	|| additional_range6_low.is_set
	|| additional_range7_high.is_set
	|| additional_range7_low.is_set
	|| additional_range8_high.is_set
	|| additional_range8_low.is_set
	|| exact.is_set
	|| ingress_destination_mac.is_set
	|| ingress_source_mac.is_set
	|| inner_class_of_service.is_set
	|| inner_range1_high.is_set
	|| inner_range1_low.is_set
	|| inner_tag_type.is_set
	|| outer_class_of_service.is_set
	|| outer_range1_high.is_set
	|| outer_range1_low.is_set
	|| outer_tag_type.is_set
	|| payload_ethertype_match.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_range1_high.operation)
	|| is_set(additional_range1_low.operation)
	|| is_set(additional_range2_high.operation)
	|| is_set(additional_range2_low.operation)
	|| is_set(additional_range3_high.operation)
	|| is_set(additional_range3_low.operation)
	|| is_set(additional_range4_high.operation)
	|| is_set(additional_range4_low.operation)
	|| is_set(additional_range5_high.operation)
	|| is_set(additional_range5_low.operation)
	|| is_set(additional_range6_high.operation)
	|| is_set(additional_range6_low.operation)
	|| is_set(additional_range7_high.operation)
	|| is_set(additional_range7_low.operation)
	|| is_set(additional_range8_high.operation)
	|| is_set(additional_range8_low.operation)
	|| is_set(exact.operation)
	|| is_set(ingress_destination_mac.operation)
	|| is_set(ingress_source_mac.operation)
	|| is_set(inner_class_of_service.operation)
	|| is_set(inner_range1_high.operation)
	|| is_set(inner_range1_low.operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(outer_class_of_service.operation)
	|| is_set(outer_range1_high.operation)
	|| is_set(outer_range1_low.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(payload_ethertype_match.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.operation)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.operation)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.operation)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.operation)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.operation)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.operation)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.operation)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.operation)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.operation)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.operation)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.operation)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.operation)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.operation)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.operation)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.operation)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.operation)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.operation)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.operation)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.operation)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.operation)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.operation)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.operation)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.operation)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.operation)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.operation)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::Rewrite()
    :
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_tag_value{YType::uint32, "inner-tag-value"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_tag_value{YType::uint32, "outer-tag-value"},
    rewrite_type{YType::enumeration, "rewrite-type"}
{
    yang_name = "rewrite"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::~Rewrite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_data() const
{
    return inner_tag_type.is_set
	|| inner_tag_value.is_set
	|| outer_tag_type.is_set
	|| outer_tag_value.is_set
	|| rewrite_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(inner_tag_value.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(outer_tag_value.operation)
	|| is_set(rewrite_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rewrite' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_tag_value.is_set || is_set(inner_tag_value.operation)) leaf_name_data.push_back(inner_tag_value.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_tag_value.is_set || is_set(outer_tag_value.operation)) leaf_name_data.push_back(outer_tag_value.get_name_leafdata());
    if (rewrite_type.is_set || is_set(rewrite_type.operation)) leaf_name_data.push_back(rewrite_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value = value;
    }
    if(value_path == "rewrite-type")
    {
        rewrite_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::EthernetBng()
    :
    ambiguous_encapsulation(nullptr) // presence node
{
    yang_name = "ethernet-bng"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::~EthernetBng()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_data() const
{
    return (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_operation() const
{
    return is_set(operation)
	|| (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetBng' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ambiguous-encapsulation")
    {
        if(ambiguous_encapsulation == nullptr)
        {
            ambiguous_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation>();
        }
        return ambiguous_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ambiguous_encapsulation != nullptr)
    {
        children["ambiguous-encapsulation"] = ambiguous_encapsulation;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::AmbiguousEncapsulation()
    :
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    exact{YType::empty, "exact"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    outer_range1_high{YType::str, "outer-range1-high"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"}
{
    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::~AmbiguousEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_data() const
{
    return additional_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range2_high.is_set
	|| additional_range2_low.is_set
	|| additional_range3_high.is_set
	|| additional_range3_low.is_set
	|| additional_range4_high.is_set
	|| additional_range4_low.is_set
	|| additional_range5_high.is_set
	|| additional_range5_low.is_set
	|| additional_range6_high.is_set
	|| additional_range6_low.is_set
	|| additional_range7_high.is_set
	|| additional_range7_low.is_set
	|| additional_range8_high.is_set
	|| additional_range8_low.is_set
	|| exact.is_set
	|| ingress_destination_mac.is_set
	|| ingress_source_mac.is_set
	|| inner_class_of_service.is_set
	|| inner_range1_high.is_set
	|| inner_range1_low.is_set
	|| inner_tag_type.is_set
	|| outer_class_of_service.is_set
	|| outer_range1_high.is_set
	|| outer_range1_low.is_set
	|| outer_tag_type.is_set
	|| payload_ethertype_match.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_range1_high.operation)
	|| is_set(additional_range1_low.operation)
	|| is_set(additional_range2_high.operation)
	|| is_set(additional_range2_low.operation)
	|| is_set(additional_range3_high.operation)
	|| is_set(additional_range3_low.operation)
	|| is_set(additional_range4_high.operation)
	|| is_set(additional_range4_low.operation)
	|| is_set(additional_range5_high.operation)
	|| is_set(additional_range5_low.operation)
	|| is_set(additional_range6_high.operation)
	|| is_set(additional_range6_low.operation)
	|| is_set(additional_range7_high.operation)
	|| is_set(additional_range7_low.operation)
	|| is_set(additional_range8_high.operation)
	|| is_set(additional_range8_low.operation)
	|| is_set(exact.operation)
	|| is_set(ingress_destination_mac.operation)
	|| is_set(ingress_source_mac.operation)
	|| is_set(inner_class_of_service.operation)
	|| is_set(inner_range1_high.operation)
	|| is_set(inner_range1_low.operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(outer_class_of_service.operation)
	|| is_set(outer_range1_high.operation)
	|| is_set(outer_range1_low.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(payload_ethertype_match.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ambiguous-encapsulation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmbiguousEncapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.operation)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.operation)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.operation)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.operation)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.operation)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.operation)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.operation)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.operation)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.operation)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.operation)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.operation)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.operation)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.operation)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.operation)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.operation)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.operation)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.operation)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.operation)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.operation)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.operation)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.operation)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.operation)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.operation)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.operation)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.operation)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::MacAccounting()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{
    yang_name = "mac-accounting"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::~MacAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_data() const
{
    return egress.is_set
	|| ingress.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccounting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EthernetFeatures()
    :
    ether_link_oam_enable{YType::empty, "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable"},
    filtering{YType::enumeration, "filtering"}
    	,
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>())
	,ether_link_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>())
{
    cfm->parent = this;

    ether_link_oam->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_data() const
{
    return ether_link_oam_enable.is_set
	|| filtering.is_set
	|| (cfm !=  nullptr && cfm->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_link_oam_enable.operation)
	|| is_set(filtering.operation)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_link_oam_enable.is_set || is_set(ether_link_oam_enable.operation)) leaf_name_data.push_back(ether_link_oam_enable.get_name_leafdata());
    if (filtering.is_set || is_set(filtering.operation)) leaf_name_data.push_back(filtering.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        children["ether-link-oam"] = ether_link_oam;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable = value;
    }
    if(value_path == "filtering")
    {
        filtering = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Cfm()
    :
    ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
	,domains(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>())
{
    ais_up->parent = this;

    domains->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_data() const
{
    return (ais_up !=  nullptr && ais_up->has_data())
	|| (domains !=  nullptr && domains->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(operation)
	|| (ais_up !=  nullptr && ais_up->has_operation())
	|| (domains !=  nullptr && domains->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais-up")
    {
        if(ais_up == nullptr)
        {
            ais_up = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>();
        }
        return ais_up;
    }

    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais_up != nullptr)
    {
        children["ais-up"] = ais_up;
    }

    if(domains != nullptr)
    {
        children["domains"] = domains;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domains()
{
    yang_name = "domains"; yang_parent_name = "cfm";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domains' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
    	,
    mep(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>())
{
    mep->parent = this;

    yang_name = "domain"; yang_parent_name = "domains";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::~Domain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_data() const
{
    return domain.is_set
	|| (mep !=  nullptr && mep->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| (mep !=  nullptr && mep->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>();
        }
        return mep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::Mep()
    :
    cos{YType::uint32, "cos"}
    	,
    loss_measurement_counters(nullptr) // presence node
	,mep_properties(nullptr) // presence node
	,sla_profile_target_mep_ids(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>())
{
    sla_profile_target_mep_ids->parent = this;

    yang_name = "mep"; yang_parent_name = "domain";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::~Mep()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_data() const
{
    return cos.is_set
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_data())
	|| (mep_properties !=  nullptr && mep_properties->has_data())
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_operation())
	|| (mep_properties !=  nullptr && mep_properties->has_operation())
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-measurement-counters")
    {
        if(loss_measurement_counters == nullptr)
        {
            loss_measurement_counters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters>();
        }
        return loss_measurement_counters;
    }

    if(child_yang_name == "mep-properties")
    {
        if(mep_properties == nullptr)
        {
            mep_properties = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties>();
        }
        return mep_properties;
    }

    if(child_yang_name == "sla-profile-target-mep-ids")
    {
        if(sla_profile_target_mep_ids == nullptr)
        {
            sla_profile_target_mep_ids = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>();
        }
        return sla_profile_target_mep_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loss_measurement_counters != nullptr)
    {
        children["loss-measurement-counters"] = loss_measurement_counters;
    }

    if(mep_properties != nullptr)
    {
        children["mep-properties"] = mep_properties;
    }

    if(sla_profile_target_mep_ids != nullptr)
    {
        children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepIds()
{
    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::~SlaProfileTargetMepIds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_data() const
{
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_operation() const
{
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-ids";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMepIds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mac-address")
    {
        for(auto const & c : sla_profile_target_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        c->parent = this;
        sla_profile_target_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "sla-profile-target-mep-id")
    {
        for(auto const & c : sla_profile_target_mep_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        c->parent = this;
        sla_profile_target_mep_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sla_profile_target_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sla_profile_target_mep_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::SlaProfileTargetMepId()
    :
    profile{YType::str, "profile"},
    target_mep_id{YType::uint32, "target-mep-id"}
{
    yang_name = "sla-profile-target-mep-id"; yang_parent_name = "sla-profile-target-mep-ids";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::~SlaProfileTargetMepId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_data() const
{
    return profile.is_set
	|| target_mep_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| is_set(target_mep_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-id" <<"[profile='" <<profile <<"']" <<"[target-mep-id='" <<target_mep_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMepId' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.operation)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::SlaProfileTargetMacAddress()
    :
    profile{YType::str, "profile"},
    target_mac_address{YType::str, "target-mac-address"}
{
    yang_name = "sla-profile-target-mac-address"; yang_parent_name = "sla-profile-target-mep-ids";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::~SlaProfileTargetMacAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_data() const
{
    return profile.is_set
	|| target_mac_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| is_set(target_mac_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mac-address" <<"[profile='" <<profile <<"']" <<"[target-mac-address='" <<target_mac_address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMacAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.operation)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::MepProperties()
    :
    mep_id{YType::uint32, "mep-id"},
    service{YType::str, "service"}
{
    yang_name = "mep-properties"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::~MepProperties()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_data() const
{
    return mep_id.is_set
	|| service.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_operation() const
{
    return is_set(operation)
	|| is_set(mep_id.operation)
	|| is_set(service.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-properties";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MepProperties' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::LossMeasurementCounters()
    :
    cfg_type{YType::enumeration, "cfg-type"},
    cos0{YType::uint32, "cos0"},
    cos1{YType::uint32, "cos1"},
    cos2{YType::uint32, "cos2"},
    cos3{YType::uint32, "cos3"},
    cos4{YType::uint32, "cos4"},
    cos5{YType::uint32, "cos5"},
    cos6{YType::uint32, "cos6"},
    cos7{YType::uint32, "cos7"}
{
    yang_name = "loss-measurement-counters"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::~LossMeasurementCounters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_data() const
{
    return cfg_type.is_set
	|| cos0.is_set
	|| cos1.is_set
	|| cos2.is_set
	|| cos3.is_set
	|| cos4.is_set
	|| cos5.is_set
	|| cos6.is_set
	|| cos7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(cfg_type.operation)
	|| is_set(cos0.operation)
	|| is_set(cos1.operation)
	|| is_set(cos2.operation)
	|| is_set(cos3.operation)
	|| is_set(cos4.operation)
	|| is_set(cos5.operation)
	|| is_set(cos6.operation)
	|| is_set(cos7.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-measurement-counters";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LossMeasurementCounters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfg_type.is_set || is_set(cfg_type.operation)) leaf_name_data.push_back(cfg_type.get_name_leafdata());
    if (cos0.is_set || is_set(cos0.operation)) leaf_name_data.push_back(cos0.get_name_leafdata());
    if (cos1.is_set || is_set(cos1.operation)) leaf_name_data.push_back(cos1.get_name_leafdata());
    if (cos2.is_set || is_set(cos2.operation)) leaf_name_data.push_back(cos2.get_name_leafdata());
    if (cos3.is_set || is_set(cos3.operation)) leaf_name_data.push_back(cos3.get_name_leafdata());
    if (cos4.is_set || is_set(cos4.operation)) leaf_name_data.push_back(cos4.get_name_leafdata());
    if (cos5.is_set || is_set(cos5.operation)) leaf_name_data.push_back(cos5.get_name_leafdata());
    if (cos6.is_set || is_set(cos6.operation)) leaf_name_data.push_back(cos6.get_name_leafdata());
    if (cos7.is_set || is_set(cos7.operation)) leaf_name_data.push_back(cos7.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfg-type")
    {
        cfg_type = value;
    }
    if(value_path == "cos0")
    {
        cos0 = value;
    }
    if(value_path == "cos1")
    {
        cos1 = value;
    }
    if(value_path == "cos2")
    {
        cos2 = value;
    }
    if(value_path == "cos3")
    {
        cos3 = value;
    }
    if(value_path == "cos4")
    {
        cos4 = value;
    }
    if(value_path == "cos5")
    {
        cos5 = value;
    }
    if(value_path == "cos6")
    {
        cos6 = value;
    }
    if(value_path == "cos7")
    {
        cos7 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::AisUp()
    :
    transmission(nullptr) // presence node
{
    yang_name = "ais-up"; yang_parent_name = "cfm";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::~AisUp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_data() const
{
    return (transmission !=  nullptr && transmission->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_operation() const
{
    return is_set(operation)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-up";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AisUp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmission")
    {
        if(transmission == nullptr)
        {
            transmission = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission>();
        }
        return transmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transmission != nullptr)
    {
        children["transmission"] = transmission;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::Transmission()
    :
    ais_interval{YType::enumeration, "ais-interval"},
    cos{YType::uint32, "cos"}
{
    yang_name = "transmission"; yang_parent_name = "ais-up";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::~Transmission()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_data() const
{
    return ais_interval.is_set
	|| cos.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_interval.operation)
	|| is_set(cos.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmission' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.operation)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::EtherLinkOam()
    :
    hello_interval{YType::enumeration, "hello-interval"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    profile_name{YType::str, "profile-name"},
    remote_loopback{YType::boolean, "remote-loopback"},
    timeout{YType::uint32, "timeout"},
    udlf{YType::boolean, "udlf"}
    	,
    action(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>())
	,link_monitoring(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>())
	,require_remote(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>())
{
    action->parent = this;

    link_monitoring->parent = this;

    require_remote->parent = this;

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::~EtherLinkOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_data() const
{
    return hello_interval.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| profile_name.is_set
	|| remote_loopback.is_set
	|| timeout.is_set
	|| udlf.is_set
	|| (action !=  nullptr && action->has_data())
	|| (link_monitoring !=  nullptr && link_monitoring->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(profile_name.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(timeout.operation)
	|| is_set(udlf.operation)
	|| (action !=  nullptr && action->has_operation())
	|| (link_monitoring !=  nullptr && link_monitoring->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherLinkOam' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.operation)) leaf_name_data.push_back(udlf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>();
        }
        return action;
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring == nullptr)
        {
            link_monitoring = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>();
        }
        return link_monitoring;
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote == nullptr)
        {
            require_remote = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>();
        }
        return require_remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(link_monitoring != nullptr)
    {
        children["link-monitoring"] = link_monitoring;
    }

    if(require_remote != nullptr)
    {
        children["require-remote"] = require_remote;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "udlf")
    {
        udlf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::Action()
    :
    capabilities_conflict{YType::enumeration, "capabilities-conflict"},
    critical_event{YType::enumeration, "critical-event"},
    discovery_timeout{YType::enumeration, "discovery-timeout"},
    dying_gasp{YType::enumeration, "dying-gasp"},
    high_threshold{YType::enumeration, "high-threshold"},
    link_fault{YType::enumeration, "link-fault"},
    remote_loopback{YType::enumeration, "remote-loopback"},
    session_down{YType::enumeration, "session-down"},
    session_up{YType::enumeration, "session-up"},
    wiring_conflict{YType::enumeration, "wiring-conflict"}
{
    yang_name = "action"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::~Action()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_data() const
{
    return capabilities_conflict.is_set
	|| critical_event.is_set
	|| discovery_timeout.is_set
	|| dying_gasp.is_set
	|| high_threshold.is_set
	|| link_fault.is_set
	|| remote_loopback.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| wiring_conflict.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities_conflict.operation)
	|| is_set(critical_event.operation)
	|| is_set(discovery_timeout.operation)
	|| is_set(dying_gasp.operation)
	|| is_set(high_threshold.operation)
	|| is_set(link_fault.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(session_down.operation)
	|| is_set(session_up.operation)
	|| is_set(wiring_conflict.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.operation)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.operation)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.operation)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.operation)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.operation)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.operation)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.operation)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.operation)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "session-down")
    {
        session_down = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::RequireRemote()
    :
    link_monitoring{YType::boolean, "link-monitoring"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"}
{
    yang_name = "require-remote"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::~RequireRemote()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_data() const
{
    return link_monitoring.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| remote_loopback.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_operation() const
{
    return is_set(operation)
	|| is_set(link_monitoring.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(remote_loopback.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequireRemote' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_monitoring.is_set || is_set(link_monitoring.operation)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::LinkMonitoring()
    :
    monitoring{YType::boolean, "monitoring"}
    	,
    frame(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>())
	,frame_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>())
	,frame_seconds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>())
	,symbol_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>())
{
    frame->parent = this;

    frame_period->parent = this;

    frame_seconds->parent = this;

    symbol_period->parent = this;

    yang_name = "link-monitoring"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::~LinkMonitoring()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_data() const
{
    return monitoring.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(monitoring.operation)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitoring";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkMonitoring' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.operation)) leaf_name_data.push_back(monitoring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SymbolPeriod' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "symbol-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier.operation)
	|| is_set(units.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation)
	|| is_set(units.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::FramePeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramePeriod' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "frame-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier.operation)
	|| is_set(units.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "frame-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation)
	|| is_set(units.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameSeconds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::~Frame()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frame' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{
    yang_name = "carrier-delay"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_data() const
{
    return carrier_delay_down.is_set
	|| carrier_delay_up.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(carrier_delay_down.operation)
	|| is_set(carrier_delay_up.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.operation)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.operation)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanTrunkConfiguration()
    :
    tunneling_ethertype{YType::enumeration, "tunneling-ethertype"}
    	,
    native_vlan_identifier(nullptr) // presence node
{
    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(tunneling_ethertype.operation)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanTrunkConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunneling_ethertype.is_set || is_set(tunneling_ethertype.operation)) leaf_name_data.push_back(tunneling_ethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier == nullptr)
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
        }
        return native_vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(native_vlan_identifier != nullptr)
    {
        children["native-vlan-identifier"] = native_vlan_identifier;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_identifier{YType::uint32, "vlan-identifier"},
    vlan_type{YType::enumeration, "vlan-type"}
{
    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
    return vlan_identifier.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_identifier.operation)
	|| is_set(vlan_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-vlan-identifier";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeVlanIdentifier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_identifier.is_set || is_set(vlan_identifier.operation)) leaf_name_data.push_back(vlan_identifier.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-identifier")
    {
        vlan_identifier = value;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>())
{
    qos->parent = this;

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteAccess' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-access";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    minimum_required_links{YType::uint32, "minimum-required-links"},
    satellite{YType::uint32, "satellite"}
    	,
    ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
	,remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
{
    ethernet_features->parent = this;

    qos->parent = this;

    redundancy->parent = this;

    remote_ports->parent = this;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    return minimum_required_links.is_set
	|| satellite.is_set
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_required_links.operation)
	|| is_set(satellite.operation)
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteFabricLink' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_required_links.is_set || is_set(minimum_required_links.operation)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());
    if (satellite.is_set || is_set(satellite.operation)) leaf_name_data.push_back(satellite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>();
        }
        return ethernet_features;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_features != nullptr)
    {
        children["ethernet-features"] = ethernet_features;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
    }
    if(value_path == "satellite")
    {
        satellite = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{
    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(minimum_preferred_links.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePorts()
{
    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePorts' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{
    yang_name = "remote-port"; yang_parent_name = "remote-ports";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(sub_slot.operation)
	|| is_set(port_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.operation)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.operation)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
    }
    if(value_path == "port-range")
    {
        port_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>())
{
    cfm->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::Cfm()
    :
    continuity_check_interval{YType::enumeration, "continuity-check-interval"},
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"}
{
    yang_name = "cfm"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_data() const
{
    return continuity_check_interval.is_set
	|| enable.is_set
	|| level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(operation)
	|| is_set(continuity_check_interval.operation)
	|| is_set(enable.operation)
	|| is_set(level.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continuity_check_interval.is_set || is_set(continuity_check_interval.operation)) leaf_name_data.push_back(continuity_check_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
    	,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
	,satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
{
    redundancy->parent = this;

    satellites->parent = this;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
    return enable.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (satellites !=  nullptr && satellites->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (satellites !=  nullptr && satellites->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteFabricNetwork' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "satellites")
    {
        if(satellites == nullptr)
        {
            satellites = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>();
        }
        return satellites;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(satellites != nullptr)
    {
        children["satellites"] = satellites;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellites()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>())
{
    qos->parent = this;

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellites";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellites' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    for (auto const & c : satellite)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::Satellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    enable{YType::empty, "enable"}
    	,
    remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>())
{
    remote_ports->parent = this;

    yang_name = "satellite"; yang_parent_name = "satellites";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::~Satellite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_data() const
{
    return satellite_id.is_set
	|| enable.is_set
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(enable.operation)
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePorts()
{
    yang_name = "remote-ports"; yang_parent_name = "satellite";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePorts' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{
    yang_name = "remote-port"; yang_parent_name = "remote-ports";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(sub_slot.operation)
	|| is_set(port_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.operation)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.operation)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
    }
    if(value_path == "port-range")
    {
        port_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "qos"; yang_parent_name = "satellites";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{
    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-network";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(minimum_preferred_links.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Lldp()
    :
    lldp_intf_enter{YType::boolean, "lldp-intf-enter"}
    	,
    receive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>())
	,transmit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>())
{
    receive->parent = this;

    transmit->parent = this;

    yang_name = "lldp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::~Lldp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_data() const
{
    return lldp_intf_enter.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(lldp_intf_enter.operation)
	|| (receive !=  nullptr && receive->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldp_intf_enter.is_set || is_set(lldp_intf_enter.operation)) leaf_name_data.push_back(lldp_intf_enter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>();
        }
        return transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::Transmit()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "transmit"; yang_parent_name = "lldp";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::~Transmit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::Receive()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "receive"; yang_parent_name = "lldp";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::~Receive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSessions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    acl{YType::empty, "acl"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSession' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attachment' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
{
    yang_name = "service-policies"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicies' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "service-policies";
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::~Afs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:afs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    if(child_yang_name == "af-topology-name")
    {
        for(auto const & c : af_topology_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName>();
        c->parent = this;
        af_topology_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : af_topology_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "afs";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::~Af()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::AfTopologyName()
    :
    topology_name{YType::str, "topology-name"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af-topology-name"; yang_parent_name = "afs";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::~AfTopologyName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_data() const
{
    return topology_name.is_set
	|| af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_name.operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-topology-name" <<"[topology-name='" <<topology_name <<"']" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfTopologyName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::Statistics()
    :
    load_interval{YType::uint32, "load-interval"}
{
    yang_name = "statistics"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::~Statistics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_data() const
{
    return load_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;

    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(common_acl_name.operation)
	|| is_set(compression_level.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(compression_level.operation)
	|| is_set(do_not_use.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.operation)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{
    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound.operation)
	|| is_set(outbound.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsPacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.operation)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound")
    {
        inbound = value;
    }
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
{
    inbound->parent = this;

    outbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(compression_level.operation)
	|| is_set(do_not_use.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.operation)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(common_acl_name.operation)
	|| is_set(compression_level.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
{
    yang_name = "dagrs"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:dagrs";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dagrs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dagr")
    {
        for(auto const & c : dagr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr>();
        c->parent = this;
        dagr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dagr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Dagr()
    :
    ip_addr{YType::str, "ip-addr"},
    enter{YType::empty, "enter"}
    	,
    sub(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>())
{
    sub->parent = this;

    yang_name = "dagr"; yang_parent_name = "dagrs";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::~Dagr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_data() const
{
    return ip_addr.is_set
	|| enter.is_set
	|| (sub !=  nullptr && sub->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(enter.operation)
	|| (sub !=  nullptr && sub->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dagr" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dagr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (enter.is_set || is_set(enter.operation)) leaf_name_data.push_back(enter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub")
    {
        if(sub == nullptr)
        {
            sub = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>();
        }
        return sub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub != nullptr)
    {
        children["sub"] = sub;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "enter")
    {
        enter = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Sub()
    :
    priority_timeout{YType::uint32, "priority-timeout"}
    	,
    distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
{
    distance->parent = this;

    metric->parent = this;

    timers->parent = this;

    yang_name = "sub"; yang_parent_name = "dagr";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::~Sub()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_data() const
{
    return priority_timeout.is_set
	|| (distance !=  nullptr && distance->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_timeout.operation)
	|| (distance !=  nullptr && distance->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sub' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_timeout.is_set || is_set(priority_timeout.operation)) leaf_name_data.push_back(priority_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::Metric()
    :
    metric_norm{YType::uint32, "metric-norm"},
    metric_prio{YType::uint32, "metric-prio"}
{
    yang_name = "metric"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_data() const
{
    return metric_norm.is_set
	|| metric_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_norm.operation)
	|| is_set(metric_prio.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_norm.is_set || is_set(metric_norm.operation)) leaf_name_data.push_back(metric_norm.get_name_leafdata());
    if (metric_prio.is_set || is_set(metric_prio.operation)) leaf_name_data.push_back(metric_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-norm")
    {
        metric_norm = value;
    }
    if(value_path == "metric-prio")
    {
        metric_prio = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::Timers()
    :
    query_time{YType::uint32, "query-time"},
    sby_time{YType::uint32, "sby-time"}
{
    yang_name = "timers"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_data() const
{
    return query_time.is_set
	|| sby_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(query_time.operation)
	|| is_set(sby_time.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_time.is_set || is_set(query_time.operation)) leaf_name_data.push_back(query_time.get_name_leafdata());
    if (sby_time.is_set || is_set(sby_time.operation)) leaf_name_data.push_back(sby_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "query-time")
    {
        query_time = value;
    }
    if(value_path == "sby-time")
    {
        sby_time = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::Distance()
    :
    dist_norm{YType::uint32, "dist-norm"},
    dist_prio{YType::uint32, "dist-prio"}
{
    yang_name = "distance"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::~Distance()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_data() const
{
    return dist_norm.is_set
	|| dist_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(dist_norm.operation)
	|| is_set(dist_prio.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_norm.is_set || is_set(dist_norm.operation)) leaf_name_data.push_back(dist_norm.get_name_leafdata());
    if (dist_prio.is_set || is_set(dist_prio.operation)) leaf_name_data.push_back(dist_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dist-norm")
    {
        dist_norm = value;
    }
    if(value_path == "dist-prio")
    {
        dist_prio = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::Ipv4Arp()
    :
    gratuitous_ignore{YType::empty, "gratuitous-ignore"},
    learning_disable{YType::empty, "learning-disable"},
    learning_local{YType::empty, "learning-local"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::empty, "proxy-arp"},
    purge_delay{YType::uint32, "purge-delay"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "ipv4arp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::~Ipv4Arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_data() const
{
    return gratuitous_ignore.is_set
	|| learning_disable.is_set
	|| learning_local.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(gratuitous_ignore.operation)
	|| is_set(learning_disable.operation)
	|| is_set(learning_local.operation)
	|| is_set(local_proxy_arp.operation)
	|| is_set(proxy_arp.operation)
	|| is_set(purge_delay.operation)
	|| is_set(timeout.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Arp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_ignore.is_set || is_set(gratuitous_ignore.operation)) leaf_name_data.push_back(gratuitous_ignore.get_name_leafdata());
    if (learning_disable.is_set || is_set(learning_disable.operation)) leaf_name_data.push_back(learning_disable.get_name_leafdata());
    if (learning_local.is_set || is_set(learning_local.operation)) leaf_name_data.push_back(learning_local.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.operation)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.operation)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (purge_delay.is_set || is_set(purge_delay.operation)) leaf_name_data.push_back(purge_delay.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore = value;
    }
    if(value_path == "learning-disable")
    {
        learning_disable = value;
    }
    if(value_path == "learning-local")
    {
        learning_local = value;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
    }
    if(value_path == "purge-delay")
    {
        purge_delay = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    mtu{YType::uint32, "mtu"},
    point_to_point{YType::empty, "point-to-point"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
	,bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
	,bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
	,helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
	,verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
{
    addresses->parent = this;

    bgp->parent = this;

    bgp_pa->parent = this;

    helper_addresses->parent = this;

    verify->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| mtu.is_set
	|| point_to_point.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_enable.operation)
	|| is_set(icmp_mask_reply.operation)
	|| is_set(mtu.operation)
	|| is_set(point_to_point.operation)
	|| is_set(tcp_mss_adjust_enable.operation)
	|| is_set(ttl_propagate_disable.operation)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Network' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_enable.is_set || is_set(forwarding_enable.operation)) leaf_name_data.push_back(forwarding_enable.get_name_leafdata());
    if (icmp_mask_reply.is_set || is_set(icmp_mask_reply.operation)) leaf_name_data.push_back(icmp_mask_reply.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.operation)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.operation)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
        }
        return helper_addresses;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable = value;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::~BgpPa()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPa' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::Input()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{
    yang_name = "verify"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(default_ping.operation)
	|| is_set(reachable.operation)
	|| is_set(self_ping.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.operation)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.operation)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.operation)) leaf_name_data.push_back(self_ping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
    }
    if(value_path == "reachable")
    {
        reachable = value;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
	,qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
{
    flow_tag->parent = this;

    qppb->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    return (flow_tag !=  nullptr && flow_tag->has_data())
	|| (qppb !=  nullptr && qppb->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(operation)
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (qppb !=  nullptr && qppb->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
        }
        return flow_tag;
    }

    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
        }
        return qppb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_tag != nullptr)
    {
        children["flow-tag"] = flow_tag;
    }

    if(qppb != nullptr)
    {
        children["qppb"] = qppb;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Qppb()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>())
{
    input->parent = this;

    yang_name = "qppb"; yang_parent_name = "bgp";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::~Qppb()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qppb' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::Input()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{
    yang_name = "input"; yang_parent_name = "qppb";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTag()
    :
    flow_tag_input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>())
{
    flow_tag_input->parent = this;

    yang_name = "flow-tag"; yang_parent_name = "bgp";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::~FlowTag()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_data() const
{
    return (flow_tag_input !=  nullptr && flow_tag_input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_operation() const
{
    return is_set(operation)
	|| (flow_tag_input !=  nullptr && flow_tag_input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTag' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag-input")
    {
        if(flow_tag_input == nullptr)
        {
            flow_tag_input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>();
        }
        return flow_tag_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_tag_input != nullptr)
    {
        children["flow-tag-input"] = flow_tag_input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::FlowTagInput()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{
    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag-input";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTagInput' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    dhcp{YType::empty, "dhcp"},
    unnumbered{YType::str, "unnumbered"}
    	,
    primary(nullptr) // presence node
	,secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
{
    secondaries->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    return dhcp.is_set
	|| unnumbered.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (secondaries !=  nullptr && secondaries->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| is_set(unnumbered.operation)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondaries !=  nullptr && secondaries->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondaries")
    {
        if(secondaries == nullptr)
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
        }
        return secondaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondaries != nullptr)
    {
        children["secondaries"] = secondaries;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
{
    yang_name = "secondaries"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondaries";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondaries' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::Secondary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "secondary"; yang_parent_name = "secondaries";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::~Secondary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(route_tag.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "primary"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(route_tag.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_data() const
{
    return address.is_set
	|| vrf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(vrf_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    redirects{YType::empty, "redirects"},
    unreachables{YType::empty, "unreachables"}
{
    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    return directed_broadcast.is_set
	|| redirects.is_set
	|| unreachables.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(directed_broadcast.operation)
	|| is_set(redirects.operation)
	|| is_set(unreachables.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4NetworkForwarding' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_broadcast.is_set || is_set(directed_broadcast.operation)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>())
	,bgp_flow_tag_policy_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>())
	,bgp_policy_accountings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>())
	,bgp_qos_policy_propagation(nullptr) // presence node
	,mac_address_filters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters>())
	,verify(nullptr) // presence node
{
    addresses->parent = this;

    bgp_flow_tag_policy_table->parent = this;

    bgp_policy_accountings->parent = this;

    mac_address_filters->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::~Ipv6Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_data())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_data())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_data())
	|| (mac_address_filters !=  nullptr && mac_address_filters->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(tcp_mss_adjust_enable.operation)
	|| is_set(ttl_propagate_disable.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_operation())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_operation())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_operation())
	|| (mac_address_filters !=  nullptr && mac_address_filters->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Network' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.operation)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.operation)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "bgp-flow-tag-policy-table")
    {
        if(bgp_flow_tag_policy_table == nullptr)
        {
            bgp_flow_tag_policy_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>();
        }
        return bgp_flow_tag_policy_table;
    }

    if(child_yang_name == "bgp-policy-accountings")
    {
        if(bgp_policy_accountings == nullptr)
        {
            bgp_policy_accountings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>();
        }
        return bgp_policy_accountings;
    }

    if(child_yang_name == "bgp-qos-policy-propagation")
    {
        if(bgp_qos_policy_propagation == nullptr)
        {
            bgp_qos_policy_propagation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation>();
        }
        return bgp_qos_policy_propagation;
    }

    if(child_yang_name == "mac-address-filters")
    {
        if(mac_address_filters == nullptr)
        {
            mac_address_filters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters>();
        }
        return mac_address_filters;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(bgp_flow_tag_policy_table != nullptr)
    {
        children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
    }

    if(bgp_policy_accountings != nullptr)
    {
        children["bgp-policy-accountings"] = bgp_policy_accountings;
    }

    if(bgp_qos_policy_propagation != nullptr)
    {
        children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
    }

    if(mac_address_filters != nullptr)
    {
        children["mac-address-filters"] = mac_address_filters;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::BgpQosPolicyPropagation()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{
    yang_name = "bgp-qos-policy-propagation"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::~BgpQosPolicyPropagation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-qos-policy-propagation";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpQosPolicyPropagation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccountings()
{
    yang_name = "bgp-policy-accountings"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::~BgpPolicyAccountings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_data() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_operation() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accountings";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPolicyAccountings' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-policy-accounting")
    {
        for(auto const & c : bgp_policy_accounting)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting>();
        c->parent = this;
        bgp_policy_accounting.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_policy_accounting)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::BgpPolicyAccounting()
    :
    direction{YType::str, "direction"},
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "bgp-policy-accounting"; yang_parent_name = "bgp-policy-accountings";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::~BgpPolicyAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_data() const
{
    return direction.is_set
	|| destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accounting" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPolicyAccounting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilters()
{
    yang_name = "mac-address-filters"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::~MacAddressFilters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::has_data() const
{
    for (std::size_t index=0; index<mac_address_filter.size(); index++)
    {
        if(mac_address_filter[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::has_operation() const
{
    for (std::size_t index=0; index<mac_address_filter.size(); index++)
    {
        if(mac_address_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-filters";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddressFilters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address-filter")
    {
        for(auto const & c : mac_address_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter>();
        c->parent = this;
        mac_address_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_address_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::MacAddressFilter()
    :
    multicast_address{YType::str, "multicast-address"}
{
    yang_name = "mac-address-filter"; yang_parent_name = "mac-address-filters";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::~MacAddressFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::has_data() const
{
    return multicast_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-filter" <<"[multicast-address='" <<multicast_address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddressFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{
    yang_name = "verify"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(default_ping.operation)
	|| is_set(reachable.operation)
	|| is_set(self_ping.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.operation)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.operation)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.operation)) leaf_name_data.push_back(self_ping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
    }
    if(value_path == "reachable")
    {
        reachable = value;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>())
	,eui64_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>())
	,link_local_address(nullptr) // presence node
	,regular_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>())
	,segment_routings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>())
{
    auto_configuration->parent = this;

    eui64_addresses->parent = this;

    regular_addresses->parent = this;

    segment_routings->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (regular_addresses !=  nullptr && regular_addresses->has_data())
	|| (segment_routings !=  nullptr && segment_routings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_operation())
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (regular_addresses !=  nullptr && regular_addresses->has_operation())
	|| (segment_routings !=  nullptr && segment_routings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    if(child_yang_name == "eui64-addresses")
    {
        if(eui64_addresses == nullptr)
        {
            eui64_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>();
        }
        return eui64_addresses;
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "regular-addresses")
    {
        if(regular_addresses == nullptr)
        {
            regular_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>();
        }
        return regular_addresses;
    }

    if(child_yang_name == "segment-routings")
    {
        if(segment_routings == nullptr)
        {
            segment_routings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>();
        }
        return segment_routings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    if(eui64_addresses != nullptr)
    {
        children["eui64-addresses"] = eui64_addresses;
    }

    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    if(regular_addresses != nullptr)
    {
        children["regular-addresses"] = regular_addresses;
    }

    if(segment_routings != nullptr)
    {
        children["segment-routings"] = segment_routings;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRoutings()
{
    yang_name = "segment-routings"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::~SegmentRoutings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_data() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_operation() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routings";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRoutings' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        for(auto const & c : segment_routing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting>();
        c->parent = this;
        segment_routing.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment_routing)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
    	,
    ipv6_prefix_sid(nullptr) // presence node
{
    yang_name = "segment-routing"; yang_parent_name = "segment-routings";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::~SegmentRouting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_data() const
{
    return address.is_set
	|| enable.is_set
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(enable.operation)
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix-sid")
    {
        if(ipv6_prefix_sid == nullptr)
        {
            ipv6_prefix_sid = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid>();
        }
        return ipv6_prefix_sid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_prefix_sid != nullptr)
    {
        children["ipv6-prefix-sid"] = ipv6_prefix_sid;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::Ipv6PrefixSid()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "ipv6-prefix-sid"; yang_parent_name = "segment-routing";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::~Ipv6PrefixSid()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_data() const
{
    return prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix-sid";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PrefixSid' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "link-local-address"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::~LinkLocalAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Addresses()
{
    yang_name = "eui64-addresses"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::~Eui64Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_data() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_operation() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-addresses";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eui64Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eui64-address")
    {
        for(auto const & c : eui64_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address>();
        c->parent = this;
        eui64_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eui64_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::Eui64Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "eui64-address"; yang_parent_name = "eui64-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::~Eui64Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eui64Address' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddresses()
{
    yang_name = "regular-addresses"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::~RegularAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_data() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_operation() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-addresses";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegularAddresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-address")
    {
        for(auto const & c : regular_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress>();
        c->parent = this;
        regular_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : regular_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::RegularAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "regular-address"; yang_parent_name = "regular-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::~RegularAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegularAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "auto-configuration"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicyTable()
    :
    bgp_flow_tag_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>())
{
    bgp_flow_tag_policy->parent = this;

    yang_name = "bgp-flow-tag-policy-table"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::~BgpFlowTagPolicyTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_data() const
{
    return (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_operation() const
{
    return is_set(operation)
	|| (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy-table";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpFlowTagPolicyTable' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-flow-tag-policy")
    {
        if(bgp_flow_tag_policy == nullptr)
        {
            bgp_flow_tag_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>();
        }
        return bgp_flow_tag_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_flow_tag_policy != nullptr)
    {
        children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::BgpFlowTagPolicy()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{
    yang_name = "bgp-flow-tag-policy"; yang_parent_name = "bgp-flow-tag-policy-table";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::~BgpFlowTagPolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpFlowTagPolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Neighbor()
    :
    cache_limit{YType::uint32, "cache-limit"},
    dad_attempts{YType::uint32, "dad-attempts"},
    managed_config{YType::empty, "managed-config"},
    ns_interval{YType::uint32, "ns-interval"},
    other_config{YType::empty, "other-config"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ramtu_suppress{YType::empty, "ramtu-suppress"},
    reachable_time{YType::uint32, "reachable-time"},
    redirect{YType::empty, "redirect"},
    router_preference{YType::enumeration, "router-preference"},
    srp_multicast_encapsulation{YType::enumeration, "srp-multicast-encapsulation"},
    srp_unicast_encapsulation{YType::enumeration, "srp-unicast-encapsulation"}
    	,
    ipv6_prefixes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>())
	,ra_interval(nullptr) // presence node
	,radns_searches(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>())
	,radns_servers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>())
	,raspecific_route_s(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>())
{
    ipv6_prefixes->parent = this;

    radns_searches->parent = this;

    radns_servers->parent = this;

    raspecific_route_s->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_data() const
{
    return cache_limit.is_set
	|| dad_attempts.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| other_config.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ramtu_suppress.is_set
	|| reachable_time.is_set
	|| redirect.is_set
	|| router_preference.is_set
	|| srp_multicast_encapsulation.is_set
	|| srp_unicast_encapsulation.is_set
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_data())
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (radns_searches !=  nullptr && radns_searches->has_data())
	|| (radns_servers !=  nullptr && radns_servers->has_data())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_limit.operation)
	|| is_set(dad_attempts.operation)
	|| is_set(managed_config.operation)
	|| is_set(ns_interval.operation)
	|| is_set(other_config.operation)
	|| is_set(ra_lifetime.operation)
	|| is_set(ra_suppress.operation)
	|| is_set(ra_unicast.operation)
	|| is_set(ra_unspecify_hoplimit.operation)
	|| is_set(ramtu_suppress.operation)
	|| is_set(reachable_time.operation)
	|| is_set(redirect.operation)
	|| is_set(router_preference.operation)
	|| is_set(srp_multicast_encapsulation.operation)
	|| is_set(srp_unicast_encapsulation.operation)
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_operation())
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (radns_searches !=  nullptr && radns_searches->has_operation())
	|| (radns_servers !=  nullptr && radns_servers->has_operation())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Neighbor' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.operation)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.operation)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.operation)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.operation)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.operation)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.operation)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.operation)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.operation)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ramtu_suppress.is_set || is_set(ramtu_suppress.operation)) leaf_name_data.push_back(ramtu_suppress.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.operation)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (srp_multicast_encapsulation.is_set || is_set(srp_multicast_encapsulation.operation)) leaf_name_data.push_back(srp_multicast_encapsulation.get_name_leafdata());
    if (srp_unicast_encapsulation.is_set || is_set(srp_unicast_encapsulation.operation)) leaf_name_data.push_back(srp_unicast_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefixes")
    {
        if(ipv6_prefixes == nullptr)
        {
            ipv6_prefixes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>();
        }
        return ipv6_prefixes;
    }

    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "radns-searches")
    {
        if(radns_searches == nullptr)
        {
            radns_searches = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>();
        }
        return radns_searches;
    }

    if(child_yang_name == "radns-servers")
    {
        if(radns_servers == nullptr)
        {
            radns_servers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>();
        }
        return radns_servers;
    }

    if(child_yang_name == "raspecific-route-s")
    {
        if(raspecific_route_s == nullptr)
        {
            raspecific_route_s = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>();
        }
        return raspecific_route_s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_prefixes != nullptr)
    {
        children["ipv6-prefixes"] = ipv6_prefixes;
    }

    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(radns_searches != nullptr)
    {
        children["radns-searches"] = radns_searches;
    }

    if(radns_servers != nullptr)
    {
        children["radns-servers"] = radns_servers;
    }

    if(raspecific_route_s != nullptr)
    {
        children["raspecific-route-s"] = raspecific_route_s;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-limit")
    {
        cache_limit = value;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
    }
    if(value_path == "other-config")
    {
        other_config = value;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "redirect")
    {
        redirect = value;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation = value;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRouteS()
{
    yang_name = "raspecific-route-s"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::~RaspecificRouteS()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_data() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_operation() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route-s";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaspecificRouteS' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route")
    {
        for(auto const & c : raspecific_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute>();
        c->parent = this;
        raspecific_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : raspecific_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::RaspecificRoute()
    :
    specific_route{YType::str, "specific-route"},
    lifetime{YType::uint32, "lifetime"},
    preference{YType::enumeration, "preference"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "raspecific-route"; yang_parent_name = "raspecific-route-s";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::~RaspecificRoute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_data() const
{
    return specific_route.is_set
	|| lifetime.is_set
	|| preference.is_set
	|| prefix_length.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(specific_route.operation)
	|| is_set(lifetime.operation)
	|| is_set(preference.operation)
	|| is_set(prefix_length.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route" <<"[specific-route='" <<specific_route <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaspecificRoute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specific_route.is_set || is_set(specific_route.operation)) leaf_name_data.push_back(specific_route.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "specific-route")
    {
        specific_route = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearches()
{
    yang_name = "radns-searches"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::~RadnsSearches()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_data() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_operation() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-searches";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsSearches' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-search")
    {
        for(auto const & c : radns_search)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch>();
        c->parent = this;
        radns_search.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_search)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::RadnsSearch()
    :
    dns_search_list{YType::str, "dns-search-list"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "radns-search"; yang_parent_name = "radns-searches";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::~RadnsSearch()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_data() const
{
    return dns_search_list.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_search_list.operation)
	|| is_set(lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-search" <<"[dns-search-list='" <<dns_search_list <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsSearch' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_search_list.is_set || is_set(dns_search_list.operation)) leaf_name_data.push_back(dns_search_list.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServers()
{
    yang_name = "radns-servers"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::~RadnsServers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_data() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_operation() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-servers";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsServers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-server")
    {
        for(auto const & c : radns_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer>();
        c->parent = this;
        radns_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::RadnsServer()
    :
    dns_server{YType::str, "dns-server"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "radns-server"; yang_parent_name = "radns-servers";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::~RadnsServer()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_data() const
{
    return dns_server.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_server.operation)
	|| is_set(lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-server" <<"[dns-server='" <<dns_server <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsServer' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_server.is_set || is_set(dns_server.operation)) leaf_name_data.push_back(dns_server.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaInterval' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefixes()
{
    yang_name = "ipv6-prefixes"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::~Ipv6Prefixes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_data() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefixes";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prefixes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix")
    {
        for(auto const & c : ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix>();
        c->parent = this;
        ipv6_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"},
    expiry_date{YType::uint32, "expiry-date"},
    expiry_hour{YType::uint32, "expiry-hour"},
    expiry_minute{YType::uint32, "expiry-minute"},
    expiry_month{YType::enumeration, "expiry-month"},
    expiry_year{YType::uint32, "expiry-year"},
    no_advertize{YType::boolean, "no-advertize"},
    no_auto_config{YType::boolean, "no-auto-config"},
    off_link{YType::boolean, "off-link"},
    pref_expiry_date{YType::uint32, "pref-expiry-date"},
    pref_expiry_hour{YType::uint32, "pref-expiry-hour"},
    pref_expiry_minute{YType::uint32, "pref-expiry-minute"},
    pref_expiry_month{YType::enumeration, "pref-expiry-month"},
    pref_expiry_year{YType::uint32, "pref-expiry-year"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_zone{YType::str, "prefix-zone"},
    valid_lifetime{YType::uint32, "valid-lifetime"}
{
    yang_name = "ipv6-prefix"; yang_parent_name = "ipv6-prefixes";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::~Ipv6Prefix()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_data() const
{
    return prefix.is_set
	|| expiry_date.is_set
	|| expiry_hour.is_set
	|| expiry_minute.is_set
	|| expiry_month.is_set
	|| expiry_year.is_set
	|| no_advertize.is_set
	|| no_auto_config.is_set
	|| off_link.is_set
	|| pref_expiry_date.is_set
	|| pref_expiry_hour.is_set
	|| pref_expiry_minute.is_set
	|| pref_expiry_month.is_set
	|| pref_expiry_year.is_set
	|| preferred_lifetime.is_set
	|| prefix_length.is_set
	|| prefix_zone.is_set
	|| valid_lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(expiry_date.operation)
	|| is_set(expiry_hour.operation)
	|| is_set(expiry_minute.operation)
	|| is_set(expiry_month.operation)
	|| is_set(expiry_year.operation)
	|| is_set(no_advertize.operation)
	|| is_set(no_auto_config.operation)
	|| is_set(off_link.operation)
	|| is_set(pref_expiry_date.operation)
	|| is_set(pref_expiry_hour.operation)
	|| is_set(pref_expiry_minute.operation)
	|| is_set(pref_expiry_month.operation)
	|| is_set(pref_expiry_year.operation)
	|| is_set(preferred_lifetime.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_zone.operation)
	|| is_set(valid_lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prefix' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (expiry_date.is_set || is_set(expiry_date.operation)) leaf_name_data.push_back(expiry_date.get_name_leafdata());
    if (expiry_hour.is_set || is_set(expiry_hour.operation)) leaf_name_data.push_back(expiry_hour.get_name_leafdata());
    if (expiry_minute.is_set || is_set(expiry_minute.operation)) leaf_name_data.push_back(expiry_minute.get_name_leafdata());
    if (expiry_month.is_set || is_set(expiry_month.operation)) leaf_name_data.push_back(expiry_month.get_name_leafdata());
    if (expiry_year.is_set || is_set(expiry_year.operation)) leaf_name_data.push_back(expiry_year.get_name_leafdata());
    if (no_advertize.is_set || is_set(no_advertize.operation)) leaf_name_data.push_back(no_advertize.get_name_leafdata());
    if (no_auto_config.is_set || is_set(no_auto_config.operation)) leaf_name_data.push_back(no_auto_config.get_name_leafdata());
    if (off_link.is_set || is_set(off_link.operation)) leaf_name_data.push_back(off_link.get_name_leafdata());
    if (pref_expiry_date.is_set || is_set(pref_expiry_date.operation)) leaf_name_data.push_back(pref_expiry_date.get_name_leafdata());
    if (pref_expiry_hour.is_set || is_set(pref_expiry_hour.operation)) leaf_name_data.push_back(pref_expiry_hour.get_name_leafdata());
    if (pref_expiry_minute.is_set || is_set(pref_expiry_minute.operation)) leaf_name_data.push_back(pref_expiry_minute.get_name_leafdata());
    if (pref_expiry_month.is_set || is_set(pref_expiry_month.operation)) leaf_name_data.push_back(pref_expiry_month.get_name_leafdata());
    if (pref_expiry_year.is_set || is_set(pref_expiry_year.operation)) leaf_name_data.push_back(pref_expiry_year.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.operation)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_zone.is_set || is_set(prefix_zone.operation)) leaf_name_data.push_back(prefix_zone.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.operation)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "expiry-date")
    {
        expiry_date = value;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour = value;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute = value;
    }
    if(value_path == "expiry-month")
    {
        expiry_month = value;
    }
    if(value_path == "expiry-year")
    {
        expiry_year = value;
    }
    if(value_path == "no-advertize")
    {
        no_advertize = value;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config = value;
    }
    if(value_path == "off-link")
    {
        off_link = value;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date = value;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour = value;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute = value;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month = value;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year = value;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone = value;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    destination{YType::str, "destination"},
    forward_class{YType::uint32, "forward-class"},
    load_share{YType::uint32, "load-share"},
    path_protection{YType::empty, "path-protection"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
	,affinity_mask(nullptr) // presence node
	,auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
	,autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
	,backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
	,bandwidth(nullptr) // presence node
	,bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
	,bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
	,binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
	,fast_reroute(nullptr) // presence node
	,forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
	,path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
	,pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
	,policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
	,priority(nullptr) // presence node
	,switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
	,tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
{
    admin_mode->parent = this;

    auto_bandwidth->parent = this;

    autoroute->parent = this;

    backup_bandwidth->parent = this;

    bfd_over_lsp->parent = this;

    bidirectional->parent = this;

    binding_segment_id_mpls->parent = this;

    forwarding_adjacency->parent = this;

    logging->parent = this;

    new_style_affinity_affinity_types->parent = this;

    path_option_protects->parent = this;

    pce->parent = this;

    policy_classes->parent = this;

    switching->parent = this;

    tunnel_path_selection->parent = this;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    return destination.is_set
	|| forward_class.is_set
	|| load_share.is_set
	|| path_protection.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| soft_preemption.is_set
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(forward_class.operation)
	|| is_set(load_share.operation)
	|| is_set(path_protection.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(record_route.operation)
	|| is_set(signalled_name.operation)
	|| is_set(soft_preemption.operation)
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelTeAttributes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_protection.is_set || is_set(path_protection.operation)) leaf_name_data.push_back(path_protection.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.operation)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-mode")
    {
        if(admin_mode == nullptr)
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
        }
        return admin_mode;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth == nullptr)
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
        }
        return backup_bandwidth;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls == nullptr)
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
        }
        return binding_segment_id_mpls;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects == nullptr)
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
        }
        return path_option_protects;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
        }
        return switching;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_mode != nullptr)
    {
        children["admin-mode"] = admin_mode;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(backup_bandwidth != nullptr)
    {
        children["backup-bandwidth"] = backup_bandwidth;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(binding_segment_id_mpls != nullptr)
    {
        children["binding-segment-id-mpls"] = binding_segment_id_mpls;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(forwarding_adjacency != nullptr)
    {
        children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_option_protects != nullptr)
    {
        children["path-option-protects"] = path_option_protects;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "path-protection")
    {
        path_protection = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    class_type{YType::enumeration, "class-type"},
    dste_type{YType::enumeration, "dste-type"},
    limit_type{YType::enumeration, "limit-type"},
    pool_type{YType::enumeration, "pool-type"}
{
    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    return backup_bandwidth.is_set
	|| class_type.is_set
	|| dste_type.is_set
	|| limit_type.is_set
	|| pool_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_bandwidth.operation)
	|| is_set(class_type.operation)
	|| is_set(dste_type.operation)
	|| is_set(limit_type.operation)
	|| is_set(pool_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupBandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_bandwidth.is_set || is_set(backup_bandwidth.operation)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.operation)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.operation)) leaf_name_data.push_back(pool_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    bringup_timeout{YType::uint32, "bringup-timeout"},
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    enable{YType::empty, "enable"},
    encap_mode{YType::uint32, "encap-mode"},
    fast_detect{YType::enumeration, "fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    multiplier{YType::uint32, "multiplier"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"}
{
    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    return bringup_timeout.is_set
	|| dampening_initial_wait.is_set
	|| dampening_maximum_wait.is_set
	|| dampening_secondary_wait.is_set
	|| enable.is_set
	|| encap_mode.is_set
	|| fast_detect.is_set
	|| minimum_interval.is_set
	|| multiplier.is_set
	|| periodic_ping_disable.is_set
	|| periodic_ping_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bringup_timeout.operation)
	|| is_set(dampening_initial_wait.operation)
	|| is_set(dampening_maximum_wait.operation)
	|| is_set(dampening_secondary_wait.operation)
	|| is_set(enable.operation)
	|| is_set(encap_mode.operation)
	|| is_set(fast_detect.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(multiplier.operation)
	|| is_set(periodic_ping_disable.operation)
	|| is_set(periodic_ping_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdOverLsp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bringup_timeout.is_set || is_set(bringup_timeout.operation)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.operation)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.operation)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.operation)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.operation)) leaf_name_data.push_back(encap_mode.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.operation)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.operation)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
    }
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    label_value{YType::uint32, "label-value"},
    segment_id_type{YType::enumeration, "segment-id-type"}
{
    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    return label_value.is_set
	|| segment_id_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(label_value.operation)
	|| is_set(segment_id_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingSegmentIdMpls' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_value.is_set || is_set(label_value.operation)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-value")
    {
        label_value = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::ForwardingAdjacency()
    :
    enable{YType::empty, "enable"},
    hold_time{YType::uint32, "hold-time"},
    include_ipv6{YType::empty, "include-ipv6"}
{
    yang_name = "forwarding-adjacency"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_data() const
{
    return enable.is_set
	|| hold_time.is_set
	|| include_ipv6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hold_time.operation)
	|| is_set(include_ipv6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAdjacency' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.operation)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
{
    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptionProtects' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-protect")
    {
        for(auto const & c : path_option_protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        c->parent = this;
        path_option_protect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option_protect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(operation)
	|| is_set(protection.operation)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect" <<"[protection='" <<protection <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptionProtect' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.operation)) leaf_name_data.push_back(protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protection")
    {
        protection = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
{
    yang_name = "path-options"; yang_parent_name = "path-option-protect";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    destination{YType::str, "destination"},
    igp_area{YType::int32, "igp-area"},
    igp_area_ip_address_id{YType::str, "igp-area-ip-address-id"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    interface{YType::str, "interface"},
    lockdown{YType::enumeration, "lockdown"},
    output_label{YType::int32, "output-label"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_option_attribute_set_name{YType::str, "path-option-attribute-set-name"},
    path_property{YType::int32, "path-property"},
    path_type{YType::enumeration, "path-type"},
    pce{YType::enumeration, "pce"},
    pce_address{YType::str, "pce-address"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    segment_routing{YType::enumeration, "segment-routing"},
    verbatim{YType::enumeration, "verbatim"}
{
    yang_name = "path-option"; yang_parent_name = "path-options";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| destination.is_set
	|| igp_area.is_set
	|| igp_area_ip_address_id.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| interface.is_set
	|| lockdown.is_set
	|| output_label.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_option_attribute_set_name.is_set
	|| path_property.is_set
	|| path_type.is_set
	|| pce.is_set
	|| pce_address.is_set
	|| protected_by_preference_level.is_set
	|| segment_routing.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_operation() const
{
    return is_set(operation)
	|| is_set(preference_level.operation)
	|| is_set(destination.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_ip_address_id.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation)
	|| is_set(interface.operation)
	|| is_set(lockdown.operation)
	|| is_set(output_label.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_option_attribute_set_name.operation)
	|| is_set(path_property.operation)
	|| is_set(path_type.operation)
	|| is_set(pce.operation)
	|| is_set(pce_address.operation)
	|| is_set(protected_by_preference_level.operation)
	|| is_set(segment_routing.operation)
	|| is_set(verbatim.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.operation)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_ip_address_id.is_set || is_set(igp_area_ip_address_id.operation)) leaf_name_data.push_back(igp_area_ip_address_id.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_option_attribute_set_name.is_set || is_set(path_option_attribute_set_name.operation)) leaf_name_data.push_back(path_option_attribute_set_name.get_name_leafdata());
    if (path_property.is_set || is_set(path_property.operation)) leaf_name_data.push_back(path_property.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (pce.is_set || is_set(pce.operation)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.operation)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.operation)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.operation)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name = value;
    }
    if(value_path == "path-property")
    {
        path_property = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "pce")
    {
        pce = value;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::Bidirectional()
    :
    enabled{YType::empty, "enabled"}
    	,
    association_corouted_type(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>())
	,association_parameters(nullptr) // presence node
{
    association_corouted_type->parent = this;

    yang_name = "bidirectional"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::~Bidirectional()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_data() const
{
    return enabled.is_set
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_data())
	|| (association_parameters !=  nullptr && association_parameters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_operation())
	|| (association_parameters !=  nullptr && association_parameters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bidirectional' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-corouted-type")
    {
        if(association_corouted_type == nullptr)
        {
            association_corouted_type = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>();
        }
        return association_corouted_type;
    }

    if(child_yang_name == "association-parameters")
    {
        if(association_parameters == nullptr)
        {
            association_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters>();
        }
        return association_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association_corouted_type != nullptr)
    {
        children["association-corouted-type"] = association_corouted_type;
    }

    if(association_parameters != nullptr)
    {
        children["association-parameters"] = association_parameters;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::AssociationCoroutedType()
    :
    enable{YType::empty, "enable"},
    wrap_protection_enable{YType::empty, "wrap-protection-enable"}
    	,
    fault_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>())
{
    fault_oam->parent = this;

    yang_name = "association-corouted-type"; yang_parent_name = "bidirectional";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::~AssociationCoroutedType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_data() const
{
    return enable.is_set
	|| wrap_protection_enable.is_set
	|| (fault_oam !=  nullptr && fault_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(wrap_protection_enable.operation)
	|| (fault_oam !=  nullptr && fault_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-corouted-type";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociationCoroutedType' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (wrap_protection_enable.is_set || is_set(wrap_protection_enable.operation)) leaf_name_data.push_back(wrap_protection_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-oam")
    {
        if(fault_oam == nullptr)
        {
            fault_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>();
        }
        return fault_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fault_oam != nullptr)
    {
        children["fault-oam"] = fault_oam;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::FaultOam()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "fault-oam"; yang_parent_name = "association-corouted-type";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::~FaultOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-oam";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FaultOam' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::AssociationParameters()
    :
    association_global_id{YType::uint32, "association-global-id"},
    association_id{YType::uint32, "association-id"},
    association_is_global_id_configured{YType::boolean, "association-is-global-id-configured"},
    association_source_address{YType::str, "association-source-address"}
{
    yang_name = "association-parameters"; yang_parent_name = "bidirectional";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::~AssociationParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_data() const
{
    return association_global_id.is_set
	|| association_id.is_set
	|| association_is_global_id_configured.is_set
	|| association_source_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(association_global_id.operation)
	|| is_set(association_id.operation)
	|| is_set(association_is_global_id_configured.operation)
	|| is_set(association_source_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-parameters";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociationParameters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_global_id.is_set || is_set(association_global_id.operation)) leaf_name_data.push_back(association_global_id.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.operation)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_is_global_id_configured.is_set || is_set(association_is_global_id_configured.operation)) leaf_name_data.push_back(association_is_global_id_configured.get_name_leafdata());
    if (association_source_address.is_set || is_set(association_source_address.operation)) leaf_name_data.push_back(association_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-global-id")
    {
        association_global_id = value;
    }
    if(value_path == "association-id")
    {
        association_id = value;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured = value;
    }
    if(value_path == "association-source-address")
    {
        association_source_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::AdminMode()
    :
    deactivate_tunnel{YType::empty, "deactivate-tunnel"}
{
    yang_name = "admin-mode"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::~AdminMode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_data() const
{
    return deactivate_tunnel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_operation() const
{
    return is_set(operation)
	|| is_set(deactivate_tunnel.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-mode";

    return path_buffer.str();

}

const EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminMode' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate_tunnel.is_set || is_set(deactivate_tunnel.operation)) leaf_name_data.push_back(deactivate_tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel = value;
    }
}

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum::Y_0x9200 {37376, "0x9200"};


}
}

