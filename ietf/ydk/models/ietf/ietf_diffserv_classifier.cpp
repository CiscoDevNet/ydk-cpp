
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_classifier.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_diffserv_classifier {

ClassifierEntryFilterOperationType::ClassifierEntryFilterOperationType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:classifier-entry-filter-operation-type")
{

}

ClassifierEntryFilterOperationType::~ClassifierEntryFilterOperationType()
{
}

Classifiers::Classifiers()
{

    yang_name = "classifiers"; yang_parent_name = "ietf-diffserv-classifier"; is_top_level_class = true; has_list_ancestor = false;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    return ydk_ietf_models_path;
}

std::string Classifiers::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Classifiers::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Classifiers::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
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
    classifier_entry_filter_operation{YType::identityref, "classifier-entry-filter-operation"}
{

    yang_name = "classifier-entry"; yang_parent_name = "classifiers"; is_top_level_class = false; has_list_ancestor = false;
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
	|| classifier_entry_filter_operation.is_set;
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
	|| ydk::is_set(classifier_entry_filter_operation.yfilter);
}

std::string Classifiers::ClassifierEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-diffserv-classifier:classifiers/" << get_segment_path();
    return path_buffer.str();
}

std::string Classifiers::ClassifierEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry" <<"[classifier-entry-name='" <<classifier_entry_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (classifier_entry_descr.is_set || is_set(classifier_entry_descr.yfilter)) leaf_name_data.push_back(classifier_entry_descr.get_name_leafdata());
    if (classifier_entry_filter_operation.is_set || is_set(classifier_entry_filter_operation.yfilter)) leaf_name_data.push_back(classifier_entry_filter_operation.get_name_leafdata());

    return leaf_name_data;

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
}

bool Classifiers::ClassifierEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-entry" || name == "classifier-entry-name" || name == "classifier-entry-descr" || name == "classifier-entry-filter-operation")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::FilterEntry()
    :
    filter_type{YType::identityref, "filter-type"},
    filter_logical_not{YType::boolean, "filter-logical-not"}
{

    yang_name = "filter-entry"; yang_parent_name = "classifier-entry"; is_top_level_class = false; has_list_ancestor = true;
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
	|| filter_logical_not.is_set;
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
	|| ydk::is_set(filter_logical_not.yfilter);
}

std::string Classifiers::ClassifierEntry::FilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-entry" <<"[filter-type='" <<filter_type <<"']" <<"[filter-logical-not='" <<filter_logical_not <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (filter_logical_not.is_set || is_set(filter_logical_not.yfilter)) leaf_name_data.push_back(filter_logical_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Classifiers::ClassifierEntry::FilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Classifiers::ClassifierEntry::FilterEntry::get_children() const
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
    if(name == "destination-ip-address-cfg" || name == "destination-port-cfg" || name == "dscp-cfg" || name == "protocol-cfg" || name == "source-ip-address-cfg" || name == "source-port-cfg" || name == "filter-type" || name == "filter-logical-not")
        return true;
    return false;
}

Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::DestinationIpAddressCfg()
    :
    destination_ip_addr{YType::str, "destination-ip-addr"}
{

    yang_name = "destination-ip-address-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_ip_addr.is_set || is_set(destination_ip_addr.yfilter)) leaf_name_data.push_back(destination_ip_addr.get_name_leafdata());

    return leaf_name_data;

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

Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::DestinationPortCfg()
    :
    destination_port_min{YType::uint16, "destination-port-min"},
    destination_port_max{YType::uint16, "destination-port-max"}
{

    yang_name = "destination-port-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port_min.is_set || is_set(destination_port_min.yfilter)) leaf_name_data.push_back(destination_port_min.get_name_leafdata());
    if (destination_port_max.is_set || is_set(destination_port_max.yfilter)) leaf_name_data.push_back(destination_port_max.get_name_leafdata());

    return leaf_name_data;

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

Classifiers::ClassifierEntry::FilterEntry::DscpCfg::DscpCfg()
    :
    dscp_min{YType::uint8, "dscp-min"},
    dscp_max{YType::uint8, "dscp-max"}
{

    yang_name = "dscp-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::DscpCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_min.is_set || is_set(dscp_min.yfilter)) leaf_name_data.push_back(dscp_min.get_name_leafdata());
    if (dscp_max.is_set || is_set(dscp_max.yfilter)) leaf_name_data.push_back(dscp_max.get_name_leafdata());

    return leaf_name_data;

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

Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::ProtocolCfg()
    :
    protocol_min{YType::uint8, "protocol-min"},
    protocol_max{YType::uint8, "protocol-max"}
{

    yang_name = "protocol-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_min.is_set || is_set(protocol_min.yfilter)) leaf_name_data.push_back(protocol_min.get_name_leafdata());
    if (protocol_max.is_set || is_set(protocol_max.yfilter)) leaf_name_data.push_back(protocol_max.get_name_leafdata());

    return leaf_name_data;

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

Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::SourceIpAddressCfg()
    :
    source_ip_addr{YType::str, "source-ip-addr"}
{

    yang_name = "source-ip-address-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_ip_addr.is_set || is_set(source_ip_addr.yfilter)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());

    return leaf_name_data;

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

Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::SourcePortCfg()
    :
    source_port_min{YType::uint16, "source-port-min"},
    source_port_max{YType::uint16, "source-port-max"}
{

    yang_name = "source-port-cfg"; yang_parent_name = "filter-entry"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_port_min.is_set || is_set(source_port_min.yfilter)) leaf_name_data.push_back(source_port_min.get_name_leafdata());
    if (source_port_max.is_set || is_set(source_port_max.yfilter)) leaf_name_data.push_back(source_port_max.get_name_leafdata());

    return leaf_name_data;

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

FilterType::FilterType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:filter-type")
{

}

FilterType::~FilterType()
{
}

DestinationIpAddress::DestinationIpAddress()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:destination-ip-address")
{

}

DestinationIpAddress::~DestinationIpAddress()
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

MatchAllFilter::MatchAllFilter()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:match-all-filter")
{

}

MatchAllFilter::~MatchAllFilter()
{
}

MatchAnyFilter::MatchAnyFilter()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:match-any-filter")
{

}

MatchAnyFilter::~MatchAnyFilter()
{
}

Protocol::Protocol()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:protocol")
{

}

Protocol::~Protocol()
{
}

SourceIpAddress::SourceIpAddress()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:source-ip-address")
{

}

SourceIpAddress::~SourceIpAddress()
{
}

SourcePort::SourcePort()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-classifier", "ietf-diffserv-classifier", "ietf-diffserv-classifier:source-port")
{

}

SourcePort::~SourcePort()
{
}


}
}

