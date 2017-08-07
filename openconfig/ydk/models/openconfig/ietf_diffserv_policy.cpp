
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_policy.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_diffserv_policy {

ActionType::ActionType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-policy", "ietf-diffserv-policy", "ietf-diffserv-policy:action-type")
{
}

ActionType::~ActionType()
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
    return is_set(yfilter);
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

void Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Policies::clone_ptr() const
{
    return std::make_shared<Policies>();
}

std::string Policies::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Policies::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Policies::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Policies::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-entry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_descr.yfilter);
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

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_descr.is_set || is_set(policy_descr.yfilter)) leaf_name_data.push_back(policy_descr.get_name_leafdata());


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

void Policies::PolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-descr")
    {
        policy_descr = value;
        policy_descr.value_namespace = name_space;
        policy_descr.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-descr")
    {
        policy_descr.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry" || name == "policy-name" || name == "policy-descr")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(classifier_entry_filter_oper.yfilter)
	|| ydk::is_set(classifier_entry_inline.yfilter);
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

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_filter_oper.is_set || is_set(classifier_entry_filter_oper.yfilter)) leaf_name_data.push_back(classifier_entry_filter_oper.get_name_leafdata());
    if (classifier_entry_inline.is_set || is_set(classifier_entry_inline.yfilter)) leaf_name_data.push_back(classifier_entry_inline.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classifier-entry-filter-oper")
    {
        classifier_entry_filter_oper = value;
        classifier_entry_filter_oper.value_namespace = name_space;
        classifier_entry_filter_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classifier-entry-inline")
    {
        classifier_entry_inline = value;
        classifier_entry_inline.value_namespace = name_space;
        classifier_entry_inline.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-filter-oper")
    {
        classifier_entry_filter_oper.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-inline")
    {
        classifier_entry_inline.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-action-entry-cfg" || name == "filter-entry" || name == "classifier-entry-name" || name == "classifier-entry-filter-oper" || name == "classifier-entry-inline")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(filter_logical_not.yfilter);
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

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (filter_logical_not.is_set || is_set(filter_logical_not.yfilter)) leaf_name_data.push_back(filter_logical_not.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-logical-not")
    {
        filter_logical_not = value;
        filter_logical_not.value_namespace = name_space;
        filter_logical_not.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "filter-logical-not")
    {
        filter_logical_not.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-ip-address-cfg" || name == "destination-port-cfg" || name == "dscp-cfg" || name == "protocol-cfg" || name == "source-ip-address-cfg" || name == "source-port-cfg" || name == "filter-type" || name == "filter-logical-not")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dscp_min.yfilter)
	|| ydk::is_set(dscp_max.yfilter);
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

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-min")
    {
        dscp_min = value;
        dscp_min.value_namespace = name_space;
        dscp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-max")
    {
        dscp_max = value;
        dscp_max.value_namespace = name_space;
        dscp_max.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-min")
    {
        dscp_min.yfilter = yfilter;
    }
    if(value_path == "dscp-max")
    {
        dscp_max.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-min" || name == "dscp-max")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(source_ip_addr.yfilter);
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

    if (source_ip_addr.is_set || is_set(source_ip_addr.yfilter)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-ip-addr")
    {
        source_ip_addr = value;
        source_ip_addr.value_namespace = name_space;
        source_ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-ip-addr")
    {
        source_ip_addr.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-ip-addr")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(destination_ip_addr.yfilter);
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

    if (destination_ip_addr.is_set || is_set(destination_ip_addr.yfilter)) leaf_name_data.push_back(destination_ip_addr.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-ip-addr")
    {
        destination_ip_addr = value;
        destination_ip_addr.value_namespace = name_space;
        destination_ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-ip-addr")
    {
        destination_ip_addr.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-ip-addr")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(source_port_min.yfilter)
	|| ydk::is_set(source_port_max.yfilter);
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

    if (source_port_min.is_set || is_set(source_port_min.yfilter)) leaf_name_data.push_back(source_port_min.get_name_leafdata());
    if (source_port_max.is_set || is_set(source_port_max.yfilter)) leaf_name_data.push_back(source_port_max.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-port-min")
    {
        source_port_min = value;
        source_port_min.value_namespace = name_space;
        source_port_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-max")
    {
        source_port_max = value;
        source_port_max.value_namespace = name_space;
        source_port_max.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-port-min")
    {
        source_port_min.yfilter = yfilter;
    }
    if(value_path == "source-port-max")
    {
        source_port_max.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-port-min" || name == "source-port-max")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(destination_port_min.yfilter)
	|| ydk::is_set(destination_port_max.yfilter);
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

    if (destination_port_min.is_set || is_set(destination_port_min.yfilter)) leaf_name_data.push_back(destination_port_min.get_name_leafdata());
    if (destination_port_max.is_set || is_set(destination_port_max.yfilter)) leaf_name_data.push_back(destination_port_max.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port-min")
    {
        destination_port_min = value;
        destination_port_min.value_namespace = name_space;
        destination_port_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-max")
    {
        destination_port_max = value;
        destination_port_max.value_namespace = name_space;
        destination_port_max.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port-min")
    {
        destination_port_min.yfilter = yfilter;
    }
    if(value_path == "destination-port-max")
    {
        destination_port_max.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port-min" || name == "destination-port-max")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(protocol_min.yfilter)
	|| ydk::is_set(protocol_max.yfilter);
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

    if (protocol_min.is_set || is_set(protocol_min.yfilter)) leaf_name_data.push_back(protocol_min.get_name_leafdata());
    if (protocol_max.is_set || is_set(protocol_max.yfilter)) leaf_name_data.push_back(protocol_max.get_name_leafdata());


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

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-min")
    {
        protocol_min = value;
        protocol_min.value_namespace = name_space;
        protocol_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-max")
    {
        protocol_max = value;
        protocol_max.value_namespace = name_space;
        protocol_max.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-min")
    {
        protocol_min.yfilter = yfilter;
    }
    if(value_path == "protocol-max")
    {
        protocol_max.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-min" || name == "protocol-max")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::ClassifierActionEntryCfg()
    :
    action_type{YType::identityref, "action-type"}
    	,
    drop_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg>())
	,marking_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg>())
	,max_rate_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg>())
	,meter_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg>())
	,min_rate_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg>())
	,priority_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg>())
	,random_detect_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg>())
	,tail_drop_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg>())
{
    drop_cfg->parent = this;

    marking_cfg->parent = this;

    max_rate_cfg->parent = this;

    meter_cfg->parent = this;

    min_rate_cfg->parent = this;

    priority_cfg->parent = this;

    random_detect_cfg->parent = this;

    tail_drop_cfg->parent = this;

    yang_name = "classifier-action-entry-cfg"; yang_parent_name = "classifier-entry";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::~ClassifierActionEntryCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_data() const
{
    return action_type.is_set
	|| (drop_cfg !=  nullptr && drop_cfg->has_data())
	|| (marking_cfg !=  nullptr && marking_cfg->has_data())
	|| (max_rate_cfg !=  nullptr && max_rate_cfg->has_data())
	|| (meter_cfg !=  nullptr && meter_cfg->has_data())
	|| (min_rate_cfg !=  nullptr && min_rate_cfg->has_data())
	|| (priority_cfg !=  nullptr && priority_cfg->has_data())
	|| (random_detect_cfg !=  nullptr && random_detect_cfg->has_data())
	|| (tail_drop_cfg !=  nullptr && tail_drop_cfg->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| (drop_cfg !=  nullptr && drop_cfg->has_operation())
	|| (marking_cfg !=  nullptr && marking_cfg->has_operation())
	|| (max_rate_cfg !=  nullptr && max_rate_cfg->has_operation())
	|| (meter_cfg !=  nullptr && meter_cfg->has_operation())
	|| (min_rate_cfg !=  nullptr && min_rate_cfg->has_operation())
	|| (priority_cfg !=  nullptr && priority_cfg->has_operation())
	|| (random_detect_cfg !=  nullptr && random_detect_cfg->has_operation())
	|| (tail_drop_cfg !=  nullptr && tail_drop_cfg->has_operation());
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

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-cfg")
    {
        if(drop_cfg == nullptr)
        {
            drop_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg>();
        }
        return drop_cfg;
    }

    if(child_yang_name == "marking-cfg")
    {
        if(marking_cfg == nullptr)
        {
            marking_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg>();
        }
        return marking_cfg;
    }

    if(child_yang_name == "max-rate-cfg")
    {
        if(max_rate_cfg == nullptr)
        {
            max_rate_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg>();
        }
        return max_rate_cfg;
    }

    if(child_yang_name == "meter-cfg")
    {
        if(meter_cfg == nullptr)
        {
            meter_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg>();
        }
        return meter_cfg;
    }

    if(child_yang_name == "min-rate-cfg")
    {
        if(min_rate_cfg == nullptr)
        {
            min_rate_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg>();
        }
        return min_rate_cfg;
    }

    if(child_yang_name == "priority-cfg")
    {
        if(priority_cfg == nullptr)
        {
            priority_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg>();
        }
        return priority_cfg;
    }

    if(child_yang_name == "random-detect-cfg")
    {
        if(random_detect_cfg == nullptr)
        {
            random_detect_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg>();
        }
        return random_detect_cfg;
    }

    if(child_yang_name == "tail-drop-cfg")
    {
        if(tail_drop_cfg == nullptr)
        {
            tail_drop_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg>();
        }
        return tail_drop_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_cfg != nullptr)
    {
        children["drop-cfg"] = drop_cfg;
    }

    if(marking_cfg != nullptr)
    {
        children["marking-cfg"] = marking_cfg;
    }

    if(max_rate_cfg != nullptr)
    {
        children["max-rate-cfg"] = max_rate_cfg;
    }

    if(meter_cfg != nullptr)
    {
        children["meter-cfg"] = meter_cfg;
    }

    if(min_rate_cfg != nullptr)
    {
        children["min-rate-cfg"] = min_rate_cfg;
    }

    if(priority_cfg != nullptr)
    {
        children["priority-cfg"] = priority_cfg;
    }

    if(random_detect_cfg != nullptr)
    {
        children["random-detect-cfg"] = random_detect_cfg;
    }

    if(tail_drop_cfg != nullptr)
    {
        children["tail-drop-cfg"] = tail_drop_cfg;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-cfg" || name == "marking-cfg" || name == "max-rate-cfg" || name == "meter-cfg" || name == "min-rate-cfg" || name == "priority-cfg" || name == "random-detect-cfg" || name == "tail-drop-cfg" || name == "action-type")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::MarkingCfg()
    :
    dscp{YType::uint8, "dscp"}
{
    yang_name = "marking-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::~MarkingCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::has_data() const
{
    return dscp.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:marking-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkingCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::PriorityCfg()
    :
    priority_level{YType::uint8, "priority-level"}
    	,
    rate_burst(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst>())
{
    rate_burst->parent = this;

    yang_name = "priority-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::~PriorityCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::has_data() const
{
    return priority_level.is_set
	|| (rate_burst !=  nullptr && rate_burst->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| (rate_burst !=  nullptr && rate_burst->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:priority-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-burst")
    {
        if(rate_burst == nullptr)
        {
            rate_burst = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst>();
        }
        return rate_burst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_burst != nullptr)
    {
        children["rate-burst"] = rate_burst;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-burst" || name == "priority-level")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::RateBurst()
    :
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    burst_interval{YType::uint64, "burst-interval"},
    burst_size{YType::uint64, "burst-size"},
    rate{YType::uint64, "rate"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
{
    yang_name = "rate-burst"; yang_parent_name = "priority-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::~RateBurst()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_data() const
{
    return absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| burst_interval.is_set
	|| burst_size.is_set
	|| rate.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-burst";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RateBurst' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric = value;
        absolute_rate_metric.value_namespace = name_space;
        absolute_rate_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units = value;
        absolute_rate_units.value_namespace = name_space;
        absolute_rate_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-percent")
    {
        rate_percent = value;
        rate_percent.value_namespace = name_space;
        rate_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio = value;
        rate_ratio.value_namespace = name_space;
        rate_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric.yfilter = yfilter;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "rate-percent")
    {
        rate_percent.yfilter = yfilter;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "burst-interval" || name == "burst-size" || name == "rate" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterCfg()
{
    yang_name = "meter-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::~MeterCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::has_data() const
{
    for (std::size_t index=0; index<meter_list.size(); index++)
    {
        if(meter_list[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::has_operation() const
{
    for (std::size_t index=0; index<meter_list.size(); index++)
    {
        if(meter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:meter-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeterCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "meter-list")
    {
        for(auto const & c : meter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList>();
        c->parent = this;
        meter_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : meter_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-list")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::MeterList()
    :
    meter_id{YType::uint16, "meter-id"},
    burst_interval{YType::uint64, "burst-interval"},
    burst_size{YType::uint64, "burst-size"},
    meter_rate{YType::uint64, "meter-rate"}
    	,
    color(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color>())
	,fail_action(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction>())
	,succeed_action(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction>())
{
    color->parent = this;

    fail_action->parent = this;

    succeed_action->parent = this;

    yang_name = "meter-list"; yang_parent_name = "meter-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::~MeterList()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_data() const
{
    return meter_id.is_set
	|| burst_interval.is_set
	|| burst_size.is_set
	|| meter_rate.is_set
	|| (color !=  nullptr && color->has_data())
	|| (fail_action !=  nullptr && fail_action->has_data())
	|| (succeed_action !=  nullptr && succeed_action->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(meter_rate.yfilter)
	|| (color !=  nullptr && color->has_operation())
	|| (fail_action !=  nullptr && fail_action->has_operation())
	|| (succeed_action !=  nullptr && succeed_action->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-list" <<"[meter-id='" <<meter_id <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeterList' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (meter_rate.is_set || is_set(meter_rate.yfilter)) leaf_name_data.push_back(meter_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color")
    {
        if(color == nullptr)
        {
            color = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color>();
        }
        return color;
    }

    if(child_yang_name == "fail-action")
    {
        if(fail_action == nullptr)
        {
            fail_action = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction>();
        }
        return fail_action;
    }

    if(child_yang_name == "succeed-action")
    {
        if(succeed_action == nullptr)
        {
            succeed_action = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction>();
        }
        return succeed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color != nullptr)
    {
        children["color"] = color;
    }

    if(fail_action != nullptr)
    {
        children["fail-action"] = fail_action;
    }

    if(succeed_action != nullptr)
    {
        children["succeed-action"] = succeed_action;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
        meter_id.value_namespace = name_space;
        meter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-rate")
    {
        meter_rate = value;
        meter_rate.value_namespace = name_space;
        meter_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "meter-rate")
    {
        meter_rate.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "fail-action" || name == "succeed-action" || name == "meter-id" || name == "burst-interval" || name == "burst-size" || name == "meter-rate")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::Color()
    :
    classifier_entry_descr{YType::str, "classifier-entry-descr"},
    classifier_entry_filter_operation{YType::identityref, "classifier-entry-filter-operation"},
    classifier_entry_name{YType::str, "classifier-entry-name"}
{
    yang_name = "color"; yang_parent_name = "meter-list";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::~Color()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_data() const
{
    return classifier_entry_descr.is_set
	|| classifier_entry_filter_operation.is_set
	|| classifier_entry_name.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_descr.yfilter)
	|| ydk::is_set(classifier_entry_filter_operation.yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Color' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_descr.is_set || is_set(classifier_entry_descr.yfilter)) leaf_name_data.push_back(classifier_entry_descr.get_name_leafdata());
    if (classifier_entry_filter_operation.is_set || is_set(classifier_entry_filter_operation.yfilter)) leaf_name_data.push_back(classifier_entry_filter_operation.get_name_leafdata());
    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-descr")
    {
        classifier_entry_descr = value;
        classifier_entry_descr.value_namespace = name_space;
        classifier_entry_descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classifier-entry-filter-operation")
    {
        classifier_entry_filter_operation = value;
        classifier_entry_filter_operation.value_namespace = name_space;
        classifier_entry_filter_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-descr")
    {
        classifier_entry_descr.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-filter-operation")
    {
        classifier_entry_filter_operation.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-descr" || name == "classifier-entry-filter-operation" || name == "classifier-entry-name")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::SucceedAction()
    :
    drop_action{YType::empty, "drop-action"},
    dscp{YType::uint8, "dscp"},
    meter_action_type{YType::identityref, "meter-action-type"},
    next_meter_id{YType::uint16, "next-meter-id"}
{
    yang_name = "succeed-action"; yang_parent_name = "meter-list";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::~SucceedAction()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_data() const
{
    return drop_action.is_set
	|| dscp.is_set
	|| meter_action_type.is_set
	|| next_meter_id.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_action.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(meter_action_type.yfilter)
	|| ydk::is_set(next_meter_id.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "succeed-action";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SucceedAction' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (meter_action_type.is_set || is_set(meter_action_type.yfilter)) leaf_name_data.push_back(meter_action_type.get_name_leafdata());
    if (next_meter_id.is_set || is_set(next_meter_id.yfilter)) leaf_name_data.push_back(next_meter_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-action")
    {
        drop_action = value;
        drop_action.value_namespace = name_space;
        drop_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-action-type")
    {
        meter_action_type = value;
        meter_action_type.value_namespace = name_space;
        meter_action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id = value;
        next_meter_id.value_namespace = name_space;
        next_meter_id.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-action")
    {
        drop_action.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "meter-action-type")
    {
        meter_action_type.yfilter = yfilter;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-action" || name == "dscp" || name == "meter-action-type" || name == "next-meter-id")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::FailAction()
    :
    drop_action{YType::empty, "drop-action"},
    dscp{YType::uint8, "dscp"},
    meter_action_type{YType::identityref, "meter-action-type"},
    next_meter_id{YType::uint16, "next-meter-id"}
{
    yang_name = "fail-action"; yang_parent_name = "meter-list";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::~FailAction()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_data() const
{
    return drop_action.is_set
	|| dscp.is_set
	|| meter_action_type.is_set
	|| next_meter_id.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_action.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(meter_action_type.yfilter)
	|| ydk::is_set(next_meter_id.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail-action";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailAction' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (meter_action_type.is_set || is_set(meter_action_type.yfilter)) leaf_name_data.push_back(meter_action_type.get_name_leafdata());
    if (next_meter_id.is_set || is_set(next_meter_id.yfilter)) leaf_name_data.push_back(next_meter_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-action")
    {
        drop_action = value;
        drop_action.value_namespace = name_space;
        drop_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-action-type")
    {
        meter_action_type = value;
        meter_action_type.value_namespace = name_space;
        meter_action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id = value;
        next_meter_id.value_namespace = name_space;
        next_meter_id.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-action")
    {
        drop_action.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "meter-action-type")
    {
        meter_action_type.yfilter = yfilter;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-action" || name == "dscp" || name == "meter-action-type" || name == "next-meter-id")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::MinRateCfg()
    :
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    min_rate{YType::uint64, "min-rate"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
    	,
    bw_excess_share_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg>())
{
    bw_excess_share_cfg->parent = this;

    yang_name = "min-rate-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::~MinRateCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_data() const
{
    return absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| min_rate.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set
	|| (bw_excess_share_cfg !=  nullptr && bw_excess_share_cfg->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter)
	|| (bw_excess_share_cfg !=  nullptr && bw_excess_share_cfg->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:min-rate-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinRateCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-excess-share-cfg")
    {
        if(bw_excess_share_cfg == nullptr)
        {
            bw_excess_share_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg>();
        }
        return bw_excess_share_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw_excess_share_cfg != nullptr)
    {
        children["bw-excess-share-cfg"] = bw_excess_share_cfg;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric = value;
        absolute_rate_metric.value_namespace = name_space;
        absolute_rate_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units = value;
        absolute_rate_units.value_namespace = name_space;
        absolute_rate_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-percent")
    {
        rate_percent = value;
        rate_percent.value_namespace = name_space;
        rate_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio = value;
        rate_ratio.value_namespace = name_space;
        rate_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric.yfilter = yfilter;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units.yfilter = yfilter;
    }
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
    if(value_path == "rate-percent")
    {
        rate_percent.yfilter = yfilter;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-excess-share-cfg" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "min-rate" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::BwExcessShareCfg()
    :
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"},
    value_{YType::uint32, "value"}
{
    yang_name = "bw-excess-share-cfg"; yang_parent_name = "min-rate-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::~BwExcessShareCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_data() const
{
    return absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set
	|| value_.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-excess-share-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwExcessShareCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric = value;
        absolute_rate_metric.value_namespace = name_space;
        absolute_rate_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units = value;
        absolute_rate_units.value_namespace = name_space;
        absolute_rate_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-percent")
    {
        rate_percent = value;
        rate_percent.value_namespace = name_space;
        rate_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio = value;
        rate_ratio.value_namespace = name_space;
        rate_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric.yfilter = yfilter;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units.yfilter = yfilter;
    }
    if(value_path == "rate-percent")
    {
        rate_percent.yfilter = yfilter;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "rate-percent" || name == "rate-ratio" || name == "value")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::MaxRateCfg()
    :
    absolute_rate{YType::uint64, "absolute-rate"},
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    burst_interval{YType::uint64, "burst-interval"},
    burst_size{YType::uint64, "burst-size"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
{
    yang_name = "max-rate-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::~MaxRateCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_data() const
{
    return absolute_rate.is_set
	|| absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| burst_interval.is_set
	|| burst_size.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_rate.yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:max-rate-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxRateCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_rate.is_set || is_set(absolute_rate.yfilter)) leaf_name_data.push_back(absolute_rate.get_name_leafdata());
    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-rate")
    {
        absolute_rate = value;
        absolute_rate.value_namespace = name_space;
        absolute_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric = value;
        absolute_rate_metric.value_namespace = name_space;
        absolute_rate_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units = value;
        absolute_rate_units.value_namespace = name_space;
        absolute_rate_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-percent")
    {
        rate_percent = value;
        rate_percent.value_namespace = name_space;
        rate_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio = value;
        rate_ratio.value_namespace = name_space;
        rate_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-rate")
    {
        absolute_rate.yfilter = yfilter;
    }
    if(value_path == "absolute-rate-metric")
    {
        absolute_rate_metric.yfilter = yfilter;
    }
    if(value_path == "absolute-rate-units")
    {
        absolute_rate_units.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "rate-percent")
    {
        rate_percent.yfilter = yfilter;
    }
    if(value_path == "rate-ratio")
    {
        rate_ratio.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-rate" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "burst-interval" || name == "burst-size" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::DropCfg()
    :
    drop_action{YType::empty, "drop-action"}
{
    yang_name = "drop-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::~DropCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::has_data() const
{
    return drop_action.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_action.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:drop-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-action")
    {
        drop_action = value;
        drop_action.value_namespace = name_space;
        drop_action.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-action")
    {
        drop_action.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-action")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::TailDropCfg()
{
    yang_name = "tail-drop-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::~TailDropCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::has_data() const
{
    for (std::size_t index=0; index<qlimit_dscp_thresh.size(); index++)
    {
        if(qlimit_dscp_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::has_operation() const
{
    for (std::size_t index=0; index<qlimit_dscp_thresh.size(); index++)
    {
        if(qlimit_dscp_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:tail-drop-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TailDropCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qlimit-dscp-thresh")
    {
        for(auto const & c : qlimit_dscp_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh>();
        c->parent = this;
        qlimit_dscp_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qlimit_dscp_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qlimit-dscp-thresh")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::QlimitDscpThresh()
    :
    dscp_min{YType::uint8, "dscp-min"},
    dscp_max{YType::uint8, "dscp-max"}
    	,
    threshold(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold>())
{
    threshold->parent = this;

    yang_name = "qlimit-dscp-thresh"; yang_parent_name = "tail-drop-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::~QlimitDscpThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::has_data() const
{
    return dscp_min.is_set
	|| dscp_max.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_min.yfilter)
	|| ydk::is_set(dscp_max.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qlimit-dscp-thresh" <<"[dscp-min='" <<dscp_min <<"']" <<"[dscp-max='" <<dscp_max <<"']";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QlimitDscpThresh' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp-min")
    {
        dscp_min = value;
        dscp_min.value_namespace = name_space;
        dscp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-max")
    {
        dscp_max = value;
        dscp_max.value_namespace = name_space;
        dscp_max.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp-min")
    {
        dscp_min.yfilter = yfilter;
    }
    if(value_path == "dscp-max")
    {
        dscp_max.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "dscp-min" || name == "dscp-max")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::Threshold()
    :
    threshold_interval{YType::uint64, "threshold-interval"},
    threshold_size{YType::uint64, "threshold-size"}
{
    yang_name = "threshold"; yang_parent_name = "qlimit-dscp-thresh";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_data() const
{
    return threshold_interval.is_set
	|| threshold_size.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(threshold_size.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-interval" || name == "threshold-size")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RandomDetectCfg()
    :
    exp_weighting_const{YType::uint32, "exp-weighting-const"},
    mark_probability{YType::uint32, "mark-probability"}
    	,
    red_max_thresh(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh>())
	,red_min_thresh(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh>())
{
    red_max_thresh->parent = this;

    red_min_thresh->parent = this;

    yang_name = "random-detect-cfg"; yang_parent_name = "classifier-action-entry-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::~RandomDetectCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::has_data() const
{
    return exp_weighting_const.is_set
	|| mark_probability.is_set
	|| (red_max_thresh !=  nullptr && red_max_thresh->has_data())
	|| (red_min_thresh !=  nullptr && red_min_thresh->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_weighting_const.yfilter)
	|| ydk::is_set(mark_probability.yfilter)
	|| (red_max_thresh !=  nullptr && red_max_thresh->has_operation())
	|| (red_min_thresh !=  nullptr && red_min_thresh->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:random-detect-cfg";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RandomDetectCfg' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_weighting_const.is_set || is_set(exp_weighting_const.yfilter)) leaf_name_data.push_back(exp_weighting_const.get_name_leafdata());
    if (mark_probability.is_set || is_set(mark_probability.yfilter)) leaf_name_data.push_back(mark_probability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-max-thresh")
    {
        if(red_max_thresh == nullptr)
        {
            red_max_thresh = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh>();
        }
        return red_max_thresh;
    }

    if(child_yang_name == "red-min-thresh")
    {
        if(red_min_thresh == nullptr)
        {
            red_min_thresh = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh>();
        }
        return red_min_thresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(red_max_thresh != nullptr)
    {
        children["red-max-thresh"] = red_max_thresh;
    }

    if(red_min_thresh != nullptr)
    {
        children["red-min-thresh"] = red_min_thresh;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-weighting-const")
    {
        exp_weighting_const = value;
        exp_weighting_const.value_namespace = name_space;
        exp_weighting_const.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-probability")
    {
        mark_probability = value;
        mark_probability.value_namespace = name_space;
        mark_probability.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-weighting-const")
    {
        exp_weighting_const.yfilter = yfilter;
    }
    if(value_path == "mark-probability")
    {
        mark_probability.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red-max-thresh" || name == "red-min-thresh" || name == "exp-weighting-const" || name == "mark-probability")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::RedMinThresh()
    :
    threshold(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold>())
{
    threshold->parent = this;

    yang_name = "red-min-thresh"; yang_parent_name = "random-detect-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::~RedMinThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-min-thresh";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedMinThresh' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::Threshold()
    :
    threshold_interval{YType::uint64, "threshold-interval"},
    threshold_size{YType::uint64, "threshold-size"}
{
    yang_name = "threshold"; yang_parent_name = "red-min-thresh";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_data() const
{
    return threshold_interval.is_set
	|| threshold_size.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(threshold_size.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-interval" || name == "threshold-size")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::RedMaxThresh()
    :
    threshold(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold>())
{
    threshold->parent = this;

    yang_name = "red-max-thresh"; yang_parent_name = "random-detect-cfg";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::~RedMaxThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-max-thresh";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedMaxThresh' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::Threshold()
    :
    threshold_interval{YType::uint64, "threshold-interval"},
    threshold_size{YType::uint64, "threshold-size"}
{
    yang_name = "threshold"; yang_parent_name = "red-max-thresh";
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_data() const
{
    return threshold_interval.is_set
	|| threshold_size.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_interval.yfilter)
	|| ydk::is_set(threshold_size.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in ietf_diffserv_policy cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());
    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-interval" || name == "threshold-size")
        return true;
    return false;
}


}
}

