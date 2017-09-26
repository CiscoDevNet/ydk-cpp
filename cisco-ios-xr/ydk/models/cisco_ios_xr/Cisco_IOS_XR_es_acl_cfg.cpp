
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_es_acl_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_es_acl_cfg {

EsAcl::EsAcl()
    :
    accesses(std::make_shared<EsAcl::Accesses>())
{
    accesses->parent = this;

    yang_name = "es-acl"; yang_parent_name = "Cisco-IOS-XR-es-acl-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

EsAcl::~EsAcl()
{
}

bool EsAcl::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data());
}

bool EsAcl::has_operation() const
{
    return is_set(yfilter)
	|| (accesses !=  nullptr && accesses->has_operation());
}

std::string EsAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<EsAcl::Accesses>();
        }
        return accesses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accesses != nullptr)
    {
        children["accesses"] = accesses;
    }

    return children;
}

void EsAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EsAcl::clone_ptr() const
{
    return std::make_shared<EsAcl>();
}

std::string EsAcl::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EsAcl::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EsAcl::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EsAcl::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EsAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesses")
        return true;
    return false;
}

EsAcl::Accesses::Accesses()
{

    yang_name = "accesses"; yang_parent_name = "es-acl"; is_top_level_class = false; has_list_ancestor = false;
}

EsAcl::Accesses::~Accesses()
{
}

bool EsAcl::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        for(auto const & c : access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EsAcl::Accesses::Access>();
        c->parent = this;
        access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EsAcl::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

EsAcl::Accesses::Access::Access()
    :
    name{YType::str, "name"}
    	,
    access_list_entries(std::make_shared<EsAcl::Accesses::Access::AccessListEntries>())
{
    access_list_entries->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false;
}

EsAcl::Accesses::Access::~Access()
{
}

bool EsAcl::Accesses::Access::has_data() const
{
    return name.is_set
	|| (access_list_entries !=  nullptr && access_list_entries->has_data());
}

bool EsAcl::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (access_list_entries !=  nullptr && access_list_entries->has_operation());
}

std::string EsAcl::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string EsAcl::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries")
    {
        if(access_list_entries == nullptr)
        {
            access_list_entries = std::make_shared<EsAcl::Accesses::Access::AccessListEntries>();
        }
        return access_list_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list_entries != nullptr)
    {
        children["access-list-entries"] = access_list_entries;
    }

    return children;
}

void EsAcl::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool EsAcl::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entries" || name == "name")
        return true;
    return false;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntries()
{

    yang_name = "access-list-entries"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

EsAcl::Accesses::Access::AccessListEntries::~AccessListEntries()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::has_data() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Accesses::Access::AccessListEntries::has_operation() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EsAcl::Accesses::Access::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::Access::AccessListEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entry")
    {
        for(auto const & c : access_list_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::Access::AccessListEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EsAcl::Accesses::Access::AccessListEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EsAcl::Accesses::Access::AccessListEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entry")
        return true;
    return false;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    sequence_number{YType::uint32, "sequence-number"},
    capture{YType::boolean, "capture"},
    cos{YType::uint8, "cos"},
    dei{YType::uint8, "dei"},
    ether_type_number{YType::uint16, "ether-type-number"},
    grant{YType::enumeration, "grant"},
    inner_cos{YType::uint8, "inner-cos"},
    inner_dei{YType::uint8, "inner-dei"},
    inner_vlan1{YType::uint16, "inner-vlan1"},
    inner_vlan2{YType::uint16, "inner-vlan2"},
    log_option{YType::uint8, "log-option"},
    remark{YType::str, "remark"},
    sequence_str{YType::str, "sequence-str"},
    vlan1{YType::uint16, "vlan1"},
    vlan2{YType::uint16, "vlan2"}
    	,
    destination_network(std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>())
	,source_network(std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>())
{
    destination_network->parent = this;
    source_network->parent = this;

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries"; is_top_level_class = false; has_list_ancestor = true;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::has_data() const
{
    return sequence_number.is_set
	|| capture.is_set
	|| cos.is_set
	|| dei.is_set
	|| ether_type_number.is_set
	|| grant.is_set
	|| inner_cos.is_set
	|| inner_dei.is_set
	|| inner_vlan1.is_set
	|| inner_vlan2.is_set
	|| log_option.is_set
	|| remark.is_set
	|| sequence_str.is_set
	|| vlan1.is_set
	|| vlan2.is_set
	|| (destination_network !=  nullptr && destination_network->has_data())
	|| (source_network !=  nullptr && source_network->has_data());
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(capture.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dei.yfilter)
	|| ydk::is_set(ether_type_number.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(inner_dei.yfilter)
	|| ydk::is_set(inner_vlan1.yfilter)
	|| ydk::is_set(inner_vlan2.yfilter)
	|| ydk::is_set(log_option.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(sequence_str.yfilter)
	|| ydk::is_set(vlan1.yfilter)
	|| ydk::is_set(vlan2.yfilter)
	|| (destination_network !=  nullptr && destination_network->has_operation())
	|| (source_network !=  nullptr && source_network->has_operation());
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[sequence-number='" <<sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (capture.is_set || is_set(capture.yfilter)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.yfilter)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (ether_type_number.is_set || is_set(ether_type_number.yfilter)) leaf_name_data.push_back(ether_type_number.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (inner_dei.is_set || is_set(inner_dei.yfilter)) leaf_name_data.push_back(inner_dei.get_name_leafdata());
    if (inner_vlan1.is_set || is_set(inner_vlan1.yfilter)) leaf_name_data.push_back(inner_vlan1.get_name_leafdata());
    if (inner_vlan2.is_set || is_set(inner_vlan2.yfilter)) leaf_name_data.push_back(inner_vlan2.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.yfilter)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.yfilter)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (vlan2.is_set || is_set(vlan2.yfilter)) leaf_name_data.push_back(vlan2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-network")
    {
        if(destination_network == nullptr)
        {
            destination_network = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>();
        }
        return destination_network;
    }

    if(child_yang_name == "source-network")
    {
        if(source_network == nullptr)
        {
            source_network = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>();
        }
        return source_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_network != nullptr)
    {
        children["destination-network"] = destination_network;
    }

    if(source_network != nullptr)
    {
        children["source-network"] = source_network;
    }

    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture")
    {
        capture = value;
        capture.value_namespace = name_space;
        capture.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dei")
    {
        dei = value;
        dei.value_namespace = name_space;
        dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number = value;
        ether_type_number.value_namespace = name_space;
        ether_type_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-dei")
    {
        inner_dei = value;
        inner_dei.value_namespace = name_space;
        inner_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan1")
    {
        inner_vlan1 = value;
        inner_vlan1.value_namespace = name_space;
        inner_vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan2")
    {
        inner_vlan2 = value;
        inner_vlan2.value_namespace = name_space;
        inner_vlan2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-option")
    {
        log_option = value;
        log_option.value_namespace = name_space;
        log_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
        sequence_str.value_namespace = name_space;
        sequence_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan2")
    {
        vlan2 = value;
        vlan2.value_namespace = name_space;
        vlan2.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "capture")
    {
        capture.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dei")
    {
        dei.yfilter = yfilter;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "inner-dei")
    {
        inner_dei.yfilter = yfilter;
    }
    if(value_path == "inner-vlan1")
    {
        inner_vlan1.yfilter = yfilter;
    }
    if(value_path == "inner-vlan2")
    {
        inner_vlan2.yfilter = yfilter;
    }
    if(value_path == "log-option")
    {
        log_option.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "sequence-str")
    {
        sequence_str.yfilter = yfilter;
    }
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
    if(value_path == "vlan2")
    {
        vlan2.yfilter = yfilter;
    }
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-network" || name == "source-network" || name == "sequence-number" || name == "capture" || name == "cos" || name == "dei" || name == "ether-type-number" || name == "grant" || name == "inner-cos" || name == "inner-dei" || name == "inner-vlan1" || name == "inner-vlan2" || name == "log-option" || name == "remark" || name == "sequence-str" || name == "vlan1" || name == "vlan2")
        return true;
    return false;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::DestinationNetwork()
    :
    destination_address{YType::str, "destination-address"},
    destination_wild_card_bits{YType::str, "destination-wild-card-bits"}
{

    yang_name = "destination-network"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::~DestinationNetwork()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_data() const
{
    return destination_address.is_set
	|| destination_wild_card_bits.is_set;
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wild_card_bits.yfilter);
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.yfilter)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
        destination_wild_card_bits.value_namespace = name_space;
        destination_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits.yfilter = yfilter;
    }
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-wild-card-bits")
        return true;
    return false;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::SourceNetwork()
    :
    source_address{YType::str, "source-address"},
    source_wild_card_bits{YType::str, "source-wild-card-bits"}
{

    yang_name = "source-network"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::~SourceNetwork()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_data() const
{
    return source_address.is_set
	|| source_wild_card_bits.is_set;
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wild_card_bits.yfilter);
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.yfilter)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
        source_wild_card_bits.value_namespace = name_space;
        source_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits.yfilter = yfilter;
    }
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-wild-card-bits")
        return true;
    return false;
}

const Enum::YLeaf EsAclGrantEnum::deny {0, "deny"};
const Enum::YLeaf EsAclGrantEnum::permit {1, "permit"};


}
}

