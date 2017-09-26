
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs6k_acl_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs6k_acl_oper {

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::AceDetail()
    :
    entry_id{YType::int32, "entry-id"}
    	,
    ipv4tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam>())
	,ipv6tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam>())
{
    ipv4tcam->parent = this;
    ipv6tcam->parent = this;

    yang_name = "ace-detail"; yang_parent_name = "implicit-deny"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::~AceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::has_data() const
{
    return entry_id.is_set
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_data())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_operation())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4tcam")
    {
        if(ipv4tcam == nullptr)
        {
            ipv4tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam>();
        }
        return ipv4tcam;
    }

    if(child_yang_name == "ipv6tcam")
    {
        if(ipv6tcam == nullptr)
        {
            ipv6tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam>();
        }
        return ipv6tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4tcam != nullptr)
    {
        children["ipv4tcam"] = ipv4tcam;
    }

    if(ipv6tcam != nullptr)
    {
        children["ipv6tcam"] = ipv6tcam;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4tcam" || name == "ipv6tcam" || name == "entry-id")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::Ipv4Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv4tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::~Ipv4Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::TcamEntry()
    :
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv4tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::has_data() const
{
    return (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::Ipv6Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv6tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::~Ipv6Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::TcamEntry()
    :
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"}
    	,
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv6tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::has_data() const
{
    return destination_address.is_set
	|| destination_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value" || name == "destination-address" || name == "destination-address-mask" || name == "source-address" || name == "source-address-mask")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::ImplicitNdnaPermit()
    :
    ace_brief(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief>())
{
    ace_brief->parent = this;

    yang_name = "implicit-ndna-permit"; yang_parent_name = "interface-acl-implicit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::~ImplicitNdnaPermit()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::has_data() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_data())
            return true;
    }
    return (ace_brief !=  nullptr && ace_brief->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::has_operation() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ace_brief !=  nullptr && ace_brief->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "implicit-ndna-permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-brief")
    {
        if(ace_brief == nullptr)
        {
            ace_brief = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief>();
        }
        return ace_brief;
    }

    if(child_yang_name == "ace-detail")
    {
        for(auto const & c : ace_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail>();
        c->parent = this;
        ace_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_brief != nullptr)
    {
        children["ace-brief"] = ace_brief;
    }

    for (auto const & c : ace_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-brief" || name == "ace-detail")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::AceBrief()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "ace-brief"; yang_parent_name = "implicit-ndna-permit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::~AceBrief()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "ace-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::AceDetail()
    :
    entry_id{YType::int32, "entry-id"}
    	,
    ipv4tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam>())
	,ipv6tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam>())
{
    ipv4tcam->parent = this;
    ipv6tcam->parent = this;

    yang_name = "ace-detail"; yang_parent_name = "implicit-ndna-permit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::~AceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::has_data() const
{
    return entry_id.is_set
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_data())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_operation())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4tcam")
    {
        if(ipv4tcam == nullptr)
        {
            ipv4tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam>();
        }
        return ipv4tcam;
    }

    if(child_yang_name == "ipv6tcam")
    {
        if(ipv6tcam == nullptr)
        {
            ipv6tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam>();
        }
        return ipv6tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4tcam != nullptr)
    {
        children["ipv4tcam"] = ipv4tcam;
    }

    if(ipv6tcam != nullptr)
    {
        children["ipv6tcam"] = ipv6tcam;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4tcam" || name == "ipv6tcam" || name == "entry-id")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::Ipv4Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv4tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::~Ipv4Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::TcamEntry()
    :
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv4tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::has_data() const
{
    return (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::Ipv6Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv6tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::~Ipv6Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::TcamEntry()
    :
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"}
    	,
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv6tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::has_data() const
{
    return destination_address.is_set
	|| destination_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value" || name == "destination-address" || name == "destination-address-mask" || name == "source-address" || name == "source-address-mask")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::ImplicitNdnsPermit()
    :
    ace_brief(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief>())
{
    ace_brief->parent = this;

    yang_name = "implicit-ndns-permit"; yang_parent_name = "interface-acl-implicit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::~ImplicitNdnsPermit()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::has_data() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_data())
            return true;
    }
    return (ace_brief !=  nullptr && ace_brief->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::has_operation() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ace_brief !=  nullptr && ace_brief->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "implicit-ndns-permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-brief")
    {
        if(ace_brief == nullptr)
        {
            ace_brief = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief>();
        }
        return ace_brief;
    }

    if(child_yang_name == "ace-detail")
    {
        for(auto const & c : ace_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail>();
        c->parent = this;
        ace_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_brief != nullptr)
    {
        children["ace-brief"] = ace_brief;
    }

    for (auto const & c : ace_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-brief" || name == "ace-detail")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::AceBrief()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "ace-brief"; yang_parent_name = "implicit-ndns-permit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::~AceBrief()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "ace-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::AceDetail()
    :
    entry_id{YType::int32, "entry-id"}
    	,
    ipv4tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam>())
	,ipv6tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam>())
{
    ipv4tcam->parent = this;
    ipv6tcam->parent = this;

    yang_name = "ace-detail"; yang_parent_name = "implicit-ndns-permit"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::~AceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::has_data() const
{
    return entry_id.is_set
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_data())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_operation())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4tcam")
    {
        if(ipv4tcam == nullptr)
        {
            ipv4tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam>();
        }
        return ipv4tcam;
    }

    if(child_yang_name == "ipv6tcam")
    {
        if(ipv6tcam == nullptr)
        {
            ipv6tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam>();
        }
        return ipv6tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4tcam != nullptr)
    {
        children["ipv4tcam"] = ipv4tcam;
    }

    if(ipv6tcam != nullptr)
    {
        children["ipv6tcam"] = ipv6tcam;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4tcam" || name == "ipv6tcam" || name == "entry-id")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::Ipv4Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv4tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::~Ipv4Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::TcamEntry()
    :
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv4tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::has_data() const
{
    return (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::Ipv6Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv6tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::~Ipv6Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::TcamEntry()
    :
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"}
    	,
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv6tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::has_data() const
{
    return destination_address.is_set
	|| destination_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value" || name == "destination-address" || name == "destination-address-mask" || name == "source-address" || name == "source-address-mask")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBriefs()
{

    yang_name = "sequence-briefs"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::~SequenceBriefs()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::has_data() const
{
    for (std::size_t index=0; index<sequence_brief.size(); index++)
    {
        if(sequence_brief[index]->has_data())
            return true;
    }
    return false;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::has_operation() const
{
    for (std::size_t index=0; index<sequence_brief.size(); index++)
    {
        if(sequence_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sequence-brief")
    {
        for(auto const & c : sequence_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief>();
        c->parent = this;
        sequence_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sequence_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-brief")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::SequenceBrief()
    :
    sequence_number{YType::int32, "sequence-number"}
{

    yang_name = "sequence-brief"; yang_parent_name = "sequence-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::~SequenceBrief()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::has_data() const
{
    for (std::size_t index=0; index<common_acl.size(); index++)
    {
        if(common_acl[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_acl.size(); index++)
    {
        if(interface_acl[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::has_operation() const
{
    for (std::size_t index=0; index<common_acl.size(); index++)
    {
        if(common_acl[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_acl.size(); index++)
    {
        if(interface_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-brief" <<"[sequence-number='" <<sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        for(auto const & c : common_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl>();
        c->parent = this;
        common_acl.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-acl")
    {
        for(auto const & c : interface_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl>();
        c->parent = this;
        interface_acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : common_acl)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "interface-acl" || name == "sequence-number")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::CommonAcl()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "common-acl"; yang_parent_name = "sequence-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::~CommonAcl()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "common-acl"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::InterfaceAcl()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "interface-acl"; yang_parent_name = "sequence-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::~InterfaceAcl()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "interface-acl"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetails()
{

    yang_name = "sequence-details"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::~SequenceDetails()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::has_data() const
{
    for (std::size_t index=0; index<sequence_detail.size(); index++)
    {
        if(sequence_detail[index]->has_data())
            return true;
    }
    return false;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::has_operation() const
{
    for (std::size_t index=0; index<sequence_detail.size(); index++)
    {
        if(sequence_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sequence-detail")
    {
        for(auto const & c : sequence_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail>();
        c->parent = this;
        sequence_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sequence_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-detail")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::SequenceDetail()
    :
    sequence_number{YType::int32, "sequence-number"}
{

    yang_name = "sequence-detail"; yang_parent_name = "sequence-details"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::~SequenceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::has_data() const
{
    for (std::size_t index=0; index<common_acl_detail.size(); index++)
    {
        if(common_acl_detail[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_acl_detail.size(); index++)
    {
        if(interface_acl_detail[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::has_operation() const
{
    for (std::size_t index=0; index<common_acl_detail.size(); index++)
    {
        if(common_acl_detail[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_acl_detail.size(); index++)
    {
        if(interface_acl_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-detail" <<"[sequence-number='" <<sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl-detail")
    {
        for(auto const & c : common_acl_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail>();
        c->parent = this;
        common_acl_detail.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-acl-detail")
    {
        for(auto const & c : interface_acl_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail>();
        c->parent = this;
        interface_acl_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : common_acl_detail)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_acl_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-detail" || name == "interface-acl-detail" || name == "sequence-number")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::CommonAclDetail()
    :
    ace_brief(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief>())
{
    ace_brief->parent = this;

    yang_name = "common-acl-detail"; yang_parent_name = "sequence-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::~CommonAclDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::has_data() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_data())
            return true;
    }
    return (ace_brief !=  nullptr && ace_brief->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::has_operation() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ace_brief !=  nullptr && ace_brief->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-brief")
    {
        if(ace_brief == nullptr)
        {
            ace_brief = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief>();
        }
        return ace_brief;
    }

    if(child_yang_name == "ace-detail")
    {
        for(auto const & c : ace_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail>();
        c->parent = this;
        ace_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_brief != nullptr)
    {
        children["ace-brief"] = ace_brief;
    }

    for (auto const & c : ace_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-brief" || name == "ace-detail")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::AceBrief()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "ace-brief"; yang_parent_name = "common-acl-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::~AceBrief()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "ace-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::AceDetail()
    :
    entry_id{YType::int32, "entry-id"}
    	,
    ipv4tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam>())
	,ipv6tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam>())
{
    ipv4tcam->parent = this;
    ipv6tcam->parent = this;

    yang_name = "ace-detail"; yang_parent_name = "common-acl-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::~AceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::has_data() const
{
    return entry_id.is_set
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_data())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_operation())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4tcam")
    {
        if(ipv4tcam == nullptr)
        {
            ipv4tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam>();
        }
        return ipv4tcam;
    }

    if(child_yang_name == "ipv6tcam")
    {
        if(ipv6tcam == nullptr)
        {
            ipv6tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam>();
        }
        return ipv6tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4tcam != nullptr)
    {
        children["ipv4tcam"] = ipv4tcam;
    }

    if(ipv6tcam != nullptr)
    {
        children["ipv6tcam"] = ipv6tcam;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4tcam" || name == "ipv6tcam" || name == "entry-id")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::Ipv4Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv4tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::~Ipv4Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::TcamEntry()
    :
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv4tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_data() const
{
    return (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::Ipv6Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv6tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::~Ipv6Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::TcamEntry()
    :
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"}
    	,
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv6tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_data() const
{
    return destination_address.is_set
	|| destination_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value" || name == "destination-address" || name == "destination-address-mask" || name == "source-address" || name == "source-address-mask")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::InterfaceAclDetail()
    :
    ace_brief(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief>())
{
    ace_brief->parent = this;

    yang_name = "interface-acl-detail"; yang_parent_name = "sequence-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::~InterfaceAclDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::has_data() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_data())
            return true;
    }
    return (ace_brief !=  nullptr && ace_brief->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::has_operation() const
{
    for (std::size_t index=0; index<ace_detail.size(); index++)
    {
        if(ace_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ace_brief !=  nullptr && ace_brief->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-acl-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-brief")
    {
        if(ace_brief == nullptr)
        {
            ace_brief = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief>();
        }
        return ace_brief;
    }

    if(child_yang_name == "ace-detail")
    {
        for(auto const & c : ace_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail>();
        c->parent = this;
        ace_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_brief != nullptr)
    {
        children["ace-brief"] = ace_brief;
    }

    for (auto const & c : ace_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-brief" || name == "ace-detail")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::AceBrief()
    :
    default_next_hop_enabled{YType::boolean, "default-next-hop-enabled"},
    grant{YType::enumeration, "grant"},
    hits{YType::uint64, "hits"},
    logging_enabled{YType::boolean, "logging-enabled"},
    next_hop_enabled{YType::boolean, "next-hop-enabled"},
    npu_id{YType::uint8, "npu-id"},
    per_ace_icmp_enabled{YType::boolean, "per-ace-icmp-enabled"},
    total_tcam_entries{YType::uint32, "total-tcam-entries"}
    	,
    next_hop_address(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress>())
{
    next_hop_address->parent = this;

    yang_name = "ace-brief"; yang_parent_name = "interface-acl-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::~AceBrief()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::has_data() const
{
    return default_next_hop_enabled.is_set
	|| grant.is_set
	|| hits.is_set
	|| logging_enabled.is_set
	|| next_hop_enabled.is_set
	|| npu_id.is_set
	|| per_ace_icmp_enabled.is_set
	|| total_tcam_entries.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_next_hop_enabled.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(logging_enabled.yfilter)
	|| ydk::is_set(next_hop_enabled.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(per_ace_icmp_enabled.yfilter)
	|| ydk::is_set(total_tcam_entries.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_next_hop_enabled.is_set || is_set(default_next_hop_enabled.yfilter)) leaf_name_data.push_back(default_next_hop_enabled.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (logging_enabled.is_set || is_set(logging_enabled.yfilter)) leaf_name_data.push_back(logging_enabled.get_name_leafdata());
    if (next_hop_enabled.is_set || is_set(next_hop_enabled.yfilter)) leaf_name_data.push_back(next_hop_enabled.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (per_ace_icmp_enabled.is_set || is_set(per_ace_icmp_enabled.yfilter)) leaf_name_data.push_back(per_ace_icmp_enabled.get_name_leafdata());
    if (total_tcam_entries.is_set || is_set(total_tcam_entries.yfilter)) leaf_name_data.push_back(total_tcam_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress>();
        }
        return next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled = value;
        default_next_hop_enabled.value_namespace = name_space;
        default_next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled = value;
        logging_enabled.value_namespace = name_space;
        logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled = value;
        next_hop_enabled.value_namespace = name_space;
        next_hop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled = value;
        per_ace_icmp_enabled.value_namespace = name_space;
        per_ace_icmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries = value;
        total_tcam_entries.value_namespace = name_space;
        total_tcam_entries.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-next-hop-enabled")
    {
        default_next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "logging-enabled")
    {
        logging_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-enabled")
    {
        next_hop_enabled.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "per-ace-icmp-enabled")
    {
        per_ace_icmp_enabled.yfilter = yfilter;
    }
    if(value_path == "total-tcam-entries")
    {
        total_tcam_entries.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "default-next-hop-enabled" || name == "grant" || name == "hits" || name == "logging-enabled" || name == "next-hop-enabled" || name == "npu-id" || name == "per-ace-icmp-enabled" || name == "total-tcam-entries")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::NextHopAddress()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "ace-brief"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::~NextHopAddress()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::AceDetail()
    :
    entry_id{YType::int32, "entry-id"}
    	,
    ipv4tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam>())
	,ipv6tcam(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam>())
{
    ipv4tcam->parent = this;
    ipv6tcam->parent = this;

    yang_name = "ace-detail"; yang_parent_name = "interface-acl-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::~AceDetail()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::has_data() const
{
    return entry_id.is_set
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_data())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_id.yfilter)
	|| (ipv4tcam !=  nullptr && ipv4tcam->has_operation())
	|| (ipv6tcam !=  nullptr && ipv6tcam->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_id.is_set || is_set(entry_id.yfilter)) leaf_name_data.push_back(entry_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4tcam")
    {
        if(ipv4tcam == nullptr)
        {
            ipv4tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam>();
        }
        return ipv4tcam;
    }

    if(child_yang_name == "ipv6tcam")
    {
        if(ipv6tcam == nullptr)
        {
            ipv6tcam = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam>();
        }
        return ipv6tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4tcam != nullptr)
    {
        children["ipv4tcam"] = ipv4tcam;
    }

    if(ipv6tcam != nullptr)
    {
        children["ipv6tcam"] = ipv6tcam;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-id")
    {
        entry_id = value;
        entry_id.value_namespace = name_space;
        entry_id.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-id")
    {
        entry_id.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4tcam" || name == "ipv6tcam" || name == "entry-id")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::Ipv4Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv4tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::~Ipv4Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::TcamEntry()
    :
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv4tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_data() const
{
    return (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    destination_address{YType::str, "destination-address"},
    destination_range_id{YType::uint16, "destination-range-id"},
    dscp{YType::uint8, "dscp"},
    fragment{YType::uint16, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint16, "layer4-source-port"},
    packet_length_range{YType::uint8, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    source_address{YType::str, "source-address"},
    source_range_id{YType::uint16, "source-range-id"},
    ttl{YType::uint32, "ttl"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| destination_address.is_set
	|| destination_range_id.is_set
	|| dscp.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| source_address.is_set
	|| source_range_id.is_set
	|| ttl.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "destination-address" || name == "destination-range-id" || name == "dscp" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "source-address" || name == "source-range-id" || name == "ttl")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::Ipv6Tcam()
    :
    tcam_entry(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry>())
{
    tcam_entry->parent = this;

    yang_name = "ipv6tcam"; yang_parent_name = "ace-detail"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::~Ipv6Tcam()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::has_data() const
{
    return (tcam_entry !=  nullptr && tcam_entry->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_entry !=  nullptr && tcam_entry->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-entry")
    {
        if(tcam_entry == nullptr)
        {
            tcam_entry = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry>();
        }
        return tcam_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_entry != nullptr)
    {
        children["tcam-entry"] = tcam_entry;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-entry")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::TcamEntry()
    :
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"}
    	,
    mask(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask>())
	,result(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result>())
	,value_(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_>())
{
    mask->parent = this;
    result->parent = this;
    value_->parent = this;

    yang_name = "tcam-entry"; yang_parent_name = "ipv6tcam"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::~TcamEntry()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_data() const
{
    return destination_address.is_set
	|| destination_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (result !=  nullptr && result->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (result !=  nullptr && result->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result>();
        }
        return result;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "result" || name == "value" || name == "destination-address" || name == "destination-address-mask" || name == "source-address" || name == "source-address-mask")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::Mask()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "mask"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::~Mask()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "mask"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::Result()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "result"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::~Result()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::Value_()
    :
    acl_id{YType::uint16, "acl-id"},
    authentication_header{YType::uint8, "authentication-header"},
    destination_header{YType::uint8, "destination-header"},
    destination_range_id{YType::uint32, "destination-range-id"},
    fragment{YType::uint8, "fragment"},
    layer4_destination_port{YType::uint16, "layer4-destination-port"},
    layer4_source_port{YType::uint32, "layer4-source-port"},
    packet_length_range{YType::uint32, "packet-length-range"},
    protocol{YType::uint8, "protocol"},
    receive_transition_gap_header{YType::uint8, "receive-transition-gap-header"},
    source_range_id{YType::uint32, "source-range-id"},
    tos{YType::uint8, "tos"}
    	,
    tcp_flags(std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>())
{
    tcp_flags->parent = this;

    yang_name = "value"; yang_parent_name = "tcam-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::~Value_()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_data() const
{
    return acl_id.is_set
	|| authentication_header.is_set
	|| destination_header.is_set
	|| destination_range_id.is_set
	|| fragment.is_set
	|| layer4_destination_port.is_set
	|| layer4_source_port.is_set
	|| packet_length_range.is_set
	|| protocol.is_set
	|| receive_transition_gap_header.is_set
	|| source_range_id.is_set
	|| tos.is_set
	|| (tcp_flags !=  nullptr && tcp_flags->has_data());
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_id.yfilter)
	|| ydk::is_set(authentication_header.yfilter)
	|| ydk::is_set(destination_header.yfilter)
	|| ydk::is_set(destination_range_id.yfilter)
	|| ydk::is_set(fragment.yfilter)
	|| ydk::is_set(layer4_destination_port.yfilter)
	|| ydk::is_set(layer4_source_port.yfilter)
	|| ydk::is_set(packet_length_range.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(receive_transition_gap_header.yfilter)
	|| ydk::is_set(source_range_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| (tcp_flags !=  nullptr && tcp_flags->has_operation());
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_id.is_set || is_set(acl_id.yfilter)) leaf_name_data.push_back(acl_id.get_name_leafdata());
    if (authentication_header.is_set || is_set(authentication_header.yfilter)) leaf_name_data.push_back(authentication_header.get_name_leafdata());
    if (destination_header.is_set || is_set(destination_header.yfilter)) leaf_name_data.push_back(destination_header.get_name_leafdata());
    if (destination_range_id.is_set || is_set(destination_range_id.yfilter)) leaf_name_data.push_back(destination_range_id.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.yfilter)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (layer4_destination_port.is_set || is_set(layer4_destination_port.yfilter)) leaf_name_data.push_back(layer4_destination_port.get_name_leafdata());
    if (layer4_source_port.is_set || is_set(layer4_source_port.yfilter)) leaf_name_data.push_back(layer4_source_port.get_name_leafdata());
    if (packet_length_range.is_set || is_set(packet_length_range.yfilter)) leaf_name_data.push_back(packet_length_range.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (receive_transition_gap_header.is_set || is_set(receive_transition_gap_header.yfilter)) leaf_name_data.push_back(receive_transition_gap_header.get_name_leafdata());
    if (source_range_id.is_set || is_set(source_range_id.yfilter)) leaf_name_data.push_back(source_range_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-flags")
    {
        if(tcp_flags == nullptr)
        {
            tcp_flags = std::make_shared<AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags>();
        }
        return tcp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_flags != nullptr)
    {
        children["tcp-flags"] = tcp_flags;
    }

    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-id")
    {
        acl_id = value;
        acl_id.value_namespace = name_space;
        acl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-header")
    {
        authentication_header = value;
        authentication_header.value_namespace = name_space;
        authentication_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-header")
    {
        destination_header = value;
        destination_header.value_namespace = name_space;
        destination_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id = value;
        destination_range_id.value_namespace = name_space;
        destination_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment")
    {
        fragment = value;
        fragment.value_namespace = name_space;
        fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port = value;
        layer4_destination_port.value_namespace = name_space;
        layer4_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port = value;
        layer4_source_port.value_namespace = name_space;
        layer4_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range = value;
        packet_length_range.value_namespace = name_space;
        packet_length_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header = value;
        receive_transition_gap_header.value_namespace = name_space;
        receive_transition_gap_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-range-id")
    {
        source_range_id = value;
        source_range_id.value_namespace = name_space;
        source_range_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-id")
    {
        acl_id.yfilter = yfilter;
    }
    if(value_path == "authentication-header")
    {
        authentication_header.yfilter = yfilter;
    }
    if(value_path == "destination-header")
    {
        destination_header.yfilter = yfilter;
    }
    if(value_path == "destination-range-id")
    {
        destination_range_id.yfilter = yfilter;
    }
    if(value_path == "fragment")
    {
        fragment.yfilter = yfilter;
    }
    if(value_path == "layer4-destination-port")
    {
        layer4_destination_port.yfilter = yfilter;
    }
    if(value_path == "layer4-source-port")
    {
        layer4_source_port.yfilter = yfilter;
    }
    if(value_path == "packet-length-range")
    {
        packet_length_range.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "receive-transition-gap-header")
    {
        receive_transition_gap_header.yfilter = yfilter;
    }
    if(value_path == "source-range-id")
    {
        source_range_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-flags" || name == "acl-id" || name == "authentication-header" || name == "destination-header" || name == "destination-range-id" || name == "fragment" || name == "layer4-destination-port" || name == "layer4-source-port" || name == "packet-length-range" || name == "protocol" || name == "receive-transition-gap-header" || name == "source-range-id" || name == "tos")
        return true;
    return false;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::TcpFlags()
    :
    acknowledge{YType::uint8, "acknowledge"},
    finish{YType::uint8, "finish"},
    push{YType::uint8, "push"},
    reset{YType::uint8, "reset"},
    synchronization{YType::uint8, "synchronization"},
    urgent{YType::uint8, "urgent"}
{

    yang_name = "tcp-flags"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::~TcpFlags()
{
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_data() const
{
    return acknowledge.is_set
	|| finish.is_set
	|| push.is_set
	|| reset.is_set
	|| synchronization.is_set
	|| urgent.is_set;
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledge.yfilter)
	|| ydk::is_set(finish.yfilter)
	|| ydk::is_set(push.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| ydk::is_set(urgent.yfilter);
}

std::string AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledge.is_set || is_set(acknowledge.yfilter)) leaf_name_data.push_back(acknowledge.get_name_leafdata());
    if (finish.is_set || is_set(finish.yfilter)) leaf_name_data.push_back(finish.get_name_leafdata());
    if (push.is_set || is_set(push.yfilter)) leaf_name_data.push_back(push.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (urgent.is_set || is_set(urgent.yfilter)) leaf_name_data.push_back(urgent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledge")
    {
        acknowledge = value;
        acknowledge.value_namespace = name_space;
        acknowledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish")
    {
        finish = value;
        finish.value_namespace = name_space;
        finish.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push")
    {
        push = value;
        push.value_namespace = name_space;
        push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent")
    {
        urgent = value;
        urgent.value_namespace = name_space;
        urgent.value_namespace_prefix = name_space_prefix;
    }
}

void AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledge")
    {
        acknowledge.yfilter = yfilter;
    }
    if(value_path == "finish")
    {
        finish.yfilter = yfilter;
    }
    if(value_path == "push")
    {
        push.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
    if(value_path == "urgent")
    {
        urgent.yfilter = yfilter;
    }
}

bool AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledge" || name == "finish" || name == "push" || name == "reset" || name == "synchronization" || name == "urgent")
        return true;
    return false;
}


}
}

