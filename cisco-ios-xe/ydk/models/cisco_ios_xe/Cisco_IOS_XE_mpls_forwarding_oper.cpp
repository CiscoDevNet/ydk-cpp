
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mpls_forwarding_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_forwarding_oper {

MplsForwardingOperData::MplsForwardingOperData()
    :
    mpls_local_label(this, {"local_label"})
    , mpls_local_label_statistics(this, {"local_label", "forwarding_path_index"})
{

    yang_name = "mpls-forwarding-oper-data"; yang_parent_name = "Cisco-IOS-XE-mpls-forwarding-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MplsForwardingOperData::~MplsForwardingOperData()
{
}

bool MplsForwardingOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpls_local_label.len(); index++)
    {
        if(mpls_local_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_local_label_statistics.len(); index++)
    {
        if(mpls_local_label_statistics[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwardingOperData::has_operation() const
{
    for (std::size_t index=0; index<mpls_local_label.len(); index++)
    {
        if(mpls_local_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_local_label_statistics.len(); index++)
    {
        if(mpls_local_label_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwardingOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-forwarding-oper:mpls-forwarding-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-local-label")
    {
        auto c = std::make_shared<MplsForwardingOperData::MplsLocalLabel>();
        c->parent = this;
        mpls_local_label.append(c);
        return c;
    }

    if(child_yang_name == "mpls-local-label-statistics")
    {
        auto c = std::make_shared<MplsForwardingOperData::MplsLocalLabelStatistics>();
        c->parent = this;
        mpls_local_label_statistics.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mpls_local_label.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_local_label_statistics.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwardingOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwardingOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsForwardingOperData::clone_ptr() const
{
    return std::make_shared<MplsForwardingOperData>();
}

std::string MplsForwardingOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsForwardingOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsForwardingOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsForwardingOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsForwardingOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-local-label" || name == "mpls-local-label-statistics")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::MplsLocalLabel()
    :
    local_label{YType::uint32, "local-label"}
        ,
    connection_information(std::make_shared<MplsForwardingOperData::MplsLocalLabel::ConnectionInformation>())
    , forwarding_paths(this, {})
{
    connection_information->parent = this;

    yang_name = "mpls-local-label"; yang_parent_name = "mpls-forwarding-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsForwardingOperData::MplsLocalLabel::~MplsLocalLabel()
{
}

bool MplsForwardingOperData::MplsLocalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_paths.len(); index++)
    {
        if(forwarding_paths[index]->has_data())
            return true;
    }
    return local_label.is_set
	|| (connection_information !=  nullptr && connection_information->has_data());
}

bool MplsForwardingOperData::MplsLocalLabel::has_operation() const
{
    for (std::size_t index=0; index<forwarding_paths.len(); index++)
    {
        if(forwarding_paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (connection_information !=  nullptr && connection_information->has_operation());
}

std::string MplsForwardingOperData::MplsLocalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-forwarding-oper:mpls-forwarding-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsForwardingOperData::MplsLocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-local-label";
    ADD_KEY_TOKEN(local_label, "local-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-information")
    {
        if(connection_information == nullptr)
        {
            connection_information = std::make_shared<MplsForwardingOperData::MplsLocalLabel::ConnectionInformation>();
        }
        return connection_information;
    }

    if(child_yang_name == "forwarding-paths")
    {
        auto c = std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths>();
        c->parent = this;
        forwarding_paths.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connection_information != nullptr)
    {
        children["connection-information"] = connection_information;
    }

    count = 0;
    for (auto c : forwarding_paths.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsForwardingOperData::MplsLocalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-information" || name == "forwarding-paths" || name == "local-label")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::ConnectionInformation()
    :
    info_str{YType::str, "info-str"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "connection-information"; yang_parent_name = "mpls-local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::~ConnectionInformation()
{
}

bool MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::has_data() const
{
    if (is_presence_container) return true;
    return info_str.is_set
	|| ip_prefix.is_set;
}

bool MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(info_str.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (info_str.is_set || is_set(info_str.yfilter)) leaf_name_data.push_back(info_str.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "info-str")
    {
        info_str = value;
        info_str.value_namespace = name_space;
        info_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "info-str")
    {
        info_str.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabel::ConnectionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info-str" || name == "ip-prefix")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::ForwardingPaths()
    :
    outgoing_interface(std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface>())
    , outgoing_label(std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel>())
    , next_hop(std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop>())
{
    outgoing_interface->parent = this;
    outgoing_label->parent = this;
    next_hop->parent = this;

    yang_name = "forwarding-paths"; yang_parent_name = "mpls-local-label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::~ForwardingPaths()
{
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::has_data() const
{
    if (is_presence_container) return true;
    return (outgoing_interface !=  nullptr && outgoing_interface->has_data())
	|| (outgoing_label !=  nullptr && outgoing_label->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::has_operation() const
{
    return is_set(yfilter)
	|| (outgoing_interface !=  nullptr && outgoing_interface->has_operation())
	|| (outgoing_label !=  nullptr && outgoing_label->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-interface")
    {
        if(outgoing_interface == nullptr)
        {
            outgoing_interface = std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface>();
        }
        return outgoing_interface;
    }

    if(child_yang_name == "outgoing-label")
    {
        if(outgoing_label == nullptr)
        {
            outgoing_label = std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel>();
        }
        return outgoing_label;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(outgoing_interface != nullptr)
    {
        children["outgoing-interface"] = outgoing_interface;
    }

    if(outgoing_label != nullptr)
    {
        children["outgoing-label"] = outgoing_label;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-interface" || name == "outgoing-label" || name == "next-hop")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::OutgoingInterface()
    :
    interface_type{YType::enumeration, "interface-type"},
    interface_value{YType::str, "interface-value"}
{

    yang_name = "outgoing-interface"; yang_parent_name = "forwarding-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::~OutgoingInterface()
{
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_type.is_set
	|| interface_value.is_set;
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interface_value.yfilter);
}

std::string MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interface_value.is_set || is_set(interface_value.yfilter)) leaf_name_data.push_back(interface_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-value")
    {
        interface_value = value;
        interface_value.value_namespace = name_space;
        interface_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interface-value")
    {
        interface_value.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-type" || name == "interface-value")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::OutgoingLabel()
    :
    no_label{YType::boolean, "no-label"},
    pop_label{YType::uint32, "pop-label"},
    ipv4_explicit_null{YType::uint32, "ipv4-explicit-null"},
    ipv6_explicit_null{YType::uint32, "ipv6-explicit-null"},
    regular_label{YType::uint32, "regular-label"},
    invalid_label{YType::boolean, "invalid-label"}
{

    yang_name = "outgoing-label"; yang_parent_name = "forwarding-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::~OutgoingLabel()
{
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::has_data() const
{
    if (is_presence_container) return true;
    return no_label.is_set
	|| pop_label.is_set
	|| ipv4_explicit_null.is_set
	|| ipv6_explicit_null.is_set
	|| regular_label.is_set
	|| invalid_label.is_set;
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_label.yfilter)
	|| ydk::is_set(pop_label.yfilter)
	|| ydk::is_set(ipv4_explicit_null.yfilter)
	|| ydk::is_set(ipv6_explicit_null.yfilter)
	|| ydk::is_set(regular_label.yfilter)
	|| ydk::is_set(invalid_label.yfilter);
}

std::string MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_label.is_set || is_set(no_label.yfilter)) leaf_name_data.push_back(no_label.get_name_leafdata());
    if (pop_label.is_set || is_set(pop_label.yfilter)) leaf_name_data.push_back(pop_label.get_name_leafdata());
    if (ipv4_explicit_null.is_set || is_set(ipv4_explicit_null.yfilter)) leaf_name_data.push_back(ipv4_explicit_null.get_name_leafdata());
    if (ipv6_explicit_null.is_set || is_set(ipv6_explicit_null.yfilter)) leaf_name_data.push_back(ipv6_explicit_null.get_name_leafdata());
    if (regular_label.is_set || is_set(regular_label.yfilter)) leaf_name_data.push_back(regular_label.get_name_leafdata());
    if (invalid_label.is_set || is_set(invalid_label.yfilter)) leaf_name_data.push_back(invalid_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-label")
    {
        no_label = value;
        no_label.value_namespace = name_space;
        no_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-label")
    {
        pop_label = value;
        pop_label.value_namespace = name_space;
        pop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-explicit-null")
    {
        ipv4_explicit_null = value;
        ipv4_explicit_null.value_namespace = name_space;
        ipv4_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-explicit-null")
    {
        ipv6_explicit_null = value;
        ipv6_explicit_null.value_namespace = name_space;
        ipv6_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-label")
    {
        regular_label = value;
        regular_label.value_namespace = name_space;
        regular_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-label")
    {
        invalid_label = value;
        invalid_label.value_namespace = name_space;
        invalid_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-label")
    {
        no_label.yfilter = yfilter;
    }
    if(value_path == "pop-label")
    {
        pop_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-explicit-null")
    {
        ipv4_explicit_null.yfilter = yfilter;
    }
    if(value_path == "ipv6-explicit-null")
    {
        ipv6_explicit_null.yfilter = yfilter;
    }
    if(value_path == "regular-label")
    {
        regular_label.yfilter = yfilter;
    }
    if(value_path == "invalid-label")
    {
        invalid_label.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::OutgoingLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-label" || name == "pop-label" || name == "ipv4-explicit-null" || name == "ipv6-explicit-null" || name == "regular-label" || name == "invalid-label")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::NextHop()
    :
    p2p{YType::boolean, "p2p"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "next-hop"; yang_parent_name = "forwarding-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::~NextHop()
{
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return p2p.is_set
	|| ip_address.is_set;
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2p.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2p.is_set || is_set(p2p.yfilter)) leaf_name_data.push_back(p2p.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2p")
    {
        p2p = value;
        p2p.value_namespace = name_space;
        p2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2p")
    {
        p2p.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabel::ForwardingPaths::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p" || name == "ip-address")
        return true;
    return false;
}

MplsForwardingOperData::MplsLocalLabelStatistics::MplsLocalLabelStatistics()
    :
    local_label{YType::uint32, "local-label"},
    forwarding_path_index{YType::uint8, "forwarding-path-index"},
    label_switched_bytes{YType::uint64, "label-switched-bytes"},
    label_switched_packets{YType::uint64, "label-switched-packets"}
{

    yang_name = "mpls-local-label-statistics"; yang_parent_name = "mpls-forwarding-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsForwardingOperData::MplsLocalLabelStatistics::~MplsLocalLabelStatistics()
{
}

bool MplsForwardingOperData::MplsLocalLabelStatistics::has_data() const
{
    if (is_presence_container) return true;
    return local_label.is_set
	|| forwarding_path_index.is_set
	|| label_switched_bytes.is_set
	|| label_switched_packets.is_set;
}

bool MplsForwardingOperData::MplsLocalLabelStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(forwarding_path_index.yfilter)
	|| ydk::is_set(label_switched_bytes.yfilter)
	|| ydk::is_set(label_switched_packets.yfilter);
}

std::string MplsForwardingOperData::MplsLocalLabelStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-forwarding-oper:mpls-forwarding-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsForwardingOperData::MplsLocalLabelStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-local-label-statistics";
    ADD_KEY_TOKEN(local_label, "local-label");
    ADD_KEY_TOKEN(forwarding_path_index, "forwarding-path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingOperData::MplsLocalLabelStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (forwarding_path_index.is_set || is_set(forwarding_path_index.yfilter)) leaf_name_data.push_back(forwarding_path_index.get_name_leafdata());
    if (label_switched_bytes.is_set || is_set(label_switched_bytes.yfilter)) leaf_name_data.push_back(label_switched_bytes.get_name_leafdata());
    if (label_switched_packets.is_set || is_set(label_switched_packets.yfilter)) leaf_name_data.push_back(label_switched_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingOperData::MplsLocalLabelStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingOperData::MplsLocalLabelStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsForwardingOperData::MplsLocalLabelStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-path-index")
    {
        forwarding_path_index = value;
        forwarding_path_index.value_namespace = name_space;
        forwarding_path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-switched-bytes")
    {
        label_switched_bytes = value;
        label_switched_bytes.value_namespace = name_space;
        label_switched_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-switched-packets")
    {
        label_switched_packets = value;
        label_switched_packets.value_namespace = name_space;
        label_switched_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingOperData::MplsLocalLabelStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "forwarding-path-index")
    {
        forwarding_path_index.yfilter = yfilter;
    }
    if(value_path == "label-switched-bytes")
    {
        label_switched_bytes.yfilter = yfilter;
    }
    if(value_path == "label-switched-packets")
    {
        label_switched_packets.yfilter = yfilter;
    }
}

bool MplsForwardingOperData::MplsLocalLabelStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label" || name == "forwarding-path-index" || name == "label-switched-bytes" || name == "label-switched-packets")
        return true;
    return false;
}

const Enum::YLeaf ForwardingNextHopType::point2point {0, "point2point"};
const Enum::YLeaf ForwardingNextHopType::next_hop_ip_address {1, "next-hop-ip-address"};

const Enum::YLeaf OutgoingInterfaceDescriptionType::interface_type {0, "interface-type"};
const Enum::YLeaf OutgoingInterfaceDescriptionType::interface_value {1, "interface-value"};

const Enum::YLeaf ConnectionInfoType::information_string {0, "information-string"};
const Enum::YLeaf ConnectionInfoType::ip_prefix {1, "ip-prefix"};

const Enum::YLeaf OutgoingInterfaceType::drop {0, "drop"};
const Enum::YLeaf OutgoingInterfaceType::punt {1, "punt"};
const Enum::YLeaf OutgoingInterfaceType::aggregate {2, "aggregate"};
const Enum::YLeaf OutgoingInterfaceType::exception {3, "exception"};
const Enum::YLeaf OutgoingInterfaceType::none {4, "none"};

const Enum::YLeaf OutgoingLabelType::no_label {0, "no-label"};
const Enum::YLeaf OutgoingLabelType::pop_label {1, "pop-label"};
const Enum::YLeaf OutgoingLabelType::ipv4_explicit_null {2, "ipv4-explicit-null"};
const Enum::YLeaf OutgoingLabelType::ipv6_explicit_null {3, "ipv6-explicit-null"};
const Enum::YLeaf OutgoingLabelType::regular_label {4, "regular-label"};
const Enum::YLeaf OutgoingLabelType::invalid_label {5, "invalid-label"};


}
}

