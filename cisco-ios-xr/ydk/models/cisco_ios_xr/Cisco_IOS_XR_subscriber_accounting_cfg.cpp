
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_accounting_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_accounting_cfg {

SubscriberAccounting::SubscriberAccounting()
    :
    prepaid_configurations(std::make_shared<SubscriberAccounting::PrepaidConfigurations>())
{
    prepaid_configurations->parent = this;
    children["prepaid-configurations"] = prepaid_configurations;

    yang_name = "subscriber-accounting"; yang_parent_name = "Cisco-IOS-XR-subscriber-accounting-cfg";
}

SubscriberAccounting::~SubscriberAccounting()
{
}

bool SubscriberAccounting::has_data() const
{
    return (prepaid_configurations !=  nullptr && prepaid_configurations->has_data());
}

bool SubscriberAccounting::has_operation() const
{
    return is_set(operation)
	|| (prepaid_configurations !=  nullptr && prepaid_configurations->has_operation());
}

std::string SubscriberAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting";

    return path_buffer.str();

}

EntityPath SubscriberAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepaid-configurations")
    {
        if(prepaid_configurations != nullptr)
        {
            children["prepaid-configurations"] = prepaid_configurations;
        }
        else
        {
            prepaid_configurations = std::make_shared<SubscriberAccounting::PrepaidConfigurations>();
            prepaid_configurations->parent = this;
            children["prepaid-configurations"] = prepaid_configurations;
        }
        return children.at("prepaid-configurations");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberAccounting::get_children()
{
    if(children.find("prepaid-configurations") == children.end())
    {
        if(prepaid_configurations != nullptr)
        {
            children["prepaid-configurations"] = prepaid_configurations;
        }
    }

    return children;
}

void SubscriberAccounting::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberAccounting::clone_ptr() const
{
    return std::make_shared<SubscriberAccounting>();
}

std::string SubscriberAccounting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberAccounting::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberAccounting::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfigurations()
{
    yang_name = "prepaid-configurations"; yang_parent_name = "subscriber-accounting";
}

SubscriberAccounting::PrepaidConfigurations::~PrepaidConfigurations()
{
}

bool SubscriberAccounting::PrepaidConfigurations::has_data() const
{
    for (std::size_t index=0; index<prepaid_configuration.size(); index++)
    {
        if(prepaid_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::PrepaidConfigurations::has_operation() const
{
    for (std::size_t index=0; index<prepaid_configuration.size(); index++)
    {
        if(prepaid_configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberAccounting::PrepaidConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-configurations";

    return path_buffer.str();

}

EntityPath SubscriberAccounting::PrepaidConfigurations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::PrepaidConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepaid-configuration")
    {
        for(auto const & c : prepaid_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration>();
        c->parent = this;
        prepaid_configuration.push_back(std::move(c));
        children[segment_path] = prepaid_configuration.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberAccounting::PrepaidConfigurations::get_children()
{
    for (auto const & c : prepaid_configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberAccounting::PrepaidConfigurations::set_value(const std::string & value_path, std::string value)
{
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::PrepaidConfiguration()
    :
    prepaid_config_name{YType::str, "prepaid-config-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    author_method_list{YType::str, "author-method-list"},
    password{YType::str, "password"},
    time_hold{YType::int32, "time-hold"},
    time_threshold{YType::int32, "time-threshold"},
    time_valid{YType::int32, "time-valid"},
    traffic_direction{YType::str, "traffic-direction"},
    volume_threshold{YType::int32, "volume-threshold"}
{
    yang_name = "prepaid-configuration"; yang_parent_name = "prepaid-configurations";
}

SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::~PrepaidConfiguration()
{
}

bool SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::has_data() const
{
    return prepaid_config_name.is_set
	|| accounting_method_list.is_set
	|| author_method_list.is_set
	|| password.is_set
	|| time_hold.is_set
	|| time_threshold.is_set
	|| time_valid.is_set
	|| traffic_direction.is_set
	|| volume_threshold.is_set;
}

bool SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(prepaid_config_name.operation)
	|| is_set(accounting_method_list.operation)
	|| is_set(author_method_list.operation)
	|| is_set(password.operation)
	|| is_set(time_hold.operation)
	|| is_set(time_threshold.operation)
	|| is_set(time_valid.operation)
	|| is_set(traffic_direction.operation)
	|| is_set(volume_threshold.operation);
}

std::string SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepaid-configuration" <<"[prepaid-config-name='" <<prepaid_config_name <<"']";

    return path_buffer.str();

}

EntityPath SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:subscriber-accounting/prepaid-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_config_name.is_set || is_set(prepaid_config_name.operation)) leaf_name_data.push_back(prepaid_config_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.operation)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (author_method_list.is_set || is_set(author_method_list.operation)) leaf_name_data.push_back(author_method_list.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (time_hold.is_set || is_set(time_hold.operation)) leaf_name_data.push_back(time_hold.get_name_leafdata());
    if (time_threshold.is_set || is_set(time_threshold.operation)) leaf_name_data.push_back(time_threshold.get_name_leafdata());
    if (time_valid.is_set || is_set(time_valid.operation)) leaf_name_data.push_back(time_valid.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());
    if (volume_threshold.is_set || is_set(volume_threshold.operation)) leaf_name_data.push_back(volume_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::get_children()
{
    return children;
}

void SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prepaid-config-name")
    {
        prepaid_config_name = value;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
    }
    if(value_path == "author-method-list")
    {
        author_method_list = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "time-hold")
    {
        time_hold = value;
    }
    if(value_path == "time-threshold")
    {
        time_threshold = value;
    }
    if(value_path == "time-valid")
    {
        time_valid = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
    if(value_path == "volume-threshold")
    {
        volume_threshold = value;
    }
}


}
}

