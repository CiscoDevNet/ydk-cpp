
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_policy.hpp"

namespace ydk {
namespace ietf_diffserv_policy {

ActionTypeIdentity::ActionTypeIdentity()
     : Identity("ietf-diffserv-policy:action-type")
{
}

ActionTypeIdentity::~ActionTypeIdentity()
{
}

Policies::Policies()
{
    yang_name = "policies"; yang_parent_name = "ietf-diffserv-policy";
}

Policies::~Policies()
{
}

bool Policies::has_data() const
{
    for (std::size_t index=0; index<policy_entry.size(); index++)
    {
        if(policy_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::has_operation() const
{
    for (std::size_t index=0; index<policy_entry.size(); index++)
    {
        if(policy_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-policy:policies";

    return path_buffer.str();

}

const EntityPath Policies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-entry")
    {
        for(auto const & c : policy_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry>();
        c->parent = this;
        policy_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Policies::clone_ptr() const
{
    return std::make_shared<Policies>();
}

std::string Policies::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Policies::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Policies::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

Policies::PolicyEntry::PolicyEntry()
    :
    policy_name{YType::str, "policy-name"},
    policy_descr{YType::str, "policy-descr"}
{
    yang_name = "policy-entry"; yang_parent_name = "policies";
}

Policies::PolicyEntry::~PolicyEntry()
{
}

bool Policies::PolicyEntry::has_data() const
{
    for (std::size_t index=0; index<classifier_entry.size(); index++)
    {
        if(classifier_entry[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| policy_descr.is_set;
}

bool Policies::PolicyEntry::has_operation() const
{
    for (std::size_t index=0; index<classifier_entry.size(); index++)
    {
        if(classifier_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(policy_descr.operation);
}

std::string Policies::PolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-entry" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-diffserv-policy:policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_descr.is_set || is_set(policy_descr.operation)) leaf_name_data.push_back(policy_descr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry")
    {
        for(auto const & c : classifier_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry>();
        c->parent = this;
        classifier_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : classifier_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::PolicyEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "policy-descr")
    {
        policy_descr = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::ClassifierEntry()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    classifier_entry_filter_oper{YType::identityref, "classifier-entry-filter-oper"},
    classifier_entry_inline{YType::boolean, "classifier-entry-inline"}
{
    yang_name = "classifier-entry"; yang_parent_name = "policy-entry";
}

Policies::PolicyEntry::ClassifierEntry::~ClassifierEntry()
{
}

bool Policies::PolicyEntry::ClassifierEntry::has_data() const
{
    for (std::size_t index=0; index<classifier_action_entry_cfg.size(); index++)
    {
        if(classifier_action_entry_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_entry.size(); index++)
    {
        if(filter_entry[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| classifier_entry_filter_oper.is_set
	|| classifier_entry_inline.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::has_operation() const
{
    for (std::size_t index=0; index<classifier_action_entry_cfg.size(); index++)
    {
        if(classifier_action_entry_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_entry.size(); index++)
    {
        if(filter_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(classifier_entry_name.operation)
	|| is_set(classifier_entry_filter_oper.operation)
	|| is_set(classifier_entry_inline.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry" <<"[classifier-entry-name='" <<classifier_entry_name <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassifierEntry' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.operation)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_filter_oper.is_set || is_set(classifier_entry_filter_oper.operation)) leaf_name_data.push_back(classifier_entry_filter_oper.get_name_leafdata());
    if (classifier_entry_inline.is_set || is_set(classifier_entry_inline.operation)) leaf_name_data.push_back(classifier_entry_inline.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-action-entry-cfg")
    {
        for(auto const & c : classifier_action_entry_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg>();
        c->parent = this;
        classifier_action_entry_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "filter-entry")
    {
        for(auto const & c : filter_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry>();
        c->parent = this;
        filter_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : classifier_action_entry_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : filter_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
    }
    if(value_path == "classifier-entry-filter-oper")
    {
        classifier_entry_filter_oper = value;
    }
    if(value_path == "classifier-entry-inline")
    {
        classifier_entry_inline = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::FilterEntry()
    :
    filter_type{YType::identityref, "filter-type"},
    filter_logical_not{YType::boolean, "filter-logical-not"}
{
    yang_name = "filter-entry"; yang_parent_name = "classifier-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::~FilterEntry()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::has_data() const
{
    for (std::size_t index=0; index<destination_ip_address_cfg.size(); index++)
    {
        if(destination_ip_address_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_port_cfg.size(); index++)
    {
        if(destination_port_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dscp_cfg.size(); index++)
    {
        if(dscp_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protocol_cfg.size(); index++)
    {
        if(protocol_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_ip_address_cfg.size(); index++)
    {
        if(source_ip_address_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_port_cfg.size(); index++)
    {
        if(source_port_cfg[index]->has_data())
            return true;
    }
    return filter_type.is_set
	|| filter_logical_not.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::has_operation() const
{
    for (std::size_t index=0; index<destination_ip_address_cfg.size(); index++)
    {
        if(destination_ip_address_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_port_cfg.size(); index++)
    {
        if(destination_port_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dscp_cfg.size(); index++)
    {
        if(dscp_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protocol_cfg.size(); index++)
    {
        if(protocol_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_ip_address_cfg.size(); index++)
    {
        if(source_ip_address_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_port_cfg.size(); index++)
    {
        if(source_port_cfg[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| is_set(filter_logical_not.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-entry" <<"[filter-type='" <<filter_type <<"']" <<"[filter-logical-not='" <<filter_logical_not <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterEntry' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (filter_logical_not.is_set || is_set(filter_logical_not.operation)) leaf_name_data.push_back(filter_logical_not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-ip-address-cfg")
    {
        for(auto const & c : destination_ip_address_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg>();
        c->parent = this;
        destination_ip_address_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "destination-port-cfg")
    {
        for(auto const & c : destination_port_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg>();
        c->parent = this;
        destination_port_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "dscp-cfg")
    {
        for(auto const & c : dscp_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg>();
        c->parent = this;
        dscp_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-cfg")
    {
        for(auto const & c : protocol_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg>();
        c->parent = this;
        protocol_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "source-ip-address-cfg")
    {
        for(auto const & c : source_ip_address_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg>();
        c->parent = this;
        source_ip_address_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "source-port-cfg")
    {
        for(auto const & c : source_port_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg>();
        c->parent = this;
        source_port_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_ip_address_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : destination_port_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : dscp_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : protocol_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : source_ip_address_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : source_port_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
    if(value_path == "filter-logical-not")
    {
        filter_logical_not = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::DscpCfg()
    :
    dscp_min{YType::uint8, "dscp-min"},
    dscp_max{YType::uint8, "dscp-max"}
{
    yang_name = "dscp-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::~DscpCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::has_data() const
{
    return dscp_min.is_set
	|| dscp_max.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_min.operation)
	|| is_set(dscp_max.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-cfg" <<"[dscp-min='" <<dscp_min <<"']" <<"[dscp-max='" <<dscp_max <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DscpCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.operation)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.operation)) leaf_name_data.push_back(dscp_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-min")
    {
        dscp_min = value;
    }
    if(value_path == "dscp-max")
    {
        dscp_max = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::SourceIpAddressCfg()
    :
    source_ip_addr{YType::str, "source-ip-addr"}
{
    yang_name = "source-ip-address-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::~SourceIpAddressCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_data() const
{
    return source_ip_addr.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(source_ip_addr.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ip-address-cfg" <<"[source-ip-addr='" <<source_ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceIpAddressCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip_addr.is_set || is_set(source_ip_addr.operation)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-ip-addr")
    {
        source_ip_addr = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::DestinationIpAddressCfg()
    :
    destination_ip_addr{YType::str, "destination-ip-addr"}
{
    yang_name = "destination-ip-address-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::~DestinationIpAddressCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_data() const
{
    return destination_ip_addr.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_ip_addr.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ip-address-cfg" <<"[destination-ip-addr='" <<destination_ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationIpAddressCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_ip_addr.is_set || is_set(destination_ip_addr.operation)) leaf_name_data.push_back(destination_ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-ip-addr")
    {
        destination_ip_addr = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::SourcePortCfg()
    :
    source_port_min{YType::uint16, "source-port-min"},
    source_port_max{YType::uint16, "source-port-max"}
{
    yang_name = "source-port-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::~SourcePortCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::has_data() const
{
    return source_port_min.is_set
	|| source_port_max.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(source_port_min.operation)
	|| is_set(source_port_max.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port-cfg" <<"[source-port-min='" <<source_port_min <<"']" <<"[source-port-max='" <<source_port_max <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePortCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port_min.is_set || is_set(source_port_min.operation)) leaf_name_data.push_back(source_port_min.get_name_leafdata());
    if (source_port_max.is_set || is_set(source_port_max.operation)) leaf_name_data.push_back(source_port_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-port-min")
    {
        source_port_min = value;
    }
    if(value_path == "source-port-max")
    {
        source_port_max = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::DestinationPortCfg()
    :
    destination_port_min{YType::uint16, "destination-port-min"},
    destination_port_max{YType::uint16, "destination-port-max"}
{
    yang_name = "destination-port-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::~DestinationPortCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::has_data() const
{
    return destination_port_min.is_set
	|| destination_port_max.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_port_min.operation)
	|| is_set(destination_port_max.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-port-cfg" <<"[destination-port-min='" <<destination_port_min <<"']" <<"[destination-port-max='" <<destination_port_max <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPortCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port_min.is_set || is_set(destination_port_min.operation)) leaf_name_data.push_back(destination_port_min.get_name_leafdata());
    if (destination_port_max.is_set || is_set(destination_port_max.operation)) leaf_name_data.push_back(destination_port_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port-min")
    {
        destination_port_min = value;
    }
    if(value_path == "destination-port-max")
    {
        destination_port_max = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::ProtocolCfg()
    :
    protocol_min{YType::uint8, "protocol-min"},
    protocol_max{YType::uint8, "protocol-max"}
{
    yang_name = "protocol-cfg"; yang_parent_name = "filter-entry";
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::~ProtocolCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::has_data() const
{
    return protocol_min.is_set
	|| protocol_max.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_min.operation)
	|| is_set(protocol_max.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-cfg" <<"[protocol-min='" <<protocol_min <<"']" <<"[protocol-max='" <<protocol_max <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_min.is_set || is_set(protocol_min.operation)) leaf_name_data.push_back(protocol_min.get_name_leafdata());
    if (protocol_max.is_set || is_set(protocol_max.operation)) leaf_name_data.push_back(protocol_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-min")
    {
        protocol_min = value;
    }
    if(value_path == "protocol-max")
    {
        protocol_max = value;
    }
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::ClassifierActionEntryCfg()
    :
    action_type{YType::identityref, "action-type"}
{
    yang_name = "classifier-action-entry-cfg"; yang_parent_name = "classifier-entry";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::~ClassifierActionEntryCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_data() const
{
    return action_type.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-action-entry-cfg" <<"[action-type='" <<action_type <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassifierActionEntryCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}


}
}

