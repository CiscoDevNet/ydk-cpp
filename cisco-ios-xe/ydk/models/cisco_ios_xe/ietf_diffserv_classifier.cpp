
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_classifier.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ietf_diffserv_classifier {

FilterType::FilterType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:filter-type")
{
}

FilterType::~FilterType()
{
}

ClassifierEntryFilterOperationType::ClassifierEntryFilterOperationType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:classifier-entry-filter-operation-type")
{
}

ClassifierEntryFilterOperationType::~ClassifierEntryFilterOperationType()
{
}

Classifiers::Classifiers()
{
    yang_name = "classifiers"; yang_parent_name = "ietf-diffserv-classifier";
}

Classifiers::~Classifiers()
{
}

bool Classifiers::has_data() const
{
    for (std::size_t index=0; index<classifier_entry.size(); index++)
    {
        if(classifier_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::has_operation() const
{
    for (std::size_t index=0; index<classifier_entry.size(); index++)
    {
        if(classifier_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-classifier:classifiers";

    return path_buffer.str();

}

const EntityPath Classifiers::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Classifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Classifiers::ClassifierEntry>();
        c->parent = this;
        classifier_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : classifier_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Classifiers::clone_ptr() const
{
    return std::make_shared<Classifiers>();
}

std::string Classifiers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Classifiers::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Classifiers::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Classifiers::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Classifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry")
        return true;
    return false;
}

Classifiers::ClassifierEntry::ClassifierEntry()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    classifier_entry_descr{YType::str, "classifier-entry-descr"},
    classifier_entry_filter_operation{YType::identityref, "classifier-entry-filter-operation"},
    classifier_entry_type{YType::identityref, "cisco-policy-filters:classifier-entry-type"}
{
    yang_name = "classifier-entry"; yang_parent_name = "classifiers";
}

Classifiers::ClassifierEntry::~ClassifierEntry()
{
}

bool Classifiers::ClassifierEntry::has_data() const
{
    for (std::size_t index=0; index<filter_entry.size(); index++)
    {
        if(filter_entry[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| classifier_entry_descr.is_set
	|| classifier_entry_filter_operation.is_set
	|| classifier_entry_type.is_set;
}

bool Classifiers::ClassifierEntry::has_operation() const
{
    for (std::size_t index=0; index<filter_entry.size(); index++)
    {
        if(filter_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(classifier_entry_descr.yfilter)
	|| ydk::is_set(classifier_entry_filter_operation.yfilter)
	|| ydk::is_set(classifier_entry_type.yfilter);
}

std::string Classifiers::ClassifierEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry" <<"[classifier-entry-name='" <<classifier_entry_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-diffserv-classifier:classifiers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_descr.is_set || is_set(classifier_entry_descr.yfilter)) leaf_name_data.push_back(classifier_entry_descr.get_name_leafdata());
    if (classifier_entry_filter_operation.is_set || is_set(classifier_entry_filter_operation.yfilter)) leaf_name_data.push_back(classifier_entry_filter_operation.get_name_leafdata());
    if (classifier_entry_type.is_set || is_set(classifier_entry_type.yfilter)) leaf_name_data.push_back(classifier_entry_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry>();
        c->parent = this;
        filter_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "classifier-entry-type")
    {
        classifier_entry_type = value;
        classifier_entry_type.value_namespace = name_space;
        classifier_entry_type.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "classifier-entry-type")
    {
        classifier_entry_type.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-entry" || name == "classifier-entry-name" || name == "classifier-entry-descr" || name == "classifier-entry-filter-operation" || name == "classifier-entry-type")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FilterEntry()
    :
    filter_type{YType::identityref, "filter-type"},
    filter_logical_not{YType::boolean, "filter-logical-not"}
    	,
    application_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs>())
	,atm_clp_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg>())
	,atm_vci_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs>())
	,class_map_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs>())
	,cos_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosCfgs>())
	,cos_inner_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs>())
	,dei_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DeiCfg>())
	,dei_inner_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg>())
	,discard_class_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs>())
	,dst_mac_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs>())
	,flow_ip_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg>())
	,flow_record_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg>())
	,fr_de_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FrDeCfg>())
	,fr_dlci_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs>())
	,input_interface_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs>())
	,ip_rtp_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs>())
	,ipv4_acl_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs>())
	,ipv4_acl_name_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs>())
	,ipv6_acl_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs>())
	,ipv6_acl_name_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs>())
	,metadata_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MetadataCfg>())
	,mpls_exp_imp_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs>())
	,mpls_exp_top_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs>())
	,pkt_len_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs>())
	,prec(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec>())
	,protocol_name_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs>())
	,qos_group_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs>())
	,security_group(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup>())
	,src_mac_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs>())
	,vlan_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanCfgs>())
	,vlan_inner_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs>())
	,vpls_cfg(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VplsCfg>())
	,wlan_user_priority_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs>())
{
    application_cfgs->parent = this;

    atm_clp_cfg->parent = this;

    atm_vci_cfgs->parent = this;

    class_map_cfgs->parent = this;

    cos_cfgs->parent = this;

    cos_inner_cfgs->parent = this;

    dei_cfg->parent = this;

    dei_inner_cfg->parent = this;

    discard_class_cfgs->parent = this;

    dst_mac_cfgs->parent = this;

    flow_ip_cfg->parent = this;

    flow_record_cfg->parent = this;

    fr_de_cfg->parent = this;

    fr_dlci_cfgs->parent = this;

    input_interface_cfgs->parent = this;

    ip_rtp_cfgs->parent = this;

    ipv4_acl_cfgs->parent = this;

    ipv4_acl_name_cfgs->parent = this;

    ipv6_acl_cfgs->parent = this;

    ipv6_acl_name_cfgs->parent = this;

    metadata_cfg->parent = this;

    mpls_exp_imp_cfgs->parent = this;

    mpls_exp_top_cfgs->parent = this;

    pkt_len_cfgs->parent = this;

    prec->parent = this;

    protocol_name_cfgs->parent = this;

    qos_group_cfgs->parent = this;

    security_group->parent = this;

    src_mac_cfgs->parent = this;

    vlan_cfgs->parent = this;

    vlan_inner_cfgs->parent = this;

    vpls_cfg->parent = this;

    wlan_user_priority_cfgs->parent = this;

    yang_name = "filter-entry"; yang_parent_name = "classifier-entry";
}

Classifiers::ClassifierEntry::FilterEntry::~FilterEntry()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::has_data() const
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
	|| filter_logical_not.is_set
	|| (application_cfgs !=  nullptr && application_cfgs->has_data())
	|| (atm_clp_cfg !=  nullptr && atm_clp_cfg->has_data())
	|| (atm_vci_cfgs !=  nullptr && atm_vci_cfgs->has_data())
	|| (class_map_cfgs !=  nullptr && class_map_cfgs->has_data())
	|| (cos_cfgs !=  nullptr && cos_cfgs->has_data())
	|| (cos_inner_cfgs !=  nullptr && cos_inner_cfgs->has_data())
	|| (dei_cfg !=  nullptr && dei_cfg->has_data())
	|| (dei_inner_cfg !=  nullptr && dei_inner_cfg->has_data())
	|| (discard_class_cfgs !=  nullptr && discard_class_cfgs->has_data())
	|| (dst_mac_cfgs !=  nullptr && dst_mac_cfgs->has_data())
	|| (flow_ip_cfg !=  nullptr && flow_ip_cfg->has_data())
	|| (flow_record_cfg !=  nullptr && flow_record_cfg->has_data())
	|| (fr_de_cfg !=  nullptr && fr_de_cfg->has_data())
	|| (fr_dlci_cfgs !=  nullptr && fr_dlci_cfgs->has_data())
	|| (input_interface_cfgs !=  nullptr && input_interface_cfgs->has_data())
	|| (ip_rtp_cfgs !=  nullptr && ip_rtp_cfgs->has_data())
	|| (ipv4_acl_cfgs !=  nullptr && ipv4_acl_cfgs->has_data())
	|| (ipv4_acl_name_cfgs !=  nullptr && ipv4_acl_name_cfgs->has_data())
	|| (ipv6_acl_cfgs !=  nullptr && ipv6_acl_cfgs->has_data())
	|| (ipv6_acl_name_cfgs !=  nullptr && ipv6_acl_name_cfgs->has_data())
	|| (metadata_cfg !=  nullptr && metadata_cfg->has_data())
	|| (mpls_exp_imp_cfgs !=  nullptr && mpls_exp_imp_cfgs->has_data())
	|| (mpls_exp_top_cfgs !=  nullptr && mpls_exp_top_cfgs->has_data())
	|| (pkt_len_cfgs !=  nullptr && pkt_len_cfgs->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (protocol_name_cfgs !=  nullptr && protocol_name_cfgs->has_data())
	|| (qos_group_cfgs !=  nullptr && qos_group_cfgs->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (src_mac_cfgs !=  nullptr && src_mac_cfgs->has_data())
	|| (vlan_cfgs !=  nullptr && vlan_cfgs->has_data())
	|| (vlan_inner_cfgs !=  nullptr && vlan_inner_cfgs->has_data())
	|| (vpls_cfg !=  nullptr && vpls_cfg->has_data())
	|| (wlan_user_priority_cfgs !=  nullptr && wlan_user_priority_cfgs->has_data());
}

bool Classifiers::ClassifierEntry::FilterEntry::has_operation() const
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
	|| ydk::is_set(filter_logical_not.yfilter)
	|| (application_cfgs !=  nullptr && application_cfgs->has_operation())
	|| (atm_clp_cfg !=  nullptr && atm_clp_cfg->has_operation())
	|| (atm_vci_cfgs !=  nullptr && atm_vci_cfgs->has_operation())
	|| (class_map_cfgs !=  nullptr && class_map_cfgs->has_operation())
	|| (cos_cfgs !=  nullptr && cos_cfgs->has_operation())
	|| (cos_inner_cfgs !=  nullptr && cos_inner_cfgs->has_operation())
	|| (dei_cfg !=  nullptr && dei_cfg->has_operation())
	|| (dei_inner_cfg !=  nullptr && dei_inner_cfg->has_operation())
	|| (discard_class_cfgs !=  nullptr && discard_class_cfgs->has_operation())
	|| (dst_mac_cfgs !=  nullptr && dst_mac_cfgs->has_operation())
	|| (flow_ip_cfg !=  nullptr && flow_ip_cfg->has_operation())
	|| (flow_record_cfg !=  nullptr && flow_record_cfg->has_operation())
	|| (fr_de_cfg !=  nullptr && fr_de_cfg->has_operation())
	|| (fr_dlci_cfgs !=  nullptr && fr_dlci_cfgs->has_operation())
	|| (input_interface_cfgs !=  nullptr && input_interface_cfgs->has_operation())
	|| (ip_rtp_cfgs !=  nullptr && ip_rtp_cfgs->has_operation())
	|| (ipv4_acl_cfgs !=  nullptr && ipv4_acl_cfgs->has_operation())
	|| (ipv4_acl_name_cfgs !=  nullptr && ipv4_acl_name_cfgs->has_operation())
	|| (ipv6_acl_cfgs !=  nullptr && ipv6_acl_cfgs->has_operation())
	|| (ipv6_acl_name_cfgs !=  nullptr && ipv6_acl_name_cfgs->has_operation())
	|| (metadata_cfg !=  nullptr && metadata_cfg->has_operation())
	|| (mpls_exp_imp_cfgs !=  nullptr && mpls_exp_imp_cfgs->has_operation())
	|| (mpls_exp_top_cfgs !=  nullptr && mpls_exp_top_cfgs->has_operation())
	|| (pkt_len_cfgs !=  nullptr && pkt_len_cfgs->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (protocol_name_cfgs !=  nullptr && protocol_name_cfgs->has_operation())
	|| (qos_group_cfgs !=  nullptr && qos_group_cfgs->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (src_mac_cfgs !=  nullptr && src_mac_cfgs->has_operation())
	|| (vlan_cfgs !=  nullptr && vlan_cfgs->has_operation())
	|| (vlan_inner_cfgs !=  nullptr && vlan_inner_cfgs->has_operation())
	|| (vpls_cfg !=  nullptr && vpls_cfg->has_operation())
	|| (wlan_user_priority_cfgs !=  nullptr && wlan_user_priority_cfgs->has_operation());
}

std::string Classifiers::ClassifierEntry::FilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-entry" <<"[filter-type='" <<filter_type <<"']" <<"[filter-logical-not='" <<filter_logical_not <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterEntry' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-cfgs")
    {
        if(application_cfgs == nullptr)
        {
            application_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs>();
        }
        return application_cfgs;
    }

    if(child_yang_name == "atm-clp-cfg")
    {
        if(atm_clp_cfg == nullptr)
        {
            atm_clp_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg>();
        }
        return atm_clp_cfg;
    }

    if(child_yang_name == "atm-vci-cfgs")
    {
        if(atm_vci_cfgs == nullptr)
        {
            atm_vci_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs>();
        }
        return atm_vci_cfgs;
    }

    if(child_yang_name == "class-map-cfgs")
    {
        if(class_map_cfgs == nullptr)
        {
            class_map_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs>();
        }
        return class_map_cfgs;
    }

    if(child_yang_name == "cos-cfgs")
    {
        if(cos_cfgs == nullptr)
        {
            cos_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosCfgs>();
        }
        return cos_cfgs;
    }

    if(child_yang_name == "cos-inner-cfgs")
    {
        if(cos_inner_cfgs == nullptr)
        {
            cos_inner_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs>();
        }
        return cos_inner_cfgs;
    }

    if(child_yang_name == "dei-cfg")
    {
        if(dei_cfg == nullptr)
        {
            dei_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DeiCfg>();
        }
        return dei_cfg;
    }

    if(child_yang_name == "dei-inner-cfg")
    {
        if(dei_inner_cfg == nullptr)
        {
            dei_inner_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg>();
        }
        return dei_inner_cfg;
    }

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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg>();
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg>();
        c->parent = this;
        destination_port_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "discard-class-cfgs")
    {
        if(discard_class_cfgs == nullptr)
        {
            discard_class_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs>();
        }
        return discard_class_cfgs;
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DscpCfg>();
        c->parent = this;
        dscp_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "dst-mac-cfgs")
    {
        if(dst_mac_cfgs == nullptr)
        {
            dst_mac_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs>();
        }
        return dst_mac_cfgs;
    }

    if(child_yang_name == "flow-ip-cfg")
    {
        if(flow_ip_cfg == nullptr)
        {
            flow_ip_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg>();
        }
        return flow_ip_cfg;
    }

    if(child_yang_name == "flow-record-cfg")
    {
        if(flow_record_cfg == nullptr)
        {
            flow_record_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg>();
        }
        return flow_record_cfg;
    }

    if(child_yang_name == "fr-de-cfg")
    {
        if(fr_de_cfg == nullptr)
        {
            fr_de_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FrDeCfg>();
        }
        return fr_de_cfg;
    }

    if(child_yang_name == "fr-dlci-cfgs")
    {
        if(fr_dlci_cfgs == nullptr)
        {
            fr_dlci_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs>();
        }
        return fr_dlci_cfgs;
    }

    if(child_yang_name == "input-interface-cfgs")
    {
        if(input_interface_cfgs == nullptr)
        {
            input_interface_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs>();
        }
        return input_interface_cfgs;
    }

    if(child_yang_name == "ip-rtp-cfgs")
    {
        if(ip_rtp_cfgs == nullptr)
        {
            ip_rtp_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs>();
        }
        return ip_rtp_cfgs;
    }

    if(child_yang_name == "ipv4-acl-cfgs")
    {
        if(ipv4_acl_cfgs == nullptr)
        {
            ipv4_acl_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs>();
        }
        return ipv4_acl_cfgs;
    }

    if(child_yang_name == "ipv4-acl-name-cfgs")
    {
        if(ipv4_acl_name_cfgs == nullptr)
        {
            ipv4_acl_name_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs>();
        }
        return ipv4_acl_name_cfgs;
    }

    if(child_yang_name == "ipv6-acl-cfgs")
    {
        if(ipv6_acl_cfgs == nullptr)
        {
            ipv6_acl_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs>();
        }
        return ipv6_acl_cfgs;
    }

    if(child_yang_name == "ipv6-acl-name-cfgs")
    {
        if(ipv6_acl_name_cfgs == nullptr)
        {
            ipv6_acl_name_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs>();
        }
        return ipv6_acl_name_cfgs;
    }

    if(child_yang_name == "metadata-cfg")
    {
        if(metadata_cfg == nullptr)
        {
            metadata_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MetadataCfg>();
        }
        return metadata_cfg;
    }

    if(child_yang_name == "mpls-exp-imp-cfgs")
    {
        if(mpls_exp_imp_cfgs == nullptr)
        {
            mpls_exp_imp_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs>();
        }
        return mpls_exp_imp_cfgs;
    }

    if(child_yang_name == "mpls-exp-top-cfgs")
    {
        if(mpls_exp_top_cfgs == nullptr)
        {
            mpls_exp_top_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs>();
        }
        return mpls_exp_top_cfgs;
    }

    if(child_yang_name == "pkt-len-cfgs")
    {
        if(pkt_len_cfgs == nullptr)
        {
            pkt_len_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs>();
        }
        return pkt_len_cfgs;
    }

    if(child_yang_name == "prec")
    {
        if(prec == nullptr)
        {
            prec = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec>();
        }
        return prec;
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg>();
        c->parent = this;
        protocol_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-name-cfgs")
    {
        if(protocol_name_cfgs == nullptr)
        {
            protocol_name_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs>();
        }
        return protocol_name_cfgs;
    }

    if(child_yang_name == "qos-group-cfgs")
    {
        if(qos_group_cfgs == nullptr)
        {
            qos_group_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs>();
        }
        return qos_group_cfgs;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup>();
        }
        return security_group;
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg>();
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
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg>();
        c->parent = this;
        source_port_cfg.push_back(c);
        return c;
    }

    if(child_yang_name == "src-mac-cfgs")
    {
        if(src_mac_cfgs == nullptr)
        {
            src_mac_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs>();
        }
        return src_mac_cfgs;
    }

    if(child_yang_name == "vlan-cfgs")
    {
        if(vlan_cfgs == nullptr)
        {
            vlan_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanCfgs>();
        }
        return vlan_cfgs;
    }

    if(child_yang_name == "vlan-inner-cfgs")
    {
        if(vlan_inner_cfgs == nullptr)
        {
            vlan_inner_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs>();
        }
        return vlan_inner_cfgs;
    }

    if(child_yang_name == "vpls-cfg")
    {
        if(vpls_cfg == nullptr)
        {
            vpls_cfg = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VplsCfg>();
        }
        return vpls_cfg;
    }

    if(child_yang_name == "wlan-user-priority-cfgs")
    {
        if(wlan_user_priority_cfgs == nullptr)
        {
            wlan_user_priority_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs>();
        }
        return wlan_user_priority_cfgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_cfgs != nullptr)
    {
        children["application-cfgs"] = application_cfgs;
    }

    if(atm_clp_cfg != nullptr)
    {
        children["atm-clp-cfg"] = atm_clp_cfg;
    }

    if(atm_vci_cfgs != nullptr)
    {
        children["atm-vci-cfgs"] = atm_vci_cfgs;
    }

    if(class_map_cfgs != nullptr)
    {
        children["class-map-cfgs"] = class_map_cfgs;
    }

    if(cos_cfgs != nullptr)
    {
        children["cos-cfgs"] = cos_cfgs;
    }

    if(cos_inner_cfgs != nullptr)
    {
        children["cos-inner-cfgs"] = cos_inner_cfgs;
    }

    if(dei_cfg != nullptr)
    {
        children["dei-cfg"] = dei_cfg;
    }

    if(dei_inner_cfg != nullptr)
    {
        children["dei-inner-cfg"] = dei_inner_cfg;
    }

    for (auto const & c : destination_ip_address_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : destination_port_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    if(discard_class_cfgs != nullptr)
    {
        children["discard-class-cfgs"] = discard_class_cfgs;
    }

    for (auto const & c : dscp_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    if(dst_mac_cfgs != nullptr)
    {
        children["dst-mac-cfgs"] = dst_mac_cfgs;
    }

    if(flow_ip_cfg != nullptr)
    {
        children["flow-ip-cfg"] = flow_ip_cfg;
    }

    if(flow_record_cfg != nullptr)
    {
        children["flow-record-cfg"] = flow_record_cfg;
    }

    if(fr_de_cfg != nullptr)
    {
        children["fr-de-cfg"] = fr_de_cfg;
    }

    if(fr_dlci_cfgs != nullptr)
    {
        children["fr-dlci-cfgs"] = fr_dlci_cfgs;
    }

    if(input_interface_cfgs != nullptr)
    {
        children["input-interface-cfgs"] = input_interface_cfgs;
    }

    if(ip_rtp_cfgs != nullptr)
    {
        children["ip-rtp-cfgs"] = ip_rtp_cfgs;
    }

    if(ipv4_acl_cfgs != nullptr)
    {
        children["ipv4-acl-cfgs"] = ipv4_acl_cfgs;
    }

    if(ipv4_acl_name_cfgs != nullptr)
    {
        children["ipv4-acl-name-cfgs"] = ipv4_acl_name_cfgs;
    }

    if(ipv6_acl_cfgs != nullptr)
    {
        children["ipv6-acl-cfgs"] = ipv6_acl_cfgs;
    }

    if(ipv6_acl_name_cfgs != nullptr)
    {
        children["ipv6-acl-name-cfgs"] = ipv6_acl_name_cfgs;
    }

    if(metadata_cfg != nullptr)
    {
        children["metadata-cfg"] = metadata_cfg;
    }

    if(mpls_exp_imp_cfgs != nullptr)
    {
        children["mpls-exp-imp-cfgs"] = mpls_exp_imp_cfgs;
    }

    if(mpls_exp_top_cfgs != nullptr)
    {
        children["mpls-exp-top-cfgs"] = mpls_exp_top_cfgs;
    }

    if(pkt_len_cfgs != nullptr)
    {
        children["pkt-len-cfgs"] = pkt_len_cfgs;
    }

    if(prec != nullptr)
    {
        children["prec"] = prec;
    }

    for (auto const & c : protocol_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    if(protocol_name_cfgs != nullptr)
    {
        children["protocol-name-cfgs"] = protocol_name_cfgs;
    }

    if(qos_group_cfgs != nullptr)
    {
        children["qos-group-cfgs"] = qos_group_cfgs;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    for (auto const & c : source_ip_address_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : source_port_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    if(src_mac_cfgs != nullptr)
    {
        children["src-mac-cfgs"] = src_mac_cfgs;
    }

    if(vlan_cfgs != nullptr)
    {
        children["vlan-cfgs"] = vlan_cfgs;
    }

    if(vlan_inner_cfgs != nullptr)
    {
        children["vlan-inner-cfgs"] = vlan_inner_cfgs;
    }

    if(vpls_cfg != nullptr)
    {
        children["vpls-cfg"] = vpls_cfg;
    }

    if(wlan_user_priority_cfgs != nullptr)
    {
        children["wlan-user-priority-cfgs"] = wlan_user_priority_cfgs;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Classifiers::ClassifierEntry::FilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Classifiers::ClassifierEntry::FilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-cfgs" || name == "atm-clp-cfg" || name == "atm-vci-cfgs" || name == "class-map-cfgs" || name == "cos-cfgs" || name == "cos-inner-cfgs" || name == "dei-cfg" || name == "dei-inner-cfg" || name == "destination-ip-address-cfg" || name == "destination-port-cfg" || name == "discard-class-cfgs" || name == "dscp-cfg" || name == "dst-mac-cfgs" || name == "flow-ip-cfg" || name == "flow-record-cfg" || name == "fr-de-cfg" || name == "fr-dlci-cfgs" || name == "input-interface-cfgs" || name == "ip-rtp-cfgs" || name == "ipv4-acl-cfgs" || name == "ipv4-acl-name-cfgs" || name == "ipv6-acl-cfgs" || name == "ipv6-acl-name-cfgs" || name == "metadata-cfg" || name == "mpls-exp-imp-cfgs" || name == "mpls-exp-top-cfgs" || name == "pkt-len-cfgs" || name == "prec" || name == "protocol-cfg" || name == "protocol-name-cfgs" || name == "qos-group-cfgs" || name == "security-group" || name == "source-ip-address-cfg" || name == "source-port-cfg" || name == "src-mac-cfgs" || name == "vlan-cfgs" || name == "vlan-inner-cfgs" || name == "vpls-cfg" || name == "wlan-user-priority-cfgs" || name == "filter-type" || name == "filter-logical-not")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DscpCfg::DscpCfg()
    :
    dscp_min{YType::uint8, "dscp-min"},
    dscp_max{YType::uint8, "dscp-max"}
{
    yang_name = "dscp-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DscpCfg::~DscpCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DscpCfg::has_data() const
{
    return dscp_min.is_set
	|| dscp_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DscpCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp_min.yfilter)
	|| ydk::is_set(dscp_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DscpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-cfg" <<"[dscp-min='" <<dscp_min <<"']" <<"[dscp-max='" <<dscp_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DscpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DscpCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DscpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DscpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DscpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Classifiers::ClassifierEntry::FilterEntry::DscpCfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Classifiers::ClassifierEntry::FilterEntry::DscpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp-min" || name == "dscp-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::SourceIpAddressCfg()
    :
    source_ip_addr{YType::str, "source-ip-addr"}
{
    yang_name = "source-ip-address-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::~SourceIpAddressCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_data() const
{
    return source_ip_addr.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_ip_addr.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ip-address-cfg" <<"[source-ip-addr='" <<source_ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceIpAddressCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-ip-addr")
    {
        source_ip_addr = value;
        source_ip_addr.value_namespace = name_space;
        source_ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-ip-addr")
    {
        source_ip_addr.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-ip-addr")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::DestinationIpAddressCfg()
    :
    destination_ip_addr{YType::str, "destination-ip-addr"}
{
    yang_name = "destination-ip-address-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::~DestinationIpAddressCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_data() const
{
    return destination_ip_addr.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_ip_addr.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ip-address-cfg" <<"[destination-ip-addr='" <<destination_ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationIpAddressCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-ip-addr")
    {
        destination_ip_addr = value;
        destination_ip_addr.value_namespace = name_space;
        destination_ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-ip-addr")
    {
        destination_ip_addr.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-ip-addr")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::SourcePortCfg()
    :
    source_port_min{YType::uint16, "source-port-min"},
    source_port_max{YType::uint16, "source-port-max"}
{
    yang_name = "source-port-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::~SourcePortCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::has_data() const
{
    return source_port_min.is_set
	|| source_port_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_port_min.yfilter)
	|| ydk::is_set(source_port_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port-cfg" <<"[source-port-min='" <<source_port_min <<"']" <<"[source-port-max='" <<source_port_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePortCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-port-min" || name == "source-port-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::DestinationPortCfg()
    :
    destination_port_min{YType::uint16, "destination-port-min"},
    destination_port_max{YType::uint16, "destination-port-max"}
{
    yang_name = "destination-port-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::~DestinationPortCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::has_data() const
{
    return destination_port_min.is_set
	|| destination_port_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port_min.yfilter)
	|| ydk::is_set(destination_port_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-port-cfg" <<"[destination-port-min='" <<destination_port_min <<"']" <<"[destination-port-max='" <<destination_port_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPortCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port-min" || name == "destination-port-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::ProtocolCfg()
    :
    protocol_min{YType::uint8, "protocol-min"},
    protocol_max{YType::uint8, "protocol-max"}
{
    yang_name = "protocol-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::~ProtocolCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::has_data() const
{
    return protocol_min.is_set
	|| protocol_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_min.yfilter)
	|| ydk::is_set(protocol_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-cfg" <<"[protocol-min='" <<protocol_min <<"']" <<"[protocol-max='" <<protocol_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-min" || name == "protocol-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfgs()
{
    yang_name = "cos-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::CosCfgs::~CosCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::has_data() const
{
    for (std::size_t index=0; index<cos_cfg.size(); index++)
    {
        if(cos_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::has_operation() const
{
    for (std::size_t index=0; index<cos_cfg.size(); index++)
    {
        if(cos_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::CosCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:cos-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::CosCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::CosCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-cfg")
    {
        for(auto const & c : cos_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg>();
        c->parent = this;
        cos_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::CosCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::CosCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::CosCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::CosCfg()
    :
    cos_min{YType::uint8, "cos-min"},
    cos_max{YType::uint8, "cos-max"}
{
    yang_name = "cos-cfg"; yang_parent_name = "cos-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::~CosCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::has_data() const
{
    return cos_min.is_set
	|| cos_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_min.yfilter)
	|| ydk::is_set(cos_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-cfg" <<"[cos-min='" <<cos_min <<"']" <<"[cos-max='" <<cos_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_min.is_set || is_set(cos_min.yfilter)) leaf_name_data.push_back(cos_min.get_name_leafdata());
    if (cos_max.is_set || is_set(cos_max.yfilter)) leaf_name_data.push_back(cos_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-min")
    {
        cos_min = value;
        cos_min.value_namespace = name_space;
        cos_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-max")
    {
        cos_max = value;
        cos_max.value_namespace = name_space;
        cos_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-min")
    {
        cos_min.yfilter = yfilter;
    }
    if(value_path == "cos-max")
    {
        cos_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-min" || name == "cos-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfgs()
{
    yang_name = "cos-inner-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::~CosInnerCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::has_data() const
{
    for (std::size_t index=0; index<cos_inner_cfg.size(); index++)
    {
        if(cos_inner_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::has_operation() const
{
    for (std::size_t index=0; index<cos_inner_cfg.size(); index++)
    {
        if(cos_inner_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:cos-inner-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosInnerCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-inner-cfg")
    {
        for(auto const & c : cos_inner_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg>();
        c->parent = this;
        cos_inner_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_inner_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-inner-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::CosInnerCfg()
    :
    cos_min{YType::uint8, "cos-min"},
    cos_max{YType::uint8, "cos-max"}
{
    yang_name = "cos-inner-cfg"; yang_parent_name = "cos-inner-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::~CosInnerCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::has_data() const
{
    return cos_min.is_set
	|| cos_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_min.yfilter)
	|| ydk::is_set(cos_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inner-cfg" <<"[cos-min='" <<cos_min <<"']" <<"[cos-max='" <<cos_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosInnerCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_min.is_set || is_set(cos_min.yfilter)) leaf_name_data.push_back(cos_min.get_name_leafdata());
    if (cos_max.is_set || is_set(cos_max.yfilter)) leaf_name_data.push_back(cos_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-min")
    {
        cos_min = value;
        cos_min.value_namespace = name_space;
        cos_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-max")
    {
        cos_max = value;
        cos_max.value_namespace = name_space;
        cos_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-min")
    {
        cos_min.yfilter = yfilter;
    }
    if(value_path == "cos-max")
    {
        cos_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-min" || name == "cos-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfgs()
{
    yang_name = "ipv4-acl-name-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::~Ipv4AclNameCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::has_data() const
{
    for (std::size_t index=0; index<ipv4_acl_name_cfg.size(); index++)
    {
        if(ipv4_acl_name_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_acl_name_cfg.size(); index++)
    {
        if(ipv4_acl_name_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:ipv4-acl-name-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AclNameCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-acl-name-cfg")
    {
        for(auto const & c : ipv4_acl_name_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg>();
        c->parent = this;
        ipv4_acl_name_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_acl_name_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-acl-name-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::Ipv4AclNameCfg()
    :
    ip_acl_name{YType::str, "ip-acl-name"}
{
    yang_name = "ipv4-acl-name-cfg"; yang_parent_name = "ipv4-acl-name-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::~Ipv4AclNameCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::has_data() const
{
    return ip_acl_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_acl_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl-name-cfg" <<"[ip-acl-name='" <<ip_acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AclNameCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_acl_name.is_set || is_set(ip_acl_name.yfilter)) leaf_name_data.push_back(ip_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-acl-name")
    {
        ip_acl_name = value;
        ip_acl_name.value_namespace = name_space;
        ip_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-acl-name")
    {
        ip_acl_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-acl-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfgs()
{
    yang_name = "ipv6-acl-name-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::~Ipv6AclNameCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::has_data() const
{
    for (std::size_t index=0; index<ipv6_acl_name_cfg.size(); index++)
    {
        if(ipv6_acl_name_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_acl_name_cfg.size(); index++)
    {
        if(ipv6_acl_name_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:ipv6-acl-name-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AclNameCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-acl-name-cfg")
    {
        for(auto const & c : ipv6_acl_name_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg>();
        c->parent = this;
        ipv6_acl_name_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_acl_name_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-acl-name-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::Ipv6AclNameCfg()
    :
    ip_acl_name{YType::str, "ip-acl-name"}
{
    yang_name = "ipv6-acl-name-cfg"; yang_parent_name = "ipv6-acl-name-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::~Ipv6AclNameCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::has_data() const
{
    return ip_acl_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_acl_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl-name-cfg" <<"[ip-acl-name='" <<ip_acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AclNameCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_acl_name.is_set || is_set(ip_acl_name.yfilter)) leaf_name_data.push_back(ip_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-acl-name")
    {
        ip_acl_name = value;
        ip_acl_name.value_namespace = name_space;
        ip_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-acl-name")
    {
        ip_acl_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-acl-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfgs()
{
    yang_name = "ipv4-acl-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::~Ipv4AclCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::has_data() const
{
    for (std::size_t index=0; index<ipv4_acl_cfg.size(); index++)
    {
        if(ipv4_acl_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_acl_cfg.size(); index++)
    {
        if(ipv4_acl_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:ipv4-acl-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AclCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-acl-cfg")
    {
        for(auto const & c : ipv4_acl_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg>();
        c->parent = this;
        ipv4_acl_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_acl_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-acl-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::Ipv4AclCfg()
    :
    ip_acl{YType::uint32, "ip-acl"}
{
    yang_name = "ipv4-acl-cfg"; yang_parent_name = "ipv4-acl-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::~Ipv4AclCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::has_data() const
{
    return ip_acl.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_acl.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl-cfg" <<"[ip-acl='" <<ip_acl <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AclCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_acl.is_set || is_set(ip_acl.yfilter)) leaf_name_data.push_back(ip_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-acl")
    {
        ip_acl = value;
        ip_acl.value_namespace = name_space;
        ip_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-acl")
    {
        ip_acl.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-acl")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfgs()
{
    yang_name = "ipv6-acl-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::~Ipv6AclCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::has_data() const
{
    for (std::size_t index=0; index<ipv6_acl_cfg.size(); index++)
    {
        if(ipv6_acl_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_acl_cfg.size(); index++)
    {
        if(ipv6_acl_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:ipv6-acl-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AclCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-acl-cfg")
    {
        for(auto const & c : ipv6_acl_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg>();
        c->parent = this;
        ipv6_acl_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_acl_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-acl-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::Ipv6AclCfg()
    :
    ip_acl{YType::uint32, "ip-acl"}
{
    yang_name = "ipv6-acl-cfg"; yang_parent_name = "ipv6-acl-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::~Ipv6AclCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::has_data() const
{
    return ip_acl.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_acl.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl-cfg" <<"[ip-acl='" <<ip_acl <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6AclCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_acl.is_set || is_set(ip_acl.yfilter)) leaf_name_data.push_back(ip_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-acl")
    {
        ip_acl = value;
        ip_acl.value_namespace = name_space;
        ip_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-acl")
    {
        ip_acl.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-acl")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfgs()
{
    yang_name = "input-interface-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::~InputInterfaceCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::has_data() const
{
    for (std::size_t index=0; index<input_interface_cfg.size(); index++)
    {
        if(input_interface_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::has_operation() const
{
    for (std::size_t index=0; index<input_interface_cfg.size(); index++)
    {
        if(input_interface_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:input-interface-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputInterfaceCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-interface-cfg")
    {
        for(auto const & c : input_interface_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg>();
        c->parent = this;
        input_interface_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : input_interface_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-interface-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::InputInterfaceCfg()
    :
    if_name{YType::str, "if-name"}
{
    yang_name = "input-interface-cfg"; yang_parent_name = "input-interface-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::~InputInterfaceCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::has_data() const
{
    return if_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface-cfg" <<"[if-name='" <<if_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputInterfaceCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfgs()
{
    yang_name = "src-mac-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::~SrcMacCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::has_data() const
{
    for (std::size_t index=0; index<src_mac_cfg.size(); index++)
    {
        if(src_mac_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::has_operation() const
{
    for (std::size_t index=0; index<src_mac_cfg.size(); index++)
    {
        if(src_mac_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:src-mac-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcMacCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-mac-cfg")
    {
        for(auto const & c : src_mac_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg>();
        c->parent = this;
        src_mac_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : src_mac_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-mac-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::SrcMacCfg()
    :
    mac{YType::str, "mac"},
    mac_mask{YType::str, "mac-mask"}
{
    yang_name = "src-mac-cfg"; yang_parent_name = "src-mac-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::~SrcMacCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::has_data() const
{
    return mac.is_set
	|| mac_mask.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(mac_mask.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac-cfg" <<"[mac='" <<mac <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcMacCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_mask.is_set || is_set(mac_mask.yfilter)) leaf_name_data.push_back(mac_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-mask")
    {
        mac_mask = value;
        mac_mask.value_namespace = name_space;
        mac_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "mac-mask")
    {
        mac_mask.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-mask")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfgs()
{
    yang_name = "dst-mac-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::~DstMacCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::has_data() const
{
    for (std::size_t index=0; index<dst_mac_cfg.size(); index++)
    {
        if(dst_mac_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::has_operation() const
{
    for (std::size_t index=0; index<dst_mac_cfg.size(); index++)
    {
        if(dst_mac_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:dst-mac-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstMacCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-mac-cfg")
    {
        for(auto const & c : dst_mac_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg>();
        c->parent = this;
        dst_mac_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dst_mac_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-mac-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::DstMacCfg()
    :
    mac{YType::str, "mac"},
    mac_mask{YType::str, "mac-mask"}
{
    yang_name = "dst-mac-cfg"; yang_parent_name = "dst-mac-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::~DstMacCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::has_data() const
{
    return mac.is_set
	|| mac_mask.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(mac_mask.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac-cfg" <<"[mac='" <<mac <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstMacCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_mask.is_set || is_set(mac_mask.yfilter)) leaf_name_data.push_back(mac_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-mask")
    {
        mac_mask = value;
        mac_mask.value_namespace = name_space;
        mac_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "mac-mask")
    {
        mac_mask.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-mask")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfgs()
{
    yang_name = "protocol-name-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::~ProtocolNameCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::has_data() const
{
    for (std::size_t index=0; index<protocol_name_cfg.size(); index++)
    {
        if(protocol_name_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::has_operation() const
{
    for (std::size_t index=0; index<protocol_name_cfg.size(); index++)
    {
        if(protocol_name_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:protocol-name-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolNameCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-name-cfg")
    {
        for(auto const & c : protocol_name_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg>();
        c->parent = this;
        protocol_name_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_name_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::ProtocolNameCfg()
    :
    protocol_name{YType::str, "protocol-name"}
{
    yang_name = "protocol-name-cfg"; yang_parent_name = "protocol-name-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::~ProtocolNameCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::has_data() const
{
    return protocol_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-name-cfg" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolNameCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfgs()
{
    yang_name = "mpls-exp-top-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::~MplsExpTopCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::has_data() const
{
    for (std::size_t index=0; index<mpls_exp_top_cfg.size(); index++)
    {
        if(mpls_exp_top_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::has_operation() const
{
    for (std::size_t index=0; index<mpls_exp_top_cfg.size(); index++)
    {
        if(mpls_exp_top_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:mpls-exp-top-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpTopCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-exp-top-cfg")
    {
        for(auto const & c : mpls_exp_top_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg>();
        c->parent = this;
        mpls_exp_top_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_exp_top_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-exp-top-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::MplsExpTopCfg()
    :
    exp_min{YType::uint8, "exp-min"},
    exp_max{YType::uint8, "exp-max"}
{
    yang_name = "mpls-exp-top-cfg"; yang_parent_name = "mpls-exp-top-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::~MplsExpTopCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::has_data() const
{
    return exp_min.is_set
	|| exp_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_min.yfilter)
	|| ydk::is_set(exp_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-top-cfg" <<"[exp-min='" <<exp_min <<"']" <<"[exp-max='" <<exp_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpTopCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_min.is_set || is_set(exp_min.yfilter)) leaf_name_data.push_back(exp_min.get_name_leafdata());
    if (exp_max.is_set || is_set(exp_max.yfilter)) leaf_name_data.push_back(exp_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-min")
    {
        exp_min = value;
        exp_min.value_namespace = name_space;
        exp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-max")
    {
        exp_max = value;
        exp_max.value_namespace = name_space;
        exp_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-min")
    {
        exp_min.yfilter = yfilter;
    }
    if(value_path == "exp-max")
    {
        exp_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-min" || name == "exp-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfgs()
{
    yang_name = "mpls-exp-imp-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::~MplsExpImpCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::has_data() const
{
    for (std::size_t index=0; index<mpls_exp_imp_cfg.size(); index++)
    {
        if(mpls_exp_imp_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::has_operation() const
{
    for (std::size_t index=0; index<mpls_exp_imp_cfg.size(); index++)
    {
        if(mpls_exp_imp_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:mpls-exp-imp-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpImpCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-exp-imp-cfg")
    {
        for(auto const & c : mpls_exp_imp_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg>();
        c->parent = this;
        mpls_exp_imp_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_exp_imp_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-exp-imp-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::MplsExpImpCfg()
    :
    exp_min{YType::uint8, "exp-min"},
    exp_max{YType::uint8, "exp-max"}
{
    yang_name = "mpls-exp-imp-cfg"; yang_parent_name = "mpls-exp-imp-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::~MplsExpImpCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::has_data() const
{
    return exp_min.is_set
	|| exp_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_min.yfilter)
	|| ydk::is_set(exp_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp-cfg" <<"[exp-min='" <<exp_min <<"']" <<"[exp-max='" <<exp_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpImpCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_min.is_set || is_set(exp_min.yfilter)) leaf_name_data.push_back(exp_min.get_name_leafdata());
    if (exp_max.is_set || is_set(exp_max.yfilter)) leaf_name_data.push_back(exp_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-min")
    {
        exp_min = value;
        exp_min.value_namespace = name_space;
        exp_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-max")
    {
        exp_max = value;
        exp_max.value_namespace = name_space;
        exp_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-min")
    {
        exp_min.yfilter = yfilter;
    }
    if(value_path == "exp-max")
    {
        exp_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-min" || name == "exp-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfgs()
{
    yang_name = "pkt-len-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::~PktLenCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::has_data() const
{
    for (std::size_t index=0; index<pkt_len_cfg.size(); index++)
    {
        if(pkt_len_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::has_operation() const
{
    for (std::size_t index=0; index<pkt_len_cfg.size(); index++)
    {
        if(pkt_len_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:pkt-len-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PktLenCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-len-cfg")
    {
        for(auto const & c : pkt_len_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg>();
        c->parent = this;
        pkt_len_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pkt_len_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-len-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::PktLenCfg()
    :
    min_pkt_len{YType::uint16, "min-pkt-len"},
    max_pkt_len{YType::uint16, "max-pkt-len"}
{
    yang_name = "pkt-len-cfg"; yang_parent_name = "pkt-len-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::~PktLenCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::has_data() const
{
    return min_pkt_len.is_set
	|| max_pkt_len.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_pkt_len.yfilter)
	|| ydk::is_set(max_pkt_len.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-len-cfg" <<"[min-pkt-len='" <<min_pkt_len <<"']" <<"[max-pkt-len='" <<max_pkt_len <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PktLenCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_pkt_len.is_set || is_set(min_pkt_len.yfilter)) leaf_name_data.push_back(min_pkt_len.get_name_leafdata());
    if (max_pkt_len.is_set || is_set(max_pkt_len.yfilter)) leaf_name_data.push_back(max_pkt_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-pkt-len")
    {
        min_pkt_len = value;
        min_pkt_len.value_namespace = name_space;
        min_pkt_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-len")
    {
        max_pkt_len = value;
        max_pkt_len.value_namespace = name_space;
        max_pkt_len.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-pkt-len")
    {
        min_pkt_len.yfilter = yfilter;
    }
    if(value_path == "max-pkt-len")
    {
        max_pkt_len.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-pkt-len" || name == "max-pkt-len")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Prec::Prec()
    :
    prec_attr_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs>())
	,prec_val_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs>())
{
    prec_attr_cfgs->parent = this;

    prec_val_cfgs->parent = this;

    yang_name = "prec"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::Prec::~Prec()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::has_data() const
{
    return (prec_attr_cfgs !=  nullptr && prec_attr_cfgs->has_data())
	|| (prec_val_cfgs !=  nullptr && prec_val_cfgs->has_data());
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::has_operation() const
{
    return is_set(yfilter)
	|| (prec_attr_cfgs !=  nullptr && prec_attr_cfgs->has_operation())
	|| (prec_val_cfgs !=  nullptr && prec_val_cfgs->has_operation());
}

std::string Classifiers::ClassifierEntry::FilterEntry::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:prec";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prec' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prec-attr-cfgs")
    {
        if(prec_attr_cfgs == nullptr)
        {
            prec_attr_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs>();
        }
        return prec_attr_cfgs;
    }

    if(child_yang_name == "prec-val-cfgs")
    {
        if(prec_val_cfgs == nullptr)
        {
            prec_val_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs>();
        }
        return prec_val_cfgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prec_attr_cfgs != nullptr)
    {
        children["prec-attr-cfgs"] = prec_attr_cfgs;
    }

    if(prec_val_cfgs != nullptr)
    {
        children["prec-val-cfgs"] = prec_val_cfgs;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-attr-cfgs" || name == "prec-val-cfgs")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfgs()
{
    yang_name = "prec-val-cfgs"; yang_parent_name = "prec";
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::~PrecValCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::has_data() const
{
    for (std::size_t index=0; index<prec_val_cfg.size(); index++)
    {
        if(prec_val_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::has_operation() const
{
    for (std::size_t index=0; index<prec_val_cfg.size(); index++)
    {
        if(prec_val_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec-val-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrecValCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prec-val-cfg")
    {
        for(auto const & c : prec_val_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg>();
        c->parent = this;
        prec_val_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prec_val_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-val-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::PrecValCfg()
    :
    prec_val{YType::uint8, "prec-val"}
{
    yang_name = "prec-val-cfg"; yang_parent_name = "prec-val-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::~PrecValCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::has_data() const
{
    return prec_val.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec_val.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec-val-cfg" <<"[prec-val='" <<prec_val <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrecValCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-val")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfgs()
{
    yang_name = "prec-attr-cfgs"; yang_parent_name = "prec";
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::~PrecAttrCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::has_data() const
{
    for (std::size_t index=0; index<prec_attr_cfg.size(); index++)
    {
        if(prec_attr_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::has_operation() const
{
    for (std::size_t index=0; index<prec_attr_cfg.size(); index++)
    {
        if(prec_attr_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec-attr-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrecAttrCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prec-attr-cfg")
    {
        for(auto const & c : prec_attr_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg>();
        c->parent = this;
        prec_attr_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prec_attr_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-attr-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::PrecAttrCfg()
    :
    prec_attr{YType::str, "prec-attr"}
{
    yang_name = "prec-attr-cfg"; yang_parent_name = "prec-attr-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::~PrecAttrCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::has_data() const
{
    return prec_attr.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prec_attr.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec-attr-cfg" <<"[prec-attr='" <<prec_attr <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrecAttrCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prec_attr.is_set || is_set(prec_attr.yfilter)) leaf_name_data.push_back(prec_attr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prec-attr")
    {
        prec_attr = value;
        prec_attr.value_namespace = name_space;
        prec_attr.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prec-attr")
    {
        prec_attr.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prec-attr")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfgs()
{
    yang_name = "qos-group-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::~QosGroupCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::has_data() const
{
    for (std::size_t index=0; index<qos_group_cfg.size(); index++)
    {
        if(qos_group_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::has_operation() const
{
    for (std::size_t index=0; index<qos_group_cfg.size(); index++)
    {
        if(qos_group_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:qos-group-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroupCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-group-cfg")
    {
        for(auto const & c : qos_group_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg>();
        c->parent = this;
        qos_group_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : qos_group_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::QosGroupCfg()
    :
    qos_group_min{YType::uint16, "qos-group-min"},
    qos_group_max{YType::uint16, "qos-group-max"}
{
    yang_name = "qos-group-cfg"; yang_parent_name = "qos-group-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::~QosGroupCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::has_data() const
{
    return qos_group_min.is_set
	|| qos_group_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group_min.yfilter)
	|| ydk::is_set(qos_group_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group-cfg" <<"[qos-group-min='" <<qos_group_min <<"']" <<"[qos-group-max='" <<qos_group_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroupCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group_min.is_set || is_set(qos_group_min.yfilter)) leaf_name_data.push_back(qos_group_min.get_name_leafdata());
    if (qos_group_max.is_set || is_set(qos_group_max.yfilter)) leaf_name_data.push_back(qos_group_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group-min")
    {
        qos_group_min = value;
        qos_group_min.value_namespace = name_space;
        qos_group_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group-max")
    {
        qos_group_max = value;
        qos_group_max.value_namespace = name_space;
        qos_group_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group-min")
    {
        qos_group_min.yfilter = yfilter;
    }
    if(value_path == "qos-group-max")
    {
        qos_group_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group-min" || name == "qos-group-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfgs()
{
    yang_name = "vlan-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::~VlanCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::has_data() const
{
    for (std::size_t index=0; index<vlan_cfg.size(); index++)
    {
        if(vlan_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::has_operation() const
{
    for (std::size_t index=0; index<vlan_cfg.size(); index++)
    {
        if(vlan_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:vlan-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-cfg")
    {
        for(auto const & c : vlan_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg>();
        c->parent = this;
        vlan_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::VlanCfg()
    :
    vlan_min{YType::uint16, "vlan-min"},
    vlan_max{YType::uint16, "vlan-max"}
{
    yang_name = "vlan-cfg"; yang_parent_name = "vlan-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::~VlanCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::has_data() const
{
    return vlan_min.is_set
	|| vlan_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_min.yfilter)
	|| ydk::is_set(vlan_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-cfg" <<"[vlan-min='" <<vlan_min <<"']" <<"[vlan-max='" <<vlan_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_min.is_set || is_set(vlan_min.yfilter)) leaf_name_data.push_back(vlan_min.get_name_leafdata());
    if (vlan_max.is_set || is_set(vlan_max.yfilter)) leaf_name_data.push_back(vlan_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-min")
    {
        vlan_min = value;
        vlan_min.value_namespace = name_space;
        vlan_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-max")
    {
        vlan_max = value;
        vlan_max.value_namespace = name_space;
        vlan_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-min")
    {
        vlan_min.yfilter = yfilter;
    }
    if(value_path == "vlan-max")
    {
        vlan_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-min" || name == "vlan-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfgs()
{
    yang_name = "vlan-inner-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::~VlanInnerCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::has_data() const
{
    for (std::size_t index=0; index<vlan_inner_cfg.size(); index++)
    {
        if(vlan_inner_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::has_operation() const
{
    for (std::size_t index=0; index<vlan_inner_cfg.size(); index++)
    {
        if(vlan_inner_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:vlan-inner-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanInnerCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-inner-cfg")
    {
        for(auto const & c : vlan_inner_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg>();
        c->parent = this;
        vlan_inner_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_inner_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-inner-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::VlanInnerCfg()
    :
    vlan_min{YType::uint16, "vlan-min"},
    vlan_max{YType::uint16, "vlan-max"}
{
    yang_name = "vlan-inner-cfg"; yang_parent_name = "vlan-inner-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::~VlanInnerCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::has_data() const
{
    return vlan_min.is_set
	|| vlan_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_min.yfilter)
	|| ydk::is_set(vlan_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inner-cfg" <<"[vlan-min='" <<vlan_min <<"']" <<"[vlan-max='" <<vlan_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanInnerCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_min.is_set || is_set(vlan_min.yfilter)) leaf_name_data.push_back(vlan_min.get_name_leafdata());
    if (vlan_max.is_set || is_set(vlan_max.yfilter)) leaf_name_data.push_back(vlan_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-min")
    {
        vlan_min = value;
        vlan_min.value_namespace = name_space;
        vlan_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-max")
    {
        vlan_max = value;
        vlan_max.value_namespace = name_space;
        vlan_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-min")
    {
        vlan_min.yfilter = yfilter;
    }
    if(value_path == "vlan-max")
    {
        vlan_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-min" || name == "vlan-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::AtmClpCfg()
    :
    atm_clp{YType::empty, "atm-clp"}
{
    yang_name = "atm-clp-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::~AtmClpCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::has_data() const
{
    return atm_clp.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_clp.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:atm-clp-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmClpCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp.is_set || is_set(atm_clp.yfilter)) leaf_name_data.push_back(atm_clp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-clp")
    {
        atm_clp = value;
        atm_clp.value_namespace = name_space;
        atm_clp.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-clp")
    {
        atm_clp.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-clp")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfgs()
{
    yang_name = "atm-vci-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::~AtmVciCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::has_data() const
{
    for (std::size_t index=0; index<atm_vci_cfg.size(); index++)
    {
        if(atm_vci_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::has_operation() const
{
    for (std::size_t index=0; index<atm_vci_cfg.size(); index++)
    {
        if(atm_vci_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:atm-vci-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmVciCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm-vci-cfg")
    {
        for(auto const & c : atm_vci_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg>();
        c->parent = this;
        atm_vci_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atm_vci_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-vci-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::AtmVciCfg()
    :
    atm_vci_min{YType::uint16, "atm-vci-min"},
    atm_vci_max{YType::uint16, "atm-vci-max"}
{
    yang_name = "atm-vci-cfg"; yang_parent_name = "atm-vci-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::~AtmVciCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::has_data() const
{
    return atm_vci_min.is_set
	|| atm_vci_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_vci_min.yfilter)
	|| ydk::is_set(atm_vci_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-vci-cfg" <<"[atm-vci-min='" <<atm_vci_min <<"']" <<"[atm-vci-max='" <<atm_vci_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmVciCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_vci_min.is_set || is_set(atm_vci_min.yfilter)) leaf_name_data.push_back(atm_vci_min.get_name_leafdata());
    if (atm_vci_max.is_set || is_set(atm_vci_max.yfilter)) leaf_name_data.push_back(atm_vci_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-vci-min")
    {
        atm_vci_min = value;
        atm_vci_min.value_namespace = name_space;
        atm_vci_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-vci-max")
    {
        atm_vci_max = value;
        atm_vci_max.value_namespace = name_space;
        atm_vci_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-vci-min")
    {
        atm_vci_min.yfilter = yfilter;
    }
    if(value_path == "atm-vci-max")
    {
        atm_vci_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-vci-min" || name == "atm-vci-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DeiCfg::DeiCfg()
    :
    dei_cfg{YType::boolean, "dei-cfg"}
{
    yang_name = "dei-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DeiCfg::~DeiCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiCfg::has_data() const
{
    return dei_cfg.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dei_cfg.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DeiCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:dei-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DeiCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeiCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei_cfg.is_set || is_set(dei_cfg.yfilter)) leaf_name_data.push_back(dei_cfg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DeiCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DeiCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DeiCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dei-cfg")
    {
        dei_cfg = value;
        dei_cfg.value_namespace = name_space;
        dei_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::DeiCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dei-cfg")
    {
        dei_cfg.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dei-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::DeiInnerCfg()
    :
    dei_cfg{YType::boolean, "dei-cfg"}
{
    yang_name = "dei-inner-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::~DeiInnerCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::has_data() const
{
    return dei_cfg.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dei_cfg.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:dei-inner-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeiInnerCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dei_cfg.is_set || is_set(dei_cfg.yfilter)) leaf_name_data.push_back(dei_cfg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dei-cfg")
    {
        dei_cfg = value;
        dei_cfg.value_namespace = name_space;
        dei_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dei-cfg")
    {
        dei_cfg.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dei-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::FlowIpCfg()
    :
    dst_port{YType::uint16, "dst-port"},
    flow_dst_ip{YType::str, "flow-dst-ip"},
    flow_src_ip{YType::str, "flow-src-ip"},
    protocol{YType::enumeration, "protocol"},
    src_port{YType::uint16, "src-port"}
{
    yang_name = "flow-ip-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::~FlowIpCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::has_data() const
{
    return dst_port.is_set
	|| flow_dst_ip.is_set
	|| flow_src_ip.is_set
	|| protocol.is_set
	|| src_port.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_port.yfilter)
	|| ydk::is_set(flow_dst_ip.yfilter)
	|| ydk::is_set(flow_src_ip.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(src_port.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:flow-ip-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowIpCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());
    if (flow_dst_ip.is_set || is_set(flow_dst_ip.yfilter)) leaf_name_data.push_back(flow_dst_ip.get_name_leafdata());
    if (flow_src_ip.is_set || is_set(flow_src_ip.yfilter)) leaf_name_data.push_back(flow_src_ip.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (src_port.is_set || is_set(src_port.yfilter)) leaf_name_data.push_back(src_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-dst-ip")
    {
        flow_dst_ip = value;
        flow_dst_ip.value_namespace = name_space;
        flow_dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-src-ip")
    {
        flow_src_ip = value;
        flow_src_ip.value_namespace = name_space;
        flow_src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-port")
    {
        src_port = value;
        src_port.value_namespace = name_space;
        src_port.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
    if(value_path == "flow-dst-ip")
    {
        flow_dst_ip.yfilter = yfilter;
    }
    if(value_path == "flow-src-ip")
    {
        flow_src_ip.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "src-port")
    {
        src_port.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-port" || name == "flow-dst-ip" || name == "flow-src-ip" || name == "protocol" || name == "src-port")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::FlowRecordCfg()
    :
    flow_record_name{YType::str, "flow-record-name"}
{
    yang_name = "flow-record-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::~FlowRecordCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::has_data() const
{
    return flow_record_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_record_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:flow-record-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowRecordCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_record_name.is_set || is_set(flow_record_name.yfilter)) leaf_name_data.push_back(flow_record_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-record-name")
    {
        flow_record_name = value;
        flow_record_name.value_namespace = name_space;
        flow_record_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-record-name")
    {
        flow_record_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-record-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::FrDeCfg()
    :
    fr_de_val{YType::empty, "fr-de-val"}
{
    yang_name = "fr-de-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::~FrDeCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::has_data() const
{
    return fr_de_val.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_de_val.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:fr-de-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDeCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_de_val.is_set || is_set(fr_de_val.yfilter)) leaf_name_data.push_back(fr_de_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-de-val")
    {
        fr_de_val = value;
        fr_de_val.value_namespace = name_space;
        fr_de_val.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-de-val")
    {
        fr_de_val.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDeCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-de-val")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfgs()
{
    yang_name = "fr-dlci-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::~FrDlciCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::has_data() const
{
    for (std::size_t index=0; index<fr_dlci_cfg.size(); index++)
    {
        if(fr_dlci_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::has_operation() const
{
    for (std::size_t index=0; index<fr_dlci_cfg.size(); index++)
    {
        if(fr_dlci_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:fr-dlci-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDlciCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fr-dlci-cfg")
    {
        for(auto const & c : fr_dlci_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg>();
        c->parent = this;
        fr_dlci_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fr_dlci_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-dlci-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::FrDlciCfg()
    :
    dlci_min{YType::uint16, "dlci-min"},
    dlci_max{YType::uint16, "dlci-max"}
{
    yang_name = "fr-dlci-cfg"; yang_parent_name = "fr-dlci-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::~FrDlciCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::has_data() const
{
    return dlci_min.is_set
	|| dlci_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dlci_min.yfilter)
	|| ydk::is_set(dlci_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci-cfg" <<"[dlci-min='" <<dlci_min <<"']" <<"[dlci-max='" <<dlci_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDlciCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci_min.is_set || is_set(dlci_min.yfilter)) leaf_name_data.push_back(dlci_min.get_name_leafdata());
    if (dlci_max.is_set || is_set(dlci_max.yfilter)) leaf_name_data.push_back(dlci_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dlci-min")
    {
        dlci_min = value;
        dlci_min.value_namespace = name_space;
        dlci_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci-max")
    {
        dlci_max = value;
        dlci_max.value_namespace = name_space;
        dlci_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dlci-min")
    {
        dlci_min.yfilter = yfilter;
    }
    if(value_path == "dlci-max")
    {
        dlci_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dlci-min" || name == "dlci-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfgs()
{
    yang_name = "wlan-user-priority-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::~WlanUserPriorityCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::has_data() const
{
    for (std::size_t index=0; index<wlan_user_priority_cfg.size(); index++)
    {
        if(wlan_user_priority_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::has_operation() const
{
    for (std::size_t index=0; index<wlan_user_priority_cfg.size(); index++)
    {
        if(wlan_user_priority_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:wlan-user-priority-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WlanUserPriorityCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wlan-user-priority-cfg")
    {
        for(auto const & c : wlan_user_priority_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg>();
        c->parent = this;
        wlan_user_priority_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wlan_user_priority_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wlan-user-priority-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::WlanUserPriorityCfg()
    :
    wlan_prio_min{YType::uint8, "wlan-prio-min"},
    wlan_prio_max{YType::uint8, "wlan-prio-max"}
{
    yang_name = "wlan-user-priority-cfg"; yang_parent_name = "wlan-user-priority-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::~WlanUserPriorityCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::has_data() const
{
    return wlan_prio_min.is_set
	|| wlan_prio_max.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wlan_prio_min.yfilter)
	|| ydk::is_set(wlan_prio_max.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan-user-priority-cfg" <<"[wlan-prio-min='" <<wlan_prio_min <<"']" <<"[wlan-prio-max='" <<wlan_prio_max <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WlanUserPriorityCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wlan_prio_min.is_set || is_set(wlan_prio_min.yfilter)) leaf_name_data.push_back(wlan_prio_min.get_name_leafdata());
    if (wlan_prio_max.is_set || is_set(wlan_prio_max.yfilter)) leaf_name_data.push_back(wlan_prio_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wlan-prio-min")
    {
        wlan_prio_min = value;
        wlan_prio_min.value_namespace = name_space;
        wlan_prio_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlan-prio-max")
    {
        wlan_prio_max = value;
        wlan_prio_max.value_namespace = name_space;
        wlan_prio_max.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wlan-prio-min")
    {
        wlan_prio_min.yfilter = yfilter;
    }
    if(value_path == "wlan-prio-max")
    {
        wlan_prio_max.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wlan-prio-min" || name == "wlan-prio-max")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfgs()
{
    yang_name = "discard-class-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::~DiscardClassCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::has_data() const
{
    for (std::size_t index=0; index<discard_class_cfg.size(); index++)
    {
        if(discard_class_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::has_operation() const
{
    for (std::size_t index=0; index<discard_class_cfg.size(); index++)
    {
        if(discard_class_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:discard-class-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClassCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard-class-cfg")
    {
        for(auto const & c : discard_class_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg>();
        c->parent = this;
        discard_class_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discard_class_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-class-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::DiscardClassCfg()
    :
    discard_class{YType::uint8, "discard-class"}
{
    yang_name = "discard-class-cfg"; yang_parent_name = "discard-class-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::~DiscardClassCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::has_data() const
{
    return discard_class.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_class.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class-cfg" <<"[discard-class='" <<discard_class <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClassCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-class")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfgs()
{
    yang_name = "class-map-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::~ClassMapCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::has_data() const
{
    for (std::size_t index=0; index<class_map_cfg.size(); index++)
    {
        if(class_map_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::has_operation() const
{
    for (std::size_t index=0; index<class_map_cfg.size(); index++)
    {
        if(class_map_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:class-map-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-cfg")
    {
        for(auto const & c : class_map_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg>();
        c->parent = this;
        class_map_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::ClassMapCfg()
    :
    class_map_name{YType::str, "class-map-name"}
{
    yang_name = "class-map-cfg"; yang_parent_name = "class-map-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::~ClassMapCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::has_data() const
{
    return class_map_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_map_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-cfg" <<"[class-map-name='" <<class_map_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_name.is_set || is_set(class_map_name.yfilter)) leaf_name_data.push_back(class_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-map-name")
    {
        class_map_name = value;
        class_map_name.value_namespace = name_space;
        class_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-map-name")
    {
        class_map_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::MetadataCfg()
    :
    cac{YType::enumeration, "cac"},
    called_uri{YType::str, "called-uri"},
    calling_uri{YType::str, "calling-uri"},
    device_model{YType::str, "device-model"},
    global_session_id{YType::str, "global-session-id"},
    multi_party_session_id{YType::str, "multi-party-session-id"}
{
    yang_name = "metadata-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::~MetadataCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::has_data() const
{
    return cac.is_set
	|| called_uri.is_set
	|| calling_uri.is_set
	|| device_model.is_set
	|| global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac.yfilter)
	|| ydk::is_set(called_uri.yfilter)
	|| ydk::is_set(calling_uri.yfilter)
	|| ydk::is_set(device_model.yfilter)
	|| ydk::is_set(global_session_id.yfilter)
	|| ydk::is_set(multi_party_session_id.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:metadata-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetadataCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac.is_set || is_set(cac.yfilter)) leaf_name_data.push_back(cac.get_name_leafdata());
    if (called_uri.is_set || is_set(called_uri.yfilter)) leaf_name_data.push_back(called_uri.get_name_leafdata());
    if (calling_uri.is_set || is_set(calling_uri.yfilter)) leaf_name_data.push_back(calling_uri.get_name_leafdata());
    if (device_model.is_set || is_set(device_model.yfilter)) leaf_name_data.push_back(device_model.get_name_leafdata());
    if (global_session_id.is_set || is_set(global_session_id.yfilter)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.yfilter)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac")
    {
        cac = value;
        cac.value_namespace = name_space;
        cac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "called-uri")
    {
        called_uri = value;
        called_uri.value_namespace = name_space;
        called_uri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calling-uri")
    {
        calling_uri = value;
        calling_uri.value_namespace = name_space;
        calling_uri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-model")
    {
        device_model = value;
        device_model.value_namespace = name_space;
        device_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-session-id")
    {
        global_session_id = value;
        global_session_id.value_namespace = name_space;
        global_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
        multi_party_session_id.value_namespace = name_space;
        multi_party_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac")
    {
        cac.yfilter = yfilter;
    }
    if(value_path == "called-uri")
    {
        called_uri.yfilter = yfilter;
    }
    if(value_path == "calling-uri")
    {
        calling_uri.yfilter = yfilter;
    }
    if(value_path == "device-model")
    {
        device_model.yfilter = yfilter;
    }
    if(value_path == "global-session-id")
    {
        global_session_id.yfilter = yfilter;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cac" || name == "called-uri" || name == "calling-uri" || name == "device-model" || name == "global-session-id" || name == "multi-party-session-id")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfgs()
{
    yang_name = "application-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::~ApplicationCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::has_data() const
{
    for (std::size_t index=0; index<application_cfg.size(); index++)
    {
        if(application_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::has_operation() const
{
    for (std::size_t index=0; index<application_cfg.size(); index++)
    {
        if(application_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:application-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-cfg")
    {
        for(auto const & c : application_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg>();
        c->parent = this;
        application_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::ApplicationCfg()
    :
    application_name{YType::str, "application-name"},
    application_cfg{YType::str, "application-cfg"}
{
    yang_name = "application-cfg"; yang_parent_name = "application-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::~ApplicationCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::has_data() const
{
    return application_name.is_set
	|| application_cfg.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(application_cfg.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-cfg" <<"[application-name='" <<application_name <<"']" <<"[application-cfg='" <<application_cfg <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (application_cfg.is_set || is_set(application_cfg.yfilter)) leaf_name_data.push_back(application_cfg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-cfg")
    {
        application_cfg = value;
        application_cfg.value_namespace = name_space;
        application_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "application-cfg")
    {
        application_cfg.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "application-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroup()
    :
    security_group_name_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs>())
	,security_group_tag_cfgs(std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs>())
{
    security_group_name_cfgs->parent = this;

    security_group_tag_cfgs->parent = this;

    yang_name = "security-group"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::~SecurityGroup()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::has_data() const
{
    return (security_group_name_cfgs !=  nullptr && security_group_name_cfgs->has_data())
	|| (security_group_tag_cfgs !=  nullptr && security_group_tag_cfgs->has_data());
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (security_group_name_cfgs !=  nullptr && security_group_name_cfgs->has_operation())
	|| (security_group_tag_cfgs !=  nullptr && security_group_tag_cfgs->has_operation());
}

std::string Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:security-group";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroup' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group-name-cfgs")
    {
        if(security_group_name_cfgs == nullptr)
        {
            security_group_name_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs>();
        }
        return security_group_name_cfgs;
    }

    if(child_yang_name == "security-group-tag-cfgs")
    {
        if(security_group_tag_cfgs == nullptr)
        {
            security_group_tag_cfgs = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs>();
        }
        return security_group_tag_cfgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_group_name_cfgs != nullptr)
    {
        children["security-group-name-cfgs"] = security_group_name_cfgs;
    }

    if(security_group_tag_cfgs != nullptr)
    {
        children["security-group-tag-cfgs"] = security_group_tag_cfgs;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group-name-cfgs" || name == "security-group-tag-cfgs")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfgs()
{
    yang_name = "security-group-name-cfgs"; yang_parent_name = "security-group";
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::~SecurityGroupNameCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::has_data() const
{
    for (std::size_t index=0; index<security_group_name_cfg.size(); index++)
    {
        if(security_group_name_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::has_operation() const
{
    for (std::size_t index=0; index<security_group_name_cfg.size(); index++)
    {
        if(security_group_name_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group-name-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroupNameCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group-name-cfg")
    {
        for(auto const & c : security_group_name_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg>();
        c->parent = this;
        security_group_name_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security_group_name_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group-name-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::SecurityGroupNameCfg()
    :
    src_dst{YType::enumeration, "src-dst"},
    security_name{YType::str, "security-name"}
{
    yang_name = "security-group-name-cfg"; yang_parent_name = "security-group-name-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::~SecurityGroupNameCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::has_data() const
{
    return src_dst.is_set
	|| security_name.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_dst.yfilter)
	|| ydk::is_set(security_name.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group-name-cfg" <<"[src-dst='" <<src_dst <<"']" <<"[security-name='" <<security_name <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroupNameCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_dst.is_set || is_set(src_dst.yfilter)) leaf_name_data.push_back(src_dst.get_name_leafdata());
    if (security_name.is_set || is_set(security_name.yfilter)) leaf_name_data.push_back(security_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-dst")
    {
        src_dst = value;
        src_dst.value_namespace = name_space;
        src_dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-name")
    {
        security_name = value;
        security_name.value_namespace = name_space;
        security_name.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-dst")
    {
        src_dst.yfilter = yfilter;
    }
    if(value_path == "security-name")
    {
        security_name.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-dst" || name == "security-name")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfgs()
{
    yang_name = "security-group-tag-cfgs"; yang_parent_name = "security-group";
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::~SecurityGroupTagCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::has_data() const
{
    for (std::size_t index=0; index<security_group_tag_cfg.size(); index++)
    {
        if(security_group_tag_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::has_operation() const
{
    for (std::size_t index=0; index<security_group_tag_cfg.size(); index++)
    {
        if(security_group_tag_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group-tag-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroupTagCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group-tag-cfg")
    {
        for(auto const & c : security_group_tag_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg>();
        c->parent = this;
        security_group_tag_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security_group_tag_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group-tag-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::SecurityGroupTagCfg()
    :
    id{YType::str, "id"}
{
    yang_name = "security-group-tag-cfg"; yang_parent_name = "security-group-tag-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::~SecurityGroupTagCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::has_data() const
{
    return id.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group-tag-cfg" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroupTagCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfgs()
{
    yang_name = "ip-rtp-cfgs"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::~IpRtpCfgs()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::has_data() const
{
    for (std::size_t index=0; index<ip_rtp_cfg.size(); index++)
    {
        if(ip_rtp_cfg[index]->has_data())
            return true;
    }
    return false;
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::has_operation() const
{
    for (std::size_t index=0; index<ip_rtp_cfg.size(); index++)
    {
        if(ip_rtp_cfg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:ip-rtp-cfgs";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpRtpCfgs' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-rtp-cfg")
    {
        for(auto const & c : ip_rtp_cfg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg>();
        c->parent = this;
        ip_rtp_cfg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_rtp_cfg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-rtp-cfg")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::IpRtpCfg()
    :
    starting_port_number{YType::uint16, "starting-port-number"},
    port_range{YType::uint16, "port-range"}
{
    yang_name = "ip-rtp-cfg"; yang_parent_name = "ip-rtp-cfgs";
}

Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::~IpRtpCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::has_data() const
{
    return starting_port_number.is_set
	|| port_range.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(starting_port_number.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-rtp-cfg" <<"[starting-port-number='" <<starting_port_number <<"']" <<"[port-range='" <<port_range <<"']";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpRtpCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (starting_port_number.is_set || is_set(starting_port_number.yfilter)) leaf_name_data.push_back(starting_port_number.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "starting-port-number")
    {
        starting_port_number = value;
        starting_port_number.value_namespace = name_space;
        starting_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "starting-port-number")
    {
        starting_port_number.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "starting-port-number" || name == "port-range")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::VplsCfg::VplsCfg()
    :
    broadcast{YType::empty, "broadcast"},
    known{YType::empty, "known"},
    multicast{YType::empty, "multicast"},
    unknown{YType::empty, "unknown"}
{
    yang_name = "vpls-cfg"; yang_parent_name = "filter-entry";
}

Classifiers::ClassifierEntry::FilterEntry::VplsCfg::~VplsCfg()
{
}

bool Classifiers::ClassifierEntry::FilterEntry::VplsCfg::has_data() const
{
    return broadcast.is_set
	|| known.is_set
	|| multicast.is_set
	|| unknown.is_set;
}

bool Classifiers::ClassifierEntry::FilterEntry::VplsCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(known.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::VplsCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-policy-filters:vpls-cfg";

    return path_buffer.str();

}

const EntityPath Classifiers::ClassifierEntry::FilterEntry::VplsCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VplsCfg' in ietf_diffserv_classifier cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (known.is_set || is_set(known.yfilter)) leaf_name_data.push_back(known.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::VplsCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::VplsCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Classifiers::ClassifierEntry::FilterEntry::VplsCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "known")
    {
        known = value;
        known.value_namespace = name_space;
        known.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Classifiers::ClassifierEntry::FilterEntry::VplsCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "known")
    {
        known.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Classifiers::ClassifierEntry::FilterEntry::VplsCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "known" || name == "multicast" || name == "unknown")
        return true;
    return false;
}

Protocol::Protocol()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:protocol")
{
}

Protocol::~Protocol()
{
}

MatchAllFilter::MatchAllFilter()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:match-all-filter")
{
}

MatchAllFilter::~MatchAllFilter()
{
}

DestinationPort::DestinationPort()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:destination-port")
{
}

DestinationPort::~DestinationPort()
{
}

Dscp::Dscp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:dscp")
{
}

Dscp::~Dscp()
{
}

SourcePort::SourcePort()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:source-port")
{
}

SourcePort::~SourcePort()
{
}

DestinationIpAddress::DestinationIpAddress()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:destination-ip-address")
{
}

DestinationIpAddress::~DestinationIpAddress()
{
}

MatchAnyFilter::MatchAnyFilter()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:match-any-filter")
{
}

MatchAnyFilter::~MatchAnyFilter()
{
}

SourceIpAddress::SourceIpAddress()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:source-ip-address")
{
}

SourceIpAddress::~SourceIpAddress()
{
}

const Enum::YLeaf Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::Cac::addmitted {0, "addmitted"};
const Enum::YLeaf Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::Cac::un_addmitted {1, "un-addmitted"};

const Enum::YLeaf Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::SrcDst::source {0, "source"};
const Enum::YLeaf Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::SrcDst::destination {1, "destination"};


}
}

