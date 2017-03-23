
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_29.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"}
    	,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;
    children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    return establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| update_internal_attribute_code.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(establishment_update_filter_match_count.operation)
	|| is_set(last_update_filter_match_age.operation)
	|| is_set(update_filter_action.operation)
	|| is_set(update_filter_match_count.operation)
	|| is_set(update_internal_attribute_code.operation)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateAttributeFilterAttributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.operation)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.operation)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.operation)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.operation)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.operation)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp != nullptr)
        {
            children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
        }
        else
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
            last_update_filter_match_timestamp->parent = this;
            children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
        }
        return children.at("last-update-filter-match-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children()
{
    if(children.find("last-update-filter-match-timestamp") == children.end())
    {
        if(last_update_filter_match_timestamp != nullptr)
        {
            children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count = value;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age = value;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count = value;
    }
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateFilterMatchTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"},
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"}
    	,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
{
    update_filter_message_timestamp->parent = this;
    children["update-filter-message-timestamp"] = update_filter_message_timestamp;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_data())
            return true;
    }
    return update_filter_final_action.is_set
	|| update_filter_nlri_address_family.is_set
	|| update_filter_nlri_string.is_set
	|| update_filter_nlri_string_truncated.is_set
	|| update_filtered_attribute_count.is_set
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(update_filter_final_action.operation)
	|| is_set(update_filter_nlri_address_family.operation)
	|| is_set(update_filter_nlri_string.operation)
	|| is_set(update_filter_nlri_string_truncated.operation)
	|| is_set(update_filtered_attribute_count.operation)
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessage' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filter_final_action.is_set || is_set(update_filter_final_action.operation)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.operation)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.operation)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.operation)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());
    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.operation)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-filter-element")
    {
        for(auto const & c : update_filter_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
        c->parent = this;
        update_filter_element.push_back(std::move(c));
        children[segment_path] = update_filter_element.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "update-filter-message-data")
    {
        for(auto const & c : update_filter_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        c->parent = this;
        update_filter_message_data.push_back(std::move(c));
        children[segment_path] = update_filter_message_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp != nullptr)
        {
            children["update-filter-message-timestamp"] = update_filter_message_timestamp;
        }
        else
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
            update_filter_message_timestamp->parent = this;
            children["update-filter-message-timestamp"] = update_filter_message_timestamp;
        }
        return children.at("update-filter-message-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children()
{
    for (auto const & c : update_filter_element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : update_filter_message_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("update-filter-message-timestamp") == children.end())
    {
        if(update_filter_message_timestamp != nullptr)
        {
            children["update-filter-message-timestamp"] = update_filter_message_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action = value;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family = value;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string = value;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated = value;
    }
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessageTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterMessageData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{
    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(operation)
	|| is_set(update_attribute_code.operation)
	|| is_set(update_attribute_flags.operation)
	|| is_set(update_filter_action.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateFilterElement' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.operation)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.operation)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.operation)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::Bmp()
    :
    server_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors>())
	,server_summaries(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries>())
{
    server_neighbors->parent = this;
    children["server-neighbors"] = server_neighbors;

    server_summaries->parent = this;
    children["server-summaries"] = server_summaries;

    yang_name = "bmp"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::~Bmp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::has_data() const
{
    return (server_neighbors !=  nullptr && server_neighbors->has_data())
	|| (server_summaries !=  nullptr && server_summaries->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::has_operation() const
{
    return is_set(operation)
	|| (server_neighbors !=  nullptr && server_neighbors->has_operation())
	|| (server_summaries !=  nullptr && server_summaries->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bmp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-neighbors")
    {
        if(server_neighbors != nullptr)
        {
            children["server-neighbors"] = server_neighbors;
        }
        else
        {
            server_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors>();
            server_neighbors->parent = this;
            children["server-neighbors"] = server_neighbors;
        }
        return children.at("server-neighbors");
    }

    if(child_yang_name == "server-summaries")
    {
        if(server_summaries != nullptr)
        {
            children["server-summaries"] = server_summaries;
        }
        else
        {
            server_summaries = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries>();
            server_summaries->parent = this;
            children["server-summaries"] = server_summaries;
        }
        return children.at("server-summaries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::get_children()
{
    if(children.find("server-neighbors") == children.end())
    {
        if(server_neighbors != nullptr)
        {
            children["server-neighbors"] = server_neighbors;
        }
    }

    if(children.find("server-summaries") == children.end())
    {
        if(server_summaries != nullptr)
        {
            children["server-summaries"] = server_summaries;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummaries()
{
    yang_name = "server-summaries"; yang_parent_name = "bmp";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::~ServerSummaries()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::has_data() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::has_operation() const
{
    for (std::size_t index=0; index<server_summary.size(); index++)
    {
        if(server_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summaries";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerSummaries' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-summary")
    {
        for(auto const & c : server_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary>();
        c->parent = this;
        server_summary.push_back(std::move(c));
        children[segment_path] = server_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::get_children()
{
    for (auto const & c : server_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::ServerSummary()
    :
    server_id{YType::uint32, "server-id"},
    bmp_bytes_written_tcp{YType::uint64, "bmp-bytes-written-tcp"},
    bmp_init_msg_count{YType::uint32, "bmp-init-msg-count"},
    bmp_messages_wdraw_discarded{YType::uint32, "bmp-messages-wdraw-discarded"},
    bmp_peer_msg_drop_count{YType::uint32, "bmp-peer-msg-drop-count"},
    bmp_peer_msg_pending_count{YType::uint32, "bmp-peer-msg-pending-count"},
    bmp_peer_msg_pending_count_hwts{YType::uint64, "bmp-peer-msg-pending-count-hwts"},
    bmp_peer_msg_pending_count_max{YType::uint32, "bmp-peer-msg-pending-count-max"},
    bmp_per_peer_msg_count{YType::uint32, "bmp-per-peer-msg-count"},
    bmp_per_peer_msg_route_mon_count{YType::uint32, "bmp-per-peer-msg-route-mon-count"},
    bmp_pfx_wdraw_discarded{YType::uint32, "bmp-pfx-wdraw-discarded"},
    bmp_server_host_name{YType::str, "bmp-server-host-name"},
    bmp_server_id{YType::uint8, "bmp-server-id"},
    bmp_server_is_flapping{YType::boolean, "bmp-server-is-flapping"},
    bmp_server_nbr_count{YType::uint32, "bmp-server-nbr-count"},
    bmp_server_port{YType::uint32, "bmp-server-port"},
    bmp_server_state{YType::enumeration, "bmp-server-state"},
    bmp_status_report_count{YType::uint32, "bmp-status-report-count"},
    bmp_termination_msg_count{YType::uint32, "bmp-termination-msg-count"},
    bmp_update_mode{YType::enumeration, "bmp-update-mode"},
    bmp_vrf_id{YType::uint32, "bmp-vrf-id"},
    bmp_vrf_name{YType::str, "bmp-vrf-name"},
    bmpq_last_all_write_pulse_sent_time{YType::uint64, "bmpq-last-all-write-pulse-sent-time"},
    bmpq_last_write_pulse_cb_time{YType::uint64, "bmpq-last-write-pulse-cb-time"},
    bmpq_last_write_pulse_sent_time{YType::uint64, "bmpq-last-write-pulse-sent-time"},
    bmpr_mon_upd_messages{YType::uint32, "bmpr-mon-upd-messages"},
    bmpr_mon_update_gen_time{YType::uint32, "bmpr-mon-update-gen-time"},
    bmpr_mon_wdraw_messages{YType::uint32, "bmpr-mon-wdraw-messages"},
    path_update_count{YType::uint32, "path-update-count"},
    path_update_drop{YType::uint32, "path-update-drop"},
    path_withdraw_count{YType::uint32, "path-withdraw-count"},
    path_withdraw_drop{YType::uint32, "path-withdraw-drop"},
    tcp_keep_alive_interval{YType::uint32, "tcp-keep-alive-interval"},
    tcp_last_write_cb_time{YType::uint64, "tcp-last-write-cb-time"},
    tcp_last_write_result{YType::uint32, "tcp-last-write-result"},
    tcp_last_write_time{YType::uint64, "tcp-last-write-time"},
    tcp_maximum_segment_size{YType::uint32, "tcp-maximum-segment-size"},
    tcp_write_cb_pending{YType::uint32, "tcp-write-cb-pending"},
    tcp_write_time{YType::uint32, "tcp-write-time"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    update_source_interface_name{YType::str, "update-source-interface-name"},
    update_source_vrf_id{YType::uint32, "update-source-vrf-id"}
    	,
    bmp_server_last_discon_time(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>())
	,bmp_server_state_age(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>())
	,bmp_server_state_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>())
	,update_source_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>())
{
    bmp_server_last_discon_time->parent = this;
    children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;

    bmp_server_state_age->parent = this;
    children["bmp-server-state-age"] = bmp_server_state_age;

    bmp_server_state_time_spec->parent = this;
    children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;

    update_source_address->parent = this;
    children["update-source-address"] = update_source_address;

    yang_name = "server-summary"; yang_parent_name = "server-summaries";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::~ServerSummary()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_data() const
{
    for (std::size_t index=0; index<bmp_send_version.size(); index++)
    {
        if(bmp_send_version[index]->has_data())
            return true;
    }
    return server_id.is_set
	|| bmp_bytes_written_tcp.is_set
	|| bmp_init_msg_count.is_set
	|| bmp_messages_wdraw_discarded.is_set
	|| bmp_peer_msg_drop_count.is_set
	|| bmp_peer_msg_pending_count.is_set
	|| bmp_peer_msg_pending_count_hwts.is_set
	|| bmp_peer_msg_pending_count_max.is_set
	|| bmp_per_peer_msg_count.is_set
	|| bmp_per_peer_msg_route_mon_count.is_set
	|| bmp_pfx_wdraw_discarded.is_set
	|| bmp_server_host_name.is_set
	|| bmp_server_id.is_set
	|| bmp_server_is_flapping.is_set
	|| bmp_server_nbr_count.is_set
	|| bmp_server_port.is_set
	|| bmp_server_state.is_set
	|| bmp_status_report_count.is_set
	|| bmp_termination_msg_count.is_set
	|| bmp_update_mode.is_set
	|| bmp_vrf_id.is_set
	|| bmp_vrf_name.is_set
	|| bmpq_last_all_write_pulse_sent_time.is_set
	|| bmpq_last_write_pulse_cb_time.is_set
	|| bmpq_last_write_pulse_sent_time.is_set
	|| bmpr_mon_upd_messages.is_set
	|| bmpr_mon_update_gen_time.is_set
	|| bmpr_mon_wdraw_messages.is_set
	|| path_update_count.is_set
	|| path_update_drop.is_set
	|| path_withdraw_count.is_set
	|| path_withdraw_drop.is_set
	|| tcp_keep_alive_interval.is_set
	|| tcp_last_write_cb_time.is_set
	|| tcp_last_write_result.is_set
	|| tcp_last_write_time.is_set
	|| tcp_maximum_segment_size.is_set
	|| tcp_write_cb_pending.is_set
	|| tcp_write_time.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| update_source_interface_name.is_set
	|| update_source_vrf_id.is_set
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_data())
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_data())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_data())
	|| (update_source_address !=  nullptr && update_source_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_operation() const
{
    for (std::size_t index=0; index<bmp_send_version.size(); index++)
    {
        if(bmp_send_version[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(server_id.operation)
	|| is_set(bmp_bytes_written_tcp.operation)
	|| is_set(bmp_init_msg_count.operation)
	|| is_set(bmp_messages_wdraw_discarded.operation)
	|| is_set(bmp_peer_msg_drop_count.operation)
	|| is_set(bmp_peer_msg_pending_count.operation)
	|| is_set(bmp_peer_msg_pending_count_hwts.operation)
	|| is_set(bmp_peer_msg_pending_count_max.operation)
	|| is_set(bmp_per_peer_msg_count.operation)
	|| is_set(bmp_per_peer_msg_route_mon_count.operation)
	|| is_set(bmp_pfx_wdraw_discarded.operation)
	|| is_set(bmp_server_host_name.operation)
	|| is_set(bmp_server_id.operation)
	|| is_set(bmp_server_is_flapping.operation)
	|| is_set(bmp_server_nbr_count.operation)
	|| is_set(bmp_server_port.operation)
	|| is_set(bmp_server_state.operation)
	|| is_set(bmp_status_report_count.operation)
	|| is_set(bmp_termination_msg_count.operation)
	|| is_set(bmp_update_mode.operation)
	|| is_set(bmp_vrf_id.operation)
	|| is_set(bmp_vrf_name.operation)
	|| is_set(bmpq_last_all_write_pulse_sent_time.operation)
	|| is_set(bmpq_last_write_pulse_cb_time.operation)
	|| is_set(bmpq_last_write_pulse_sent_time.operation)
	|| is_set(bmpr_mon_upd_messages.operation)
	|| is_set(bmpr_mon_update_gen_time.operation)
	|| is_set(bmpr_mon_wdraw_messages.operation)
	|| is_set(path_update_count.operation)
	|| is_set(path_update_drop.operation)
	|| is_set(path_withdraw_count.operation)
	|| is_set(path_withdraw_drop.operation)
	|| is_set(tcp_keep_alive_interval.operation)
	|| is_set(tcp_last_write_cb_time.operation)
	|| is_set(tcp_last_write_result.operation)
	|| is_set(tcp_last_write_time.operation)
	|| is_set(tcp_maximum_segment_size.operation)
	|| is_set(tcp_write_cb_pending.operation)
	|| is_set(tcp_write_time.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(update_source_interface_name.operation)
	|| is_set(update_source_vrf_id.operation)
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_operation())
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_operation())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_operation())
	|| (update_source_address !=  nullptr && update_source_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summary" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerSummary' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmp_bytes_written_tcp.is_set || is_set(bmp_bytes_written_tcp.operation)) leaf_name_data.push_back(bmp_bytes_written_tcp.get_name_leafdata());
    if (bmp_init_msg_count.is_set || is_set(bmp_init_msg_count.operation)) leaf_name_data.push_back(bmp_init_msg_count.get_name_leafdata());
    if (bmp_messages_wdraw_discarded.is_set || is_set(bmp_messages_wdraw_discarded.operation)) leaf_name_data.push_back(bmp_messages_wdraw_discarded.get_name_leafdata());
    if (bmp_peer_msg_drop_count.is_set || is_set(bmp_peer_msg_drop_count.operation)) leaf_name_data.push_back(bmp_peer_msg_drop_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count.is_set || is_set(bmp_peer_msg_pending_count.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count_hwts.is_set || is_set(bmp_peer_msg_pending_count_hwts.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count_hwts.get_name_leafdata());
    if (bmp_peer_msg_pending_count_max.is_set || is_set(bmp_peer_msg_pending_count_max.operation)) leaf_name_data.push_back(bmp_peer_msg_pending_count_max.get_name_leafdata());
    if (bmp_per_peer_msg_count.is_set || is_set(bmp_per_peer_msg_count.operation)) leaf_name_data.push_back(bmp_per_peer_msg_count.get_name_leafdata());
    if (bmp_per_peer_msg_route_mon_count.is_set || is_set(bmp_per_peer_msg_route_mon_count.operation)) leaf_name_data.push_back(bmp_per_peer_msg_route_mon_count.get_name_leafdata());
    if (bmp_pfx_wdraw_discarded.is_set || is_set(bmp_pfx_wdraw_discarded.operation)) leaf_name_data.push_back(bmp_pfx_wdraw_discarded.get_name_leafdata());
    if (bmp_server_host_name.is_set || is_set(bmp_server_host_name.operation)) leaf_name_data.push_back(bmp_server_host_name.get_name_leafdata());
    if (bmp_server_id.is_set || is_set(bmp_server_id.operation)) leaf_name_data.push_back(bmp_server_id.get_name_leafdata());
    if (bmp_server_is_flapping.is_set || is_set(bmp_server_is_flapping.operation)) leaf_name_data.push_back(bmp_server_is_flapping.get_name_leafdata());
    if (bmp_server_nbr_count.is_set || is_set(bmp_server_nbr_count.operation)) leaf_name_data.push_back(bmp_server_nbr_count.get_name_leafdata());
    if (bmp_server_port.is_set || is_set(bmp_server_port.operation)) leaf_name_data.push_back(bmp_server_port.get_name_leafdata());
    if (bmp_server_state.is_set || is_set(bmp_server_state.operation)) leaf_name_data.push_back(bmp_server_state.get_name_leafdata());
    if (bmp_status_report_count.is_set || is_set(bmp_status_report_count.operation)) leaf_name_data.push_back(bmp_status_report_count.get_name_leafdata());
    if (bmp_termination_msg_count.is_set || is_set(bmp_termination_msg_count.operation)) leaf_name_data.push_back(bmp_termination_msg_count.get_name_leafdata());
    if (bmp_update_mode.is_set || is_set(bmp_update_mode.operation)) leaf_name_data.push_back(bmp_update_mode.get_name_leafdata());
    if (bmp_vrf_id.is_set || is_set(bmp_vrf_id.operation)) leaf_name_data.push_back(bmp_vrf_id.get_name_leafdata());
    if (bmp_vrf_name.is_set || is_set(bmp_vrf_name.operation)) leaf_name_data.push_back(bmp_vrf_name.get_name_leafdata());
    if (bmpq_last_all_write_pulse_sent_time.is_set || is_set(bmpq_last_all_write_pulse_sent_time.operation)) leaf_name_data.push_back(bmpq_last_all_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_write_pulse_cb_time.is_set || is_set(bmpq_last_write_pulse_cb_time.operation)) leaf_name_data.push_back(bmpq_last_write_pulse_cb_time.get_name_leafdata());
    if (bmpq_last_write_pulse_sent_time.is_set || is_set(bmpq_last_write_pulse_sent_time.operation)) leaf_name_data.push_back(bmpq_last_write_pulse_sent_time.get_name_leafdata());
    if (bmpr_mon_upd_messages.is_set || is_set(bmpr_mon_upd_messages.operation)) leaf_name_data.push_back(bmpr_mon_upd_messages.get_name_leafdata());
    if (bmpr_mon_update_gen_time.is_set || is_set(bmpr_mon_update_gen_time.operation)) leaf_name_data.push_back(bmpr_mon_update_gen_time.get_name_leafdata());
    if (bmpr_mon_wdraw_messages.is_set || is_set(bmpr_mon_wdraw_messages.operation)) leaf_name_data.push_back(bmpr_mon_wdraw_messages.get_name_leafdata());
    if (path_update_count.is_set || is_set(path_update_count.operation)) leaf_name_data.push_back(path_update_count.get_name_leafdata());
    if (path_update_drop.is_set || is_set(path_update_drop.operation)) leaf_name_data.push_back(path_update_drop.get_name_leafdata());
    if (path_withdraw_count.is_set || is_set(path_withdraw_count.operation)) leaf_name_data.push_back(path_withdraw_count.get_name_leafdata());
    if (path_withdraw_drop.is_set || is_set(path_withdraw_drop.operation)) leaf_name_data.push_back(path_withdraw_drop.get_name_leafdata());
    if (tcp_keep_alive_interval.is_set || is_set(tcp_keep_alive_interval.operation)) leaf_name_data.push_back(tcp_keep_alive_interval.get_name_leafdata());
    if (tcp_last_write_cb_time.is_set || is_set(tcp_last_write_cb_time.operation)) leaf_name_data.push_back(tcp_last_write_cb_time.get_name_leafdata());
    if (tcp_last_write_result.is_set || is_set(tcp_last_write_result.operation)) leaf_name_data.push_back(tcp_last_write_result.get_name_leafdata());
    if (tcp_last_write_time.is_set || is_set(tcp_last_write_time.operation)) leaf_name_data.push_back(tcp_last_write_time.get_name_leafdata());
    if (tcp_maximum_segment_size.is_set || is_set(tcp_maximum_segment_size.operation)) leaf_name_data.push_back(tcp_maximum_segment_size.get_name_leafdata());
    if (tcp_write_cb_pending.is_set || is_set(tcp_write_cb_pending.operation)) leaf_name_data.push_back(tcp_write_cb_pending.get_name_leafdata());
    if (tcp_write_time.is_set || is_set(tcp_write_time.operation)) leaf_name_data.push_back(tcp_write_time.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (update_source_interface_name.is_set || is_set(update_source_interface_name.operation)) leaf_name_data.push_back(update_source_interface_name.get_name_leafdata());
    if (update_source_vrf_id.is_set || is_set(update_source_vrf_id.operation)) leaf_name_data.push_back(update_source_vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-send-version")
    {
        for(auto const & c : bmp_send_version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion>();
        c->parent = this;
        bmp_send_version.push_back(std::move(c));
        children[segment_path] = bmp_send_version.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-server-last-discon-time")
    {
        if(bmp_server_last_discon_time != nullptr)
        {
            children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
        }
        else
        {
            bmp_server_last_discon_time = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>();
            bmp_server_last_discon_time->parent = this;
            children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
        }
        return children.at("bmp-server-last-discon-time");
    }

    if(child_yang_name == "bmp-server-state-age")
    {
        if(bmp_server_state_age != nullptr)
        {
            children["bmp-server-state-age"] = bmp_server_state_age;
        }
        else
        {
            bmp_server_state_age = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>();
            bmp_server_state_age->parent = this;
            children["bmp-server-state-age"] = bmp_server_state_age;
        }
        return children.at("bmp-server-state-age");
    }

    if(child_yang_name == "bmp-server-state-time-spec")
    {
        if(bmp_server_state_time_spec != nullptr)
        {
            children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
        }
        else
        {
            bmp_server_state_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>();
            bmp_server_state_time_spec->parent = this;
            children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
        }
        return children.at("bmp-server-state-time-spec");
    }

    if(child_yang_name == "update-source-address")
    {
        if(update_source_address != nullptr)
        {
            children["update-source-address"] = update_source_address;
        }
        else
        {
            update_source_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>();
            update_source_address->parent = this;
            children["update-source-address"] = update_source_address;
        }
        return children.at("update-source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_children()
{
    for (auto const & c : bmp_send_version)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bmp-server-last-discon-time") == children.end())
    {
        if(bmp_server_last_discon_time != nullptr)
        {
            children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
        }
    }

    if(children.find("bmp-server-state-age") == children.end())
    {
        if(bmp_server_state_age != nullptr)
        {
            children["bmp-server-state-age"] = bmp_server_state_age;
        }
    }

    if(children.find("bmp-server-state-time-spec") == children.end())
    {
        if(bmp_server_state_time_spec != nullptr)
        {
            children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
        }
    }

    if(children.find("update-source-address") == children.end())
    {
        if(update_source_address != nullptr)
        {
            children["update-source-address"] = update_source_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp = value;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count = value;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded = value;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count = value;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count = value;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts = value;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max = value;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count = value;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count = value;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded = value;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name = value;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id = value;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping = value;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count = value;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port = value;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state = value;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count = value;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count = value;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode = value;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id = value;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name = value;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time = value;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time = value;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time = value;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages = value;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time = value;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages = value;
    }
    if(value_path == "path-update-count")
    {
        path_update_count = value;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop = value;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count = value;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop = value;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval = value;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time = value;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result = value;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time = value;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size = value;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending = value;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name = value;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::BmpServerStateAge()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-state-age"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::~BmpServerStateAge()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-age";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerStateAge' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::BmpServerStateTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-state-time-spec"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::~BmpServerStateTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerStateTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::BmpServerLastDisconTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "bmp-server-last-discon-time"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::~BmpServerLastDisconTime()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-last-discon-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpServerLastDisconTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::UpdateSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "update-source-address"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::~UpdateSourceAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateSourceAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "update-source-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::BmpSendVersion()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-send-version"; yang_parent_name = "server-summary";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::~BmpSendVersion()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-send-version";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpSendVersion' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpSendVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbors()
{
    yang_name = "server-neighbors"; yang_parent_name = "bmp";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::~ServerNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::has_data() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::has_operation() const
{
    for (std::size_t index=0; index<server_neighbor.size(); index++)
    {
        if(server_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-neighbor")
    {
        for(auto const & c : server_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor>();
        c->parent = this;
        server_neighbor.push_back(std::move(c));
        children[segment_path] = server_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::get_children()
{
    for (auto const & c : server_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::ServerNeighbor()
    :
    server_id{YType::int32, "server-id"}
    	,
    monitored_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>())
{
    monitored_neighbors->parent = this;
    children["monitored-neighbors"] = monitored_neighbors;

    yang_name = "server-neighbor"; yang_parent_name = "server-neighbors";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::~ServerNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::has_data() const
{
    return server_id.is_set
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation)
	|| (monitored_neighbors !=  nullptr && monitored_neighbors->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-neighbor" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "monitored-neighbors")
    {
        if(monitored_neighbors != nullptr)
        {
            children["monitored-neighbors"] = monitored_neighbors;
        }
        else
        {
            monitored_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors>();
            monitored_neighbors->parent = this;
            children["monitored-neighbors"] = monitored_neighbors;
        }
        return children.at("monitored-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::get_children()
{
    if(children.find("monitored-neighbors") == children.end())
    {
        if(monitored_neighbors != nullptr)
        {
            children["monitored-neighbors"] = monitored_neighbors;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbors()
{
    yang_name = "monitored-neighbors"; yang_parent_name = "server-neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::~MonitoredNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_data() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::has_operation() const
{
    for (std::size_t index=0; index<monitored_neighbor.size(); index++)
    {
        if(monitored_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitoredNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "monitored-neighbor")
    {
        for(auto const & c : monitored_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor>();
        c->parent = this;
        monitored_neighbor.push_back(std::move(c));
        children[segment_path] = monitored_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::get_children()
{
    for (auto const & c : monitored_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::MonitoredNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    bmp_neighbor_msg_dropped{YType::uint32, "bmp-neighbor-msg-dropped"},
    bmp_neighbor_msg_pending{YType::uint32, "bmp-neighbor-msg-pending"},
    bmp_neighbor_path_update_drop{YType::uint32, "bmp-neighbor-path-update-drop"},
    bmp_neighbor_path_update_sent{YType::uint32, "bmp-neighbor-path-update-sent"},
    bmp_neighbor_path_withdraw_drop{YType::uint32, "bmp-neighbor-path-withdraw-drop"},
    bmp_neighbor_path_withdraw_sent{YType::uint32, "bmp-neighbor-path-withdraw-sent"},
    bmp_neighbor_peer_down_sent{YType::uint32, "bmp-neighbor-peer-down-sent"},
    bmp_neighbor_peer_up_sent{YType::uint32, "bmp-neighbor-peer-up-sent"},
    bmp_neighbor_route_monitor_sent{YType::uint32, "bmp-neighbor-route-monitor-sent"},
    bmp_neighbor_upd_msg_sent{YType::uint32, "bmp-neighbor-upd-msg-sent"},
    bmp_neighbor_wdraw_msg_sent{YType::uint32, "bmp-neighbor-wdraw-msg-sent"}
    	,
    bmp_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>())
{
    bmp_neighbor_address->parent = this;
    children["bmp-neighbor-address"] = bmp_neighbor_address;

    yang_name = "monitored-neighbor"; yang_parent_name = "monitored-neighbors";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::~MonitoredNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_data() const
{
    return neighbor_address.is_set
	|| bmp_neighbor_msg_dropped.is_set
	|| bmp_neighbor_msg_pending.is_set
	|| bmp_neighbor_path_update_drop.is_set
	|| bmp_neighbor_path_update_sent.is_set
	|| bmp_neighbor_path_withdraw_drop.is_set
	|| bmp_neighbor_path_withdraw_sent.is_set
	|| bmp_neighbor_peer_down_sent.is_set
	|| bmp_neighbor_peer_up_sent.is_set
	|| bmp_neighbor_route_monitor_sent.is_set
	|| bmp_neighbor_upd_msg_sent.is_set
	|| bmp_neighbor_wdraw_msg_sent.is_set
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(bmp_neighbor_msg_dropped.operation)
	|| is_set(bmp_neighbor_msg_pending.operation)
	|| is_set(bmp_neighbor_path_update_drop.operation)
	|| is_set(bmp_neighbor_path_update_sent.operation)
	|| is_set(bmp_neighbor_path_withdraw_drop.operation)
	|| is_set(bmp_neighbor_path_withdraw_sent.operation)
	|| is_set(bmp_neighbor_peer_down_sent.operation)
	|| is_set(bmp_neighbor_peer_up_sent.operation)
	|| is_set(bmp_neighbor_route_monitor_sent.operation)
	|| is_set(bmp_neighbor_upd_msg_sent.operation)
	|| is_set(bmp_neighbor_wdraw_msg_sent.operation)
	|| (bmp_neighbor_address !=  nullptr && bmp_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitored-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitoredNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (bmp_neighbor_msg_dropped.is_set || is_set(bmp_neighbor_msg_dropped.operation)) leaf_name_data.push_back(bmp_neighbor_msg_dropped.get_name_leafdata());
    if (bmp_neighbor_msg_pending.is_set || is_set(bmp_neighbor_msg_pending.operation)) leaf_name_data.push_back(bmp_neighbor_msg_pending.get_name_leafdata());
    if (bmp_neighbor_path_update_drop.is_set || is_set(bmp_neighbor_path_update_drop.operation)) leaf_name_data.push_back(bmp_neighbor_path_update_drop.get_name_leafdata());
    if (bmp_neighbor_path_update_sent.is_set || is_set(bmp_neighbor_path_update_sent.operation)) leaf_name_data.push_back(bmp_neighbor_path_update_sent.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_drop.is_set || is_set(bmp_neighbor_path_withdraw_drop.operation)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_drop.get_name_leafdata());
    if (bmp_neighbor_path_withdraw_sent.is_set || is_set(bmp_neighbor_path_withdraw_sent.operation)) leaf_name_data.push_back(bmp_neighbor_path_withdraw_sent.get_name_leafdata());
    if (bmp_neighbor_peer_down_sent.is_set || is_set(bmp_neighbor_peer_down_sent.operation)) leaf_name_data.push_back(bmp_neighbor_peer_down_sent.get_name_leafdata());
    if (bmp_neighbor_peer_up_sent.is_set || is_set(bmp_neighbor_peer_up_sent.operation)) leaf_name_data.push_back(bmp_neighbor_peer_up_sent.get_name_leafdata());
    if (bmp_neighbor_route_monitor_sent.is_set || is_set(bmp_neighbor_route_monitor_sent.operation)) leaf_name_data.push_back(bmp_neighbor_route_monitor_sent.get_name_leafdata());
    if (bmp_neighbor_upd_msg_sent.is_set || is_set(bmp_neighbor_upd_msg_sent.operation)) leaf_name_data.push_back(bmp_neighbor_upd_msg_sent.get_name_leafdata());
    if (bmp_neighbor_wdraw_msg_sent.is_set || is_set(bmp_neighbor_wdraw_msg_sent.operation)) leaf_name_data.push_back(bmp_neighbor_wdraw_msg_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-neighbor-address")
    {
        if(bmp_neighbor_address != nullptr)
        {
            children["bmp-neighbor-address"] = bmp_neighbor_address;
        }
        else
        {
            bmp_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress>();
            bmp_neighbor_address->parent = this;
            children["bmp-neighbor-address"] = bmp_neighbor_address;
        }
        return children.at("bmp-neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::get_children()
{
    if(children.find("bmp-neighbor-address") == children.end())
    {
        if(bmp_neighbor_address != nullptr)
        {
            children["bmp-neighbor-address"] = bmp_neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "bmp-neighbor-msg-dropped")
    {
        bmp_neighbor_msg_dropped = value;
    }
    if(value_path == "bmp-neighbor-msg-pending")
    {
        bmp_neighbor_msg_pending = value;
    }
    if(value_path == "bmp-neighbor-path-update-drop")
    {
        bmp_neighbor_path_update_drop = value;
    }
    if(value_path == "bmp-neighbor-path-update-sent")
    {
        bmp_neighbor_path_update_sent = value;
    }
    if(value_path == "bmp-neighbor-path-withdraw-drop")
    {
        bmp_neighbor_path_withdraw_drop = value;
    }
    if(value_path == "bmp-neighbor-path-withdraw-sent")
    {
        bmp_neighbor_path_withdraw_sent = value;
    }
    if(value_path == "bmp-neighbor-peer-down-sent")
    {
        bmp_neighbor_peer_down_sent = value;
    }
    if(value_path == "bmp-neighbor-peer-up-sent")
    {
        bmp_neighbor_peer_up_sent = value;
    }
    if(value_path == "bmp-neighbor-route-monitor-sent")
    {
        bmp_neighbor_route_monitor_sent = value;
    }
    if(value_path == "bmp-neighbor-upd-msg-sent")
    {
        bmp_neighbor_upd_msg_sent = value;
    }
    if(value_path == "bmp-neighbor-wdraw-msg-sent")
    {
        bmp_neighbor_wdraw_msg_sent = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::BmpNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "bmp-neighbor-address"; yang_parent_name = "monitored-neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::~BmpNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpNeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "bmp-neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::ProcessInfo()
    :
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_>())
{
    global->parent = this;
    children["global"] = global;

    performance_statistics->parent = this;
    children["performance-statistics"] = performance_statistics;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "process-info"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::~ProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::has_data() const
{
    return process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(process_instance.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_totals.operation)
	|| (global !=  nullptr && global->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_instance.is_set || is_set(process_instance.operation)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.operation)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
        else
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics>();
            performance_statistics->parent = this;
            children["performance-statistics"] = performance_statistics;
        }
        return children.at("performance-statistics");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("performance-statistics") == children.end())
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-instance")
    {
        process_instance = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::Global()
    :
    as_path_entries_memory{YType::uint32, "as-path-entries-memory"},
    as_path_entry_count{YType::uint32, "as-path-entry-count"},
    attr_set_entry_count{YType::uint32, "attr-set-entry-count"},
    attr_set_memory{YType::uint32, "attr-set-memory"},
    community_entry_count{YType::uint32, "community-entry-count"},
    community_memory{YType::uint32, "community-memory"},
    established_neighbors_count_total{YType::uint32, "established-neighbors-count-total"},
    extended_community_entry_count{YType::uint32, "extended-community-entry-count"},
    extended_community_memory{YType::uint32, "extended-community-memory"},
    lindex_entry_count{YType::uint32, "lindex-entry-count"},
    lindex_memory{YType::uint32, "lindex-memory"},
    local_as{YType::uint32, "local-as"},
    lsattr_entry_count{YType::uint32, "lsattr-entry-count"},
    lsattr_memory{YType::uint32, "lsattr-memory"},
    neighbors_count_total{YType::uint32, "neighbors-count-total"},
    nexthop_count{YType::uint32, "nexthop-count"},
    nexthop_memory{YType::uint32, "nexthop-memory"},
    path_attribute_memory{YType::uint32, "path-attribute-memory"},
    path_attributes_entry_count{YType::uint32, "path-attributes-entry-count"},
    pe_distinguisher_label_entry_count{YType::uint32, "pe-distinguisher-label-entry-count"},
    pe_distinguisher_label_memory{YType::uint32, "pe-distinguisher-label-memory"},
    ppmp_entry_count{YType::uint32, "ppmp-entry-count"},
    ppmp_memory{YType::uint32, "ppmp-memory"},
    process_instance_node{YType::str, "process-instance-node"},
    pta_entry_count{YType::uint32, "pta-entry-count"},
    pta_memory{YType::uint32, "pta-memory"},
    restart_count{YType::uint32, "restart-count"},
    ribrnh_entry_count{YType::uint32, "ribrnh-entry-count"},
    ribrnh_memory{YType::uint32, "ribrnh-memory"},
    route_reflector_memory{YType::uint32, "route-reflector-memory"},
    route_reflectors{YType::uint32, "route-reflectors"},
    sn_num_non_dflt_vrf_nbrs{YType::uint32, "sn-num-non-dflt-vrf-nbrs"},
    sn_num_non_dflt_vrf_nbrs_estab{YType::uint32, "sn-num-non-dflt-vrf-nbrs-estab"},
    total_vrf_count{YType::uint32, "total-vrf-count"},
    tunnel_encap_entry_count{YType::uint32, "tunnel-encap-entry-count"},
    tunnel_encap_memory{YType::uint32, "tunnel-encap-memory"}
{
    yang_name = "global"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_data())
            return true;
    }
    return as_path_entries_memory.is_set
	|| as_path_entry_count.is_set
	|| attr_set_entry_count.is_set
	|| attr_set_memory.is_set
	|| community_entry_count.is_set
	|| community_memory.is_set
	|| established_neighbors_count_total.is_set
	|| extended_community_entry_count.is_set
	|| extended_community_memory.is_set
	|| lindex_entry_count.is_set
	|| lindex_memory.is_set
	|| local_as.is_set
	|| lsattr_entry_count.is_set
	|| lsattr_memory.is_set
	|| neighbors_count_total.is_set
	|| nexthop_count.is_set
	|| nexthop_memory.is_set
	|| path_attribute_memory.is_set
	|| path_attributes_entry_count.is_set
	|| pe_distinguisher_label_entry_count.is_set
	|| pe_distinguisher_label_memory.is_set
	|| ppmp_entry_count.is_set
	|| ppmp_memory.is_set
	|| process_instance_node.is_set
	|| pta_entry_count.is_set
	|| pta_memory.is_set
	|| restart_count.is_set
	|| ribrnh_entry_count.is_set
	|| ribrnh_memory.is_set
	|| route_reflector_memory.is_set
	|| route_reflectors.is_set
	|| sn_num_non_dflt_vrf_nbrs.is_set
	|| sn_num_non_dflt_vrf_nbrs_estab.is_set
	|| total_vrf_count.is_set
	|| tunnel_encap_entry_count.is_set
	|| tunnel_encap_memory.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(as_path_entries_memory.operation)
	|| is_set(as_path_entry_count.operation)
	|| is_set(attr_set_entry_count.operation)
	|| is_set(attr_set_memory.operation)
	|| is_set(community_entry_count.operation)
	|| is_set(community_memory.operation)
	|| is_set(established_neighbors_count_total.operation)
	|| is_set(extended_community_entry_count.operation)
	|| is_set(extended_community_memory.operation)
	|| is_set(lindex_entry_count.operation)
	|| is_set(lindex_memory.operation)
	|| is_set(local_as.operation)
	|| is_set(lsattr_entry_count.operation)
	|| is_set(lsattr_memory.operation)
	|| is_set(neighbors_count_total.operation)
	|| is_set(nexthop_count.operation)
	|| is_set(nexthop_memory.operation)
	|| is_set(path_attribute_memory.operation)
	|| is_set(path_attributes_entry_count.operation)
	|| is_set(pe_distinguisher_label_entry_count.operation)
	|| is_set(pe_distinguisher_label_memory.operation)
	|| is_set(ppmp_entry_count.operation)
	|| is_set(ppmp_memory.operation)
	|| is_set(process_instance_node.operation)
	|| is_set(pta_entry_count.operation)
	|| is_set(pta_memory.operation)
	|| is_set(restart_count.operation)
	|| is_set(ribrnh_entry_count.operation)
	|| is_set(ribrnh_memory.operation)
	|| is_set(route_reflector_memory.operation)
	|| is_set(route_reflectors.operation)
	|| is_set(sn_num_non_dflt_vrf_nbrs.operation)
	|| is_set(sn_num_non_dflt_vrf_nbrs_estab.operation)
	|| is_set(total_vrf_count.operation)
	|| is_set(tunnel_encap_entry_count.operation)
	|| is_set(tunnel_encap_memory.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_entries_memory.is_set || is_set(as_path_entries_memory.operation)) leaf_name_data.push_back(as_path_entries_memory.get_name_leafdata());
    if (as_path_entry_count.is_set || is_set(as_path_entry_count.operation)) leaf_name_data.push_back(as_path_entry_count.get_name_leafdata());
    if (attr_set_entry_count.is_set || is_set(attr_set_entry_count.operation)) leaf_name_data.push_back(attr_set_entry_count.get_name_leafdata());
    if (attr_set_memory.is_set || is_set(attr_set_memory.operation)) leaf_name_data.push_back(attr_set_memory.get_name_leafdata());
    if (community_entry_count.is_set || is_set(community_entry_count.operation)) leaf_name_data.push_back(community_entry_count.get_name_leafdata());
    if (community_memory.is_set || is_set(community_memory.operation)) leaf_name_data.push_back(community_memory.get_name_leafdata());
    if (established_neighbors_count_total.is_set || is_set(established_neighbors_count_total.operation)) leaf_name_data.push_back(established_neighbors_count_total.get_name_leafdata());
    if (extended_community_entry_count.is_set || is_set(extended_community_entry_count.operation)) leaf_name_data.push_back(extended_community_entry_count.get_name_leafdata());
    if (extended_community_memory.is_set || is_set(extended_community_memory.operation)) leaf_name_data.push_back(extended_community_memory.get_name_leafdata());
    if (lindex_entry_count.is_set || is_set(lindex_entry_count.operation)) leaf_name_data.push_back(lindex_entry_count.get_name_leafdata());
    if (lindex_memory.is_set || is_set(lindex_memory.operation)) leaf_name_data.push_back(lindex_memory.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (lsattr_entry_count.is_set || is_set(lsattr_entry_count.operation)) leaf_name_data.push_back(lsattr_entry_count.get_name_leafdata());
    if (lsattr_memory.is_set || is_set(lsattr_memory.operation)) leaf_name_data.push_back(lsattr_memory.get_name_leafdata());
    if (neighbors_count_total.is_set || is_set(neighbors_count_total.operation)) leaf_name_data.push_back(neighbors_count_total.get_name_leafdata());
    if (nexthop_count.is_set || is_set(nexthop_count.operation)) leaf_name_data.push_back(nexthop_count.get_name_leafdata());
    if (nexthop_memory.is_set || is_set(nexthop_memory.operation)) leaf_name_data.push_back(nexthop_memory.get_name_leafdata());
    if (path_attribute_memory.is_set || is_set(path_attribute_memory.operation)) leaf_name_data.push_back(path_attribute_memory.get_name_leafdata());
    if (path_attributes_entry_count.is_set || is_set(path_attributes_entry_count.operation)) leaf_name_data.push_back(path_attributes_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_entry_count.is_set || is_set(pe_distinguisher_label_entry_count.operation)) leaf_name_data.push_back(pe_distinguisher_label_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_memory.is_set || is_set(pe_distinguisher_label_memory.operation)) leaf_name_data.push_back(pe_distinguisher_label_memory.get_name_leafdata());
    if (ppmp_entry_count.is_set || is_set(ppmp_entry_count.operation)) leaf_name_data.push_back(ppmp_entry_count.get_name_leafdata());
    if (ppmp_memory.is_set || is_set(ppmp_memory.operation)) leaf_name_data.push_back(ppmp_memory.get_name_leafdata());
    if (process_instance_node.is_set || is_set(process_instance_node.operation)) leaf_name_data.push_back(process_instance_node.get_name_leafdata());
    if (pta_entry_count.is_set || is_set(pta_entry_count.operation)) leaf_name_data.push_back(pta_entry_count.get_name_leafdata());
    if (pta_memory.is_set || is_set(pta_memory.operation)) leaf_name_data.push_back(pta_memory.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.operation)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (ribrnh_entry_count.is_set || is_set(ribrnh_entry_count.operation)) leaf_name_data.push_back(ribrnh_entry_count.get_name_leafdata());
    if (ribrnh_memory.is_set || is_set(ribrnh_memory.operation)) leaf_name_data.push_back(ribrnh_memory.get_name_leafdata());
    if (route_reflector_memory.is_set || is_set(route_reflector_memory.operation)) leaf_name_data.push_back(route_reflector_memory.get_name_leafdata());
    if (route_reflectors.is_set || is_set(route_reflectors.operation)) leaf_name_data.push_back(route_reflectors.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs.is_set || is_set(sn_num_non_dflt_vrf_nbrs.operation)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs_estab.is_set || is_set(sn_num_non_dflt_vrf_nbrs_estab.operation)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs_estab.get_name_leafdata());
    if (total_vrf_count.is_set || is_set(total_vrf_count.operation)) leaf_name_data.push_back(total_vrf_count.get_name_leafdata());
    if (tunnel_encap_entry_count.is_set || is_set(tunnel_encap_entry_count.operation)) leaf_name_data.push_back(tunnel_encap_entry_count.get_name_leafdata());
    if (tunnel_encap_memory.is_set || is_set(tunnel_encap_memory.operation)) leaf_name_data.push_back(tunnel_encap_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-pool-alloc-count")
    {
        for(auto const & c : bmp_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount>();
        c->parent = this;
        bmp_pool_alloc_count.push_back(std::move(c));
        children[segment_path] = bmp_pool_alloc_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-pool-free-count")
    {
        for(auto const & c : bmp_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount>();
        c->parent = this;
        bmp_pool_free_count.push_back(std::move(c));
        children[segment_path] = bmp_pool_free_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-pool-size")
    {
        for(auto const & c : bmp_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize>();
        c->parent = this;
        bmp_pool_size.push_back(std::move(c));
        children[segment_path] = bmp_pool_size.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "msg-log-pool-alloc-count")
    {
        for(auto const & c : msg_log_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount>();
        c->parent = this;
        msg_log_pool_alloc_count.push_back(std::move(c));
        children[segment_path] = msg_log_pool_alloc_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "msg-log-pool-free-count")
    {
        for(auto const & c : msg_log_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount>();
        c->parent = this;
        msg_log_pool_free_count.push_back(std::move(c));
        children[segment_path] = msg_log_pool_free_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "msg-log-pool-size")
    {
        for(auto const & c : msg_log_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize>();
        c->parent = this;
        msg_log_pool_size.push_back(std::move(c));
        children[segment_path] = msg_log_pool_size.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-alloc-count")
    {
        for(auto const & c : pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount>();
        c->parent = this;
        pool_alloc_count.push_back(std::move(c));
        children[segment_path] = pool_alloc_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-free-count")
    {
        for(auto const & c : pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount>();
        c->parent = this;
        pool_free_count.push_back(std::move(c));
        children[segment_path] = pool_free_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-size")
    {
        for(auto const & c : pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize>();
        c->parent = this;
        pool_size.push_back(std::move(c));
        children[segment_path] = pool_size.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::get_children()
{
    for (auto const & c : bmp_pool_alloc_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bmp_pool_free_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bmp_pool_size)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : msg_log_pool_alloc_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : msg_log_pool_free_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : msg_log_pool_size)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pool_alloc_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pool_free_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pool_size)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory = value;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count = value;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count = value;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory = value;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count = value;
    }
    if(value_path == "community-memory")
    {
        community_memory = value;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total = value;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count = value;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory = value;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count = value;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count = value;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory = value;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total = value;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count = value;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory = value;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory = value;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count = value;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count = value;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory = value;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count = value;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory = value;
    }
    if(value_path == "process-instance-node")
    {
        process_instance_node = value;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count = value;
    }
    if(value_path == "pta-memory")
    {
        pta_memory = value;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count = value;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory = value;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory = value;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors = value;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs = value;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab = value;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count = value;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count = value;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::PoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::~PoolSize()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-size";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::PoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::~PoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-alloc-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::PoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::~PoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-free-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::PoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::MsgLogPoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::~MsgLogPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-size";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::MsgLogPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::~MsgLogPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-alloc-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::MsgLogPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "msg-log-pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::~MsgLogPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-free-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogPoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::BmpPoolSize()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-size"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::~BmpPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-size";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolSize' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::BmpPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-alloc-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::~BmpPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-alloc-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolAllocCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolAllocCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::BmpPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "bmp-pool-free-count"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::~BmpPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-free-count";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpPoolFreeCount' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Global::BmpPoolFreeCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::Vrf_()
    :
    established_neighbors_count{YType::uint32, "established-neighbors-count"},
    neighbors_count{YType::uint32, "neighbors-count"},
    network_count{YType::uint32, "network-count"},
    notifications_received{YType::uint32, "notifications-received"},
    notifications_sent{YType::uint32, "notifications-sent"},
    path_count{YType::uint32, "path-count"},
    update_messages_received{YType::uint32, "update-messages-received"},
    update_messages_sent{YType::uint32, "update-messages-sent"}
{
    yang_name = "vrf"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::has_data() const
{
    return established_neighbors_count.is_set
	|| neighbors_count.is_set
	|| network_count.is_set
	|| notifications_received.is_set
	|| notifications_sent.is_set
	|| path_count.is_set
	|| update_messages_received.is_set
	|| update_messages_sent.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(established_neighbors_count.operation)
	|| is_set(neighbors_count.operation)
	|| is_set(network_count.operation)
	|| is_set(notifications_received.operation)
	|| is_set(notifications_sent.operation)
	|| is_set(path_count.operation)
	|| is_set(update_messages_received.operation)
	|| is_set(update_messages_sent.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (established_neighbors_count.is_set || is_set(established_neighbors_count.operation)) leaf_name_data.push_back(established_neighbors_count.get_name_leafdata());
    if (neighbors_count.is_set || is_set(neighbors_count.operation)) leaf_name_data.push_back(neighbors_count.get_name_leafdata());
    if (network_count.is_set || is_set(network_count.operation)) leaf_name_data.push_back(network_count.get_name_leafdata());
    if (notifications_received.is_set || is_set(notifications_received.operation)) leaf_name_data.push_back(notifications_received.get_name_leafdata());
    if (notifications_sent.is_set || is_set(notifications_sent.operation)) leaf_name_data.push_back(notifications_sent.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_messages_received.is_set || is_set(update_messages_received.operation)) leaf_name_data.push_back(update_messages_received.get_name_leafdata());
    if (update_messages_sent.is_set || is_set(update_messages_sent.operation)) leaf_name_data.push_back(update_messages_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count = value;
    }
    if(value_path == "neighbors-count")
    {
        neighbors_count = value;
    }
    if(value_path == "network-count")
    {
        network_count = value;
    }
    if(value_path == "notifications-received")
    {
        notifications_received = value;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received = value;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_>())
{
    global->parent = this;
    children["global"] = global;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "performance-statistics"; yang_parent_name = "process-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Global()
    :
    active_nsr_state{YType::uint32, "active-nsr-state"},
    active_nsrtcp_phase_two_enter_time{YType::uint32, "active-nsrtcp-phase-two-enter-time"},
    bgp_te_infra_tunnel_type{YType::enumeration, "bgp-te-infra-tunnel-type"},
    brib_api_input_bytes{YType::uint32, "brib-api-input-bytes"},
    brib_api_input_messages{YType::uint32, "brib-api-input-messages"},
    brib_api_input_prefixes_received{YType::uint32, "brib-api-input-prefixes-received"},
    brib_api_input_processing_time{YType::uint32, "brib-api-input-processing-time"},
    brib_api_input_withdrawn_prefixes{YType::uint32, "brib-api-input-withdrawn-prefixes"},
    brib_api_output_bytes_generated{YType::uint32, "brib-api-output-bytes-generated"},
    brib_api_output_bytes_sent{YType::uint32, "brib-api-output-bytes-sent"},
    brib_api_output_calls{YType::uint32, "brib-api-output-calls"},
    brib_api_output_generation_time{YType::uint32, "brib-api-output-generation-time"},
    brib_api_output_messages_sent{YType::uint32, "brib-api-output-messages-sent"},
    brib_api_output_prefixes_advertised{YType::uint32, "brib-api-output-prefixes-advertised"},
    brib_api_output_prefixes_withdrawn{YType::uint32, "brib-api-output-prefixes-withdrawn"},
    brib_api_output_sending_time{YType::uint32, "brib-api-output-sending-time"},
    configuration_items_processed{YType::uint32, "configuration-items-processed"},
    configuration_processing_time{YType::uint32, "configuration-processing-time"},
    current_clock_time{YType::uint64, "current-clock-time"},
    edm_processing_time{YType::uint32, "edm-processing-time"},
    edm_requests_count{YType::uint32, "edm-requests-count"},
    in_event_attach_calls{YType::uint32, "in-event-attach-calls"},
    in_out_event_attach_calls{YType::uint32, "in-out-event-attach-calls"},
    initial_sync_sessions_added{YType::boolean, "initial-sync-sessions-added"},
    instance_node_role{YType::boolean, "instance-node-role"},
    io_handler_tm{YType::uint64, "io-handler-tm"},
    io_timer_id{YType::uint32, "io-timer-id"},
    io_tree_timer_expiry{YType::uint64, "io-tree-timer-expiry"},
    io_tree_timer_left{YType::uint64, "io-tree-timer-left"},
    issu_milestone_packed{YType::boolean, "issu-milestone-packed"},
    nsr_last_reset_reason{YType::uint8, "nsr-last-reset-reason"},
    out_event_attach_calls{YType::uint32, "out-event-attach-calls"},
    proc_scoped_sync_state{YType::enumeration, "proc-scoped-sync-state"},
    qad_ac_ks_failure{YType::uint32, "qad-ac-ks-failure"},
    qad_ac_ks_received{YType::uint32, "qad-ac-ks-received"},
    qad_init_drops{YType::uint32, "qad-init-drops"},
    qad_messages_received{YType::uint32, "qad-messages-received"},
    qad_messages_sent{YType::uint32, "qad-messages-sent"},
    qad_processed{YType::uint32, "qad-processed"},
    qad_recv_drops{YType::uint32, "qad-recv-drops"},
    qad_resumes{YType::uint32, "qad-resumes"},
    qad_send_drops{YType::uint32, "qad-send-drops"},
    qad_send_failure{YType::uint32, "qad-send-failure"},
    qad_suspends{YType::uint32, "qad-suspends"},
    qad_timeout_received{YType::uint32, "qad-timeout-received"},
    qad_timeout_recvd{YType::uint32, "qad-timeout-recvd"},
    qadack_sent{YType::uint32, "qadack-sent"},
    qadoos_drops{YType::uint32, "qadoos-drops"},
    redcon_nsr_ready{YType::boolean, "redcon-nsr-ready"},
    redcon_state_time{YType::uint32, "redcon-state-time"},
    sec_active_nsr_state{YType::uint32, "sec-active-nsr-state"},
    sec_active_nsrtcp_phase_two_enter_time{YType::uint32, "sec-active-nsrtcp-phase-two-enter-time"},
    tep2p_auto_tunnel_enabled{YType::boolean, "tep2p-auto-tunnel-enabled"},
    total_neighbors_with_pending_postits{YType::uint32, "total-neighbors-with-pending-postits"},
    total_outstanding_postits{YType::uint32, "total-outstanding-postits"},
    updgen_handler_tm{YType::uint64, "updgen-handler-tm"},
    updgen_timer_id{YType::uint32, "updgen-timer-id"},
    updgen_tree_timer_expiry{YType::uint64, "updgen-tree-timer-expiry"},
    updgen_tree_timer_left{YType::uint64, "updgen-tree-timer-left"}
    	,
    ds_npl(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>())
	,ipv4rib_server(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>())
	,ipv6rib_server(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>())
	,lsd_connection(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>())
	,te_connection(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>())
{
    ds_npl->parent = this;
    children["ds-npl"] = ds_npl;

    ipv4rib_server->parent = this;
    children["ipv4rib-server"] = ipv4rib_server;

    ipv6rib_server->parent = this;
    children["ipv6rib-server"] = ipv6rib_server;

    lsd_connection->parent = this;
    children["lsd-connection"] = lsd_connection;

    te_connection->parent = this;
    children["te-connection"] = te_connection;

    yang_name = "global"; yang_parent_name = "performance-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::has_data() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    return active_nsr_state.is_set
	|| active_nsrtcp_phase_two_enter_time.is_set
	|| bgp_te_infra_tunnel_type.is_set
	|| brib_api_input_bytes.is_set
	|| brib_api_input_messages.is_set
	|| brib_api_input_prefixes_received.is_set
	|| brib_api_input_processing_time.is_set
	|| brib_api_input_withdrawn_prefixes.is_set
	|| brib_api_output_bytes_generated.is_set
	|| brib_api_output_bytes_sent.is_set
	|| brib_api_output_calls.is_set
	|| brib_api_output_generation_time.is_set
	|| brib_api_output_messages_sent.is_set
	|| brib_api_output_prefixes_advertised.is_set
	|| brib_api_output_prefixes_withdrawn.is_set
	|| brib_api_output_sending_time.is_set
	|| configuration_items_processed.is_set
	|| configuration_processing_time.is_set
	|| current_clock_time.is_set
	|| edm_processing_time.is_set
	|| edm_requests_count.is_set
	|| in_event_attach_calls.is_set
	|| in_out_event_attach_calls.is_set
	|| initial_sync_sessions_added.is_set
	|| instance_node_role.is_set
	|| io_handler_tm.is_set
	|| io_timer_id.is_set
	|| io_tree_timer_expiry.is_set
	|| io_tree_timer_left.is_set
	|| issu_milestone_packed.is_set
	|| nsr_last_reset_reason.is_set
	|| out_event_attach_calls.is_set
	|| proc_scoped_sync_state.is_set
	|| qad_ac_ks_failure.is_set
	|| qad_ac_ks_received.is_set
	|| qad_init_drops.is_set
	|| qad_messages_received.is_set
	|| qad_messages_sent.is_set
	|| qad_processed.is_set
	|| qad_recv_drops.is_set
	|| qad_resumes.is_set
	|| qad_send_drops.is_set
	|| qad_send_failure.is_set
	|| qad_suspends.is_set
	|| qad_timeout_received.is_set
	|| qad_timeout_recvd.is_set
	|| qadack_sent.is_set
	|| qadoos_drops.is_set
	|| redcon_nsr_ready.is_set
	|| redcon_state_time.is_set
	|| sec_active_nsr_state.is_set
	|| sec_active_nsrtcp_phase_two_enter_time.is_set
	|| tep2p_auto_tunnel_enabled.is_set
	|| total_neighbors_with_pending_postits.is_set
	|| total_outstanding_postits.is_set
	|| updgen_handler_tm.is_set
	|| updgen_timer_id.is_set
	|| updgen_tree_timer_expiry.is_set
	|| updgen_tree_timer_left.is_set
	|| (ds_npl !=  nullptr && ds_npl->has_data())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_data())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_data())
	|| (lsd_connection !=  nullptr && lsd_connection->has_data())
	|| (te_connection !=  nullptr && te_connection->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_nsr_state.operation)
	|| is_set(active_nsrtcp_phase_two_enter_time.operation)
	|| is_set(bgp_te_infra_tunnel_type.operation)
	|| is_set(brib_api_input_bytes.operation)
	|| is_set(brib_api_input_messages.operation)
	|| is_set(brib_api_input_prefixes_received.operation)
	|| is_set(brib_api_input_processing_time.operation)
	|| is_set(brib_api_input_withdrawn_prefixes.operation)
	|| is_set(brib_api_output_bytes_generated.operation)
	|| is_set(brib_api_output_bytes_sent.operation)
	|| is_set(brib_api_output_calls.operation)
	|| is_set(brib_api_output_generation_time.operation)
	|| is_set(brib_api_output_messages_sent.operation)
	|| is_set(brib_api_output_prefixes_advertised.operation)
	|| is_set(brib_api_output_prefixes_withdrawn.operation)
	|| is_set(brib_api_output_sending_time.operation)
	|| is_set(configuration_items_processed.operation)
	|| is_set(configuration_processing_time.operation)
	|| is_set(current_clock_time.operation)
	|| is_set(edm_processing_time.operation)
	|| is_set(edm_requests_count.operation)
	|| is_set(in_event_attach_calls.operation)
	|| is_set(in_out_event_attach_calls.operation)
	|| is_set(initial_sync_sessions_added.operation)
	|| is_set(instance_node_role.operation)
	|| is_set(io_handler_tm.operation)
	|| is_set(io_timer_id.operation)
	|| is_set(io_tree_timer_expiry.operation)
	|| is_set(io_tree_timer_left.operation)
	|| is_set(issu_milestone_packed.operation)
	|| is_set(nsr_last_reset_reason.operation)
	|| is_set(out_event_attach_calls.operation)
	|| is_set(proc_scoped_sync_state.operation)
	|| is_set(qad_ac_ks_failure.operation)
	|| is_set(qad_ac_ks_received.operation)
	|| is_set(qad_init_drops.operation)
	|| is_set(qad_messages_received.operation)
	|| is_set(qad_messages_sent.operation)
	|| is_set(qad_processed.operation)
	|| is_set(qad_recv_drops.operation)
	|| is_set(qad_resumes.operation)
	|| is_set(qad_send_drops.operation)
	|| is_set(qad_send_failure.operation)
	|| is_set(qad_suspends.operation)
	|| is_set(qad_timeout_received.operation)
	|| is_set(qad_timeout_recvd.operation)
	|| is_set(qadack_sent.operation)
	|| is_set(qadoos_drops.operation)
	|| is_set(redcon_nsr_ready.operation)
	|| is_set(redcon_state_time.operation)
	|| is_set(sec_active_nsr_state.operation)
	|| is_set(sec_active_nsrtcp_phase_two_enter_time.operation)
	|| is_set(tep2p_auto_tunnel_enabled.operation)
	|| is_set(total_neighbors_with_pending_postits.operation)
	|| is_set(total_outstanding_postits.operation)
	|| is_set(updgen_handler_tm.operation)
	|| is_set(updgen_timer_id.operation)
	|| is_set(updgen_tree_timer_expiry.operation)
	|| is_set(updgen_tree_timer_left.operation)
	|| (ds_npl !=  nullptr && ds_npl->has_operation())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_operation())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_operation())
	|| (lsd_connection !=  nullptr && lsd_connection->has_operation())
	|| (te_connection !=  nullptr && te_connection->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_nsr_state.is_set || is_set(active_nsr_state.operation)) leaf_name_data.push_back(active_nsr_state.get_name_leafdata());
    if (active_nsrtcp_phase_two_enter_time.is_set || is_set(active_nsrtcp_phase_two_enter_time.operation)) leaf_name_data.push_back(active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (bgp_te_infra_tunnel_type.is_set || is_set(bgp_te_infra_tunnel_type.operation)) leaf_name_data.push_back(bgp_te_infra_tunnel_type.get_name_leafdata());
    if (brib_api_input_bytes.is_set || is_set(brib_api_input_bytes.operation)) leaf_name_data.push_back(brib_api_input_bytes.get_name_leafdata());
    if (brib_api_input_messages.is_set || is_set(brib_api_input_messages.operation)) leaf_name_data.push_back(brib_api_input_messages.get_name_leafdata());
    if (brib_api_input_prefixes_received.is_set || is_set(brib_api_input_prefixes_received.operation)) leaf_name_data.push_back(brib_api_input_prefixes_received.get_name_leafdata());
    if (brib_api_input_processing_time.is_set || is_set(brib_api_input_processing_time.operation)) leaf_name_data.push_back(brib_api_input_processing_time.get_name_leafdata());
    if (brib_api_input_withdrawn_prefixes.is_set || is_set(brib_api_input_withdrawn_prefixes.operation)) leaf_name_data.push_back(brib_api_input_withdrawn_prefixes.get_name_leafdata());
    if (brib_api_output_bytes_generated.is_set || is_set(brib_api_output_bytes_generated.operation)) leaf_name_data.push_back(brib_api_output_bytes_generated.get_name_leafdata());
    if (brib_api_output_bytes_sent.is_set || is_set(brib_api_output_bytes_sent.operation)) leaf_name_data.push_back(brib_api_output_bytes_sent.get_name_leafdata());
    if (brib_api_output_calls.is_set || is_set(brib_api_output_calls.operation)) leaf_name_data.push_back(brib_api_output_calls.get_name_leafdata());
    if (brib_api_output_generation_time.is_set || is_set(brib_api_output_generation_time.operation)) leaf_name_data.push_back(brib_api_output_generation_time.get_name_leafdata());
    if (brib_api_output_messages_sent.is_set || is_set(brib_api_output_messages_sent.operation)) leaf_name_data.push_back(brib_api_output_messages_sent.get_name_leafdata());
    if (brib_api_output_prefixes_advertised.is_set || is_set(brib_api_output_prefixes_advertised.operation)) leaf_name_data.push_back(brib_api_output_prefixes_advertised.get_name_leafdata());
    if (brib_api_output_prefixes_withdrawn.is_set || is_set(brib_api_output_prefixes_withdrawn.operation)) leaf_name_data.push_back(brib_api_output_prefixes_withdrawn.get_name_leafdata());
    if (brib_api_output_sending_time.is_set || is_set(brib_api_output_sending_time.operation)) leaf_name_data.push_back(brib_api_output_sending_time.get_name_leafdata());
    if (configuration_items_processed.is_set || is_set(configuration_items_processed.operation)) leaf_name_data.push_back(configuration_items_processed.get_name_leafdata());
    if (configuration_processing_time.is_set || is_set(configuration_processing_time.operation)) leaf_name_data.push_back(configuration_processing_time.get_name_leafdata());
    if (current_clock_time.is_set || is_set(current_clock_time.operation)) leaf_name_data.push_back(current_clock_time.get_name_leafdata());
    if (edm_processing_time.is_set || is_set(edm_processing_time.operation)) leaf_name_data.push_back(edm_processing_time.get_name_leafdata());
    if (edm_requests_count.is_set || is_set(edm_requests_count.operation)) leaf_name_data.push_back(edm_requests_count.get_name_leafdata());
    if (in_event_attach_calls.is_set || is_set(in_event_attach_calls.operation)) leaf_name_data.push_back(in_event_attach_calls.get_name_leafdata());
    if (in_out_event_attach_calls.is_set || is_set(in_out_event_attach_calls.operation)) leaf_name_data.push_back(in_out_event_attach_calls.get_name_leafdata());
    if (initial_sync_sessions_added.is_set || is_set(initial_sync_sessions_added.operation)) leaf_name_data.push_back(initial_sync_sessions_added.get_name_leafdata());
    if (instance_node_role.is_set || is_set(instance_node_role.operation)) leaf_name_data.push_back(instance_node_role.get_name_leafdata());
    if (io_handler_tm.is_set || is_set(io_handler_tm.operation)) leaf_name_data.push_back(io_handler_tm.get_name_leafdata());
    if (io_timer_id.is_set || is_set(io_timer_id.operation)) leaf_name_data.push_back(io_timer_id.get_name_leafdata());
    if (io_tree_timer_expiry.is_set || is_set(io_tree_timer_expiry.operation)) leaf_name_data.push_back(io_tree_timer_expiry.get_name_leafdata());
    if (io_tree_timer_left.is_set || is_set(io_tree_timer_left.operation)) leaf_name_data.push_back(io_tree_timer_left.get_name_leafdata());
    if (issu_milestone_packed.is_set || is_set(issu_milestone_packed.operation)) leaf_name_data.push_back(issu_milestone_packed.get_name_leafdata());
    if (nsr_last_reset_reason.is_set || is_set(nsr_last_reset_reason.operation)) leaf_name_data.push_back(nsr_last_reset_reason.get_name_leafdata());
    if (out_event_attach_calls.is_set || is_set(out_event_attach_calls.operation)) leaf_name_data.push_back(out_event_attach_calls.get_name_leafdata());
    if (proc_scoped_sync_state.is_set || is_set(proc_scoped_sync_state.operation)) leaf_name_data.push_back(proc_scoped_sync_state.get_name_leafdata());
    if (qad_ac_ks_failure.is_set || is_set(qad_ac_ks_failure.operation)) leaf_name_data.push_back(qad_ac_ks_failure.get_name_leafdata());
    if (qad_ac_ks_received.is_set || is_set(qad_ac_ks_received.operation)) leaf_name_data.push_back(qad_ac_ks_received.get_name_leafdata());
    if (qad_init_drops.is_set || is_set(qad_init_drops.operation)) leaf_name_data.push_back(qad_init_drops.get_name_leafdata());
    if (qad_messages_received.is_set || is_set(qad_messages_received.operation)) leaf_name_data.push_back(qad_messages_received.get_name_leafdata());
    if (qad_messages_sent.is_set || is_set(qad_messages_sent.operation)) leaf_name_data.push_back(qad_messages_sent.get_name_leafdata());
    if (qad_processed.is_set || is_set(qad_processed.operation)) leaf_name_data.push_back(qad_processed.get_name_leafdata());
    if (qad_recv_drops.is_set || is_set(qad_recv_drops.operation)) leaf_name_data.push_back(qad_recv_drops.get_name_leafdata());
    if (qad_resumes.is_set || is_set(qad_resumes.operation)) leaf_name_data.push_back(qad_resumes.get_name_leafdata());
    if (qad_send_drops.is_set || is_set(qad_send_drops.operation)) leaf_name_data.push_back(qad_send_drops.get_name_leafdata());
    if (qad_send_failure.is_set || is_set(qad_send_failure.operation)) leaf_name_data.push_back(qad_send_failure.get_name_leafdata());
    if (qad_suspends.is_set || is_set(qad_suspends.operation)) leaf_name_data.push_back(qad_suspends.get_name_leafdata());
    if (qad_timeout_received.is_set || is_set(qad_timeout_received.operation)) leaf_name_data.push_back(qad_timeout_received.get_name_leafdata());
    if (qad_timeout_recvd.is_set || is_set(qad_timeout_recvd.operation)) leaf_name_data.push_back(qad_timeout_recvd.get_name_leafdata());
    if (qadack_sent.is_set || is_set(qadack_sent.operation)) leaf_name_data.push_back(qadack_sent.get_name_leafdata());
    if (qadoos_drops.is_set || is_set(qadoos_drops.operation)) leaf_name_data.push_back(qadoos_drops.get_name_leafdata());
    if (redcon_nsr_ready.is_set || is_set(redcon_nsr_ready.operation)) leaf_name_data.push_back(redcon_nsr_ready.get_name_leafdata());
    if (redcon_state_time.is_set || is_set(redcon_state_time.operation)) leaf_name_data.push_back(redcon_state_time.get_name_leafdata());
    if (sec_active_nsr_state.is_set || is_set(sec_active_nsr_state.operation)) leaf_name_data.push_back(sec_active_nsr_state.get_name_leafdata());
    if (sec_active_nsrtcp_phase_two_enter_time.is_set || is_set(sec_active_nsrtcp_phase_two_enter_time.operation)) leaf_name_data.push_back(sec_active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (tep2p_auto_tunnel_enabled.is_set || is_set(tep2p_auto_tunnel_enabled.operation)) leaf_name_data.push_back(tep2p_auto_tunnel_enabled.get_name_leafdata());
    if (total_neighbors_with_pending_postits.is_set || is_set(total_neighbors_with_pending_postits.operation)) leaf_name_data.push_back(total_neighbors_with_pending_postits.get_name_leafdata());
    if (total_outstanding_postits.is_set || is_set(total_outstanding_postits.operation)) leaf_name_data.push_back(total_outstanding_postits.get_name_leafdata());
    if (updgen_handler_tm.is_set || is_set(updgen_handler_tm.operation)) leaf_name_data.push_back(updgen_handler_tm.get_name_leafdata());
    if (updgen_timer_id.is_set || is_set(updgen_timer_id.operation)) leaf_name_data.push_back(updgen_timer_id.get_name_leafdata());
    if (updgen_tree_timer_expiry.is_set || is_set(updgen_tree_timer_expiry.operation)) leaf_name_data.push_back(updgen_tree_timer_expiry.get_name_leafdata());
    if (updgen_tree_timer_left.is_set || is_set(updgen_tree_timer_left.operation)) leaf_name_data.push_back(updgen_tree_timer_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-nsr-mode-enter-time")
    {
        for(auto const & c : active_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime>();
        c->parent = this;
        active_nsr_mode_enter_time.push_back(std::move(c));
        children[segment_path] = active_nsr_mode_enter_time.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "active-nsrfo-time")
    {
        for(auto const & c : active_nsrfo_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime>();
        c->parent = this;
        active_nsrfo_time.push_back(std::move(c));
        children[segment_path] = active_nsrfo_time.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ds-npl")
    {
        if(ds_npl != nullptr)
        {
            children["ds-npl"] = ds_npl;
        }
        else
        {
            ds_npl = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>();
            ds_npl->parent = this;
            children["ds-npl"] = ds_npl;
        }
        return children.at("ds-npl");
    }

    if(child_yang_name == "ipv4rib-server")
    {
        if(ipv4rib_server != nullptr)
        {
            children["ipv4rib-server"] = ipv4rib_server;
        }
        else
        {
            ipv4rib_server = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>();
            ipv4rib_server->parent = this;
            children["ipv4rib-server"] = ipv4rib_server;
        }
        return children.at("ipv4rib-server");
    }

    if(child_yang_name == "ipv6rib-server")
    {
        if(ipv6rib_server != nullptr)
        {
            children["ipv6rib-server"] = ipv6rib_server;
        }
        else
        {
            ipv6rib_server = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>();
            ipv6rib_server->parent = this;
            children["ipv6rib-server"] = ipv6rib_server;
        }
        return children.at("ipv6rib-server");
    }

    if(child_yang_name == "issu-milestone")
    {
        for(auto const & c : issu_milestone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone>();
        c->parent = this;
        issu_milestone.push_back(std::move(c));
        children[segment_path] = issu_milestone.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsd-connection")
    {
        if(lsd_connection != nullptr)
        {
            children["lsd-connection"] = lsd_connection;
        }
        else
        {
            lsd_connection = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>();
            lsd_connection->parent = this;
            children["lsd-connection"] = lsd_connection;
        }
        return children.at("lsd-connection");
    }

    if(child_yang_name == "postit-count-info")
    {
        for(auto const & c : postit_count_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo>();
        c->parent = this;
        postit_count_info.push_back(std::move(c));
        children[segment_path] = postit_count_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-nsr-mode-enter-time")
    {
        for(auto const & c : standby_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime>();
        c->parent = this;
        standby_nsr_mode_enter_time.push_back(std::move(c));
        children[segment_path] = standby_nsr_mode_enter_time.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "te-connection")
    {
        if(te_connection != nullptr)
        {
            children["te-connection"] = te_connection;
        }
        else
        {
            te_connection = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>();
            te_connection->parent = this;
            children["te-connection"] = te_connection;
        }
        return children.at("te-connection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::get_children()
{
    for (auto const & c : active_nsr_mode_enter_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : active_nsrfo_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("ds-npl") == children.end())
    {
        if(ds_npl != nullptr)
        {
            children["ds-npl"] = ds_npl;
        }
    }

    if(children.find("ipv4rib-server") == children.end())
    {
        if(ipv4rib_server != nullptr)
        {
            children["ipv4rib-server"] = ipv4rib_server;
        }
    }

    if(children.find("ipv6rib-server") == children.end())
    {
        if(ipv6rib_server != nullptr)
        {
            children["ipv6rib-server"] = ipv6rib_server;
        }
    }

    for (auto const & c : issu_milestone)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsd-connection") == children.end())
    {
        if(lsd_connection != nullptr)
        {
            children["lsd-connection"] = lsd_connection;
        }
    }

    for (auto const & c : postit_count_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : standby_nsr_mode_enter_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("te-connection") == children.end())
    {
        if(te_connection != nullptr)
        {
            children["te-connection"] = te_connection;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-nsr-state")
    {
        active_nsr_state = value;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time = value;
    }
    if(value_path == "bgp-te-infra-tunnel-type")
    {
        bgp_te_infra_tunnel_type = value;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes = value;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages = value;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received = value;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time = value;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes = value;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated = value;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent = value;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls = value;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time = value;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent = value;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised = value;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn = value;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time = value;
    }
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed = value;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time = value;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time = value;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time = value;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count = value;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls = value;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls = value;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added = value;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role = value;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm = value;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id = value;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry = value;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left = value;
    }
    if(value_path == "issu-milestone-packed")
    {
        issu_milestone_packed = value;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason = value;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls = value;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state = value;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure = value;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received = value;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops = value;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received = value;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent = value;
    }
    if(value_path == "qad-processed")
    {
        qad_processed = value;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops = value;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes = value;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops = value;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure = value;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends = value;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received = value;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd = value;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent = value;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops = value;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready = value;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time = value;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state = value;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time = value;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled = value;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits = value;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits = value;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm = value;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id = value;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry = value;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::Ipv4RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;
    children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;

    first_rib_connection_up_timestamp->parent = this;
    children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;

    last_rib_connection_down_timestamp->parent = this;
    children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;

    last_rib_connection_up_timestamp->parent = this;
    children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;

    yang_name = "ipv4rib-server"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::~Ipv4RibServer()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| last_rib_connection_down_age.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| rib_connection_up_count.is_set
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_rib_connection_up.operation)
	|| is_set(last_rib_connection_down_age.operation)
	|| is_set(last_rib_connection_up_age.operation)
	|| is_set(rib_connection_down_count.operation)
	|| is_set(rib_connection_up_count.operation)
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rib-server";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4RibServer' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.operation)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.operation)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.operation)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.operation)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.operation)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp != nullptr)
        {
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
        else
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>();
            first_rib_connection_down_timestamp->parent = this;
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
        return children.at("first-rib-connection-down-timestamp");
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp != nullptr)
        {
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
        else
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>();
            first_rib_connection_up_timestamp->parent = this;
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
        return children.at("first-rib-connection-up-timestamp");
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp != nullptr)
        {
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
        else
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>();
            last_rib_connection_down_timestamp->parent = this;
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
        return children.at("last-rib-connection-down-timestamp");
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp != nullptr)
        {
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
        else
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>();
            last_rib_connection_up_timestamp->parent = this;
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
        return children.at("last-rib-connection-up-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_children()
{
    if(children.find("first-rib-connection-down-timestamp") == children.end())
    {
        if(first_rib_connection_down_timestamp != nullptr)
        {
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
    }

    if(children.find("first-rib-connection-up-timestamp") == children.end())
    {
        if(first_rib_connection_up_timestamp != nullptr)
        {
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
    }

    if(children.find("last-rib-connection-down-timestamp") == children.end())
    {
        if(last_rib_connection_down_timestamp != nullptr)
        {
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
    }

    if(children.find("last-rib-connection-up-timestamp") == children.end())
    {
        if(last_rib_connection_up_timestamp != nullptr)
        {
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::Ipv6RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;
    children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;

    first_rib_connection_up_timestamp->parent = this;
    children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;

    last_rib_connection_down_timestamp->parent = this;
    children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;

    last_rib_connection_up_timestamp->parent = this;
    children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;

    yang_name = "ipv6rib-server"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::~Ipv6RibServer()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| last_rib_connection_down_age.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| rib_connection_up_count.is_set
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_rib_connection_up.operation)
	|| is_set(last_rib_connection_down_age.operation)
	|| is_set(last_rib_connection_up_age.operation)
	|| is_set(rib_connection_down_count.operation)
	|| is_set(rib_connection_up_count.operation)
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6rib-server";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RibServer' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.operation)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.operation)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.operation)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.operation)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.operation)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp != nullptr)
        {
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
        else
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>();
            first_rib_connection_down_timestamp->parent = this;
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
        return children.at("first-rib-connection-down-timestamp");
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp != nullptr)
        {
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
        else
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>();
            first_rib_connection_up_timestamp->parent = this;
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
        return children.at("first-rib-connection-up-timestamp");
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp != nullptr)
        {
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
        else
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>();
            last_rib_connection_down_timestamp->parent = this;
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
        return children.at("last-rib-connection-down-timestamp");
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp != nullptr)
        {
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
        else
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>();
            last_rib_connection_up_timestamp->parent = this;
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
        return children.at("last-rib-connection-up-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_children()
{
    if(children.find("first-rib-connection-down-timestamp") == children.end())
    {
        if(first_rib_connection_down_timestamp != nullptr)
        {
            children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
        }
    }

    if(children.find("first-rib-connection-up-timestamp") == children.end())
    {
        if(first_rib_connection_up_timestamp != nullptr)
        {
            children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
        }
    }

    if(children.find("last-rib-connection-down-timestamp") == children.end())
    {
        if(last_rib_connection_down_timestamp != nullptr)
        {
            children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
        }
    }

    if(children.find("last-rib-connection-up-timestamp") == children.end())
    {
        if(last_rib_connection_up_timestamp != nullptr)
        {
            children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRibConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::TeConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    children["first-connection-down-timestamp"] = first_connection_down_timestamp;

    first_connection_up_timestamp->parent = this;
    children["first-connection-up-timestamp"] = first_connection_up_timestamp;

    last_connection_down_timestamp->parent = this;
    children["last-connection-down-timestamp"] = last_connection_down_timestamp;

    last_connection_up_timestamp->parent = this;
    children["last-connection-up-timestamp"] = last_connection_up_timestamp;

    yang_name = "te-connection"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::~TeConnection()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(last_connection_down_age.operation)
	|| is_set(last_connection_up_age.operation)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-connection";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeConnection' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.operation)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.operation)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp != nullptr)
        {
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
        else
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>();
            first_connection_down_timestamp->parent = this;
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
        return children.at("first-connection-down-timestamp");
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp != nullptr)
        {
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
        else
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>();
            first_connection_up_timestamp->parent = this;
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
        return children.at("first-connection-up-timestamp");
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp != nullptr)
        {
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
        else
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>();
            last_connection_down_timestamp->parent = this;
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
        return children.at("last-connection-down-timestamp");
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp != nullptr)
        {
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
        else
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>();
            last_connection_up_timestamp->parent = this;
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
        return children.at("last-connection-up-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_children()
{
    if(children.find("first-connection-down-timestamp") == children.end())
    {
        if(first_connection_down_timestamp != nullptr)
        {
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
    }

    if(children.find("first-connection-up-timestamp") == children.end())
    {
        if(first_connection_up_timestamp != nullptr)
        {
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
    }

    if(children.find("last-connection-down-timestamp") == children.end())
    {
        if(last_connection_down_timestamp != nullptr)
        {
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
    }

    if(children.find("last-connection-up-timestamp") == children.end())
    {
        if(last_connection_up_timestamp != nullptr)
        {
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-up-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-up-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-down-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-down-timestamp"; yang_parent_name = "te-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LsdConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    children["first-connection-down-timestamp"] = first_connection_down_timestamp;

    first_connection_up_timestamp->parent = this;
    children["first-connection-up-timestamp"] = first_connection_up_timestamp;

    last_connection_down_timestamp->parent = this;
    children["last-connection-down-timestamp"] = last_connection_down_timestamp;

    last_connection_up_timestamp->parent = this;
    children["last-connection-up-timestamp"] = last_connection_up_timestamp;

    yang_name = "lsd-connection"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::~LsdConnection()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(last_connection_down_age.operation)
	|| is_set(last_connection_up_age.operation)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-connection";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdConnection' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.operation)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.operation)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp != nullptr)
        {
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
        else
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>();
            first_connection_down_timestamp->parent = this;
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
        return children.at("first-connection-down-timestamp");
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp != nullptr)
        {
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
        else
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>();
            first_connection_up_timestamp->parent = this;
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
        return children.at("first-connection-up-timestamp");
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp != nullptr)
        {
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
        else
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>();
            last_connection_down_timestamp->parent = this;
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
        return children.at("last-connection-down-timestamp");
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp != nullptr)
        {
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
        else
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>();
            last_connection_up_timestamp->parent = this;
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
        return children.at("last-connection-up-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_children()
{
    if(children.find("first-connection-down-timestamp") == children.end())
    {
        if(first_connection_down_timestamp != nullptr)
        {
            children["first-connection-down-timestamp"] = first_connection_down_timestamp;
        }
    }

    if(children.find("first-connection-up-timestamp") == children.end())
    {
        if(first_connection_up_timestamp != nullptr)
        {
            children["first-connection-up-timestamp"] = first_connection_up_timestamp;
        }
    }

    if(children.find("last-connection-down-timestamp") == children.end())
    {
        if(last_connection_down_timestamp != nullptr)
        {
            children["last-connection-down-timestamp"] = last_connection_down_timestamp;
        }
    }

    if(children.find("last-connection-up-timestamp") == children.end())
    {
        if(last_connection_up_timestamp != nullptr)
        {
            children["last-connection-up-timestamp"] = last_connection_up_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-up-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-up-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionUpTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-connection-down-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-connection-down-timestamp"; yang_parent_name = "lsd-connection";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastConnectionDownTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::DsNpl()
    :
    dir_service_conn_state{YType::enumeration, "dir-service-conn-state"},
    dsissu_status_flag{YType::uint32, "dsissu-status-flag"},
    issu_mgr_conn_state{YType::enumeration, "issu-mgr-conn-state"},
    issu_phase{YType::str, "issu-phase"},
    issu_type_ng{YType::boolean, "issu-type-ng"},
    issuha_option{YType::str, "issuha-option"},
    local_ds_handle{YType::uint64, "local-ds-handle"},
    service_name{YType::str, "service-name"}
{
    yang_name = "ds-npl"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::~DsNpl()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_data() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_data())
            return true;
    }
    return dir_service_conn_state.is_set
	|| dsissu_status_flag.is_set
	|| issu_mgr_conn_state.is_set
	|| issu_phase.is_set
	|| issu_type_ng.is_set
	|| issuha_option.is_set
	|| local_ds_handle.is_set
	|| service_name.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_operation() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dir_service_conn_state.operation)
	|| is_set(dsissu_status_flag.operation)
	|| is_set(issu_mgr_conn_state.operation)
	|| is_set(issu_phase.operation)
	|| is_set(issu_type_ng.operation)
	|| is_set(issuha_option.operation)
	|| is_set(local_ds_handle.operation)
	|| is_set(service_name.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-npl";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DsNpl' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir_service_conn_state.is_set || is_set(dir_service_conn_state.operation)) leaf_name_data.push_back(dir_service_conn_state.get_name_leafdata());
    if (dsissu_status_flag.is_set || is_set(dsissu_status_flag.operation)) leaf_name_data.push_back(dsissu_status_flag.get_name_leafdata());
    if (issu_mgr_conn_state.is_set || is_set(issu_mgr_conn_state.operation)) leaf_name_data.push_back(issu_mgr_conn_state.get_name_leafdata());
    if (issu_phase.is_set || is_set(issu_phase.operation)) leaf_name_data.push_back(issu_phase.get_name_leafdata());
    if (issu_type_ng.is_set || is_set(issu_type_ng.operation)) leaf_name_data.push_back(issu_type_ng.get_name_leafdata());
    if (issuha_option.is_set || is_set(issuha_option.operation)) leaf_name_data.push_back(issuha_option.get_name_leafdata());
    if (local_ds_handle.is_set || is_set(local_ds_handle.operation)) leaf_name_data.push_back(local_ds_handle.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npl-endpoint")
    {
        for(auto const & c : npl_endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint>();
        c->parent = this;
        npl_endpoint.push_back(std::move(c));
        children[segment_path] = npl_endpoint.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "npl-priority-statistic")
    {
        for(auto const & c : npl_priority_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic>();
        c->parent = this;
        npl_priority_statistic.push_back(std::move(c));
        children[segment_path] = npl_priority_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_children()
{
    for (auto const & c : npl_endpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : npl_priority_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dir-service-conn-state")
    {
        dir_service_conn_state = value;
    }
    if(value_path == "dsissu-status-flag")
    {
        dsissu_status_flag = value;
    }
    if(value_path == "issu-mgr-conn-state")
    {
        issu_mgr_conn_state = value;
    }
    if(value_path == "issu-phase")
    {
        issu_phase = value;
    }
    if(value_path == "issu-type-ng")
    {
        issu_type_ng = value;
    }
    if(value_path == "issuha-option")
    {
        issuha_option = value;
    }
    if(value_path == "local-ds-handle")
    {
        local_ds_handle = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NplPriorityStatistic()
{
    yang_name = "npl-priority-statistic"; yang_parent_name = "ds-npl";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::~NplPriorityStatistic()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_data() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_operation() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-priority-statistic";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NplPriorityStatistic' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "num-recv")
    {
        for(auto const & c : num_recv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv>();
        c->parent = this;
        num_recv.push_back(std::move(c));
        children[segment_path] = num_recv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(std::move(c));
        children[segment_path] = num_recv_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-sent")
    {
        for(auto const & c : num_sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent>();
        c->parent = this;
        num_sent.push_back(std::move(c));
        children[segment_path] = num_sent.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(std::move(c));
        children[segment_path] = num_sent_drop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_children()
{
    for (auto const & c : num_recv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "num-sent"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::~NumSent()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSent' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{
    yang_name = "num-recv"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::~NumRecv()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecv' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NumSentDrop()
{
    yang_name = "num-sent-drop"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::~NumSentDrop()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSentDrop' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        for(auto const & c : nsr_pl_send_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(std::move(c));
        children[segment_path] = nsr_pl_send_drop_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_children()
{
    for (auto const & c : nsr_pl_send_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlSendDropArray' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NumRecvDrop()
{
    yang_name = "num-recv-drop"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::~NumRecvDrop()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecvDrop' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        for(auto const & c : nsr_pl_recv_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(std::move(c));
        children[segment_path] = nsr_pl_recv_drop_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_children()
{
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlRecvDropArray' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::NplEndpoint()
    :
    endpoint_active_flag{YType::boolean, "endpoint-active-flag"},
    endpoint_handle{YType::uint64, "endpoint-handle"},
    endpoint_issu_role{YType::str, "endpoint-issu-role"},
    endpoint_name{YType::str, "endpoint-name"},
    endpoint_stale_flag{YType::boolean, "endpoint-stale-flag"},
    expected_sequence_num{YType::uint32, "expected-sequence-num"},
    msg_size{YType::uint32, "msg-size"},
    node_id{YType::str, "node-id"},
    sync_group_name{YType::str, "sync-group-name"},
    wheel_id{YType::uint32, "wheel-id"}
{
    yang_name = "npl-endpoint"; yang_parent_name = "ds-npl";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::~NplEndpoint()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_data() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    return endpoint_active_flag.is_set
	|| endpoint_handle.is_set
	|| endpoint_issu_role.is_set
	|| endpoint_name.is_set
	|| endpoint_stale_flag.is_set
	|| expected_sequence_num.is_set
	|| msg_size.is_set
	|| node_id.is_set
	|| sync_group_name.is_set
	|| wheel_id.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_operation() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(endpoint_active_flag.operation)
	|| is_set(endpoint_handle.operation)
	|| is_set(endpoint_issu_role.operation)
	|| is_set(endpoint_name.operation)
	|| is_set(endpoint_stale_flag.operation)
	|| is_set(expected_sequence_num.operation)
	|| is_set(msg_size.operation)
	|| is_set(node_id.operation)
	|| is_set(sync_group_name.operation)
	|| is_set(wheel_id.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-endpoint";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NplEndpoint' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_active_flag.is_set || is_set(endpoint_active_flag.operation)) leaf_name_data.push_back(endpoint_active_flag.get_name_leafdata());
    if (endpoint_handle.is_set || is_set(endpoint_handle.operation)) leaf_name_data.push_back(endpoint_handle.get_name_leafdata());
    if (endpoint_issu_role.is_set || is_set(endpoint_issu_role.operation)) leaf_name_data.push_back(endpoint_issu_role.get_name_leafdata());
    if (endpoint_name.is_set || is_set(endpoint_name.operation)) leaf_name_data.push_back(endpoint_name.get_name_leafdata());
    if (endpoint_stale_flag.is_set || is_set(endpoint_stale_flag.operation)) leaf_name_data.push_back(endpoint_stale_flag.get_name_leafdata());
    if (expected_sequence_num.is_set || is_set(expected_sequence_num.operation)) leaf_name_data.push_back(expected_sequence_num.get_name_leafdata());
    if (msg_size.is_set || is_set(msg_size.operation)) leaf_name_data.push_back(msg_size.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (sync_group_name.is_set || is_set(sync_group_name.operation)) leaf_name_data.push_back(sync_group_name.get_name_leafdata());
    if (wheel_id.is_set || is_set(wheel_id.operation)) leaf_name_data.push_back(wheel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "endpoint")
    {
        for(auto const & c : endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint>();
        c->parent = this;
        endpoint.push_back(std::move(c));
        children[segment_path] = endpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_children()
{
    for (auto const & c : endpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "endpoint-active-flag")
    {
        endpoint_active_flag = value;
    }
    if(value_path == "endpoint-handle")
    {
        endpoint_handle = value;
    }
    if(value_path == "endpoint-issu-role")
    {
        endpoint_issu_role = value;
    }
    if(value_path == "endpoint-name")
    {
        endpoint_name = value;
    }
    if(value_path == "endpoint-stale-flag")
    {
        endpoint_stale_flag = value;
    }
    if(value_path == "expected-sequence-num")
    {
        expected_sequence_num = value;
    }
    if(value_path == "msg-size")
    {
        msg_size = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "sync-group-name")
    {
        sync_group_name = value;
    }
    if(value_path == "wheel-id")
    {
        wheel_id = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::Endpoint()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "endpoint"; yang_parent_name = "npl-endpoint";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::~Endpoint()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Endpoint' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::ActiveNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "active-nsr-mode-enter-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::~ActiveNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsr-mode-enter-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveNsrModeEnterTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::StandbyNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "standby-nsr-mode-enter-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::~StandbyNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-nsr-mode-enter-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyNsrModeEnterTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::ActiveNsrfoTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "active-nsrfo-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::~ActiveNsrfoTime()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsrfo-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveNsrfoTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::PostitCountInfo()
    :
    postit_count{YType::uint32, "postit-count"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "postit-count-info"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::~PostitCountInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_data() const
{
    return postit_count.is_set
	|| vrf_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(postit_count.operation)
	|| is_set(vrf_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-count-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitCountInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_count.is_set || is_set(postit_count.operation)) leaf_name_data.push_back(postit_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "postit-count")
    {
        postit_count = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "postit-count-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::IssuMilestone()
    :
    milestone_met_timestamp{YType::uint32, "milestone-met-timestamp"},
    milestone_name{YType::str, "milestone-name"},
    milestone_start_timestamp{YType::uint32, "milestone-start-timestamp"}
{
    yang_name = "issu-milestone"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::~IssuMilestone()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_data() const
{
    return milestone_met_timestamp.is_set
	|| milestone_name.is_set
	|| milestone_start_timestamp.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_operation() const
{
    return is_set(operation)
	|| is_set(milestone_met_timestamp.operation)
	|| is_set(milestone_name.operation)
	|| is_set(milestone_start_timestamp.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-milestone";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuMilestone' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milestone_met_timestamp.is_set || is_set(milestone_met_timestamp.operation)) leaf_name_data.push_back(milestone_met_timestamp.get_name_leafdata());
    if (milestone_name.is_set || is_set(milestone_name.operation)) leaf_name_data.push_back(milestone_name.get_name_leafdata());
    if (milestone_start_timestamp.is_set || is_set(milestone_start_timestamp.operation)) leaf_name_data.push_back(milestone_start_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milestone-met-timestamp")
    {
        milestone_met_timestamp = value;
    }
    if(value_path == "milestone-name")
    {
        milestone_name = value;
    }
    if(value_path == "milestone-start-timestamp")
    {
        milestone_start_timestamp = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::Vrf_()
    :
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    high_throttled_read_count{YType::uint32, "high-throttled-read-count"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    low_throttled_read_count{YType::uint32, "low-throttled-read-count"},
    lpts_calls{YType::uint32, "lpts-calls"},
    lpts_set_up_time{YType::uint32, "lpts-set-up-time"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles_count{YType::uint32, "read-throttles-count"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "vrf"; yang_parent_name = "performance-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_data() const
{
    return data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| high_throttled_read_count.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| low_throttled_read_count.is_set
	|| lpts_calls.is_set
	|| lpts_set_up_time.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles_count.is_set
	|| subgroup_list_time.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(high_throttled_read_count.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(low_throttled_read_count.operation)
	|| is_set(lpts_calls.operation)
	|| is_set(lpts_set_up_time.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles_count.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (high_throttled_read_count.is_set || is_set(high_throttled_read_count.operation)) leaf_name_data.push_back(high_throttled_read_count.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (low_throttled_read_count.is_set || is_set(low_throttled_read_count.operation)) leaf_name_data.push_back(low_throttled_read_count.get_name_leafdata());
    if (lpts_calls.is_set || is_set(lpts_calls.operation)) leaf_name_data.push_back(lpts_calls.get_name_leafdata());
    if (lpts_set_up_time.is_set || is_set(lpts_set_up_time.operation)) leaf_name_data.push_back(lpts_set_up_time.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles_count.is_set || is_set(read_throttles_count.operation)) leaf_name_data.push_back(read_throttles_count.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "high-throttled-read-count")
    {
        high_throttled_read_count = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "low-throttled-read-count")
    {
        low_throttled_read_count = value;
    }
    if(value_path == "lpts-calls")
    {
        lpts_calls = value;
    }
    if(value_path == "lpts-set-up-time")
    {
        lpts_set_up_time = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles-count")
    {
        read_throttles_count = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::~Sessions()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::Session()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connection_state{YType::enumeration, "connection-state"},
    description{YType::str, "description"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    local_as{YType::uint32, "local-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    postit_pending{YType::boolean, "postit-pending"},
    remote_as{YType::uint32, "remote-as"},
    speaker_id{YType::uint8, "speaker-id"},
    vrf_name{YType::str, "vrf-name"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>())
{
    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    yang_name = "session"; yang_parent_name = "sessions";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::~Session()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::has_data() const
{
    return neighbor_address.is_set
	|| connection_state.is_set
	|| description.is_set
	|| is_local_address_configured.is_set
	|| local_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| postit_pending.is_set
	|| remote_as.is_set
	|| speaker_id.is_set
	|| vrf_name.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(connection_state.operation)
	|| is_set(description.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(local_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(postit_pending.operation)
	|| is_set(remote_as.operation)
	|| is_set(speaker_id.operation)
	|| is_set(vrf_name.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (postit_pending.is_set || is_set(postit_pending.operation)) leaf_name_data.push_back(postit_pending.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_children()
{
    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "postit-pending")
    {
        postit_pending = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "session";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "session";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    actual_last_write_bytes{YType::uint32, "actual-last-write-bytes"},
    actual_last_write_reset_bytes{YType::uint32, "actual-last-write-reset-bytes"},
    actual_second_last_write_bytes{YType::uint32, "actual-second-last-write-bytes"},
    actual_second_last_write_reset_bytes{YType::uint32, "actual-second-last-write-reset-bytes"},
    attempted_last_write_bytes{YType::uint32, "attempted-last-write-bytes"},
    attempted_last_write_reset_bytes{YType::uint32, "attempted-last-write-reset-bytes"},
    attempted_second_last_write_bytes{YType::uint32, "attempted-second-last-write-bytes"},
    attempted_second_last_write_reset_bytes{YType::uint32, "attempted-second-last-write-reset-bytes"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    bfd_session_created_state{YType::enumeration, "bfd-session-created-state"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_state_ts{YType::uint64, "bfd-state-ts"},
    bytes_read{YType::uint32, "bytes-read"},
    bytes_written{YType::uint32, "bytes-written"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    connect_retry_interval{YType::uint16, "connect-retry-interval"},
    connection_admin_status{YType::uint32, "connection-admin-status"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_established_time{YType::uint32, "connection-established-time"},
    connection_local_port{YType::uint32, "connection-local-port"},
    connection_remote_port{YType::uint32, "connection-remote-port"},
    connection_state{YType::enumeration, "connection-state"},
    connection_up_count{YType::uint32, "connection-up-count"},
    count_last_write{YType::uint32, "count-last-write"},
    description{YType::str, "description"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    discard_data_bytes{YType::uint32, "discard-data-bytes"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    dynamic_neighbor{YType::boolean, "dynamic-neighbor"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    error_notifies_received{YType::uint32, "error-notifies-received"},
    error_notifies_sent{YType::uint32, "error-notifies-sent"},
    fpbsn_offset{YType::uint32, "fpbsn-offset"},
    fssn_offset{YType::uint32, "fssn-offset"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    has_internal_link{YType::boolean, "has-internal-link"},
    hold_time{YType::uint16, "hold-time"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    io_armed{YType::boolean, "io-armed"},
    is4_byte_as_capability_received{YType::boolean, "is4-byte-as-capability-received"},
    is4_byte_as_capability_sent{YType::boolean, "is4-byte-as-capability-sent"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    is_capability_negotiation_suppressed{YType::boolean, "is-capability-negotiation-suppressed"},
    is_ebgp_multihop_bgpmpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgpmpls-forwarding-disabled"},
    is_ebgp_peer_as_league{YType::boolean, "is-ebgp-peer-as-league"},
    is_ebgp_peer_common_admin{YType::boolean, "is-ebgp-peer-common-admin"},
    is_external_neighbor_not_directly_connected{YType::boolean, "is-external-neighbor-not-directly-connected"},
    is_gr_aware{YType::boolean, "is-gr-aware"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    is_out_of_memory_shutdown{YType::boolean, "is-out-of-memory-shutdown"},
    is_passive_close{YType::boolean, "is-passive-close"},
    is_read_disabled{YType::boolean, "is-read-disabled"},
    is_route_refresh_capability_received{YType::boolean, "is-route-refresh-capability-received"},
    is_route_refresh_old_capability_received{YType::boolean, "is-route-refresh-old-capability-received"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    last_ackd_seq_no{YType::uint32, "last-ackd-seq-no"},
    last_k_aerror_reset{YType::uint32, "last-k-aerror-reset"},
    last_k_aexpiry_reset{YType::uint32, "last-k-aexpiry-reset"},
    last_k_anotsent_reset{YType::uint32, "last-k-anotsent-reset"},
    last_k_astart_reset{YType::uint32, "last-k-astart-reset"},
    last_notify_error_code{YType::uint8, "last-notify-error-code"},
    last_notify_error_subcode{YType::uint8, "last-notify-error-subcode"},
    last_write_event{YType::uint32, "last-write-event"},
    local_as{YType::uint32, "local-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    messages_received{YType::uint32, "messages-received"},
    messages_sent{YType::uint32, "messages-sent"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    multi_protocol_capability_received{YType::boolean, "multi-protocol-capability-received"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    negotiated_protocol_version{YType::uint16, "negotiated-protocol-version"},
    neighbor_interface_handle{YType::uint32, "neighbor-interface-handle"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    open_check_error_code{YType::enumeration, "open-check-error-code"},
    peer_error_code{YType::uint32, "peer-error-code"},
    peer_reset_reason{YType::enumeration, "peer-reset-reason"},
    previous_connection_state{YType::uint32, "previous-connection-state"},
    read_armed{YType::boolean, "read-armed"},
    remote_as{YType::uint32, "remote-as"},
    remote_as_number{YType::uint32, "remote-as-number"},
    reset_notification_sent{YType::boolean, "reset-notification-sent"},
    reset_reason{YType::enumeration, "reset-reason"},
    router_id{YType::str, "router-id"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    second_last_k_aexpiry_reset{YType::uint32, "second-last-k-aexpiry-reset"},
    second_last_k_astart_reset{YType::uint32, "second-last-k-astart-reset"},
    second_last_write_event{YType::uint32, "second-last-write-event"},
    socket_read_bytes{YType::uint32, "socket-read-bytes"},
    speaker_id{YType::uint8, "speaker-id"},
    standby_rp{YType::boolean, "standby-rp"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    tcpmss{YType::uint32, "tcpmss"},
    time_last_cb{YType::uint64, "time-last-cb"},
    time_last_cb_reset{YType::uint32, "time-last-cb-reset"},
    time_last_fb{YType::uint64, "time-last-fb"},
    time_since_connection_last_dropped{YType::uint32, "time-since-connection-last-dropped"},
    time_since_last_read{YType::uint32, "time-since-last-read"},
    time_since_last_read_reset{YType::uint32, "time-since-last-read-reset"},
    time_since_last_update{YType::uint32, "time-since-last-update"},
    time_since_last_write{YType::uint32, "time-since-last-write"},
    time_since_last_write_reset{YType::uint32, "time-since-last-write-reset"},
    time_since_second_last_write{YType::uint32, "time-since-second-last-write"},
    time_since_second_last_write_reset{YType::uint32, "time-since-second-last-write-reset"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    update_bytes_read{YType::uint32, "update-bytes-read"},
    update_messages_in{YType::uint32, "update-messages-in"},
    update_messages_out{YType::uint32, "update-messages-out"},
    vrf_name{YType::str, "vrf-name"},
    write_armed{YType::boolean, "write-armed"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress>())
	,graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance>())
	,message_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics>())
	,received_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo>())
	,send_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo>())
	,tcp_init_sync_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec>())
	,tcp_init_sync_phase_two_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec>())
	,tcp_init_sync_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec>())
{
    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    message_statistics->parent = this;
    children["message-statistics"] = message_statistics;

    performance_statistics->parent = this;
    children["performance-statistics"] = performance_statistics;

    received_notification_info->parent = this;
    children["received-notification-info"] = received_notification_info;

    send_notification_info->parent = this;
    children["send-notification-info"] = send_notification_info;

    tcp_init_sync_done_time_spec->parent = this;
    children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;

    tcp_init_sync_phase_two_time_spec->parent = this;
    children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;

    tcp_init_sync_time_spec->parent = this;
    children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| active_bmp_servers.is_set
	|| actual_last_write_bytes.is_set
	|| actual_last_write_reset_bytes.is_set
	|| actual_second_last_write_bytes.is_set
	|| actual_second_last_write_reset_bytes.is_set
	|| attempted_last_write_bytes.is_set
	|| attempted_last_write_reset_bytes.is_set
	|| attempted_second_last_write_bytes.is_set
	|| attempted_second_last_write_reset_bytes.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| bfd_session_created_state.is_set
	|| bfd_session_enable_mode.is_set
	|| bfd_session_state.is_set
	|| bfd_state_ts.is_set
	|| bytes_read.is_set
	|| bytes_written.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| connect_retry_interval.is_set
	|| connection_admin_status.is_set
	|| connection_down_count.is_set
	|| connection_established_time.is_set
	|| connection_local_port.is_set
	|| connection_remote_port.is_set
	|| connection_state.is_set
	|| connection_up_count.is_set
	|| count_last_write.is_set
	|| description.is_set
	|| discard_as4_path.is_set
	|| discard_data_bytes.is_set
	|| dmz_link_bandwidth.is_set
	|| dynamic_neighbor.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| ebgp_time_to_live.is_set
	|| egress_peer_engineering_enabled.is_set
	|| error_notifies_received.is_set
	|| error_notifies_sent.is_set
	|| fpbsn_offset.is_set
	|| fssn_offset.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| has_internal_link.is_set
	|| hold_time.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| io_armed.is_set
	|| is4_byte_as_capability_received.is_set
	|| is4_byte_as_capability_sent.is_set
	|| is_administratively_shut_down.is_set
	|| is_capability_negotiation_performed.is_set
	|| is_capability_negotiation_suppressed.is_set
	|| is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set
	|| is_ebgp_peer_as_league.is_set
	|| is_ebgp_peer_common_admin.is_set
	|| is_external_neighbor_not_directly_connected.is_set
	|| is_gr_aware.is_set
	|| is_local_address_configured.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| is_out_of_memory_shutdown.is_set
	|| is_passive_close.is_set
	|| is_read_disabled.is_set
	|| is_route_refresh_capability_received.is_set
	|| is_route_refresh_old_capability_received.is_set
	|| keep_alive_time.is_set
	|| last_ackd_seq_no.is_set
	|| last_k_aerror_reset.is_set
	|| last_k_aexpiry_reset.is_set
	|| last_k_anotsent_reset.is_set
	|| last_k_astart_reset.is_set
	|| last_notify_error_code.is_set
	|| last_notify_error_subcode.is_set
	|| last_write_event.is_set
	|| local_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| local_as_no_prepend.is_set
	|| local_as_replace_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| multi_protocol_capability_received.is_set
	|| nbr_cluster_id.is_set
	|| nbr_enforce_first_as.is_set
	|| nbr_in_cluster.is_set
	|| negotiated_protocol_version.is_set
	|| neighbor_interface_handle.is_set
	|| neighbor_local_as.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| open_check_error_code.is_set
	|| peer_error_code.is_set
	|| peer_reset_reason.is_set
	|| previous_connection_state.is_set
	|| read_armed.is_set
	|| remote_as.is_set
	|| remote_as_number.is_set
	|| reset_notification_sent.is_set
	|| reset_reason.is_set
	|| router_id.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disable.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| second_last_k_aexpiry_reset.is_set
	|| second_last_k_astart_reset.is_set
	|| second_last_write_event.is_set
	|| socket_read_bytes.is_set
	|| speaker_id.is_set
	|| standby_rp.is_set
	|| suppress4_byte_as.is_set
	|| tcp_session_open_mode.is_set
	|| tcpmss.is_set
	|| time_last_cb.is_set
	|| time_last_cb_reset.is_set
	|| time_last_fb.is_set
	|| time_since_connection_last_dropped.is_set
	|| time_since_last_read.is_set
	|| time_since_last_read_reset.is_set
	|| time_since_last_update.is_set
	|| time_since_last_write.is_set
	|| time_since_last_write_reset.is_set
	|| time_since_second_last_write.is_set
	|| time_since_second_last_write_reset.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| ttl_security_enabled.is_set
	|| update_bytes_read.is_set
	|| update_messages_in.is_set
	|| update_messages_out.is_set
	|| vrf_name.is_set
	|| write_armed.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (message_statistics !=  nullptr && message_statistics->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (received_notification_info !=  nullptr && received_notification_info->has_data())
	|| (send_notification_info !=  nullptr && send_notification_info->has_data())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_data())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_data())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(active_bmp_servers.operation)
	|| is_set(actual_last_write_bytes.operation)
	|| is_set(actual_last_write_reset_bytes.operation)
	|| is_set(actual_second_last_write_bytes.operation)
	|| is_set(actual_second_last_write_reset_bytes.operation)
	|| is_set(attempted_last_write_bytes.operation)
	|| is_set(attempted_last_write_reset_bytes.operation)
	|| is_set(attempted_second_last_write_bytes.operation)
	|| is_set(attempted_second_last_write_reset_bytes.operation)
	|| is_set(bfd_minintervalval.operation)
	|| is_set(bfd_multiplierval.operation)
	|| is_set(bfd_session_created_state.operation)
	|| is_set(bfd_session_enable_mode.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(bfd_state_ts.operation)
	|| is_set(bytes_read.operation)
	|| is_set(bytes_written.operation)
	|| is_set(configured_hold_time.operation)
	|| is_set(configured_keepalive.operation)
	|| is_set(configured_min_acc_hold_time.operation)
	|| is_set(connect_retry_interval.operation)
	|| is_set(connection_admin_status.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_established_time.operation)
	|| is_set(connection_local_port.operation)
	|| is_set(connection_remote_port.operation)
	|| is_set(connection_state.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(count_last_write.operation)
	|| is_set(description.operation)
	|| is_set(discard_as4_path.operation)
	|| is_set(discard_data_bytes.operation)
	|| is_set(dmz_link_bandwidth.operation)
	|| is_set(dynamic_neighbor.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_mode.operation)
	|| is_set(ebgp_time_to_live.operation)
	|| is_set(egress_peer_engineering_enabled.operation)
	|| is_set(error_notifies_received.operation)
	|| is_set(error_notifies_sent.operation)
	|| is_set(fpbsn_offset.operation)
	|| is_set(fssn_offset.operation)
	|| is_set(gr_restart_time.operation)
	|| is_set(gr_stale_path_time.operation)
	|| is_set(graceful_restart_enabled_nbr.operation)
	|| is_set(has_internal_link.operation)
	|| is_set(hold_time.operation)
	|| is_set(ignore_connected.operation)
	|| is_set(internal_vpn_client.operation)
	|| is_set(io_armed.operation)
	|| is_set(is4_byte_as_capability_received.operation)
	|| is_set(is4_byte_as_capability_sent.operation)
	|| is_set(is_administratively_shut_down.operation)
	|| is_set(is_capability_negotiation_performed.operation)
	|| is_set(is_capability_negotiation_suppressed.operation)
	|| is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)
	|| is_set(is_ebgp_peer_as_league.operation)
	|| is_set(is_ebgp_peer_common_admin.operation)
	|| is_set(is_external_neighbor_not_directly_connected.operation)
	|| is_set(is_gr_aware.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(is_neighbor_max_prefix_shutdown.operation)
	|| is_set(is_out_of_memory_forced_up.operation)
	|| is_set(is_out_of_memory_shutdown.operation)
	|| is_set(is_passive_close.operation)
	|| is_set(is_read_disabled.operation)
	|| is_set(is_route_refresh_capability_received.operation)
	|| is_set(is_route_refresh_old_capability_received.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(last_ackd_seq_no.operation)
	|| is_set(last_k_aerror_reset.operation)
	|| is_set(last_k_aexpiry_reset.operation)
	|| is_set(last_k_anotsent_reset.operation)
	|| is_set(last_k_astart_reset.operation)
	|| is_set(last_notify_error_code.operation)
	|| is_set(last_notify_error_subcode.operation)
	|| is_set(last_write_event.operation)
	|| is_set(local_as.operation)
	|| is_set(local_as_dual_as.operation)
	|| is_set(local_as_dual_as_mode_native.operation)
	|| is_set(local_as_no_prepend.operation)
	|| is_set(local_as_replace_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(min_advertise_interval.operation)
	|| is_set(min_advertise_interval_msecs.operation)
	|| is_set(min_origination_interval.operation)
	|| is_set(msg_log_in.operation)
	|| is_set(msg_log_out.operation)
	|| is_set(multi_protocol_capability_received.operation)
	|| is_set(nbr_cluster_id.operation)
	|| is_set(nbr_enforce_first_as.operation)
	|| is_set(nbr_in_cluster.operation)
	|| is_set(negotiated_protocol_version.operation)
	|| is_set(neighbor_interface_handle.operation)
	|| is_set(neighbor_local_as.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(open_check_error_code.operation)
	|| is_set(peer_error_code.operation)
	|| is_set(peer_reset_reason.operation)
	|| is_set(previous_connection_state.operation)
	|| is_set(read_armed.operation)
	|| is_set(remote_as.operation)
	|| is_set(remote_as_number.operation)
	|| is_set(reset_notification_sent.operation)
	|| is_set(reset_reason.operation)
	|| is_set(router_id.operation)
	|| is_set(rpki_allow_invalid.operation)
	|| is_set(rpki_disable.operation)
	|| is_set(rpki_signal_ibgp.operation)
	|| is_set(rpki_use_validity.operation)
	|| is_set(second_last_k_aexpiry_reset.operation)
	|| is_set(second_last_k_astart_reset.operation)
	|| is_set(second_last_write_event.operation)
	|| is_set(socket_read_bytes.operation)
	|| is_set(speaker_id.operation)
	|| is_set(standby_rp.operation)
	|| is_set(suppress4_byte_as.operation)
	|| is_set(tcp_session_open_mode.operation)
	|| is_set(tcpmss.operation)
	|| is_set(time_last_cb.operation)
	|| is_set(time_last_cb_reset.operation)
	|| is_set(time_last_fb.operation)
	|| is_set(time_since_connection_last_dropped.operation)
	|| is_set(time_since_last_read.operation)
	|| is_set(time_since_last_read_reset.operation)
	|| is_set(time_since_last_update.operation)
	|| is_set(time_since_last_write.operation)
	|| is_set(time_since_last_write_reset.operation)
	|| is_set(time_since_second_last_write.operation)
	|| is_set(time_since_second_last_write_reset.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(update_bytes_read.operation)
	|| is_set(update_messages_in.operation)
	|| is_set(update_messages_out.operation)
	|| is_set(vrf_name.operation)
	|| is_set(write_armed.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (message_statistics !=  nullptr && message_statistics->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (received_notification_info !=  nullptr && received_notification_info->has_operation())
	|| (send_notification_info !=  nullptr && send_notification_info->has_operation())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_operation())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_operation())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.operation)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (actual_last_write_bytes.is_set || is_set(actual_last_write_bytes.operation)) leaf_name_data.push_back(actual_last_write_bytes.get_name_leafdata());
    if (actual_last_write_reset_bytes.is_set || is_set(actual_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_last_write_reset_bytes.get_name_leafdata());
    if (actual_second_last_write_bytes.is_set || is_set(actual_second_last_write_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_bytes.get_name_leafdata());
    if (actual_second_last_write_reset_bytes.is_set || is_set(actual_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_reset_bytes.get_name_leafdata());
    if (attempted_last_write_bytes.is_set || is_set(attempted_last_write_bytes.operation)) leaf_name_data.push_back(attempted_last_write_bytes.get_name_leafdata());
    if (attempted_last_write_reset_bytes.is_set || is_set(attempted_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_last_write_reset_bytes.get_name_leafdata());
    if (attempted_second_last_write_bytes.is_set || is_set(attempted_second_last_write_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_bytes.get_name_leafdata());
    if (attempted_second_last_write_reset_bytes.is_set || is_set(attempted_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_reset_bytes.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.operation)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.operation)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (bfd_session_created_state.is_set || is_set(bfd_session_created_state.operation)) leaf_name_data.push_back(bfd_session_created_state.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.operation)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_state_ts.is_set || is_set(bfd_state_ts.operation)) leaf_name_data.push_back(bfd_state_ts.get_name_leafdata());
    if (bytes_read.is_set || is_set(bytes_read.operation)) leaf_name_data.push_back(bytes_read.get_name_leafdata());
    if (bytes_written.is_set || is_set(bytes_written.operation)) leaf_name_data.push_back(bytes_written.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.operation)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.operation)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.operation)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.operation)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_admin_status.is_set || is_set(connection_admin_status.operation)) leaf_name_data.push_back(connection_admin_status.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_established_time.is_set || is_set(connection_established_time.operation)) leaf_name_data.push_back(connection_established_time.get_name_leafdata());
    if (connection_local_port.is_set || is_set(connection_local_port.operation)) leaf_name_data.push_back(connection_local_port.get_name_leafdata());
    if (connection_remote_port.is_set || is_set(connection_remote_port.operation)) leaf_name_data.push_back(connection_remote_port.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (count_last_write.is_set || is_set(count_last_write.operation)) leaf_name_data.push_back(count_last_write.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.operation)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (discard_data_bytes.is_set || is_set(discard_data_bytes.operation)) leaf_name_data.push_back(discard_data_bytes.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.operation)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (dynamic_neighbor.is_set || is_set(dynamic_neighbor.operation)) leaf_name_data.push_back(dynamic_neighbor.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.operation)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.operation)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.operation)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (error_notifies_received.is_set || is_set(error_notifies_received.operation)) leaf_name_data.push_back(error_notifies_received.get_name_leafdata());
    if (error_notifies_sent.is_set || is_set(error_notifies_sent.operation)) leaf_name_data.push_back(error_notifies_sent.get_name_leafdata());
    if (fpbsn_offset.is_set || is_set(fpbsn_offset.operation)) leaf_name_data.push_back(fpbsn_offset.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.operation)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.operation)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.operation)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.operation)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.operation)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.operation)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.operation)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (io_armed.is_set || is_set(io_armed.operation)) leaf_name_data.push_back(io_armed.get_name_leafdata());
    if (is4_byte_as_capability_received.is_set || is_set(is4_byte_as_capability_received.operation)) leaf_name_data.push_back(is4_byte_as_capability_received.get_name_leafdata());
    if (is4_byte_as_capability_sent.is_set || is_set(is4_byte_as_capability_sent.operation)) leaf_name_data.push_back(is4_byte_as_capability_sent.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.operation)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.operation)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (is_capability_negotiation_suppressed.is_set || is_set(is_capability_negotiation_suppressed.operation)) leaf_name_data.push_back(is_capability_negotiation_suppressed.get_name_leafdata());
    if (is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)) leaf_name_data.push_back(is_ebgp_multihop_bgpmpls_forwarding_disabled.get_name_leafdata());
    if (is_ebgp_peer_as_league.is_set || is_set(is_ebgp_peer_as_league.operation)) leaf_name_data.push_back(is_ebgp_peer_as_league.get_name_leafdata());
    if (is_ebgp_peer_common_admin.is_set || is_set(is_ebgp_peer_common_admin.operation)) leaf_name_data.push_back(is_ebgp_peer_common_admin.get_name_leafdata());
    if (is_external_neighbor_not_directly_connected.is_set || is_set(is_external_neighbor_not_directly_connected.operation)) leaf_name_data.push_back(is_external_neighbor_not_directly_connected.get_name_leafdata());
    if (is_gr_aware.is_set || is_set(is_gr_aware.operation)) leaf_name_data.push_back(is_gr_aware.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.operation)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.operation)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (is_out_of_memory_shutdown.is_set || is_set(is_out_of_memory_shutdown.operation)) leaf_name_data.push_back(is_out_of_memory_shutdown.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.operation)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (is_read_disabled.is_set || is_set(is_read_disabled.operation)) leaf_name_data.push_back(is_read_disabled.get_name_leafdata());
    if (is_route_refresh_capability_received.is_set || is_set(is_route_refresh_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_capability_received.get_name_leafdata());
    if (is_route_refresh_old_capability_received.is_set || is_set(is_route_refresh_old_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_old_capability_received.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (last_ackd_seq_no.is_set || is_set(last_ackd_seq_no.operation)) leaf_name_data.push_back(last_ackd_seq_no.get_name_leafdata());
    if (last_k_aerror_reset.is_set || is_set(last_k_aerror_reset.operation)) leaf_name_data.push_back(last_k_aerror_reset.get_name_leafdata());
    if (last_k_aexpiry_reset.is_set || is_set(last_k_aexpiry_reset.operation)) leaf_name_data.push_back(last_k_aexpiry_reset.get_name_leafdata());
    if (last_k_anotsent_reset.is_set || is_set(last_k_anotsent_reset.operation)) leaf_name_data.push_back(last_k_anotsent_reset.get_name_leafdata());
    if (last_k_astart_reset.is_set || is_set(last_k_astart_reset.operation)) leaf_name_data.push_back(last_k_astart_reset.get_name_leafdata());
    if (last_notify_error_code.is_set || is_set(last_notify_error_code.operation)) leaf_name_data.push_back(last_notify_error_code.get_name_leafdata());
    if (last_notify_error_subcode.is_set || is_set(last_notify_error_subcode.operation)) leaf_name_data.push_back(last_notify_error_subcode.get_name_leafdata());
    if (last_write_event.is_set || is_set(last_write_event.operation)) leaf_name_data.push_back(last_write_event.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.operation)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.operation)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.operation)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.operation)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.operation)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.operation)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.operation)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.operation)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.operation)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (multi_protocol_capability_received.is_set || is_set(multi_protocol_capability_received.operation)) leaf_name_data.push_back(multi_protocol_capability_received.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.operation)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.operation)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.operation)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (negotiated_protocol_version.is_set || is_set(negotiated_protocol_version.operation)) leaf_name_data.push_back(negotiated_protocol_version.get_name_leafdata());
    if (neighbor_interface_handle.is_set || is_set(neighbor_interface_handle.operation)) leaf_name_data.push_back(neighbor_interface_handle.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.operation)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (open_check_error_code.is_set || is_set(open_check_error_code.operation)) leaf_name_data.push_back(open_check_error_code.get_name_leafdata());
    if (peer_error_code.is_set || is_set(peer_error_code.operation)) leaf_name_data.push_back(peer_error_code.get_name_leafdata());
    if (peer_reset_reason.is_set || is_set(peer_reset_reason.operation)) leaf_name_data.push_back(peer_reset_reason.get_name_leafdata());
    if (previous_connection_state.is_set || is_set(previous_connection_state.operation)) leaf_name_data.push_back(previous_connection_state.get_name_leafdata());
    if (read_armed.is_set || is_set(read_armed.operation)) leaf_name_data.push_back(read_armed.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.operation)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (reset_notification_sent.is_set || is_set(reset_notification_sent.operation)) leaf_name_data.push_back(reset_notification_sent.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.operation)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.operation)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.operation)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.operation)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.operation)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (second_last_k_aexpiry_reset.is_set || is_set(second_last_k_aexpiry_reset.operation)) leaf_name_data.push_back(second_last_k_aexpiry_reset.get_name_leafdata());
    if (second_last_k_astart_reset.is_set || is_set(second_last_k_astart_reset.operation)) leaf_name_data.push_back(second_last_k_astart_reset.get_name_leafdata());
    if (second_last_write_event.is_set || is_set(second_last_write_event.operation)) leaf_name_data.push_back(second_last_write_event.get_name_leafdata());
    if (socket_read_bytes.is_set || is_set(socket_read_bytes.operation)) leaf_name_data.push_back(socket_read_bytes.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.operation)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.operation)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.operation)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.operation)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (time_last_cb.is_set || is_set(time_last_cb.operation)) leaf_name_data.push_back(time_last_cb.get_name_leafdata());
    if (time_last_cb_reset.is_set || is_set(time_last_cb_reset.operation)) leaf_name_data.push_back(time_last_cb_reset.get_name_leafdata());
    if (time_last_fb.is_set || is_set(time_last_fb.operation)) leaf_name_data.push_back(time_last_fb.get_name_leafdata());
    if (time_since_connection_last_dropped.is_set || is_set(time_since_connection_last_dropped.operation)) leaf_name_data.push_back(time_since_connection_last_dropped.get_name_leafdata());
    if (time_since_last_read.is_set || is_set(time_since_last_read.operation)) leaf_name_data.push_back(time_since_last_read.get_name_leafdata());
    if (time_since_last_read_reset.is_set || is_set(time_since_last_read_reset.operation)) leaf_name_data.push_back(time_since_last_read_reset.get_name_leafdata());
    if (time_since_last_update.is_set || is_set(time_since_last_update.operation)) leaf_name_data.push_back(time_since_last_update.get_name_leafdata());
    if (time_since_last_write.is_set || is_set(time_since_last_write.operation)) leaf_name_data.push_back(time_since_last_write.get_name_leafdata());
    if (time_since_last_write_reset.is_set || is_set(time_since_last_write_reset.operation)) leaf_name_data.push_back(time_since_last_write_reset.get_name_leafdata());
    if (time_since_second_last_write.is_set || is_set(time_since_second_last_write.operation)) leaf_name_data.push_back(time_since_second_last_write.get_name_leafdata());
    if (time_since_second_last_write_reset.is_set || is_set(time_since_second_last_write_reset.operation)) leaf_name_data.push_back(time_since_second_last_write_reset.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (update_bytes_read.is_set || is_set(update_bytes_read.operation)) leaf_name_data.push_back(update_bytes_read.get_name_leafdata());
    if (update_messages_in.is_set || is_set(update_messages_in.operation)) leaf_name_data.push_back(update_messages_in.get_name_leafdata());
    if (update_messages_out.is_set || is_set(update_messages_out.operation)) leaf_name_data.push_back(update_messages_out.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (write_armed.is_set || is_set(write_armed.operation)) leaf_name_data.push_back(write_armed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-data")
    {
        for(auto const & c : af_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData>();
        c->parent = this;
        af_data.push_back(std::move(c));
        children[segment_path] = af_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "message-statistics")
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
        else
        {
            message_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics>();
            message_statistics->parent = this;
            children["message-statistics"] = message_statistics;
        }
        return children.at("message-statistics");
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
        else
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics>();
            performance_statistics->parent = this;
            children["performance-statistics"] = performance_statistics;
        }
        return children.at("performance-statistics");
    }

    if(child_yang_name == "received-notification-info")
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
        else
        {
            received_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo>();
            received_notification_info->parent = this;
            children["received-notification-info"] = received_notification_info;
        }
        return children.at("received-notification-info");
    }

    if(child_yang_name == "send-notification-info")
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
        else
        {
            send_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo>();
            send_notification_info->parent = this;
            children["send-notification-info"] = send_notification_info;
        }
        return children.at("send-notification-info");
    }

    if(child_yang_name == "tcp-init-sync-done-time-spec")
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        else
        {
            tcp_init_sync_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec>();
            tcp_init_sync_done_time_spec->parent = this;
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        return children.at("tcp-init-sync-done-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-phase-two-time-spec")
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        else
        {
            tcp_init_sync_phase_two_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec>();
            tcp_init_sync_phase_two_time_spec->parent = this;
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        return children.at("tcp-init-sync-phase-two-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-time-spec")
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        else
        {
            tcp_init_sync_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec>();
            tcp_init_sync_time_spec->parent = this;
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        return children.at("tcp-init-sync-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::get_children()
{
    for (auto const & c : af_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("message-statistics") == children.end())
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
    }

    if(children.find("performance-statistics") == children.end())
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
    }

    if(children.find("received-notification-info") == children.end())
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
    }

    if(children.find("send-notification-info") == children.end())
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
    }

    if(children.find("tcp-init-sync-done-time-spec") == children.end())
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
    }

    if(children.find("tcp-init-sync-phase-two-time-spec") == children.end())
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
    }

    if(children.find("tcp-init-sync-time-spec") == children.end())
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
    }
    if(value_path == "actual-last-write-bytes")
    {
        actual_last_write_bytes = value;
    }
    if(value_path == "actual-last-write-reset-bytes")
    {
        actual_last_write_reset_bytes = value;
    }
    if(value_path == "actual-second-last-write-bytes")
    {
        actual_second_last_write_bytes = value;
    }
    if(value_path == "actual-second-last-write-reset-bytes")
    {
        actual_second_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-last-write-bytes")
    {
        attempted_last_write_bytes = value;
    }
    if(value_path == "attempted-last-write-reset-bytes")
    {
        attempted_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-second-last-write-bytes")
    {
        attempted_second_last_write_bytes = value;
    }
    if(value_path == "attempted-second-last-write-reset-bytes")
    {
        attempted_second_last_write_reset_bytes = value;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
    }
    if(value_path == "bfd-session-created-state")
    {
        bfd_session_created_state = value;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "bfd-state-ts")
    {
        bfd_state_ts = value;
    }
    if(value_path == "bytes-read")
    {
        bytes_read = value;
    }
    if(value_path == "bytes-written")
    {
        bytes_written = value;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
    }
    if(value_path == "connection-admin-status")
    {
        connection_admin_status = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-established-time")
    {
        connection_established_time = value;
    }
    if(value_path == "connection-local-port")
    {
        connection_local_port = value;
    }
    if(value_path == "connection-remote-port")
    {
        connection_remote_port = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "count-last-write")
    {
        count_last_write = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
    }
    if(value_path == "discard-data-bytes")
    {
        discard_data_bytes = value;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
    }
    if(value_path == "dynamic-neighbor")
    {
        dynamic_neighbor = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
    }
    if(value_path == "error-notifies-received")
    {
        error_notifies_received = value;
    }
    if(value_path == "error-notifies-sent")
    {
        error_notifies_sent = value;
    }
    if(value_path == "fpbsn-offset")
    {
        fpbsn_offset = value;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
    }
    if(value_path == "io-armed")
    {
        io_armed = value;
    }
    if(value_path == "is4-byte-as-capability-received")
    {
        is4_byte_as_capability_received = value;
    }
    if(value_path == "is4-byte-as-capability-sent")
    {
        is4_byte_as_capability_sent = value;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
    }
    if(value_path == "is-capability-negotiation-suppressed")
    {
        is_capability_negotiation_suppressed = value;
    }
    if(value_path == "is-ebgp-multihop-bgpmpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgpmpls_forwarding_disabled = value;
    }
    if(value_path == "is-ebgp-peer-as-league")
    {
        is_ebgp_peer_as_league = value;
    }
    if(value_path == "is-ebgp-peer-common-admin")
    {
        is_ebgp_peer_common_admin = value;
    }
    if(value_path == "is-external-neighbor-not-directly-connected")
    {
        is_external_neighbor_not_directly_connected = value;
    }
    if(value_path == "is-gr-aware")
    {
        is_gr_aware = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
    }
    if(value_path == "is-out-of-memory-shutdown")
    {
        is_out_of_memory_shutdown = value;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
    }
    if(value_path == "is-read-disabled")
    {
        is_read_disabled = value;
    }
    if(value_path == "is-route-refresh-capability-received")
    {
        is_route_refresh_capability_received = value;
    }
    if(value_path == "is-route-refresh-old-capability-received")
    {
        is_route_refresh_old_capability_received = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "last-ackd-seq-no")
    {
        last_ackd_seq_no = value;
    }
    if(value_path == "last-k-aerror-reset")
    {
        last_k_aerror_reset = value;
    }
    if(value_path == "last-k-aexpiry-reset")
    {
        last_k_aexpiry_reset = value;
    }
    if(value_path == "last-k-anotsent-reset")
    {
        last_k_anotsent_reset = value;
    }
    if(value_path == "last-k-astart-reset")
    {
        last_k_astart_reset = value;
    }
    if(value_path == "last-notify-error-code")
    {
        last_notify_error_code = value;
    }
    if(value_path == "last-notify-error-subcode")
    {
        last_notify_error_subcode = value;
    }
    if(value_path == "last-write-event")
    {
        last_write_event = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
    }
    if(value_path == "multi-protocol-capability-received")
    {
        multi_protocol_capability_received = value;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
    }
    if(value_path == "negotiated-protocol-version")
    {
        negotiated_protocol_version = value;
    }
    if(value_path == "neighbor-interface-handle")
    {
        neighbor_interface_handle = value;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "open-check-error-code")
    {
        open_check_error_code = value;
    }
    if(value_path == "peer-error-code")
    {
        peer_error_code = value;
    }
    if(value_path == "peer-reset-reason")
    {
        peer_reset_reason = value;
    }
    if(value_path == "previous-connection-state")
    {
        previous_connection_state = value;
    }
    if(value_path == "read-armed")
    {
        read_armed = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
    }
    if(value_path == "reset-notification-sent")
    {
        reset_notification_sent = value;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
    }
    if(value_path == "second-last-k-aexpiry-reset")
    {
        second_last_k_aexpiry_reset = value;
    }
    if(value_path == "second-last-k-astart-reset")
    {
        second_last_k_astart_reset = value;
    }
    if(value_path == "second-last-write-event")
    {
        second_last_write_event = value;
    }
    if(value_path == "socket-read-bytes")
    {
        socket_read_bytes = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
    }
    if(value_path == "time-last-cb")
    {
        time_last_cb = value;
    }
    if(value_path == "time-last-cb-reset")
    {
        time_last_cb_reset = value;
    }
    if(value_path == "time-last-fb")
    {
        time_last_fb = value;
    }
    if(value_path == "time-since-connection-last-dropped")
    {
        time_since_connection_last_dropped = value;
    }
    if(value_path == "time-since-last-read")
    {
        time_since_last_read = value;
    }
    if(value_path == "time-since-last-read-reset")
    {
        time_since_last_read_reset = value;
    }
    if(value_path == "time-since-last-update")
    {
        time_since_last_update = value;
    }
    if(value_path == "time-since-last-write")
    {
        time_since_last_write = value;
    }
    if(value_path == "time-since-last-write-reset")
    {
        time_since_last_write_reset = value;
    }
    if(value_path == "time-since-second-last-write")
    {
        time_since_second_last_write = value;
    }
    if(value_path == "time-since-second-last-write-reset")
    {
        time_since_second_last_write_reset = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "update-bytes-read")
    {
        update_bytes_read = value;
    }
    if(value_path == "update-messages-in")
    {
        update_messages_in = value;
    }
    if(value_path == "update-messages-out")
    {
        update_messages_out = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "write-armed")
    {
        write_armed = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::SendNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "send-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::~SendNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "send-notification-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::ReceivedNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "received-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::~ReceivedNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "received-notification-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::PerformanceStatistics()
    :
    active_collision{YType::uint32, "active-collision"},
    actives{YType::uint32, "actives"},
    control_to_read_thread_trigger{YType::uint32, "control-to-read-thread-trigger"},
    control_to_write_thread_trigger{YType::uint32, "control-to-write-thread-trigger"},
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    failed_post_actives{YType::uint32, "failed-post-actives"},
    high_throttled_read{YType::uint32, "high-throttled-read"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    last_nsr_scoped_sync{YType::uint32, "last-nsr-scoped-sync"},
    last_sent_seq_no{YType::uint32, "last-sent-seq-no"},
    low_throttled_read{YType::uint32, "low-throttled-read"},
    maximum_read_size{YType::uint32, "maximum-read-size"},
    nbr_fd{YType::int32, "nbr-fd"},
    nbr_flags{YType::uint32, "nbr-flags"},
    network_status{YType::uint32, "network-status"},
    nsr_oper_down_count{YType::uint32, "nsr-oper-down-count"},
    passive_collision{YType::uint32, "passive-collision"},
    passives{YType::uint32, "passives"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles{YType::uint32, "read-throttles"},
    rejected_passives{YType::uint32, "rejected-passives"},
    reset_flags{YType::uint32, "reset-flags"},
    reset_retries{YType::uint8, "reset-retries"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    sync_flags{YType::uint32, "sync-flags"},
    time_since_last_throttled_read{YType::uint32, "time-since-last-throttled-read"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "performance-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::has_data() const
{
    return active_collision.is_set
	|| actives.is_set
	|| control_to_read_thread_trigger.is_set
	|| control_to_write_thread_trigger.is_set
	|| data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| failed_post_actives.is_set
	|| high_throttled_read.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| last_nsr_scoped_sync.is_set
	|| last_sent_seq_no.is_set
	|| low_throttled_read.is_set
	|| maximum_read_size.is_set
	|| nbr_fd.is_set
	|| nbr_flags.is_set
	|| network_status.is_set
	|| nsr_oper_down_count.is_set
	|| passive_collision.is_set
	|| passives.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles.is_set
	|| rejected_passives.is_set
	|| reset_flags.is_set
	|| reset_retries.is_set
	|| subgroup_list_time.is_set
	|| sync_flags.is_set
	|| time_since_last_throttled_read.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_collision.operation)
	|| is_set(actives.operation)
	|| is_set(control_to_read_thread_trigger.operation)
	|| is_set(control_to_write_thread_trigger.operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(failed_post_actives.operation)
	|| is_set(high_throttled_read.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(last_nsr_scoped_sync.operation)
	|| is_set(last_sent_seq_no.operation)
	|| is_set(low_throttled_read.operation)
	|| is_set(maximum_read_size.operation)
	|| is_set(nbr_fd.operation)
	|| is_set(nbr_flags.operation)
	|| is_set(network_status.operation)
	|| is_set(nsr_oper_down_count.operation)
	|| is_set(passive_collision.operation)
	|| is_set(passives.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles.operation)
	|| is_set(rejected_passives.operation)
	|| is_set(reset_flags.operation)
	|| is_set(reset_retries.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(sync_flags.operation)
	|| is_set(time_since_last_throttled_read.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_collision.is_set || is_set(active_collision.operation)) leaf_name_data.push_back(active_collision.get_name_leafdata());
    if (actives.is_set || is_set(actives.operation)) leaf_name_data.push_back(actives.get_name_leafdata());
    if (control_to_read_thread_trigger.is_set || is_set(control_to_read_thread_trigger.operation)) leaf_name_data.push_back(control_to_read_thread_trigger.get_name_leafdata());
    if (control_to_write_thread_trigger.is_set || is_set(control_to_write_thread_trigger.operation)) leaf_name_data.push_back(control_to_write_thread_trigger.get_name_leafdata());
    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (failed_post_actives.is_set || is_set(failed_post_actives.operation)) leaf_name_data.push_back(failed_post_actives.get_name_leafdata());
    if (high_throttled_read.is_set || is_set(high_throttled_read.operation)) leaf_name_data.push_back(high_throttled_read.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (last_nsr_scoped_sync.is_set || is_set(last_nsr_scoped_sync.operation)) leaf_name_data.push_back(last_nsr_scoped_sync.get_name_leafdata());
    if (last_sent_seq_no.is_set || is_set(last_sent_seq_no.operation)) leaf_name_data.push_back(last_sent_seq_no.get_name_leafdata());
    if (low_throttled_read.is_set || is_set(low_throttled_read.operation)) leaf_name_data.push_back(low_throttled_read.get_name_leafdata());
    if (maximum_read_size.is_set || is_set(maximum_read_size.operation)) leaf_name_data.push_back(maximum_read_size.get_name_leafdata());
    if (nbr_fd.is_set || is_set(nbr_fd.operation)) leaf_name_data.push_back(nbr_fd.get_name_leafdata());
    if (nbr_flags.is_set || is_set(nbr_flags.operation)) leaf_name_data.push_back(nbr_flags.get_name_leafdata());
    if (network_status.is_set || is_set(network_status.operation)) leaf_name_data.push_back(network_status.get_name_leafdata());
    if (nsr_oper_down_count.is_set || is_set(nsr_oper_down_count.operation)) leaf_name_data.push_back(nsr_oper_down_count.get_name_leafdata());
    if (passive_collision.is_set || is_set(passive_collision.operation)) leaf_name_data.push_back(passive_collision.get_name_leafdata());
    if (passives.is_set || is_set(passives.operation)) leaf_name_data.push_back(passives.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles.is_set || is_set(read_throttles.operation)) leaf_name_data.push_back(read_throttles.get_name_leafdata());
    if (rejected_passives.is_set || is_set(rejected_passives.operation)) leaf_name_data.push_back(rejected_passives.get_name_leafdata());
    if (reset_flags.is_set || is_set(reset_flags.operation)) leaf_name_data.push_back(reset_flags.get_name_leafdata());
    if (reset_retries.is_set || is_set(reset_retries.operation)) leaf_name_data.push_back(reset_retries.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (time_since_last_throttled_read.is_set || is_set(time_since_last_throttled_read.operation)) leaf_name_data.push_back(time_since_last_throttled_read.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-collision")
    {
        active_collision = value;
    }
    if(value_path == "actives")
    {
        actives = value;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger = value;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger = value;
    }
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "failed-post-actives")
    {
        failed_post_actives = value;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync = value;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no = value;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read = value;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size = value;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd = value;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags = value;
    }
    if(value_path == "network-status")
    {
        network_status = value;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count = value;
    }
    if(value_path == "passive-collision")
    {
        passive_collision = value;
    }
    if(value_path == "passives")
    {
        passives = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles")
    {
        read_throttles = value;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives = value;
    }
    if(value_path == "reset-flags")
    {
        reset_flags = value;
    }
    if(value_path == "reset-retries")
    {
        reset_retries = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::MessageStatistics()
    :
    keepalive(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive>())
	,notification(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification>())
	,open(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open>())
	,route_refresh(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh>())
	,total(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total>())
	,update(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update>())
{
    keepalive->parent = this;
    children["keepalive"] = keepalive;

    notification->parent = this;
    children["notification"] = notification;

    open->parent = this;
    children["open"] = open;

    route_refresh->parent = this;
    children["route-refresh"] = route_refresh;

    total->parent = this;
    children["total"] = total;

    update->parent = this;
    children["update"] = update;

    yang_name = "message-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::~MessageStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (open !=  nullptr && open->has_data())
	|| (route_refresh !=  nullptr && route_refresh->has_data())
	|| (total !=  nullptr && total->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (open !=  nullptr && open->has_operation())
	|| (route_refresh !=  nullptr && route_refresh->has_operation())
	|| (total !=  nullptr && total->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
        else
        {
            keepalive = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive>();
            keepalive->parent = this;
            children["keepalive"] = keepalive;
        }
        return children.at("keepalive");
    }

    if(child_yang_name == "notification")
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
        else
        {
            notification = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification>();
            notification->parent = this;
            children["notification"] = notification;
        }
        return children.at("notification");
    }

    if(child_yang_name == "open")
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
        else
        {
            open = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open>();
            open->parent = this;
            children["open"] = open;
        }
        return children.at("open");
    }

    if(child_yang_name == "route-refresh")
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
        else
        {
            route_refresh = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh>();
            route_refresh->parent = this;
            children["route-refresh"] = route_refresh;
        }
        return children.at("route-refresh");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    if(child_yang_name == "update")
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
        else
        {
            update = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update>();
            update->parent = this;
            children["update"] = update;
        }
        return children.at("update");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_children()
{
    if(children.find("keepalive") == children.end())
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
    }

    if(children.find("notification") == children.end())
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
    }

    if(children.find("open") == children.end())
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
    }

    if(children.find("route-refresh") == children.end())
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    if(children.find("update") == children.end())
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Open()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "open"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::~Open()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Open' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Notification()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "notification"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::~Notification()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Update()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "update"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Keepalive()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "keepalive"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::~Keepalive()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteRefresh' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Total()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "total"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::TcpInitSyncTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::~TcpInitSyncTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::TcpInitSyncPhaseTwoTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-phase-two-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::~TcpInitSyncPhaseTwoTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-phase-two-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncPhaseTwoTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::TcpInitSyncDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-done-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::~TcpInitSyncDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-done-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncDoneTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_active{YType::boolean, "gshut-active"},
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{
    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::has_data() const
{
    return gshut_active.is_set
	|| gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_locpref.is_set
	|| gshut_locpref_set.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_active.operation)
	|| is_set(gshut_exists.operation)
	|| is_set(gshut_local_active.operation)
	|| is_set(gshut_locpref.operation)
	|| is_set(gshut_locpref_set.operation)
	|| is_set(gshut_prepends.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_active.is_set || is_set(gshut_active.operation)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_exists.is_set || is_set(gshut_exists.operation)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.operation)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.operation)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.operation)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.operation)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-active")
    {
        gshut_active = value;
    }
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::AfData()
    :
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    acked_version{YType::uint32, "acked-version"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_def_vrf_imp_disable{YType::boolean, "advertise-afi-def-vrf-imp-disable"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    advertise_afi_eo_r_ready{YType::boolean, "advertise-afi-eo-r-ready"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_afi_vrf_re_imp_disable{YType::boolean, "advertise-afi-vrf-re-imp-disable"},
    advertise_evp_nv4afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv4afi-def-vrf-imp-disable"},
    advertise_evp_nv4afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv4afi-vrf-re-imp-disable"},
    advertise_evp_nv6afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv6afi-def-vrf-imp-disable"},
    advertise_evp_nv6afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv6afi-vrf-re-imp-disable"},
    advertise_local_labeled_route_unicast{YType::boolean, "advertise-local-labeled-route-unicast"},
    advertise_rt_type{YType::uint8, "advertise-rt-type"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    af_name{YType::enumeration, "af-name"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    encapsulation_type{YType::uint32, "encapsulation-type"},
    eo_r_received_in_read_only{YType::boolean, "eo-r-received-in-read-only"},
    filter_group_index{YType::uint32, "filter-group-index"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_default_originate_sent{YType::boolean, "is-default-originate-sent"},
    is_ext_nh_encoding_capability_received{YType::boolean, "is-ext-nh-encoding-capability-received"},
    is_ext_nh_encoding_capability_sent{YType::boolean, "is-ext-nh-encoding-capability-sent"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_update_leaving{YType::boolean, "is-update-leaving"},
    is_update_throttled{YType::boolean, "is-update-throttled"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    local_restart_time{YType::uint32, "local-restart-time"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    neighbor_version{YType::uint32, "neighbor-version"},
    number_of_best_externalpaths{YType::uint32, "number-of-best-externalpaths"},
    number_of_bestpaths{YType::uint32, "number-of-bestpaths"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    orr_group_index{YType::uint32, "orr-group-index"},
    orr_group_name{YType::str, "orr-group-name"},
    outstanding_version{YType::uint32, "outstanding-version"},
    outstanding_version_max{YType::uint32, "outstanding-version-max"},
    prefixes_accepted{YType::uint32, "prefixes-accepted"},
    prefixes_advertised{YType::uint32, "prefixes-advertised"},
    prefixes_be_advertised{YType::uint32, "prefixes-be-advertised"},
    prefixes_denied{YType::uint32, "prefixes-denied"},
    prefixes_denied_no_policy{YType::uint32, "prefixes-denied-no-policy"},
    prefixes_denied_non_cumulative{YType::uint32, "prefixes-denied-non-cumulative"},
    prefixes_denied_orf_policy{YType::uint32, "prefixes-denied-orf-policy"},
    prefixes_denied_policy{YType::uint32, "prefixes-denied-policy"},
    prefixes_denied_rt_permit{YType::uint32, "prefixes-denied-rt-permit"},
    prefixes_suppressed{YType::uint32, "prefixes-suppressed"},
    prefixes_synced{YType::uint32, "prefixes-synced"},
    prefixes_withdrawn{YType::uint32, "prefixes-withdrawn"},
    prefixes_withdrawn_not_found{YType::uint32, "prefixes-withdrawn-not-found"},
    refresh_acked_version{YType::uint32, "refresh-acked-version"},
    refresh_target_version{YType::uint32, "refresh-target-version"},
    refresh_version{YType::uint32, "refresh-version"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    route_refreshes_received{YType::uint32, "route-refreshes-received"},
    route_refreshes_sent{YType::uint32, "route-refreshes-sent"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    synced_acked_version{YType::uint32, "synced-acked-version"},
    update_group_number{YType::uint32, "update-group-number"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    weight{YType::uint32, "weight"}
    	,
    neighbor_af_performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>())
{
    neighbor_af_performance_statistics->parent = this;
    children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;

    yang_name = "af-data"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::has_data() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return accept_own_enabled.is_set
	|| acked_version.is_set
	|| address_family_long_lived_time.is_set
	|| advertise_afi.is_set
	|| advertise_afi_def_vrf_imp_disable.is_set
	|| advertise_afi_disable.is_set
	|| advertise_afi_eo_r_ready.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv4afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv4afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv6afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv6afi_vrf_re_imp_disable.is_set
	|| advertise_local_labeled_route_unicast.is_set
	|| advertise_rt_type.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| af_name.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_disable.is_set
	|| afrpki_signal_ibgp.is_set
	|| afrpki_use_validity.is_set
	|| allow_as_in_count.is_set
	|| always_use_next_hop_local.is_set
	|| encapsulation_type.is_set
	|| eo_r_received_in_read_only.is_set
	|| filter_group_index.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| flowspec_validation_d_isable.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_addpath_receive_operational.is_set
	|| is_addpath_send_operational.is_set
	|| is_advertise_permanent_network.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_advertised_orf_receive.is_set
	|| is_advertised_orf_send.is_set
	|| is_aigp_set.is_set
	|| is_allow_as_in_set.is_set
	|| is_as_override_set.is_set
	|| is_default_originate_sent.is_set
	|| is_ext_nh_encoding_capability_received.is_set
	|| is_ext_nh_encoding_capability_sent.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_orf_send_scheduled.is_set
	|| is_orf_sent.is_set
	|| is_orr_root_address_configured.is_set
	|| is_peer_orf_capable.is_set
	|| is_prefix_orf_present.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_received_orf_send_capable.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| is_send_mcast_attr.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_update_deferred.is_set
	|| is_update_leaving.is_set
	|| is_update_throttled.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| local_restart_time.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_limit.is_set
	|| max_prefix_restart_time.is_set
	|| max_prefix_threshold_percent.is_set
	|| neighbor_default_originate.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| neighbor_version.is_set
	|| number_of_best_externalpaths.is_set
	|| number_of_bestpaths.is_set
	|| orf_entries_received.is_set
	|| orr_group_index.is_set
	|| orr_group_name.is_set
	|| outstanding_version.is_set
	|| outstanding_version_max.is_set
	|| prefixes_accepted.is_set
	|| prefixes_advertised.is_set
	|| prefixes_be_advertised.is_set
	|| prefixes_denied.is_set
	|| prefixes_denied_no_policy.is_set
	|| prefixes_denied_non_cumulative.is_set
	|| prefixes_denied_orf_policy.is_set
	|| prefixes_denied_policy.is_set
	|| prefixes_denied_rt_permit.is_set
	|| prefixes_suppressed.is_set
	|| prefixes_synced.is_set
	|| prefixes_withdrawn.is_set
	|| prefixes_withdrawn_not_found.is_set
	|| refresh_acked_version.is_set
	|| refresh_target_version.is_set
	|| refresh_version.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_from_updates.is_set
	|| restart_time.is_set
	|| rib_purge_timeout_value.is_set
	|| route_policy_default_originate.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_prefix_orf.is_set
	|| route_refreshes_received.is_set
	|| route_refreshes_sent.is_set
	|| selective_multipath_eligible.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| stale_path_timeout.is_set
	|| synced_acked_version.is_set
	|| update_group_number.is_set
	|| use_max_prefix_warning_only.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| weight.is_set
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(accept_own_enabled.operation)
	|| is_set(acked_version.operation)
	|| is_set(address_family_long_lived_time.operation)
	|| is_set(advertise_afi.operation)
	|| is_set(advertise_afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_afi_disable.operation)
	|| is_set(advertise_afi_eo_r_ready.operation)
	|| is_set(advertise_afi_reorg.operation)
	|| is_set(advertise_afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_local_labeled_route_unicast.operation)
	|| is_set(advertise_rt_type.operation)
	|| is_set(advertise_v4_flags.operation)
	|| is_set(advertise_v6_flags.operation)
	|| is_set(af_name.operation)
	|| is_set(afrpki_allow_invalid.operation)
	|| is_set(afrpki_disable.operation)
	|| is_set(afrpki_signal_ibgp.operation)
	|| is_set(afrpki_use_validity.operation)
	|| is_set(allow_as_in_count.operation)
	|| is_set(always_use_next_hop_local.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(eo_r_received_in_read_only.operation)
	|| is_set(filter_group_index.operation)
	|| is_set(flowspec_redirect_validation_d_isable.operation)
	|| is_set(flowspec_validation_d_isable.operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation)
	|| is_set(is_add_path_receive_capability_advertised.operation)
	|| is_set(is_add_path_receive_capability_received.operation)
	|| is_set(is_add_path_send_capability_advertised.operation)
	|| is_set(is_add_path_send_capability_received.operation)
	|| is_set(is_addpath_receive_operational.operation)
	|| is_set(is_addpath_send_operational.operation)
	|| is_set(is_advertise_permanent_network.operation)
	|| is_set(is_advertised_graceful_restart.operation)
	|| is_set(is_advertised_orf_receive.operation)
	|| is_set(is_advertised_orf_send.operation)
	|| is_set(is_aigp_set.operation)
	|| is_set(is_allow_as_in_set.operation)
	|| is_set(is_as_override_set.operation)
	|| is_set(is_default_originate_sent.operation)
	|| is_set(is_ext_nh_encoding_capability_received.operation)
	|| is_set(is_ext_nh_encoding_capability_sent.operation)
	|| is_set(is_graceful_restart_state_flag.operation)
	|| is_set(is_legacy_pe_rt.operation)
	|| is_set(is_neighbor_af_capable.operation)
	|| is_set(is_neighbor_ebgp_without_inbound_policy.operation)
	|| is_set(is_neighbor_ebgp_without_outbound_policy.operation)
	|| is_set(is_neighbor_route_reflector_client.operation)
	|| is_set(is_orf_send_scheduled.operation)
	|| is_set(is_orf_sent.operation)
	|| is_set(is_orr_root_address_configured.operation)
	|| is_set(is_peer_orf_capable.operation)
	|| is_set(is_prefix_orf_present.operation)
	|| is_set(is_received_graceful_restart_capable.operation)
	|| is_set(is_received_orf_receive_capable.operation)
	|| is_set(is_received_orf_send_capable.operation)
	|| is_set(is_rt_present.operation)
	|| is_set(is_rt_present_standby.operation)
	|| is_set(is_send_mcast_attr.operation)
	|| is_set(is_soft_reconfiguration_inbound_allowed.operation)
	|| is_set(is_update_deferred.operation)
	|| is_set(is_update_leaving.operation)
	|| is_set(is_update_throttled.operation)
	|| is_set(is_use_soft_reconfiguration_always_on.operation)
	|| is_set(local_restart_time.operation)
	|| is_set(long_lived_graceful_restart_capability_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_accept.operation)
	|| is_set(long_lived_graceful_restart_stale_time_configured.operation)
	|| is_set(long_lived_graceful_restart_stale_time_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_sent.operation)
	|| is_set(max_prefix_discard_extra_paths.operation)
	|| is_set(max_prefix_exceed_discard_paths.operation)
	|| is_set(max_prefix_limit.operation)
	|| is_set(max_prefix_restart_time.operation)
	|| is_set(max_prefix_threshold_percent.operation)
	|| is_set(neighbor_default_originate.operation)
	|| is_set(neighbor_long_lived_graceful_restart_capable.operation)
	|| is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)
	|| is_set(neighbor_preserved_forwarding_state.operation)
	|| is_set(neighbor_preserved_long_lived_forwarding_state.operation)
	|| is_set(neighbor_version.operation)
	|| is_set(number_of_best_externalpaths.operation)
	|| is_set(number_of_bestpaths.operation)
	|| is_set(orf_entries_received.operation)
	|| is_set(orr_group_index.operation)
	|| is_set(orr_group_name.operation)
	|| is_set(outstanding_version.operation)
	|| is_set(outstanding_version_max.operation)
	|| is_set(prefixes_accepted.operation)
	|| is_set(prefixes_advertised.operation)
	|| is_set(prefixes_be_advertised.operation)
	|| is_set(prefixes_denied.operation)
	|| is_set(prefixes_denied_no_policy.operation)
	|| is_set(prefixes_denied_non_cumulative.operation)
	|| is_set(prefixes_denied_orf_policy.operation)
	|| is_set(prefixes_denied_policy.operation)
	|| is_set(prefixes_denied_rt_permit.operation)
	|| is_set(prefixes_suppressed.operation)
	|| is_set(prefixes_synced.operation)
	|| is_set(prefixes_withdrawn.operation)
	|| is_set(prefixes_withdrawn_not_found.operation)
	|| is_set(refresh_acked_version.operation)
	|| is_set(refresh_target_version.operation)
	|| is_set(refresh_version.operation)
	|| is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)
	|| is_set(remove_private_as_entire_aspath_from_updates.operation)
	|| is_set(remove_private_as_from_inbound_updates.operation)
	|| is_set(remove_private_as_from_updates.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout_value.operation)
	|| is_set(route_policy_default_originate.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_policy_prefix_orf.operation)
	|| is_set(route_refreshes_received.operation)
	|| is_set(route_refreshes_sent.operation)
	|| is_set(selective_multipath_eligible.operation)
	|| is_set(sent_community_to_neighbor.operation)
	|| is_set(sent_extended_community_to_neighbor.operation)
	|| is_set(sent_gshut_community_to_neighbor.operation)
	|| is_set(stale_path_timeout.operation)
	|| is_set(synced_acked_version.operation)
	|| is_set(update_group_number.operation)
	|| is_set(use_max_prefix_warning_only.operation)
	|| is_set(vpn_update_gen_enabled.operation)
	|| is_set(vpn_update_gen_trigger_enabled.operation)
	|| is_set(weight.operation)
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_own_enabled.is_set || is_set(accept_own_enabled.operation)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (acked_version.is_set || is_set(acked_version.operation)) leaf_name_data.push_back(acked_version.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.operation)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.operation)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_def_vrf_imp_disable.is_set || is_set(advertise_afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.operation)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (advertise_afi_eo_r_ready.is_set || is_set(advertise_afi_eo_r_ready.operation)) leaf_name_data.push_back(advertise_afi_eo_r_ready.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.operation)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_afi_vrf_re_imp_disable.is_set || is_set(advertise_afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_local_labeled_route_unicast.is_set || is_set(advertise_local_labeled_route_unicast.operation)) leaf_name_data.push_back(advertise_local_labeled_route_unicast.get_name_leafdata());
    if (advertise_rt_type.is_set || is_set(advertise_rt_type.operation)) leaf_name_data.push_back(advertise_rt_type.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.operation)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.operation)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.operation)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.operation)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.operation)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.operation)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.operation)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.operation)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (eo_r_received_in_read_only.is_set || is_set(eo_r_received_in_read_only.operation)) leaf_name_data.push_back(eo_r_received_in_read_only.get_name_leafdata());
    if (filter_group_index.is_set || is_set(filter_group_index.operation)) leaf_name_data.push_back(filter_group_index.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.operation)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.operation)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.operation)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.operation)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.operation)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.operation)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.operation)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.operation)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.operation)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.operation)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.operation)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_default_originate_sent.is_set || is_set(is_default_originate_sent.operation)) leaf_name_data.push_back(is_default_originate_sent.get_name_leafdata());
    if (is_ext_nh_encoding_capability_received.is_set || is_set(is_ext_nh_encoding_capability_received.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_received.get_name_leafdata());
    if (is_ext_nh_encoding_capability_sent.is_set || is_set(is_ext_nh_encoding_capability_sent.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_sent.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.operation)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.operation)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.operation)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.operation)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.operation)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.operation)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.operation)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.operation)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.operation)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.operation)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.operation)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.operation)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.operation)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.operation)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.operation)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.operation)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.operation)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_update_leaving.is_set || is_set(is_update_leaving.operation)) leaf_name_data.push_back(is_update_leaving.get_name_leafdata());
    if (is_update_throttled.is_set || is_set(is_update_throttled.operation)) leaf_name_data.push_back(is_update_throttled.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.operation)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.operation)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.operation)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.operation)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.operation)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.operation)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.operation)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.operation)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (neighbor_version.is_set || is_set(neighbor_version.operation)) leaf_name_data.push_back(neighbor_version.get_name_leafdata());
    if (number_of_best_externalpaths.is_set || is_set(number_of_best_externalpaths.operation)) leaf_name_data.push_back(number_of_best_externalpaths.get_name_leafdata());
    if (number_of_bestpaths.is_set || is_set(number_of_bestpaths.operation)) leaf_name_data.push_back(number_of_bestpaths.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.operation)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.operation)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.operation)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (outstanding_version.is_set || is_set(outstanding_version.operation)) leaf_name_data.push_back(outstanding_version.get_name_leafdata());
    if (outstanding_version_max.is_set || is_set(outstanding_version_max.operation)) leaf_name_data.push_back(outstanding_version_max.get_name_leafdata());
    if (prefixes_accepted.is_set || is_set(prefixes_accepted.operation)) leaf_name_data.push_back(prefixes_accepted.get_name_leafdata());
    if (prefixes_advertised.is_set || is_set(prefixes_advertised.operation)) leaf_name_data.push_back(prefixes_advertised.get_name_leafdata());
    if (prefixes_be_advertised.is_set || is_set(prefixes_be_advertised.operation)) leaf_name_data.push_back(prefixes_be_advertised.get_name_leafdata());
    if (prefixes_denied.is_set || is_set(prefixes_denied.operation)) leaf_name_data.push_back(prefixes_denied.get_name_leafdata());
    if (prefixes_denied_no_policy.is_set || is_set(prefixes_denied_no_policy.operation)) leaf_name_data.push_back(prefixes_denied_no_policy.get_name_leafdata());
    if (prefixes_denied_non_cumulative.is_set || is_set(prefixes_denied_non_cumulative.operation)) leaf_name_data.push_back(prefixes_denied_non_cumulative.get_name_leafdata());
    if (prefixes_denied_orf_policy.is_set || is_set(prefixes_denied_orf_policy.operation)) leaf_name_data.push_back(prefixes_denied_orf_policy.get_name_leafdata());
    if (prefixes_denied_policy.is_set || is_set(prefixes_denied_policy.operation)) leaf_name_data.push_back(prefixes_denied_policy.get_name_leafdata());
    if (prefixes_denied_rt_permit.is_set || is_set(prefixes_denied_rt_permit.operation)) leaf_name_data.push_back(prefixes_denied_rt_permit.get_name_leafdata());
    if (prefixes_suppressed.is_set || is_set(prefixes_suppressed.operation)) leaf_name_data.push_back(prefixes_suppressed.get_name_leafdata());
    if (prefixes_synced.is_set || is_set(prefixes_synced.operation)) leaf_name_data.push_back(prefixes_synced.get_name_leafdata());
    if (prefixes_withdrawn.is_set || is_set(prefixes_withdrawn.operation)) leaf_name_data.push_back(prefixes_withdrawn.get_name_leafdata());
    if (prefixes_withdrawn_not_found.is_set || is_set(prefixes_withdrawn_not_found.operation)) leaf_name_data.push_back(prefixes_withdrawn_not_found.get_name_leafdata());
    if (refresh_acked_version.is_set || is_set(refresh_acked_version.operation)) leaf_name_data.push_back(refresh_acked_version.get_name_leafdata());
    if (refresh_target_version.is_set || is_set(refresh_target_version.operation)) leaf_name_data.push_back(refresh_target_version.get_name_leafdata());
    if (refresh_version.is_set || is_set(refresh_version.operation)) leaf_name_data.push_back(refresh_version.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.operation)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.operation)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.operation)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.operation)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (route_refreshes_received.is_set || is_set(route_refreshes_received.operation)) leaf_name_data.push_back(route_refreshes_received.get_name_leafdata());
    if (route_refreshes_sent.is_set || is_set(route_refreshes_sent.operation)) leaf_name_data.push_back(route_refreshes_sent.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.operation)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.operation)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.operation)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.operation)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.operation)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (synced_acked_version.is_set || is_set(synced_acked_version.operation)) leaf_name_data.push_back(synced_acked_version.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.operation)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-standby")
    {
        for(auto const & c : extended_community_standby)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby>();
        c->parent = this;
        extended_community_standby.push_back(std::move(c));
        children[segment_path] = extended_community_standby.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-af-performance-statistics")
    {
        if(neighbor_af_performance_statistics != nullptr)
        {
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
        else
        {
            neighbor_af_performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>();
            neighbor_af_performance_statistics->parent = this;
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
        return children.at("neighbor-af-performance-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_children()
{
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community_standby)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("neighbor-af-performance-statistics") == children.end())
    {
        if(neighbor_af_performance_statistics != nullptr)
        {
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
    }
    if(value_path == "acked-version")
    {
        acked_version = value;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
    }
    if(value_path == "advertise-afi-def-vrf-imp-disable")
    {
        advertise_afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
    }
    if(value_path == "advertise-afi-eo-r-ready")
    {
        advertise_afi_eo_r_ready = value;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
    }
    if(value_path == "advertise-afi-vrf-re-imp-disable")
    {
        advertise_afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-def-vrf-imp-disable")
    {
        advertise_evp_nv4afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-vrf-re-imp-disable")
    {
        advertise_evp_nv4afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-def-vrf-imp-disable")
    {
        advertise_evp_nv6afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-vrf-re-imp-disable")
    {
        advertise_evp_nv6afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast = value;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type = value;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "eo-r-received-in-read-only")
    {
        eo_r_received_in_read_only = value;
    }
    if(value_path == "filter-group-index")
    {
        filter_group_index = value;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
    }
    if(value_path == "is-default-originate-sent")
    {
        is_default_originate_sent = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-received")
    {
        is_ext_nh_encoding_capability_received = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-sent")
    {
        is_ext_nh_encoding_capability_sent = value;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
    }
    if(value_path == "is-update-leaving")
    {
        is_update_leaving = value;
    }
    if(value_path == "is-update-throttled")
    {
        is_update_throttled = value;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
    }
    if(value_path == "neighbor-version")
    {
        neighbor_version = value;
    }
    if(value_path == "number-of-best-externalpaths")
    {
        number_of_best_externalpaths = value;
    }
    if(value_path == "number-of-bestpaths")
    {
        number_of_bestpaths = value;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
    }
    if(value_path == "outstanding-version")
    {
        outstanding_version = value;
    }
    if(value_path == "outstanding-version-max")
    {
        outstanding_version_max = value;
    }
    if(value_path == "prefixes-accepted")
    {
        prefixes_accepted = value;
    }
    if(value_path == "prefixes-advertised")
    {
        prefixes_advertised = value;
    }
    if(value_path == "prefixes-be-advertised")
    {
        prefixes_be_advertised = value;
    }
    if(value_path == "prefixes-denied")
    {
        prefixes_denied = value;
    }
    if(value_path == "prefixes-denied-no-policy")
    {
        prefixes_denied_no_policy = value;
    }
    if(value_path == "prefixes-denied-non-cumulative")
    {
        prefixes_denied_non_cumulative = value;
    }
    if(value_path == "prefixes-denied-orf-policy")
    {
        prefixes_denied_orf_policy = value;
    }
    if(value_path == "prefixes-denied-policy")
    {
        prefixes_denied_policy = value;
    }
    if(value_path == "prefixes-denied-rt-permit")
    {
        prefixes_denied_rt_permit = value;
    }
    if(value_path == "prefixes-suppressed")
    {
        prefixes_suppressed = value;
    }
    if(value_path == "prefixes-synced")
    {
        prefixes_synced = value;
    }
    if(value_path == "prefixes-withdrawn")
    {
        prefixes_withdrawn = value;
    }
    if(value_path == "prefixes-withdrawn-not-found")
    {
        prefixes_withdrawn_not_found = value;
    }
    if(value_path == "refresh-acked-version")
    {
        refresh_acked_version = value;
    }
    if(value_path == "refresh-target-version")
    {
        refresh_target_version = value;
    }
    if(value_path == "refresh-version")
    {
        refresh_version = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
    }
    if(value_path == "route-refreshes-received")
    {
        route_refreshes_received = value;
    }
    if(value_path == "route-refreshes-sent")
    {
        route_refreshes_sent = value;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
    }
    if(value_path == "synced-acked-version")
    {
        synced_acked_version = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::NeighborAfPerformanceStatistics()
    :
    processed_messages{YType::uint32, "processed-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    split_horizon_update_blocked{YType::uint32, "split-horizon-update-blocked"},
    split_horizon_update_transmit{YType::uint32, "split-horizon-update-transmit"},
    split_horizon_withdraw_blocked{YType::uint32, "split-horizon-withdraw-blocked"},
    split_horizon_withdraw_transmit{YType::uint32, "split-horizon-withdraw-transmit"},
    sub_group_pending_message_count{YType::uint32, "sub-group-pending-message-count"}
{
    yang_name = "neighbor-af-performance-statistics"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::~NeighborAfPerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_data() const
{
    return processed_messages.is_set
	|| sent_messages.is_set
	|| split_horizon_update_blocked.is_set
	|| split_horizon_update_transmit.is_set
	|| split_horizon_withdraw_blocked.is_set
	|| split_horizon_withdraw_transmit.is_set
	|| sub_group_pending_message_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(split_horizon_update_blocked.operation)
	|| is_set(split_horizon_update_transmit.operation)
	|| is_set(split_horizon_withdraw_blocked.operation)
	|| is_set(split_horizon_withdraw_transmit.operation)
	|| is_set(sub_group_pending_message_count.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfPerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_messages.is_set || is_set(processed_messages.operation)) leaf_name_data.push_back(processed_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (split_horizon_update_blocked.is_set || is_set(split_horizon_update_blocked.operation)) leaf_name_data.push_back(split_horizon_update_blocked.get_name_leafdata());
    if (split_horizon_update_transmit.is_set || is_set(split_horizon_update_transmit.operation)) leaf_name_data.push_back(split_horizon_update_transmit.get_name_leafdata());
    if (split_horizon_withdraw_blocked.is_set || is_set(split_horizon_withdraw_blocked.operation)) leaf_name_data.push_back(split_horizon_withdraw_blocked.get_name_leafdata());
    if (split_horizon_withdraw_transmit.is_set || is_set(split_horizon_withdraw_transmit.operation)) leaf_name_data.push_back(split_horizon_withdraw_transmit.get_name_leafdata());
    if (sub_group_pending_message_count.is_set || is_set(sub_group_pending_message_count.operation)) leaf_name_data.push_back(sub_group_pending_message_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-messages")
    {
        processed_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "split-horizon-update-blocked")
    {
        split_horizon_update_blocked = value;
    }
    if(value_path == "split-horizon-update-transmit")
    {
        split_horizon_update_transmit = value;
    }
    if(value_path == "split-horizon-withdraw-blocked")
    {
        split_horizon_withdraw_blocked = value;
    }
    if(value_path == "split-horizon-withdraw-transmit")
    {
        split_horizon_withdraw_transmit = value;
    }
    if(value_path == "sub-group-pending-message-count")
    {
        sub_group_pending_message_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community-standby"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunityStandby' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}


}
}

