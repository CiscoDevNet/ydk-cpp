
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_policy.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_diffserv_policy {

ActionType::ActionType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-policy", "ietf-diffserv-policy", "ietf-diffserv-policy:action-type")
{

}

ActionType::~ActionType()
{
}

Policies::Policies()
    :
    policy_entry(this, {"policy_name"})
{

    yang_name = "policies"; yang_parent_name = "ietf-diffserv-policy"; is_top_level_class = true; has_list_ancestor = false; 
}

Policies::~Policies()
{
}

bool Policies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_entry.len(); index++)
    {
        if(policy_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::has_operation() const
{
    for (std::size_t index=0; index<policy_entry.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-entry")
    {
        auto c = std::make_shared<Policies::PolicyEntry>();
        c->parent = this;
        policy_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

std::map<std::pair<std::string, std::string>, std::string> Policies::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
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
        ,
    classifier_entry(this, {"classifier_entry_name"})
{

    yang_name = "policy-entry"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = false; 
}

Policies::PolicyEntry::~PolicyEntry()
{
}

bool Policies::PolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<classifier_entry.len(); index++)
    {
        if(classifier_entry[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| policy_descr.is_set;
}

bool Policies::PolicyEntry::has_operation() const
{
    for (std::size_t index=0; index<classifier_entry.len(); index++)
    {
        if(classifier_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_descr.yfilter);
}

std::string Policies::PolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-policy:policies/" << get_segment_path();
    return path_buffer.str();
}

std::string Policies::PolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-entry";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_descr.is_set || is_set(policy_descr.yfilter)) leaf_name_data.push_back(policy_descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry>();
        c->parent = this;
        classifier_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : classifier_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    classifier_entry_inline{YType::boolean, "classifier-entry-inline"},
    classifier_entry_filter_oper{YType::identityref, "classifier-entry-filter-oper"}
        ,
    filter_entry(this, {"filter_type", "filter_logical_not"})
    , classifier_action_entry_cfg(this, {"action_type"})
{

    yang_name = "classifier-entry"; yang_parent_name = "policy-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::~ClassifierEntry()
{
}

bool Policies::PolicyEntry::ClassifierEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_entry.len(); index++)
    {
        if(filter_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<classifier_action_entry_cfg.len(); index++)
    {
        if(classifier_action_entry_cfg[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| classifier_entry_inline.is_set
	|| classifier_entry_filter_oper.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::has_operation() const
{
    for (std::size_t index=0; index<filter_entry.len(); index++)
    {
        if(filter_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<classifier_action_entry_cfg.len(); index++)
    {
        if(classifier_action_entry_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(classifier_entry_inline.yfilter)
	|| ydk::is_set(classifier_entry_filter_oper.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry";
    ADD_KEY_TOKEN(classifier_entry_name, "classifier-entry-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_inline.is_set || is_set(classifier_entry_inline.yfilter)) leaf_name_data.push_back(classifier_entry_inline.get_name_leafdata());
    if (classifier_entry_filter_oper.is_set || is_set(classifier_entry_filter_oper.yfilter)) leaf_name_data.push_back(classifier_entry_filter_oper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-entry")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry>();
        c->parent = this;
        filter_entry.append(c);
        return c;
    }

    if(child_yang_name == "classifier-action-entry-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg>();
        c->parent = this;
        classifier_action_entry_cfg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : filter_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : classifier_action_entry_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(value_path == "classifier-entry-inline")
    {
        classifier_entry_inline = value;
        classifier_entry_inline.value_namespace = name_space;
        classifier_entry_inline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classifier-entry-filter-oper")
    {
        classifier_entry_filter_oper = value;
        classifier_entry_filter_oper.value_namespace = name_space;
        classifier_entry_filter_oper.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-inline")
    {
        classifier_entry_inline.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-filter-oper")
    {
        classifier_entry_filter_oper.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-entry" || name == "classifier-action-entry-cfg" || name == "classifier-entry-name" || name == "classifier-entry-inline" || name == "classifier-entry-filter-oper")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::FilterEntry()
    :
    filter_type{YType::identityref, "filter-type"},
    filter_logical_not{YType::boolean, "filter-logical-not"}
        ,
    dscp_cfg(this, {"dscp_min", "dscp_max"})
    , source_ip_address_cfg(this, {"source_ip_addr"})
    , destination_ip_address_cfg(this, {"destination_ip_addr"})
    , source_port_cfg(this, {"source_port_min", "source_port_max"})
    , destination_port_cfg(this, {"destination_port_min", "destination_port_max"})
    , protocol_cfg(this, {"protocol_min", "protocol_max"})
{

    yang_name = "filter-entry"; yang_parent_name = "classifier-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::~FilterEntry()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp_cfg.len(); index++)
    {
        if(dscp_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_ip_address_cfg.len(); index++)
    {
        if(source_ip_address_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_ip_address_cfg.len(); index++)
    {
        if(destination_ip_address_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_port_cfg.len(); index++)
    {
        if(source_port_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_port_cfg.len(); index++)
    {
        if(destination_port_cfg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protocol_cfg.len(); index++)
    {
        if(protocol_cfg[index]->has_data())
            return true;
    }
    return filter_type.is_set
	|| filter_logical_not.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::has_operation() const
{
    for (std::size_t index=0; index<dscp_cfg.len(); index++)
    {
        if(dscp_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_ip_address_cfg.len(); index++)
    {
        if(source_ip_address_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_ip_address_cfg.len(); index++)
    {
        if(destination_ip_address_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_port_cfg.len(); index++)
    {
        if(source_port_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_port_cfg.len(); index++)
    {
        if(destination_port_cfg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protocol_cfg.len(); index++)
    {
        if(protocol_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(filter_logical_not.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-entry";
    ADD_KEY_TOKEN(filter_type, "filter-type");
    ADD_KEY_TOKEN(filter_logical_not, "filter-logical-not");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (filter_logical_not.is_set || is_set(filter_logical_not.yfilter)) leaf_name_data.push_back(filter_logical_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg>();
        c->parent = this;
        dscp_cfg.append(c);
        return c;
    }

    if(child_yang_name == "source-ip-address-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg>();
        c->parent = this;
        source_ip_address_cfg.append(c);
        return c;
    }

    if(child_yang_name == "destination-ip-address-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg>();
        c->parent = this;
        destination_ip_address_cfg.append(c);
        return c;
    }

    if(child_yang_name == "source-port-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg>();
        c->parent = this;
        source_port_cfg.append(c);
        return c;
    }

    if(child_yang_name == "destination-port-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg>();
        c->parent = this;
        destination_port_cfg.append(c);
        return c;
    }

    if(child_yang_name == "protocol-cfg")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg>();
        c->parent = this;
        protocol_cfg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dscp_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : source_ip_address_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : destination_ip_address_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : source_port_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : destination_port_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : protocol_cfg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "dscp-cfg" || name == "source-ip-address-cfg" || name == "destination-ip-address-cfg" || name == "source-port-cfg" || name == "destination-port-cfg" || name == "protocol-cfg" || name == "filter-type" || name == "filter-logical-not")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::DscpCfg()
    :
    dscp_min{YType::uint8, "dscp-min"},
    dscp_max{YType::uint8, "dscp-max"}
{

    yang_name = "dscp-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::~DscpCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "dscp-cfg";
    ADD_KEY_TOKEN(dscp_min, "dscp-min");
    ADD_KEY_TOKEN(dscp_max, "dscp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "source-ip-address-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::~SourceIpAddressCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "source-ip-address-cfg";
    ADD_KEY_TOKEN(source_ip_addr, "source-ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip_addr.is_set || is_set(source_ip_addr.yfilter)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "destination-ip-address-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::~DestinationIpAddressCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "destination-ip-address-cfg";
    ADD_KEY_TOKEN(destination_ip_addr, "destination-ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_ip_addr.is_set || is_set(destination_ip_addr.yfilter)) leaf_name_data.push_back(destination_ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "source-port-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::~SourcePortCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "source-port-cfg";
    ADD_KEY_TOKEN(source_port_min, "source-port-min");
    ADD_KEY_TOKEN(source_port_max, "source-port-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port_min.is_set || is_set(source_port_min.yfilter)) leaf_name_data.push_back(source_port_min.get_name_leafdata());
    if (source_port_max.is_set || is_set(source_port_max.yfilter)) leaf_name_data.push_back(source_port_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "destination-port-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::~DestinationPortCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "destination-port-cfg";
    ADD_KEY_TOKEN(destination_port_min, "destination-port-min");
    ADD_KEY_TOKEN(destination_port_max, "destination-port-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port_min.is_set || is_set(destination_port_min.yfilter)) leaf_name_data.push_back(destination_port_min.get_name_leafdata());
    if (destination_port_max.is_set || is_set(destination_port_max.yfilter)) leaf_name_data.push_back(destination_port_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "protocol-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::~ProtocolCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "protocol-cfg";
    ADD_KEY_TOKEN(protocol_min, "protocol-min");
    ADD_KEY_TOKEN(protocol_max, "protocol-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_min.is_set || is_set(protocol_min.yfilter)) leaf_name_data.push_back(protocol_min.get_name_leafdata());
    if (protocol_max.is_set || is_set(protocol_max.yfilter)) leaf_name_data.push_back(protocol_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    marking_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg>())
    , priority_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg>())
    , meter_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg>())
    , min_rate_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg>())
    , max_rate_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg>())
    , drop_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg>())
    , tail_drop_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg>())
    , random_detect_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg>())
{
    marking_cfg->parent = this;
    priority_cfg->parent = this;
    meter_cfg->parent = this;
    min_rate_cfg->parent = this;
    max_rate_cfg->parent = this;
    drop_cfg->parent = this;
    tail_drop_cfg->parent = this;
    random_detect_cfg->parent = this;

    yang_name = "classifier-action-entry-cfg"; yang_parent_name = "classifier-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::~ClassifierActionEntryCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_data() const
{
    if (is_presence_container) return true;
    return action_type.is_set
	|| (marking_cfg !=  nullptr && marking_cfg->has_data())
	|| (priority_cfg !=  nullptr && priority_cfg->has_data())
	|| (meter_cfg !=  nullptr && meter_cfg->has_data())
	|| (min_rate_cfg !=  nullptr && min_rate_cfg->has_data())
	|| (max_rate_cfg !=  nullptr && max_rate_cfg->has_data())
	|| (drop_cfg !=  nullptr && drop_cfg->has_data())
	|| (tail_drop_cfg !=  nullptr && tail_drop_cfg->has_data())
	|| (random_detect_cfg !=  nullptr && random_detect_cfg->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| (marking_cfg !=  nullptr && marking_cfg->has_operation())
	|| (priority_cfg !=  nullptr && priority_cfg->has_operation())
	|| (meter_cfg !=  nullptr && meter_cfg->has_operation())
	|| (min_rate_cfg !=  nullptr && min_rate_cfg->has_operation())
	|| (max_rate_cfg !=  nullptr && max_rate_cfg->has_operation())
	|| (drop_cfg !=  nullptr && drop_cfg->has_operation())
	|| (tail_drop_cfg !=  nullptr && tail_drop_cfg->has_operation())
	|| (random_detect_cfg !=  nullptr && random_detect_cfg->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-action-entry-cfg";
    ADD_KEY_TOKEN(action_type, "action-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ietf-diffserv-action:marking-cfg")
    {
        if(marking_cfg == nullptr)
        {
            marking_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg>();
        }
        return marking_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:priority-cfg")
    {
        if(priority_cfg == nullptr)
        {
            priority_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg>();
        }
        return priority_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:meter-cfg")
    {
        if(meter_cfg == nullptr)
        {
            meter_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg>();
        }
        return meter_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:min-rate-cfg")
    {
        if(min_rate_cfg == nullptr)
        {
            min_rate_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg>();
        }
        return min_rate_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:max-rate-cfg")
    {
        if(max_rate_cfg == nullptr)
        {
            max_rate_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg>();
        }
        return max_rate_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:drop-cfg")
    {
        if(drop_cfg == nullptr)
        {
            drop_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg>();
        }
        return drop_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:tail-drop-cfg")
    {
        if(tail_drop_cfg == nullptr)
        {
            tail_drop_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg>();
        }
        return tail_drop_cfg;
    }

    if(child_yang_name == "ietf-diffserv-action:random-detect-cfg")
    {
        if(random_detect_cfg == nullptr)
        {
            random_detect_cfg = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg>();
        }
        return random_detect_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(marking_cfg != nullptr)
    {
        children["ietf-diffserv-action:marking-cfg"] = marking_cfg;
    }

    if(priority_cfg != nullptr)
    {
        children["ietf-diffserv-action:priority-cfg"] = priority_cfg;
    }

    if(meter_cfg != nullptr)
    {
        children["ietf-diffserv-action:meter-cfg"] = meter_cfg;
    }

    if(min_rate_cfg != nullptr)
    {
        children["ietf-diffserv-action:min-rate-cfg"] = min_rate_cfg;
    }

    if(max_rate_cfg != nullptr)
    {
        children["ietf-diffserv-action:max-rate-cfg"] = max_rate_cfg;
    }

    if(drop_cfg != nullptr)
    {
        children["ietf-diffserv-action:drop-cfg"] = drop_cfg;
    }

    if(tail_drop_cfg != nullptr)
    {
        children["ietf-diffserv-action:tail-drop-cfg"] = tail_drop_cfg;
    }

    if(random_detect_cfg != nullptr)
    {
        children["ietf-diffserv-action:random-detect-cfg"] = random_detect_cfg;
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
    if(name == "marking-cfg" || name == "priority-cfg" || name == "meter-cfg" || name == "min-rate-cfg" || name == "max-rate-cfg" || name == "drop-cfg" || name == "tail-drop-cfg" || name == "random-detect-cfg" || name == "action-type")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::MarkingCfg()
    :
    dscp{YType::uint8, "dscp"}
{

    yang_name = "marking-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::~MarkingCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MarkingCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    yang_name = "priority-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::~PriorityCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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
    rate{YType::uint64, "rate"},
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"},
    burst_size{YType::uint64, "burst-size"},
    burst_interval{YType::uint64, "burst-interval"}
{

    yang_name = "rate-burst"; yang_parent_name = "priority-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::~RateBurst()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set
	|| absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set
	|| burst_size.is_set
	|| burst_interval.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(burst_interval.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
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
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::PriorityCfg::RateBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "rate-percent" || name == "rate-ratio" || name == "burst-size" || name == "burst-interval")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterCfg()
    :
    meter_list(this, {"meter_id"})
{

    yang_name = "meter-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::~MeterCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meter_list.len(); index++)
    {
        if(meter_list[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::has_operation() const
{
    for (std::size_t index=0; index<meter_list.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "meter-list")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList>();
        c->parent = this;
        meter_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : meter_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    meter_rate{YType::uint64, "meter-rate"},
    burst_size{YType::uint64, "burst-size"},
    burst_interval{YType::uint64, "burst-interval"}
        ,
    color(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color>())
    , succeed_action(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction>())
    , fail_action(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction>())
{
    color->parent = this;
    succeed_action->parent = this;
    fail_action->parent = this;

    yang_name = "meter-list"; yang_parent_name = "meter-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::~MeterList()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_data() const
{
    if (is_presence_container) return true;
    return meter_id.is_set
	|| meter_rate.is_set
	|| burst_size.is_set
	|| burst_interval.is_set
	|| (color !=  nullptr && color->has_data())
	|| (succeed_action !=  nullptr && succeed_action->has_data())
	|| (fail_action !=  nullptr && fail_action->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(meter_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| (color !=  nullptr && color->has_operation())
	|| (succeed_action !=  nullptr && succeed_action->has_operation())
	|| (fail_action !=  nullptr && fail_action->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-list";
    ADD_KEY_TOKEN(meter_id, "meter-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_rate.is_set || is_set(meter_rate.yfilter)) leaf_name_data.push_back(meter_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "succeed-action")
    {
        if(succeed_action == nullptr)
        {
            succeed_action = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction>();
        }
        return succeed_action;
    }

    if(child_yang_name == "fail-action")
    {
        if(fail_action == nullptr)
        {
            fail_action = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction>();
        }
        return fail_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(color != nullptr)
    {
        children["color"] = color;
    }

    if(succeed_action != nullptr)
    {
        children["succeed-action"] = succeed_action;
    }

    if(fail_action != nullptr)
    {
        children["fail-action"] = fail_action;
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
    if(value_path == "meter-rate")
    {
        meter_rate = value;
        meter_rate.value_namespace = name_space;
        meter_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "meter-rate")
    {
        meter_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "succeed-action" || name == "fail-action" || name == "meter-id" || name == "meter-rate" || name == "burst-size" || name == "burst-interval")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::Color()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    classifier_entry_descr{YType::str, "classifier-entry-descr"},
    classifier_entry_filter_operation{YType::identityref, "classifier-entry-filter-operation"}
{

    yang_name = "color"; yang_parent_name = "meter-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::~Color()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_data() const
{
    if (is_presence_container) return true;
    return classifier_entry_name.is_set
	|| classifier_entry_descr.is_set
	|| classifier_entry_filter_operation.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(classifier_entry_descr.yfilter)
	|| ydk::is_set(classifier_entry_filter_operation.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_descr.is_set || is_set(classifier_entry_descr.yfilter)) leaf_name_data.push_back(classifier_entry_descr.get_name_leafdata());
    if (classifier_entry_filter_operation.is_set || is_set(classifier_entry_filter_operation.yfilter)) leaf_name_data.push_back(classifier_entry_filter_operation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
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
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-descr")
    {
        classifier_entry_descr.yfilter = yfilter;
    }
    if(value_path == "classifier-entry-filter-operation")
    {
        classifier_entry_filter_operation.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::Color::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-name" || name == "classifier-entry-descr" || name == "classifier-entry-filter-operation")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::SucceedAction()
    :
    meter_action_type{YType::identityref, "meter-action-type"},
    next_meter_id{YType::uint16, "next-meter-id"},
    dscp{YType::uint8, "dscp"},
    drop_action{YType::empty, "drop-action"}
{

    yang_name = "succeed-action"; yang_parent_name = "meter-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::~SucceedAction()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_data() const
{
    if (is_presence_container) return true;
    return meter_action_type.is_set
	|| next_meter_id.is_set
	|| dscp.is_set
	|| drop_action.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_action_type.yfilter)
	|| ydk::is_set(next_meter_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(drop_action.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "succeed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_action_type.is_set || is_set(meter_action_type.yfilter)) leaf_name_data.push_back(meter_action_type.get_name_leafdata());
    if (next_meter_id.is_set || is_set(next_meter_id.yfilter)) leaf_name_data.push_back(next_meter_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-action")
    {
        drop_action = value;
        drop_action.value_namespace = name_space;
        drop_action.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-action-type")
    {
        meter_action_type.yfilter = yfilter;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "drop-action")
    {
        drop_action.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::SucceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-action-type" || name == "next-meter-id" || name == "dscp" || name == "drop-action")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::FailAction()
    :
    meter_action_type{YType::identityref, "meter-action-type"},
    next_meter_id{YType::uint16, "next-meter-id"},
    dscp{YType::uint8, "dscp"},
    drop_action{YType::empty, "drop-action"}
{

    yang_name = "fail-action"; yang_parent_name = "meter-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::~FailAction()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_data() const
{
    if (is_presence_container) return true;
    return meter_action_type.is_set
	|| next_meter_id.is_set
	|| dscp.is_set
	|| drop_action.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_action_type.yfilter)
	|| ydk::is_set(next_meter_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(drop_action.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_action_type.is_set || is_set(meter_action_type.yfilter)) leaf_name_data.push_back(meter_action_type.get_name_leafdata());
    if (next_meter_id.is_set || is_set(next_meter_id.yfilter)) leaf_name_data.push_back(next_meter_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-action")
    {
        drop_action = value;
        drop_action.value_namespace = name_space;
        drop_action.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-action-type")
    {
        meter_action_type.yfilter = yfilter;
    }
    if(value_path == "next-meter-id")
    {
        next_meter_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "drop-action")
    {
        drop_action.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MeterCfg::MeterList::FailAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-action-type" || name == "next-meter-id" || name == "dscp" || name == "drop-action")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::MinRateCfg()
    :
    min_rate{YType::uint64, "min-rate"},
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
        ,
    bw_excess_share_cfg(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg>())
{
    bw_excess_share_cfg->parent = this;

    yang_name = "min-rate-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::~MinRateCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_data() const
{
    if (is_presence_container) return true;
    return min_rate.is_set
	|| absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set
	|| (bw_excess_share_cfg !=  nullptr && bw_excess_share_cfg->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(bw_excess_share_cfg != nullptr)
    {
        children["bw-excess-share-cfg"] = bw_excess_share_cfg;
    }

    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
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
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-excess-share-cfg" || name == "min-rate" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::BwExcessShareCfg()
    :
    value_{YType::uint32, "value"},
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
{

    yang_name = "bw-excess-share-cfg"; yang_parent_name = "min-rate-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::~BwExcessShareCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-excess-share-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
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

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
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
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MinRateCfg::BwExcessShareCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::MaxRateCfg()
    :
    absolute_rate{YType::uint64, "absolute-rate"},
    burst_size{YType::uint64, "burst-size"},
    burst_interval{YType::uint64, "burst-interval"},
    absolute_rate_metric{YType::enumeration, "absolute-rate-metric"},
    absolute_rate_units{YType::enumeration, "absolute-rate-units"},
    rate_percent{YType::uint8, "rate-percent"},
    rate_ratio{YType::uint32, "rate-ratio"}
{

    yang_name = "max-rate-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::~MaxRateCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_data() const
{
    if (is_presence_container) return true;
    return absolute_rate.is_set
	|| burst_size.is_set
	|| burst_interval.is_set
	|| absolute_rate_metric.is_set
	|| absolute_rate_units.is_set
	|| rate_percent.is_set
	|| rate_ratio.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(absolute_rate_metric.yfilter)
	|| ydk::is_set(absolute_rate_units.yfilter)
	|| ydk::is_set(rate_percent.yfilter)
	|| ydk::is_set(rate_ratio.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:max-rate-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_rate.is_set || is_set(absolute_rate.yfilter)) leaf_name_data.push_back(absolute_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (absolute_rate_metric.is_set || is_set(absolute_rate_metric.yfilter)) leaf_name_data.push_back(absolute_rate_metric.get_name_leafdata());
    if (absolute_rate_units.is_set || is_set(absolute_rate_units.yfilter)) leaf_name_data.push_back(absolute_rate_units.get_name_leafdata());
    if (rate_percent.is_set || is_set(rate_percent.yfilter)) leaf_name_data.push_back(rate_percent.get_name_leafdata());
    if (rate_ratio.is_set || is_set(rate_ratio.yfilter)) leaf_name_data.push_back(rate_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
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
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::MaxRateCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-rate" || name == "burst-size" || name == "burst-interval" || name == "absolute-rate-metric" || name == "absolute-rate-units" || name == "rate-percent" || name == "rate-ratio")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::DropCfg()
    :
    drop_action{YType::empty, "drop-action"}
{

    yang_name = "drop-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::~DropCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_action.is_set || is_set(drop_action.yfilter)) leaf_name_data.push_back(drop_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::DropCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    :
    qlimit_dscp_thresh(this, {"dscp_min", "dscp_max"})
{

    yang_name = "tail-drop-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::~TailDropCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qlimit_dscp_thresh.len(); index++)
    {
        if(qlimit_dscp_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::has_operation() const
{
    for (std::size_t index=0; index<qlimit_dscp_thresh.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qlimit-dscp-thresh")
    {
        auto c = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh>();
        c->parent = this;
        qlimit_dscp_thresh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : qlimit_dscp_thresh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    yang_name = "qlimit-dscp-thresh"; yang_parent_name = "tail-drop-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::~QlimitDscpThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "qlimit-dscp-thresh";
    ADD_KEY_TOKEN(dscp_min, "dscp-min");
    ADD_KEY_TOKEN(dscp_max, "dscp-max");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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
    threshold_size{YType::uint64, "threshold-size"},
    threshold_interval{YType::uint64, "threshold-interval"}
{

    yang_name = "threshold"; yang_parent_name = "qlimit-dscp-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_size.is_set
	|| threshold_interval.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_size.yfilter)
	|| ydk::is_set(threshold_interval.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::TailDropCfg::QlimitDscpThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-size" || name == "threshold-interval")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RandomDetectCfg()
    :
    exp_weighting_const{YType::uint32, "exp-weighting-const"},
    mark_probability{YType::uint32, "mark-probability"}
        ,
    red_min_thresh(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh>())
    , red_max_thresh(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh>())
{
    red_min_thresh->parent = this;
    red_max_thresh->parent = this;

    yang_name = "random-detect-cfg"; yang_parent_name = "classifier-action-entry-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::~RandomDetectCfg()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::has_data() const
{
    if (is_presence_container) return true;
    return exp_weighting_const.is_set
	|| mark_probability.is_set
	|| (red_min_thresh !=  nullptr && red_min_thresh->has_data())
	|| (red_max_thresh !=  nullptr && red_max_thresh->has_data());
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_weighting_const.yfilter)
	|| ydk::is_set(mark_probability.yfilter)
	|| (red_min_thresh !=  nullptr && red_min_thresh->has_operation())
	|| (red_max_thresh !=  nullptr && red_max_thresh->has_operation());
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-action:random-detect-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_weighting_const.is_set || is_set(exp_weighting_const.yfilter)) leaf_name_data.push_back(exp_weighting_const.get_name_leafdata());
    if (mark_probability.is_set || is_set(mark_probability.yfilter)) leaf_name_data.push_back(mark_probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-min-thresh")
    {
        if(red_min_thresh == nullptr)
        {
            red_min_thresh = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh>();
        }
        return red_min_thresh;
    }

    if(child_yang_name == "red-max-thresh")
    {
        if(red_max_thresh == nullptr)
        {
            red_max_thresh = std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh>();
        }
        return red_max_thresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(red_min_thresh != nullptr)
    {
        children["red-min-thresh"] = red_min_thresh;
    }

    if(red_max_thresh != nullptr)
    {
        children["red-max-thresh"] = red_max_thresh;
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
    if(name == "red-min-thresh" || name == "red-max-thresh" || name == "exp-weighting-const" || name == "mark-probability")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::RedMinThresh()
    :
    threshold(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold>())
{
    threshold->parent = this;

    yang_name = "red-min-thresh"; yang_parent_name = "random-detect-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::~RedMinThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
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
    threshold_size{YType::uint64, "threshold-size"},
    threshold_interval{YType::uint64, "threshold-interval"}
{

    yang_name = "threshold"; yang_parent_name = "red-min-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_size.is_set
	|| threshold_interval.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_size.yfilter)
	|| ydk::is_set(threshold_interval.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMinThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-size" || name == "threshold-interval")
        return true;
    return false;
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::RedMaxThresh()
    :
    threshold(std::make_shared<Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold>())
{
    threshold->parent = this;

    yang_name = "red-max-thresh"; yang_parent_name = "random-detect-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::~RedMaxThresh()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
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
    threshold_size{YType::uint64, "threshold-size"},
    threshold_interval{YType::uint64, "threshold-interval"}
{

    yang_name = "threshold"; yang_parent_name = "red-max-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::~Threshold()
{
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_size.is_set
	|| threshold_interval.is_set;
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_size.yfilter)
	|| ydk::is_set(threshold_interval.yfilter);
}

std::string Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_size.is_set || is_set(threshold_size.yfilter)) leaf_name_data.push_back(threshold_size.get_name_leafdata());
    if (threshold_interval.is_set || is_set(threshold_interval.yfilter)) leaf_name_data.push_back(threshold_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-size")
    {
        threshold_size = value;
        threshold_size.value_namespace = name_space;
        threshold_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval = value;
        threshold_interval.value_namespace = name_space;
        threshold_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-size")
    {
        threshold_size.yfilter = yfilter;
    }
    if(value_path == "threshold-interval")
    {
        threshold_interval.yfilter = yfilter;
    }
}

bool Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg::RandomDetectCfg::RedMaxThresh::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-size" || name == "threshold-interval")
        return true;
    return false;
}


}
}

