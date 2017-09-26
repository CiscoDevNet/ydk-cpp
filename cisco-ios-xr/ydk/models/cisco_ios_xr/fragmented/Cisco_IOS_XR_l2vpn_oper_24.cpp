
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_24.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_25.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/pbb-parameters/pbb-edge/edge-port/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Rd()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::~Rd()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl>())
{
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::VniParameters()
    :
    anycast_mcast_group_addr{YType::str, "anycast-mcast-group-addr"},
    anycast_vtep_ip_addr{YType::str, "anycast-vtep-ip-addr"},
    ingress_replication{YType::boolean, "ingress-replication"},
    multicast_group_addr{YType::str, "multicast-group-addr"},
    overlay{YType::str, "overlay"},
    source_ip_addr{YType::str, "source-ip-addr"},
    udp_port{YType::uint32, "udp-port"},
    vni{YType::uint32, "vni"},
    vni_encap_type{YType::enumeration, "vni-encap-type"},
    vni_mode{YType::enumeration, "vni-mode"},
    vni_port_state{YType::enumeration, "vni-port-state"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    security_parameters(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters>())
	,statistics(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics>())
{
    security_parameters->parent = this;
    statistics->parent = this;

    yang_name = "vni-parameters"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::~VniParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::has_data() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_data())
            return true;
    }
    return anycast_mcast_group_addr.is_set
	|| anycast_vtep_ip_addr.is_set
	|| ingress_replication.is_set
	|| multicast_group_addr.is_set
	|| overlay.is_set
	|| source_ip_addr.is_set
	|| udp_port.is_set
	|| vni.is_set
	|| vni_encap_type.is_set
	|| vni_mode.is_set
	|| vni_port_state.is_set
	|| xconnect_id.is_set
	|| (security_parameters !=  nullptr && security_parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::has_operation() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(anycast_mcast_group_addr.yfilter)
	|| ydk::is_set(anycast_vtep_ip_addr.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(multicast_group_addr.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(source_ip_addr.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(vni_encap_type.yfilter)
	|| ydk::is_set(vni_mode.yfilter)
	|| ydk::is_set(vni_port_state.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (security_parameters !=  nullptr && security_parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_mcast_group_addr.is_set || is_set(anycast_mcast_group_addr.yfilter)) leaf_name_data.push_back(anycast_mcast_group_addr.get_name_leafdata());
    if (anycast_vtep_ip_addr.is_set || is_set(anycast_vtep_ip_addr.yfilter)) leaf_name_data.push_back(anycast_vtep_ip_addr.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (multicast_group_addr.is_set || is_set(multicast_group_addr.yfilter)) leaf_name_data.push_back(multicast_group_addr.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (source_ip_addr.is_set || is_set(source_ip_addr.yfilter)) leaf_name_data.push_back(source_ip_addr.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_encap_type.is_set || is_set(vni_encap_type.yfilter)) leaf_name_data.push_back(vni_encap_type.get_name_leafdata());
    if (vni_mode.is_set || is_set(vni_mode.yfilter)) leaf_name_data.push_back(vni_mode.get_name_leafdata());
    if (vni_port_state.is_set || is_set(vni_port_state.yfilter)) leaf_name_data.push_back(vni_port_state.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-parameters")
    {
        if(security_parameters == nullptr)
        {
            security_parameters = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters>();
        }
        return security_parameters;
    }

    if(child_yang_name == "static-mac")
    {
        for(auto const & c : static_mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac>();
        c->parent = this;
        static_mac.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_parameters != nullptr)
    {
        children["security-parameters"] = security_parameters;
    }

    for (auto const & c : static_mac)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anycast-mcast-group-addr")
    {
        anycast_mcast_group_addr = value;
        anycast_mcast_group_addr.value_namespace = name_space;
        anycast_mcast_group_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-vtep-ip-addr")
    {
        anycast_vtep_ip_addr = value;
        anycast_vtep_ip_addr.value_namespace = name_space;
        anycast_vtep_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-group-addr")
    {
        multicast_group_addr = value;
        multicast_group_addr.value_namespace = name_space;
        multicast_group_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip-addr")
    {
        source_ip_addr = value;
        source_ip_addr.value_namespace = name_space;
        source_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-encap-type")
    {
        vni_encap_type = value;
        vni_encap_type.value_namespace = name_space;
        vni_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-mode")
    {
        vni_mode = value;
        vni_mode.value_namespace = name_space;
        vni_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-port-state")
    {
        vni_port_state = value;
        vni_port_state.value_namespace = name_space;
        vni_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-mcast-group-addr")
    {
        anycast_mcast_group_addr.yfilter = yfilter;
    }
    if(value_path == "anycast-vtep-ip-addr")
    {
        anycast_vtep_ip_addr.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "multicast-group-addr")
    {
        multicast_group_addr.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "source-ip-addr")
    {
        source_ip_addr.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "vni-encap-type")
    {
        vni_encap_type.yfilter = yfilter;
    }
    if(value_path == "vni-mode")
    {
        vni_mode.yfilter = yfilter;
    }
    if(value_path == "vni-port-state")
    {
        vni_port_state.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-parameters" || name == "static-mac" || name == "statistics" || name == "anycast-mcast-group-addr" || name == "anycast-vtep-ip-addr" || name == "ingress-replication" || name == "multicast-group-addr" || name == "overlay" || name == "source-ip-addr" || name == "udp-port" || name == "vni" || name == "vni-encap-type" || name == "vni-mode" || name == "vni-port-state" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl>())
{
    base->parent = this;
    storm_control->parent = this;

    yang_name = "security-parameters"; yang_parent_name = "vni-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dhcpv4_trust.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.yfilter)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base>();
        }
        return base;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
        dhcpv4_trust.value_namespace = name_space;
        dhcpv4_trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dhcpv4-trust" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;

    yang_name = "base"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(dai_address_validation_mask.yfilter)
	|| ydk::is_set(dhcpv4_profile_name.yfilter)
	|| ydk::is_set(dhcpv4_snoop.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flood_uu_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(igm_pv4_disabled.yfilter)
	|| ydk::is_set(igm_pv4_profile_name.yfilter)
	|| ydk::is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validate_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ip_source_guard_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(learn_disabled_mac_limit_action.yfilter)
	|| ydk::is_set(mac_aging_mode.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_flooding.yfilter)
	|| ydk::is_set(mac_learning.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_profile_name.yfilter)
	|| ydk::is_set(mmrp_flood_optimization.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_rate_unit.yfilter)
	|| ydk::is_set(split_horizon_group_id.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_rate_unit.yfilter)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.yfilter)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.yfilter)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.yfilter)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.yfilter)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.yfilter)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.yfilter)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.yfilter)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.yfilter)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.yfilter)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.yfilter)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.yfilter)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.yfilter)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.yfilter)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.yfilter)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
        broadcast_storm_control_rate_unit.value_namespace = name_space;
        broadcast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
        dai_address_validation_mask.value_namespace = name_space;
        dai_address_validation_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
        dhcpv4_profile_name.value_namespace = name_space;
        dhcpv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
        dhcpv4_snoop.value_namespace = name_space;
        dhcpv4_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
        flood_uu_disabled_mac_limit_action.value_namespace = name_space;
        flood_uu_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
        igm_pv4_disabled.value_namespace = name_space;
        igm_pv4_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
        igm_pv4_profile_name.value_namespace = name_space;
        igm_pv4_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
        is_dai_addr_validate_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
        is_dai_addr_validate_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validate_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
        is_dai_addr_validate_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validate_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
        is_ip_source_guard_enabled.value_namespace = name_space;
        is_ip_source_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
        is_mac_secure_accept_shutdown_enabled.value_namespace = name_space;
        is_mac_secure_accept_shutdown_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
        learn_disabled_mac_limit_action.value_namespace = name_space;
        learn_disabled_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
        mac_aging_mode.value_namespace = name_space;
        mac_aging_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
        mac_flooding.value_namespace = name_space;
        mac_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
        mac_learning.value_namespace = name_space;
        mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
        mac_limit_notification.value_namespace = name_space;
        mac_limit_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
        mac_port_down_flush_enabled.value_namespace = name_space;
        mac_port_down_flush_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
        mld_profile_name.value_namespace = name_space;
        mld_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
        mmrp_flood_optimization.value_namespace = name_space;
        mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
        multicast_storm_control_rate_unit.value_namespace = name_space;
        multicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
        split_horizon_group_id.value_namespace = name_space;
        split_horizon_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
        unicast_storm_control_rate_unit.value_namespace = name_space;
        unicast_storm_control_rate_unit.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled.yfilter = yfilter;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding.yfilter = yfilter;
    }
    if(value_path == "mac-learning")
    {
        mac_learning.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name.yfilter = yfilter;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit.yfilter = yfilter;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-rate-unit" || name == "dai-address-validation-mask" || name == "dhcpv4-profile-name" || name == "dhcpv4-snoop" || name == "flood-unknown-unicast-enabled" || name == "flood-uu-disabled-mac-limit-action" || name == "igm-pv4-disabled" || name == "igm-pv4-profile-name" || name == "is-dai-addr-validate-destination-mac-enabled" || name == "is-dai-addr-validate-ipv4-enabled" || name == "is-dai-addr-validate-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-ip-source-guard-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown-enabled" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "learn-disabled-mac-limit-action" || name == "mac-aging-mode" || name == "mac-aging-time" || name == "mac-flooding" || name == "mac-learning" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification" || name == "mac-limit-reached" || name == "mac-limit-threshold" || name == "mac-port-down-flush-enabled" || name == "mac-secure-action" || name == "mld-profile-name" || name == "mmrp-flood-optimization" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-rate-unit" || name == "split-horizon-group-id" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-rate-unit")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/base/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{

    yang_name = "storm-control"; yang_parent_name = "security-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_policer.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/security-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.yfilter)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
        bd_policer.value_namespace = name_space;
        bd_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-policer")
    {
        bd_policer.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-policer" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::StaticMac()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "static-mac"; yang_parent_name = "vni-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::~StaticMac()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "vni-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/impostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeSummary::BridgeSummary()
    :
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_down{YType::uint32, "num-vn-is-down"},
    num_vn_is_unresolved{YType::uint32, "num-vn-is-unresolved"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_down{YType::uint32, "number-a-cs-down"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_bridge_domains{YType::uint32, "number-bridge-domains"},
    number_bridge_domains_shut{YType::uint32, "number-bridge-domains-shut"},
    number_bridge_domains_up{YType::uint32, "number-bridge-domains-up"},
    number_default_bridge_doamins{YType::uint32, "number-default-bridge-doamins"},
    number_groups{YType::uint32, "number-groups"},
    number_p2mp{YType::uint32, "number-p2mp"},
    number_p2mp_down{YType::uint32, "number-p2mp-down"},
    number_p2mp_up{YType::uint32, "number-p2mp-up"},
    number_p_ws_down{YType::uint32, "number-p-ws-down"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_pbb_core{YType::uint32, "number-pbb-core"},
    number_pbb_edge{YType::uint32, "number-pbb-edge"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_a_cs{YType::uint32, "partially-programmed-a-cs"},
    partially_programmed_bridges{YType::uint32, "partially-programmed-bridges"},
    partially_programmed_pseudowires{YType::uint32, "partially-programmed-pseudowires"},
    standby_pseudowires{YType::uint32, "standby-pseudowires"}
{

    yang_name = "bridge-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeSummary::~BridgeSummary()
{
}

bool L2Vpnv2::Standby::BridgeSummary::has_data() const
{
    return num_vn_is.is_set
	|| num_vn_is_down.is_set
	|| num_vn_is_unresolved.is_set
	|| num_vn_is_up.is_set
	|| number_a_cs.is_set
	|| number_a_cs_down.is_set
	|| number_a_cs_up.is_set
	|| number_bridge_domains.is_set
	|| number_bridge_domains_shut.is_set
	|| number_bridge_domains_up.is_set
	|| number_default_bridge_doamins.is_set
	|| number_groups.is_set
	|| number_p2mp.is_set
	|| number_p2mp_down.is_set
	|| number_p2mp_up.is_set
	|| number_p_ws_down.is_set
	|| number_p_ws_up.is_set
	|| number_pbb_core.is_set
	|| number_pbb_edge.is_set
	|| number_pseudowires.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_a_cs.is_set
	|| partially_programmed_bridges.is_set
	|| partially_programmed_pseudowires.is_set
	|| standby_pseudowires.is_set;
}

bool L2Vpnv2::Standby::BridgeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vn_is.yfilter)
	|| ydk::is_set(num_vn_is_down.yfilter)
	|| ydk::is_set(num_vn_is_unresolved.yfilter)
	|| ydk::is_set(num_vn_is_up.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_down.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_bridge_domains.yfilter)
	|| ydk::is_set(number_bridge_domains_shut.yfilter)
	|| ydk::is_set(number_bridge_domains_up.yfilter)
	|| ydk::is_set(number_default_bridge_doamins.yfilter)
	|| ydk::is_set(number_groups.yfilter)
	|| ydk::is_set(number_p2mp.yfilter)
	|| ydk::is_set(number_p2mp_down.yfilter)
	|| ydk::is_set(number_p2mp_up.yfilter)
	|| ydk::is_set(number_p_ws_down.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_pbb_core.yfilter)
	|| ydk::is_set(number_pbb_edge.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(partially_programmed_a_cs.yfilter)
	|| ydk::is_set(partially_programmed_bridges.yfilter)
	|| ydk::is_set(partially_programmed_pseudowires.yfilter)
	|| ydk::is_set(standby_pseudowires.yfilter);
}

std::string L2Vpnv2::Standby::BridgeSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vn_is.is_set || is_set(num_vn_is.yfilter)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_down.is_set || is_set(num_vn_is_down.yfilter)) leaf_name_data.push_back(num_vn_is_down.get_name_leafdata());
    if (num_vn_is_unresolved.is_set || is_set(num_vn_is_unresolved.yfilter)) leaf_name_data.push_back(num_vn_is_unresolved.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.yfilter)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_down.is_set || is_set(number_a_cs_down.yfilter)) leaf_name_data.push_back(number_a_cs_down.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_bridge_domains.is_set || is_set(number_bridge_domains.yfilter)) leaf_name_data.push_back(number_bridge_domains.get_name_leafdata());
    if (number_bridge_domains_shut.is_set || is_set(number_bridge_domains_shut.yfilter)) leaf_name_data.push_back(number_bridge_domains_shut.get_name_leafdata());
    if (number_bridge_domains_up.is_set || is_set(number_bridge_domains_up.yfilter)) leaf_name_data.push_back(number_bridge_domains_up.get_name_leafdata());
    if (number_default_bridge_doamins.is_set || is_set(number_default_bridge_doamins.yfilter)) leaf_name_data.push_back(number_default_bridge_doamins.get_name_leafdata());
    if (number_groups.is_set || is_set(number_groups.yfilter)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_p2mp.is_set || is_set(number_p2mp.yfilter)) leaf_name_data.push_back(number_p2mp.get_name_leafdata());
    if (number_p2mp_down.is_set || is_set(number_p2mp_down.yfilter)) leaf_name_data.push_back(number_p2mp_down.get_name_leafdata());
    if (number_p2mp_up.is_set || is_set(number_p2mp_up.yfilter)) leaf_name_data.push_back(number_p2mp_up.get_name_leafdata());
    if (number_p_ws_down.is_set || is_set(number_p_ws_down.yfilter)) leaf_name_data.push_back(number_p_ws_down.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_pbb_core.is_set || is_set(number_pbb_core.yfilter)) leaf_name_data.push_back(number_pbb_core.get_name_leafdata());
    if (number_pbb_edge.is_set || is_set(number_pbb_edge.yfilter)) leaf_name_data.push_back(number_pbb_edge.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.yfilter)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());
    if (partially_programmed_bridges.is_set || is_set(partially_programmed_bridges.yfilter)) leaf_name_data.push_back(partially_programmed_bridges.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.yfilter)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.yfilter)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::BridgeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
        num_vn_is.value_namespace = name_space;
        num_vn_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down = value;
        num_vn_is_down.value_namespace = name_space;
        num_vn_is_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved = value;
        num_vn_is_unresolved.value_namespace = name_space;
        num_vn_is_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
        num_vn_is_up.value_namespace = name_space;
        num_vn_is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down = value;
        number_a_cs_down.value_namespace = name_space;
        number_a_cs_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains = value;
        number_bridge_domains.value_namespace = name_space;
        number_bridge_domains.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut = value;
        number_bridge_domains_shut.value_namespace = name_space;
        number_bridge_domains_shut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up = value;
        number_bridge_domains_up.value_namespace = name_space;
        number_bridge_domains_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins = value;
        number_default_bridge_doamins.value_namespace = name_space;
        number_default_bridge_doamins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-groups")
    {
        number_groups = value;
        number_groups.value_namespace = name_space;
        number_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp = value;
        number_p2mp.value_namespace = name_space;
        number_p2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down = value;
        number_p2mp_down.value_namespace = name_space;
        number_p2mp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up = value;
        number_p2mp_up.value_namespace = name_space;
        number_p2mp_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down = value;
        number_p_ws_down.value_namespace = name_space;
        number_p_ws_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core = value;
        number_pbb_core.value_namespace = name_space;
        number_pbb_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge = value;
        number_pbb_edge.value_namespace = name_space;
        number_pbb_edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
        partially_programmed_a_cs.value_namespace = name_space;
        partially_programmed_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges = value;
        partially_programmed_bridges.value_namespace = name_space;
        partially_programmed_bridges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
        partially_programmed_pseudowires.value_namespace = name_space;
        partially_programmed_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
        standby_pseudowires.value_namespace = name_space;
        standby_pseudowires.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vn-is")
    {
        num_vn_is.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up.yfilter = yfilter;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins.yfilter = yfilter;
    }
    if(value_path == "number-groups")
    {
        number_groups.yfilter = yfilter;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core.yfilter = yfilter;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires.yfilter = yfilter;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vn-is" || name == "num-vn-is-down" || name == "num-vn-is-unresolved" || name == "num-vn-is-up" || name == "number-a-cs" || name == "number-a-cs-down" || name == "number-a-cs-up" || name == "number-bridge-domains" || name == "number-bridge-domains-shut" || name == "number-bridge-domains-up" || name == "number-default-bridge-doamins" || name == "number-groups" || name == "number-p2mp" || name == "number-p2mp-down" || name == "number-p2mp-up" || name == "number-p-ws-down" || name == "number-p-ws-up" || name == "number-pbb-core" || name == "number-pbb-edge" || name == "number-pseudowires" || name == "out-of-memory-state" || name == "partially-programmed-a-cs" || name == "partially-programmed-bridges" || name == "partially-programmed-pseudowires" || name == "standby-pseudowires")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discoveries()
{

    yang_name = "discoveries"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::~Discoveries()
{
}

bool L2Vpnv2::Standby::Discoveries::has_data() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        for(auto const & c : discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery>();
        c->parent = this;
        discovery.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovery)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Discoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Discoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::Discovery()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    is_service_connected{YType::boolean, "is-service-connected"},
    mtu_mismatch_ignore{YType::boolean, "mtu-mismatch-ignore"},
    number_vpn{YType::uint32, "number-vpn"},
    service_name{YType::enumeration, "service-name"},
    service_name_xr{YType::str, "service-name-xr"},
    vpn_id{YType::uint32, "vpn-id"},
    vpn_name{YType::str, "vpn-name"},
    vpn_name_xr{YType::str, "vpn-name-xr"}
    	,
    signalling_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;

    yang_name = "discovery"; yang_parent_name = "discoveries"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::~Discovery()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| is_service_connected.is_set
	|| mtu_mismatch_ignore.is_set
	|| number_vpn.is_set
	|| service_name.is_set
	|| service_name_xr.is_set
	|| vpn_id.is_set
	|| vpn_name.is_set
	|| vpn_name_xr.is_set
	|| (signalling_info !=  nullptr && signalling_info->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(is_service_connected.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(number_vpn.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(service_name_xr.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(vpn_name.yfilter)
	|| ydk::is_set(vpn_name_xr.yfilter)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.yfilter)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.yfilter)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.yfilter)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.yfilter)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.yfilter)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling-info")
    {
        if(signalling_info == nullptr)
        {
            signalling_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo>();
        }
        return signalling_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalling_info != nullptr)
    {
        children["signalling-info"] = signalling_info;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
        is_service_connected.value_namespace = name_space;
        is_service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
        number_vpn.value_namespace = name_space;
        number_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
        service_name_xr.value_namespace = name_space;
        service_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
        vpn_name.value_namespace = name_space;
        vpn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
        vpn_name_xr.value_namespace = name_space;
        vpn_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "number-vpn")
    {
        number_vpn.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "vpn-name")
    {
        vpn_name.yfilter = yfilter;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling-info" || name == "group-name" || name == "group-name-xr" || name == "is-service-connected" || name == "mtu-mismatch-ignore" || name == "number-vpn" || name == "service-name" || name == "service-name-xr" || name == "vpn-id" || name == "vpn-name" || name == "vpn-name-xr")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
    	,
    bgp_sig_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
	,ldp_sig_info(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;
    ldp_sig_info->parent = this;

    yang_name = "signalling-info"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_data() const
{
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info == nullptr)
        {
            bgp_sig_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
        }
        return bgp_sig_info;
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info == nullptr)
        {
            ldp_sig_info = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
        }
        return ldp_sig_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_sig_info != nullptr)
    {
        children["bgp-sig-info"] = bgp_sig_info;
    }

    if(ldp_sig_info != nullptr)
    {
        children["ldp-sig-info"] = ldp_sig_info;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-sig-info" || name == "ldp-sig-info" || name == "ad-signalling-method")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
{

    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_data())
            return true;
    }
    return number_edges.is_set
	|| number_remote_edges.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number_edges.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.yfilter)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        for(auto const & c : edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        c->parent = this;
        edge.push_back(c);
        return c;
    }

    if(child_yang_name == "redge")
    {
        for(auto const & c : redge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        c->parent = this;
        redge.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : edge)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : redge)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
        number_edges.value_namespace = name_space;
        number_edges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-edges")
    {
        number_edges.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "redge" || name == "number-edges" || name == "number-remote-edges")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{

    yang_name = "edge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "label-block"; yang_parent_name = "edge"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return block_offset.is_set
	|| block_size.is_set
	|| label_base.is_set
	|| label_error.is_set
	|| label_time_created.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(label_error.yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/edge/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        for(auto const & c : status_vector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector>();
        c->parent = this;
        status_vector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status_vector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "block-offset" || name == "block-size" || name == "label-base" || name == "label-error" || name == "label-time-created" || name == "local-edge-id" || name == "next-hop")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/edge/label-block/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{

    yang_name = "redge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "label-block"; yang_parent_name = "redge"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return block_offset.is_set
	|| block_size.is_set
	|| label_base.is_set
	|| label_error.is_set
	|| label_time_created.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(label_error.yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/redge/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        for(auto const & c : status_vector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector>();
        c->parent = this;
        status_vector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status_vector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "block-offset" || name == "block-size" || name == "label-base" || name == "label-error" || name == "label-time-created" || name == "local-edge-id" || name == "next-hop")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/redge/label-block/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
    	,
    local_vpls_id(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
{
    local_vpls_id->parent = this;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_data())
            return true;
    }
    return local_l2_router_id.is_set
	|| number_remote_edges.is_set
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_l2_router_id.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.yfilter)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id == nullptr)
        {
            local_vpls_id = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
        }
        return local_vpls_id;
    }

    if(child_yang_name == "remote-nlri")
    {
        for(auto const & c : remote_nlri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        c->parent = this;
        remote_nlri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_vpls_id != nullptr)
    {
        children["local-vpls-id"] = local_vpls_id;
    }

    for (auto const & c : remote_nlri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
        local_l2_router_id.value_namespace = name_space;
        local_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-vpls-id" || name == "remote-nlri" || name == "local-l2-router-id" || name == "number-remote-edges")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    local_address{YType::str, "local-address"},
    nlri_time_created{YType::uint32, "nlri-time-created"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{

    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    return local_address.is_set
	|| nlri_time_created.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(nlri_time_created.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter);
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (nlri_time_created.is_set || is_set(nlri_time_created.yfilter)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
        nlri_time_created.value_namespace = name_space;
        nlri_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
        remote_l2_router_id.value_namespace = name_space;
        remote_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "nlri-time-created")
    {
        nlri_time_created.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "nlri-time-created" || name == "remote-address" || name == "remote-l2-router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::DiscoverySummary::DiscoverySummary()
    :
    bgp_current_node_id{YType::str, "bgp-current-node-id"},
    bgp_ipc_transport_mode{YType::enumeration, "bgp-ipc-transport-mode"},
    bgp_stateon_active_rp{YType::boolean, "bgp-stateon-active-rp"},
    bgp_stateon_standby_rp{YType::boolean, "bgp-stateon-standby-rp"},
    number_bridge_domainvpns{YType::uint32, "number-bridge-domainvpns"},
    number_local_edges_bridge_domain{YType::uint32, "number-local-edges-bridge-domain"},
    number_local_edges_xconnect{YType::uint32, "number-local-edges-xconnect"},
    number_mp2m_pxconnect_vpns{YType::uint32, "number-mp2m-pxconnect-vpns"},
    number_nlri_bridge_domain{YType::uint32, "number-nlri-bridge-domain"},
    number_nlri_xconnect{YType::uint32, "number-nlri-xconnect"},
    number_remote_edges_bridge_domain{YType::uint32, "number-remote-edges-bridge-domain"},
    number_remote_edges_xconnect{YType::uint32, "number-remote-edges-xconnect"},
    vpls_registered{YType::boolean, "vpls-registered"},
    vpws_registered{YType::boolean, "vpws-registered"}
{

    yang_name = "discovery-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::DiscoverySummary::~DiscoverySummary()
{
}

bool L2Vpnv2::Standby::DiscoverySummary::has_data() const
{
    return bgp_current_node_id.is_set
	|| bgp_ipc_transport_mode.is_set
	|| bgp_stateon_active_rp.is_set
	|| bgp_stateon_standby_rp.is_set
	|| number_bridge_domainvpns.is_set
	|| number_local_edges_bridge_domain.is_set
	|| number_local_edges_xconnect.is_set
	|| number_mp2m_pxconnect_vpns.is_set
	|| number_nlri_bridge_domain.is_set
	|| number_nlri_xconnect.is_set
	|| number_remote_edges_bridge_domain.is_set
	|| number_remote_edges_xconnect.is_set
	|| vpls_registered.is_set
	|| vpws_registered.is_set;
}

bool L2Vpnv2::Standby::DiscoverySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_current_node_id.yfilter)
	|| ydk::is_set(bgp_ipc_transport_mode.yfilter)
	|| ydk::is_set(bgp_stateon_active_rp.yfilter)
	|| ydk::is_set(bgp_stateon_standby_rp.yfilter)
	|| ydk::is_set(number_bridge_domainvpns.yfilter)
	|| ydk::is_set(number_local_edges_bridge_domain.yfilter)
	|| ydk::is_set(number_local_edges_xconnect.yfilter)
	|| ydk::is_set(number_mp2m_pxconnect_vpns.yfilter)
	|| ydk::is_set(number_nlri_bridge_domain.yfilter)
	|| ydk::is_set(number_nlri_xconnect.yfilter)
	|| ydk::is_set(number_remote_edges_bridge_domain.yfilter)
	|| ydk::is_set(number_remote_edges_xconnect.yfilter)
	|| ydk::is_set(vpls_registered.yfilter)
	|| ydk::is_set(vpws_registered.yfilter);
}

std::string L2Vpnv2::Standby::DiscoverySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::DiscoverySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::DiscoverySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_current_node_id.is_set || is_set(bgp_current_node_id.yfilter)) leaf_name_data.push_back(bgp_current_node_id.get_name_leafdata());
    if (bgp_ipc_transport_mode.is_set || is_set(bgp_ipc_transport_mode.yfilter)) leaf_name_data.push_back(bgp_ipc_transport_mode.get_name_leafdata());
    if (bgp_stateon_active_rp.is_set || is_set(bgp_stateon_active_rp.yfilter)) leaf_name_data.push_back(bgp_stateon_active_rp.get_name_leafdata());
    if (bgp_stateon_standby_rp.is_set || is_set(bgp_stateon_standby_rp.yfilter)) leaf_name_data.push_back(bgp_stateon_standby_rp.get_name_leafdata());
    if (number_bridge_domainvpns.is_set || is_set(number_bridge_domainvpns.yfilter)) leaf_name_data.push_back(number_bridge_domainvpns.get_name_leafdata());
    if (number_local_edges_bridge_domain.is_set || is_set(number_local_edges_bridge_domain.yfilter)) leaf_name_data.push_back(number_local_edges_bridge_domain.get_name_leafdata());
    if (number_local_edges_xconnect.is_set || is_set(number_local_edges_xconnect.yfilter)) leaf_name_data.push_back(number_local_edges_xconnect.get_name_leafdata());
    if (number_mp2m_pxconnect_vpns.is_set || is_set(number_mp2m_pxconnect_vpns.yfilter)) leaf_name_data.push_back(number_mp2m_pxconnect_vpns.get_name_leafdata());
    if (number_nlri_bridge_domain.is_set || is_set(number_nlri_bridge_domain.yfilter)) leaf_name_data.push_back(number_nlri_bridge_domain.get_name_leafdata());
    if (number_nlri_xconnect.is_set || is_set(number_nlri_xconnect.yfilter)) leaf_name_data.push_back(number_nlri_xconnect.get_name_leafdata());
    if (number_remote_edges_bridge_domain.is_set || is_set(number_remote_edges_bridge_domain.yfilter)) leaf_name_data.push_back(number_remote_edges_bridge_domain.get_name_leafdata());
    if (number_remote_edges_xconnect.is_set || is_set(number_remote_edges_xconnect.yfilter)) leaf_name_data.push_back(number_remote_edges_xconnect.get_name_leafdata());
    if (vpls_registered.is_set || is_set(vpls_registered.yfilter)) leaf_name_data.push_back(vpls_registered.get_name_leafdata());
    if (vpws_registered.is_set || is_set(vpws_registered.yfilter)) leaf_name_data.push_back(vpws_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::DiscoverySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::DiscoverySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::DiscoverySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-current-node-id")
    {
        bgp_current_node_id = value;
        bgp_current_node_id.value_namespace = name_space;
        bgp_current_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-ipc-transport-mode")
    {
        bgp_ipc_transport_mode = value;
        bgp_ipc_transport_mode.value_namespace = name_space;
        bgp_ipc_transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-stateon-active-rp")
    {
        bgp_stateon_active_rp = value;
        bgp_stateon_active_rp.value_namespace = name_space;
        bgp_stateon_active_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-stateon-standby-rp")
    {
        bgp_stateon_standby_rp = value;
        bgp_stateon_standby_rp.value_namespace = name_space;
        bgp_stateon_standby_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domainvpns")
    {
        number_bridge_domainvpns = value;
        number_bridge_domainvpns.value_namespace = name_space;
        number_bridge_domainvpns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-local-edges-bridge-domain")
    {
        number_local_edges_bridge_domain = value;
        number_local_edges_bridge_domain.value_namespace = name_space;
        number_local_edges_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-local-edges-xconnect")
    {
        number_local_edges_xconnect = value;
        number_local_edges_xconnect.value_namespace = name_space;
        number_local_edges_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2m-pxconnect-vpns")
    {
        number_mp2m_pxconnect_vpns = value;
        number_mp2m_pxconnect_vpns.value_namespace = name_space;
        number_mp2m_pxconnect_vpns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nlri-bridge-domain")
    {
        number_nlri_bridge_domain = value;
        number_nlri_bridge_domain.value_namespace = name_space;
        number_nlri_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nlri-xconnect")
    {
        number_nlri_xconnect = value;
        number_nlri_xconnect.value_namespace = name_space;
        number_nlri_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges-bridge-domain")
    {
        number_remote_edges_bridge_domain = value;
        number_remote_edges_bridge_domain.value_namespace = name_space;
        number_remote_edges_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges-xconnect")
    {
        number_remote_edges_xconnect = value;
        number_remote_edges_xconnect.value_namespace = name_space;
        number_remote_edges_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-registered")
    {
        vpls_registered = value;
        vpls_registered.value_namespace = name_space;
        vpls_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpws-registered")
    {
        vpws_registered = value;
        vpws_registered.value_namespace = name_space;
        vpws_registered.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::DiscoverySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-current-node-id")
    {
        bgp_current_node_id.yfilter = yfilter;
    }
    if(value_path == "bgp-ipc-transport-mode")
    {
        bgp_ipc_transport_mode.yfilter = yfilter;
    }
    if(value_path == "bgp-stateon-active-rp")
    {
        bgp_stateon_active_rp.yfilter = yfilter;
    }
    if(value_path == "bgp-stateon-standby-rp")
    {
        bgp_stateon_standby_rp.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domainvpns")
    {
        number_bridge_domainvpns.yfilter = yfilter;
    }
    if(value_path == "number-local-edges-bridge-domain")
    {
        number_local_edges_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-local-edges-xconnect")
    {
        number_local_edges_xconnect.yfilter = yfilter;
    }
    if(value_path == "number-mp2m-pxconnect-vpns")
    {
        number_mp2m_pxconnect_vpns.yfilter = yfilter;
    }
    if(value_path == "number-nlri-bridge-domain")
    {
        number_nlri_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-nlri-xconnect")
    {
        number_nlri_xconnect.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges-bridge-domain")
    {
        number_remote_edges_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges-xconnect")
    {
        number_remote_edges_xconnect.yfilter = yfilter;
    }
    if(value_path == "vpls-registered")
    {
        vpls_registered.yfilter = yfilter;
    }
    if(value_path == "vpws-registered")
    {
        vpws_registered.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::DiscoverySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-current-node-id" || name == "bgp-ipc-transport-mode" || name == "bgp-stateon-active-rp" || name == "bgp-stateon-standby-rp" || name == "number-bridge-domainvpns" || name == "number-local-edges-bridge-domain" || name == "number-local-edges-xconnect" || name == "number-mp2m-pxconnect-vpns" || name == "number-nlri-bridge-domain" || name == "number-nlri-xconnect" || name == "number-remote-edges-bridge-domain" || name == "number-remote-edges-xconnect" || name == "vpls-registered" || name == "vpws-registered")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_down{YType::uint32, "number-fxc-down"},
    number_fxc_up{YType::uint32, "number-fxc-up"}
{

    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServiceSummary::has_data() const
{
    return number_fxc.is_set
	|| number_fxc_down.is_set
	|| number_fxc_up.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_fxc.yfilter)
	|| ydk::is_set(number_fxc_down.yfilter)
	|| ydk::is_set(number_fxc_up.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.yfilter)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.yfilter)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.yfilter)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServiceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
        number_fxc.value_namespace = name_space;
        number_fxc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
        number_fxc_down.value_namespace = name_space;
        number_fxc_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
        number_fxc_up.value_namespace = name_space;
        number_fxc_up.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServiceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-fxc")
    {
        number_fxc.yfilter = yfilter;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down.yfilter = yfilter;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServiceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-fxc" || name == "number-fxc-down" || name == "number-fxc-up")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectServices()
{

    yang_name = "flexible-xconnect-services"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::~FlexibleXconnectServices()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<flexible_xconnect_service.size(); index++)
    {
        if(flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<flexible_xconnect_service.size(); index++)
    {
        if(flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service")
    {
        for(auto const & c : flexible_xconnect_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService>();
        c->parent = this;
        flexible_xconnect_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flexible_xconnect_service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectService()
    :
    name{YType::str, "name"}
    	,
    flexible_xconnect_service_acs(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs>())
	,flexible_xconnect_service_info(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo>())
{
    flexible_xconnect_service_acs->parent = this;
    flexible_xconnect_service_info->parent = this;

    yang_name = "flexible-xconnect-service"; yang_parent_name = "flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::~FlexibleXconnectService()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_data() const
{
    return name.is_set
	|| (flexible_xconnect_service_acs !=  nullptr && flexible_xconnect_service_acs->has_data())
	|| (flexible_xconnect_service_info !=  nullptr && flexible_xconnect_service_info->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (flexible_xconnect_service_acs !=  nullptr && flexible_xconnect_service_acs->has_operation())
	|| (flexible_xconnect_service_info !=  nullptr && flexible_xconnect_service_info->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service-acs")
    {
        if(flexible_xconnect_service_acs == nullptr)
        {
            flexible_xconnect_service_acs = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs>();
        }
        return flexible_xconnect_service_acs;
    }

    if(child_yang_name == "flexible-xconnect-service-info")
    {
        if(flexible_xconnect_service_info == nullptr)
        {
            flexible_xconnect_service_info = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo>();
        }
        return flexible_xconnect_service_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flexible_xconnect_service_acs != nullptr)
    {
        children["flexible-xconnect-service-acs"] = flexible_xconnect_service_acs;
    }

    if(flexible_xconnect_service_info != nullptr)
    {
        children["flexible-xconnect-service-info"] = flexible_xconnect_service_info;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service-acs" || name == "flexible-xconnect-service-info" || name == "name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAcs()
{

    yang_name = "flexible-xconnect-service-acs"; yang_parent_name = "flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::~FlexibleXconnectServiceAcs()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_data() const
{
    for (std::size_t index=0; index<flexible_xconnect_service_ac.size(); index++)
    {
        if(flexible_xconnect_service_ac[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_operation() const
{
    for (std::size_t index=0; index<flexible_xconnect_service_ac.size(); index++)
    {
        if(flexible_xconnect_service_ac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-acs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service-ac")
    {
        for(auto const & c : flexible_xconnect_service_ac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc>();
        c->parent = this;
        flexible_xconnect_service_ac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flexible_xconnect_service_ac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service-ac")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::FlexibleXconnectServiceAc()
    :
    interface_name{YType::str, "interface-name"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit>())
{
    attachment_circuit->parent = this;

    yang_name = "flexible-xconnect-service-ac"; yang_parent_name = "flexible-xconnect-service-acs"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::~FlexibleXconnectServiceAc()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_data() const
{
    return interface_name.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-ac" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::AttachmentCircuit()
    :
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    interface_handle{YType::str, "interface-handle"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interworking{YType::enumeration, "interworking"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    msti{YType::str, "msti"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    node_id{YType::str, "node-id"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    state{YType::enumeration, "state"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    interface(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection>())
	,statistics(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics>())
{
    interface->parent = this;
    l2vpn_protection->parent = this;
    statistics->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "flexible-xconnect-service-ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_data() const
{
    return bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_error.is_set
	|| encapsulation_mismatched.is_set
	|| evpn_internal_label.is_set
	|| interface_handle.is_set
	|| internal_ms_ti.is_set
	|| interworking.is_set
	|| is_ac_partially_programmed.is_set
	|| mac_limit_oper_down.is_set
	|| ms_ti_mismatch.is_set
	|| msti.is_set
	|| msti_mismatch_down.is_set
	|| mtu_mismatched.is_set
	|| node_id.is_set
	|| out_of_memory_state.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| state.is_set
	|| tdm_media_mismatched.is_set
	|| xconnect_id.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "l2vpn-protection" || name == "statistics" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-error" || name == "encapsulation-mismatched" || name == "evpn-internal-label" || name == "interface-handle" || name == "internal-ms-ti" || name == "interworking" || name == "is-ac-partially-programmed" || name == "mac-limit-oper-down" || name == "ms-ti-mismatch" || name == "msti" || name == "msti-mismatch-down" || name == "mtu-mismatched" || name == "node-id" || name == "out-of-memory-state" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "state" || name == "tdm-media-mismatched" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Interface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "mtu" || name == "name" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan>())
{
    atm->parent = this;
    ethernet->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    tdm->parent = this;
    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ethernet" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "tdm" || name == "vlan" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(vpi.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-mode" || name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "vci" || name == "vpi")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dlci.yfilter)
	|| ydk::is_set(fr_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dlci" || name == "fr-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "tdm-mode" || name == "timeslot-group" || name == "timeslot-rate")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(ssrc.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "cas" || name == "payload-bytes" || name == "rtp" || name == "rtp-header-payload-type" || name == "signalling-packets" || name == "ssrc" || name == "timestamp-clock-freq" || name == "timestamp-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "encapsulation-type" || name == "outer-tag" || name == "simple-efp" || name == "vlan-rewrite-tag" || name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    active{YType::boolean, "active"},
    protected_name{YType::str, "protected-name"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protection_type{YType::enumeration, "protection-type"}
{

    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return active.is_set
	|| protected_name.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protection_type.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(protected_name.yfilter)
	|| ydk::is_set(protection_configured.yfilter)
	|| ydk::is_set(protection_name.yfilter)
	|| ydk::is_set(protection_type.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.yfilter)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.yfilter)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.yfilter)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
        protected_name.value_namespace = name_space;
        protected_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
        protection_configured.value_namespace = name_space;
        protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
        protection_name.value_namespace = name_space;
        protection_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "protected-name")
    {
        protected_name.yfilter = yfilter;
    }
    if(value_path == "protection-configured")
    {
        protection_configured.yfilter = yfilter;
    }
    if(value_path == "protection-name")
    {
        protection_name.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "protected-name" || name == "protection-configured" || name == "protection-name" || name == "protection-type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::FlexibleXconnectServiceInfo()
    :
    fxc_id{YType::uint32, "fxc-id"},
    name{YType::str, "name"},
    num_p_ws{YType::uint8, "num-p-ws"},
    state{YType::enumeration, "state"}
{

    yang_name = "flexible-xconnect-service-info"; yang_parent_name = "flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::~FlexibleXconnectServiceInfo()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_data() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    return fxc_id.is_set
	|| name.is_set
	|| num_p_ws.is_set
	|| state.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_operation() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fxc_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(num_p_ws.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxc_id.is_set || is_set(fxc_id.yfilter)) leaf_name_data.push_back(fxc_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (num_p_ws.is_set || is_set(num_p_ws.yfilter)) leaf_name_data.push_back(num_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        for(auto const & c : pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fxc-id")
    {
        fxc_id = value;
        fxc_id.value_namespace = name_space;
        fxc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-p-ws")
    {
        num_p_ws = value;
        num_p_ws.value_namespace = name_space;
        num_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fxc-id")
    {
        fxc_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "num-p-ws")
    {
        num_p_ws.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "fxc-id" || name == "name" || name == "num-p-ws" || name == "state")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Pseudowire()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    admited_bw{YType::uint32, "admited-bw"},
    auto_discovery{YType::boolean, "auto-discovery"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    backup_pw{YType::boolean, "backup-pw"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    forward_class{YType::uint8, "forward-class"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    interworking{YType::enumeration, "interworking"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    is_evpn_vpws_type{YType::boolean, "is-evpn-vpws-type"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_vfi{YType::boolean, "is-vfi"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    load_balance{YType::enumeration, "load-balance"},
    local_control_word{YType::enumeration, "local-control-word"},
    local_label_failed{YType::boolean, "local-label-failed"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    local_source_address{YType::str, "local-source-address"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    primary_pw{YType::boolean, "primary-pw"},
    protocol{YType::enumeration, "protocol"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    pw_status_use{YType::boolean, "pw-status-use"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    required_bw{YType::uint32, "required-bw"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    shutdown{YType::boolean, "shutdown"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    state{YType::enumeration, "state"},
    table_policy_name{YType::str, "table-policy-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface>())
	,local_signalling(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw>())
	,peer_id(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId>())
	,preferred_path(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath>())
	,remote_interface(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface>())
	,remote_signalling(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics>())
{
    encapsulation_info->parent = this;
    local_interface->parent = this;
    local_signalling->parent = this;
    p2mp_pw->parent = this;
    peer_id->parent = this;
    preferred_path->parent = this;
    remote_interface->parent = this;
    remote_signalling->parent = this;
    statistics->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "flexible-xconnect-service-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::~Pseudowire()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::has_data() const
{
    return ad_method.is_set
	|| ad_remote_down.is_set
	|| admited_bw.is_set
	|| auto_discovery.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| backup_pw.is_set
	|| bitrate_mismatched.is_set
	|| bridge_pw_type_mismatch.is_set
	|| cas_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| evpn_src_acid.is_set
	|| fe_ctype.is_set
	|| forward_class.is_set
	|| freq_mismatched.is_set
	|| illegal_control_word.is_set
	|| imposed_vlan_id.is_set
	|| interworking.is_set
	|| ipv6_local_source_address.is_set
	|| is_evpn_vpws_type.is_set
	|| is_flow_label_static.is_set
	|| is_multi_segment_pseudowire.is_set
	|| is_partially_programmed.is_set
	|| is_pwr_type.is_set
	|| is_vfi.is_set
	|| last_time_status_changed.is_set
	|| last_time_status_down.is_set
	|| ldp_label_advertise_failed.is_set
	|| load_balance.is_set
	|| local_control_word.is_set
	|| local_label_failed.is_set
	|| local_pseudo_wire_type.is_set
	|| local_source_address.is_set
	|| mac_limit_oper_down.is_set
	|| mtu_mismatched.is_set
	|| not_supported_qinq.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| out_of_memory_state.is_set
	|| payload_bytes_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| preferred_path_disable_fallback.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| primary_pw.is_set
	|| protocol.is_set
	|| pseudo_wire_id.is_set
	|| pseudo_wire_state.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_redundancy_initial_delay.is_set
	|| pw_redundancy_one_way.is_set
	|| pw_status_use.is_set
	|| pwlsd_rewrite_failed.is_set
	|| remote_control_word.is_set
	|| remote_label_failed.is_set
	|| remote_pseudo_wire_type.is_set
	|| required_bw.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| rtp_mismatched.is_set
	|| sequencing_type.is_set
	|| shutdown.is_set
	|| sig_pkts_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| state.is_set
	|| table_policy_name.is_set
	|| tag_rewrite.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| time_elapsed_status_changed.is_set
	|| time_elapsed_status_down.is_set
	|| transport_lsp_down.is_set
	|| xconnect_id.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data())
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ad_remote_down.yfilter)
	|| ydk::is_set(admited_bw.yfilter)
	|| ydk::is_set(auto_discovery.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_force_active.yfilter)
	|| ydk::is_set(backup_pw.yfilter)
	|| ydk::is_set(bitrate_mismatched.yfilter)
	|| ydk::is_set(bridge_pw_type_mismatch.yfilter)
	|| ydk::is_set(cas_mismatched.yfilter)
	|| ydk::is_set(diff_ts_mismatched.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(evpn_src_acid.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(freq_mismatched.yfilter)
	|| ydk::is_set(illegal_control_word.yfilter)
	|| ydk::is_set(imposed_vlan_id.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(ipv6_local_source_address.yfilter)
	|| ydk::is_set(is_evpn_vpws_type.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| ydk::is_set(is_multi_segment_pseudowire.yfilter)
	|| ydk::is_set(is_partially_programmed.yfilter)
	|| ydk::is_set(is_pwr_type.yfilter)
	|| ydk::is_set(is_vfi.yfilter)
	|| ydk::is_set(last_time_status_changed.yfilter)
	|| ydk::is_set(last_time_status_down.yfilter)
	|| ydk::is_set(ldp_label_advertise_failed.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(local_control_word.yfilter)
	|| ydk::is_set(local_label_failed.yfilter)
	|| ydk::is_set(local_pseudo_wire_type.yfilter)
	|| ydk::is_set(local_source_address.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(not_supported_qinq.yfilter)
	|| ydk::is_set(num_ma_cwithdraw_msg_received.yfilter)
	|| ydk::is_set(number_ma_cwithdraw_message_sent.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(payload_bytes_mismatched.yfilter)
	|| ydk::is_set(payload_type_mismatched.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(primary_peer_id.yfilter)
	|| ydk::is_set(primary_pseudo_wire_id.yfilter)
	|| ydk::is_set(primary_pw.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pseudo_wire_id.yfilter)
	|| ydk::is_set(pseudo_wire_state.yfilter)
	|| ydk::is_set(pseudo_wire_type_mismatched.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(pw_flow_label_type.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(pw_redundancy_initial_delay.yfilter)
	|| ydk::is_set(pw_redundancy_one_way.yfilter)
	|| ydk::is_set(pw_status_use.yfilter)
	|| ydk::is_set(pwlsd_rewrite_failed.yfilter)
	|| ydk::is_set(remote_control_word.yfilter)
	|| ydk::is_set(remote_label_failed.yfilter)
	|| ydk::is_set(remote_pseudo_wire_type.yfilter)
	|| ydk::is_set(required_bw.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(rtp_mismatched.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(sig_pkts_mismatched.yfilter)
	|| ydk::is_set(ssrc_mismatched.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(table_policy_name.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(time_elapsed_creation.yfilter)
	|| ydk::is_set(time_elapsed_status_changed.yfilter)
	|| ydk::is_set(time_elapsed_status_down.yfilter)
	|| ydk::is_set(transport_lsp_down.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation())
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.yfilter)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.yfilter)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.yfilter)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.yfilter)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.yfilter)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.yfilter)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.yfilter)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.yfilter)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.yfilter)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.yfilter)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.yfilter)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.yfilter)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.yfilter)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.yfilter)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (is_evpn_vpws_type.is_set || is_set(is_evpn_vpws_type.yfilter)) leaf_name_data.push_back(is_evpn_vpws_type.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.yfilter)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.yfilter)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.yfilter)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.yfilter)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.yfilter)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.yfilter)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.yfilter)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.yfilter)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.yfilter)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.yfilter)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.yfilter)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.yfilter)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.yfilter)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.yfilter)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.yfilter)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.yfilter)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.yfilter)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.yfilter)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.yfilter)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.yfilter)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.yfilter)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.yfilter)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.yfilter)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.yfilter)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.yfilter)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.yfilter)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.yfilter)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.yfilter)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.yfilter)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.yfilter)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.yfilter)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.yfilter)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.yfilter)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.yfilter)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.yfilter)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.yfilter)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.yfilter)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.yfilter)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface == nullptr)
        {
            local_interface = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface>();
        }
        return local_interface;
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling == nullptr)
        {
            local_signalling = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling>();
        }
        return local_signalling;
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw == nullptr)
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw>();
        }
        return p2mp_pw;
    }

    if(child_yang_name == "peer-id")
    {
        if(peer_id == nullptr)
        {
            peer_id = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId>();
        }
        return peer_id;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface == nullptr)
        {
            remote_interface = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface>();
        }
        return remote_interface;
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling == nullptr)
        {
            remote_signalling = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling>();
        }
        return remote_signalling;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_interface != nullptr)
    {
        children["local-interface"] = local_interface;
    }

    if(local_signalling != nullptr)
    {
        children["local-signalling"] = local_signalling;
    }

    if(p2mp_pw != nullptr)
    {
        children["p2mp-pw"] = p2mp_pw;
    }

    if(peer_id != nullptr)
    {
        children["peer-id"] = peer_id;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(remote_interface != nullptr)
    {
        children["remote-interface"] = remote_interface;
    }

    if(remote_signalling != nullptr)
    {
        children["remote-signalling"] = remote_signalling;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
        ad_remote_down.value_namespace = name_space;
        ad_remote_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
        admited_bw.value_namespace = name_space;
        admited_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
        auto_discovery.value_namespace = name_space;
        auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
        backup_force_active.value_namespace = name_space;
        backup_force_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
        backup_pw.value_namespace = name_space;
        backup_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
        bitrate_mismatched.value_namespace = name_space;
        bitrate_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
        bridge_pw_type_mismatch.value_namespace = name_space;
        bridge_pw_type_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
        cas_mismatched.value_namespace = name_space;
        cas_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
        diff_ts_mismatched.value_namespace = name_space;
        diff_ts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
        evpn_src_acid.value_namespace = name_space;
        evpn_src_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
        freq_mismatched.value_namespace = name_space;
        freq_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
        illegal_control_word.value_namespace = name_space;
        illegal_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
        imposed_vlan_id.value_namespace = name_space;
        imposed_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
        ipv6_local_source_address.value_namespace = name_space;
        ipv6_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type = value;
        is_evpn_vpws_type.value_namespace = name_space;
        is_evpn_vpws_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
        is_multi_segment_pseudowire.value_namespace = name_space;
        is_multi_segment_pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
        is_partially_programmed.value_namespace = name_space;
        is_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
        is_pwr_type.value_namespace = name_space;
        is_pwr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
        is_vfi.value_namespace = name_space;
        is_vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
        last_time_status_changed.value_namespace = name_space;
        last_time_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
        last_time_status_down.value_namespace = name_space;
        last_time_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
        ldp_label_advertise_failed.value_namespace = name_space;
        ldp_label_advertise_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
        local_control_word.value_namespace = name_space;
        local_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
        local_label_failed.value_namespace = name_space;
        local_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
        local_pseudo_wire_type.value_namespace = name_space;
        local_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
        local_source_address.value_namespace = name_space;
        local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
        not_supported_qinq.value_namespace = name_space;
        not_supported_qinq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
        num_ma_cwithdraw_msg_received.value_namespace = name_space;
        num_ma_cwithdraw_msg_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
        number_ma_cwithdraw_message_sent.value_namespace = name_space;
        number_ma_cwithdraw_message_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
        payload_bytes_mismatched.value_namespace = name_space;
        payload_bytes_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
        payload_type_mismatched.value_namespace = name_space;
        payload_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
        primary_peer_id.value_namespace = name_space;
        primary_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
        primary_pseudo_wire_id.value_namespace = name_space;
        primary_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
        primary_pw.value_namespace = name_space;
        primary_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
        pseudo_wire_id.value_namespace = name_space;
        pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
        pseudo_wire_state.value_namespace = name_space;
        pseudo_wire_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
        pseudo_wire_type_mismatched.value_namespace = name_space;
        pseudo_wire_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
        pw_flow_label_type.value_namespace = name_space;
        pw_flow_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
        pw_redundancy_initial_delay.value_namespace = name_space;
        pw_redundancy_initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
        pw_redundancy_one_way.value_namespace = name_space;
        pw_redundancy_one_way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
        pw_status_use.value_namespace = name_space;
        pw_status_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
        pwlsd_rewrite_failed.value_namespace = name_space;
        pwlsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
        remote_control_word.value_namespace = name_space;
        remote_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
        remote_label_failed.value_namespace = name_space;
        remote_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
        remote_pseudo_wire_type.value_namespace = name_space;
        remote_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
        required_bw.value_namespace = name_space;
        required_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
        rtp_mismatched.value_namespace = name_space;
        rtp_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
        sig_pkts_mismatched.value_namespace = name_space;
        sig_pkts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
        ssrc_mismatched.value_namespace = name_space;
        ssrc_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
        table_policy_name.value_namespace = name_space;
        table_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
        time_elapsed_creation.value_namespace = name_space;
        time_elapsed_creation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
        time_elapsed_status_changed.value_namespace = name_space;
        time_elapsed_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
        time_elapsed_status_down.value_namespace = name_space;
        time_elapsed_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
        transport_lsp_down.value_namespace = name_space;
        transport_lsp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down.yfilter = yfilter;
    }
    if(value_path == "admited-bw")
    {
        admited_bw.yfilter = yfilter;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active.yfilter = yfilter;
    }
    if(value_path == "backup-pw")
    {
        backup_pw.yfilter = yfilter;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched.yfilter = yfilter;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch.yfilter = yfilter;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched.yfilter = yfilter;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched.yfilter = yfilter;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word.yfilter = yfilter;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address.yfilter = yfilter;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire.yfilter = yfilter;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type.yfilter = yfilter;
    }
    if(value_path == "is-vfi")
    {
        is_vfi.yfilter = yfilter;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed.yfilter = yfilter;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "local-control-word")
    {
        local_control_word.yfilter = yfilter;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed.yfilter = yfilter;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "local-source-address")
    {
        local_source_address.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq.yfilter = yfilter;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received.yfilter = yfilter;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched.yfilter = yfilter;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id.yfilter = yfilter;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "primary-pw")
    {
        primary_pw.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way.yfilter = yfilter;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use.yfilter = yfilter;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word.yfilter = yfilter;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed.yfilter = yfilter;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "required-bw")
    {
        required_bw.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched.yfilter = yfilter;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down.yfilter = yfilter;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-info" || name == "local-interface" || name == "local-signalling" || name == "p2mp-pw" || name == "peer-id" || name == "preferred-path" || name == "remote-interface" || name == "remote-signalling" || name == "statistics" || name == "ad-method" || name == "ad-remote-down" || name == "admited-bw" || name == "auto-discovery" || name == "backup-active" || name == "backup-force-active" || name == "backup-pw" || name == "bitrate-mismatched" || name == "bridge-pw-type-mismatch" || name == "cas-mismatched" || name == "diff-ts-mismatched" || name == "disable-delay" || name == "disable-never" || name == "evpn-src-acid" || name == "fe-ctype" || name == "forward-class" || name == "freq-mismatched" || name == "illegal-control-word" || name == "imposed-vlan-id" || name == "interworking" || name == "ipv6-local-source-address" || name == "is-evpn-vpws-type" || name == "is-flow-label-static" || name == "is-multi-segment-pseudowire" || name == "is-partially-programmed" || name == "is-pwr-type" || name == "is-vfi" || name == "last-time-status-changed" || name == "last-time-status-down" || name == "ldp-label-advertise-failed" || name == "load-balance" || name == "local-control-word" || name == "local-label-failed" || name == "local-pseudo-wire-type" || name == "local-source-address" || name == "mac-limit-oper-down" || name == "mtu-mismatched" || name == "not-supported-qinq" || name == "num-ma-cwithdraw-msg-received" || name == "number-ma-cwithdraw-message-sent" || name == "out-of-memory-state" || name == "payload-bytes-mismatched" || name == "payload-type-mismatched" || name == "preferred-path-disable-fallback" || name == "primary-peer-id" || name == "primary-pseudo-wire-id" || name == "primary-pw" || name == "protocol" || name == "pseudo-wire-id" || name == "pseudo-wire-state" || name == "pseudo-wire-type-mismatched" || name == "pw-class-name" || name == "pw-flow-label-code17-disabled" || name == "pw-flow-label-type" || name == "pw-flow-label-type-cfg" || name == "pw-redundancy-initial-delay" || name == "pw-redundancy-one-way" || name == "pw-status-use" || name == "pwlsd-rewrite-failed" || name == "remote-control-word" || name == "remote-label-failed" || name == "remote-pseudo-wire-type" || name == "required-bw" || name == "resync-enabled" || name == "resync-threshold" || name == "rtp-mismatched" || name == "sequencing-type" || name == "shutdown" || name == "sig-pkts-mismatched" || name == "ssrc-mismatched" || name == "state" || name == "table-policy-name" || name == "tag-rewrite" || name == "time-created" || name == "time-elapsed-creation" || name == "time-elapsed-status-changed" || name == "time-elapsed-status-down" || name == "transport-lsp-down" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom>();
        }
        return atom;
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    local_ceid{YType::uint32, "local-ceid"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_group_id{YType::uint32, "local-group-id"},
    local_label{YType::uint32, "local-label"},
    local_ldp_id{YType::str, "local-ldp-id"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    local_veid{YType::uint32, "local-veid"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    rem_saii{YType::str, "rem-saii"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii{YType::str, "rem-taii"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_group_id{YType::uint32, "remote-group-id"},
    remote_label{YType::uint32, "remote-label"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    remote_source_address{YType::str, "remote-source-address"},
    remote_veid{YType::uint32, "remote-veid"},
    saii{YType::str, "saii"},
    source_address{YType::str, "source-address"},
    taii{YType::str, "taii"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
	,remote_agi(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>())
{
    local_agi->parent = this;
    multi_segment_pseudowire_stats->parent = this;
    remote_agi->parent = this;

    yang_name = "atom"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| is_sai_itype2.is_set
	|| is_tai_itype2.is_set
	|| ldp_label_advertisment_failed.is_set
	|| local_c_ctype.is_set
	|| local_ceid.is_set
	|| local_cv_type.is_set
	|| local_group_id.is_set
	|| local_label.is_set
	|| local_ldp_id.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| local_veid.is_set
	|| lsd_rewrite_failed.is_set
	|| rem_saii.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| remote_c_ctype.is_set
	|| remote_ceid.is_set
	|| remote_cv_type.is_set
	|| remote_group_id.is_set
	|| remote_label.is_set
	|| remote_ldp_id.is_set
	|| remote_source_address.is_set
	|| remote_veid.is_set
	|| saii.is_set
	|| source_address.is_set
	|| taii.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_pseudowire_headend.yfilter)
	|| ydk::is_set(is_sai_itype2.yfilter)
	|| ydk::is_set(is_tai_itype2.yfilter)
	|| ydk::is_set(ldp_label_advertisment_failed.yfilter)
	|| ydk::is_set(local_c_ctype.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(local_cv_type.yfilter)
	|| ydk::is_set(local_group_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_ldp_id.yfilter)
	|| ydk::is_set(local_saii_gbl_id.yfilter)
	|| ydk::is_set(local_saiiac_id.yfilter)
	|| ydk::is_set(local_taii_gbl_id.yfilter)
	|| ydk::is_set(local_taiiac_id.yfilter)
	|| ydk::is_set(local_veid.yfilter)
	|| ydk::is_set(lsd_rewrite_failed.yfilter)
	|| ydk::is_set(rem_saii.yfilter)
	|| ydk::is_set(rem_saii_gbl_id.yfilter)
	|| ydk::is_set(rem_saiiac_id.yfilter)
	|| ydk::is_set(rem_taii.yfilter)
	|| ydk::is_set(rem_taii_gbl_id.yfilter)
	|| ydk::is_set(rem_taiiac_id.yfilter)
	|| ydk::is_set(remote_c_ctype.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(remote_cv_type.yfilter)
	|| ydk::is_set(remote_group_id.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(remote_ldp_id.yfilter)
	|| ydk::is_set(remote_source_address.yfilter)
	|| ydk::is_set(remote_veid.yfilter)
	|| ydk::is_set(saii.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(taii.yfilter)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.yfilter)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.yfilter)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.yfilter)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.yfilter)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.yfilter)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.yfilter)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.yfilter)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.yfilter)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.yfilter)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.yfilter)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.yfilter)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.yfilter)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.yfilter)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.yfilter)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.yfilter)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.yfilter)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.yfilter)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.yfilter)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.yfilter)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.yfilter)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.yfilter)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.yfilter)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.yfilter)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.yfilter)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.yfilter)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (saii.is_set || is_set(saii.yfilter)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (taii.is_set || is_set(taii.yfilter)) leaf_name_data.push_back(taii.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-agi")
    {
        if(local_agi == nullptr)
        {
            local_agi = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi>();
        }
        return local_agi;
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats == nullptr)
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
        }
        return multi_segment_pseudowire_stats;
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi == nullptr)
        {
            remote_agi = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>();
        }
        return remote_agi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_agi != nullptr)
    {
        children["local-agi"] = local_agi;
    }

    if(multi_segment_pseudowire_stats != nullptr)
    {
        children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
    }

    if(remote_agi != nullptr)
    {
        children["remote-agi"] = remote_agi;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
        is_pseudowire_headend.value_namespace = name_space;
        is_pseudowire_headend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
        is_sai_itype2.value_namespace = name_space;
        is_sai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
        is_tai_itype2.value_namespace = name_space;
        is_tai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
        ldp_label_advertisment_failed.value_namespace = name_space;
        ldp_label_advertisment_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
        local_c_ctype.value_namespace = name_space;
        local_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
        local_cv_type.value_namespace = name_space;
        local_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
        local_group_id.value_namespace = name_space;
        local_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
        local_ldp_id.value_namespace = name_space;
        local_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
        local_saii_gbl_id.value_namespace = name_space;
        local_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
        local_saiiac_id.value_namespace = name_space;
        local_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
        local_taii_gbl_id.value_namespace = name_space;
        local_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
        local_taiiac_id.value_namespace = name_space;
        local_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
        local_veid.value_namespace = name_space;
        local_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
        lsd_rewrite_failed.value_namespace = name_space;
        lsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
        rem_saii.value_namespace = name_space;
        rem_saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
        rem_saii_gbl_id.value_namespace = name_space;
        rem_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
        rem_saiiac_id.value_namespace = name_space;
        rem_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
        rem_taii.value_namespace = name_space;
        rem_taii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
        rem_taii_gbl_id.value_namespace = name_space;
        rem_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
        rem_taiiac_id.value_namespace = name_space;
        rem_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
        remote_c_ctype.value_namespace = name_space;
        remote_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
        remote_cv_type.value_namespace = name_space;
        remote_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
        remote_group_id.value_namespace = name_space;
        remote_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
        remote_ldp_id.value_namespace = name_space;
        remote_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
        remote_source_address.value_namespace = name_space;
        remote_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
        remote_veid.value_namespace = name_space;
        remote_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii")
    {
        saii = value;
        saii.value_namespace = name_space;
        saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii")
    {
        taii = value;
        taii.value_namespace = name_space;
        taii.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend.yfilter = yfilter;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2.yfilter = yfilter;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed.yfilter = yfilter;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type.yfilter = yfilter;
    }
    if(value_path == "local-group-id")
    {
        local_group_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id.yfilter = yfilter;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "local-veid")
    {
        local_veid.yfilter = yfilter;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "rem-saii")
    {
        rem_saii.yfilter = yfilter;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-taii")
    {
        rem_taii.yfilter = yfilter;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type.yfilter = yfilter;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id.yfilter = yfilter;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address.yfilter = yfilter;
    }
    if(value_path == "remote-veid")
    {
        remote_veid.yfilter = yfilter;
    }
    if(value_path == "saii")
    {
        saii.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "taii")
    {
        taii.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-agi" || name == "multi-segment-pseudowire-stats" || name == "remote-agi" || name == "is-pseudowire-headend" || name == "is-sai-itype2" || name == "is-tai-itype2" || name == "ldp-label-advertisment-failed" || name == "local-c-ctype" || name == "local-ceid" || name == "local-cv-type" || name == "local-group-id" || name == "local-label" || name == "local-ldp-id" || name == "local-saii-gbl-id" || name == "local-saiiac-id" || name == "local-taii-gbl-id" || name == "local-taiiac-id" || name == "local-veid" || name == "lsd-rewrite-failed" || name == "rem-saii" || name == "rem-saii-gbl-id" || name == "rem-saiiac-id" || name == "rem-taii" || name == "rem-taii-gbl-id" || name == "rem-taiiac-id" || name == "remote-c-ctype" || name == "remote-ceid" || name == "remote-cv-type" || name == "remote-group-id" || name == "remote-label" || name == "remote-ldp-id" || name == "remote-source-address" || name == "remote-veid" || name == "saii" || name == "source-address" || name == "taii")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"}
{

    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_bytes.yfilter)
	|| ydk::is_set(received_packets.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-bytes" || name == "received-packets")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "remote-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_session_id{YType::uint32, "local-session-id"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    remote_session_id{YType::uint32, "remote-session-id"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| l2tp_class_name.is_set
	|| local_cookie_high_value.is_set
	|| local_cookie_low_value.is_set
	|| local_cookie_size.is_set
	|| local_secondary_cookie_high_value.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_size.is_set
	|| local_session_id.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| remote_circuit_status_up.is_set
	|| remote_cookie_high_value.is_set
	|| remote_cookie_low_value.is_set
	|| remote_cookie_size.is_set
	|| remote_session_id.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set
	|| tunnel_state.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(ipv6_source_address.yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(local_cookie_high_value.yfilter)
	|| ydk::is_set(local_cookie_low_value.yfilter)
	|| ydk::is_set(local_cookie_size.yfilter)
	|| ydk::is_set(local_secondary_cookie_high_value.yfilter)
	|| ydk::is_set(local_secondary_cookie_low_value.yfilter)
	|| ydk::is_set(local_secondary_cookie_size.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(remote_circuit_status_up.yfilter)
	|| ydk::is_set(remote_cookie_high_value.yfilter)
	|| ydk::is_set(remote_cookie_low_value.yfilter)
	|| ydk::is_set(remote_cookie_size.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.yfilter)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.yfilter)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.yfilter)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.yfilter)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.yfilter)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.yfilter)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.yfilter)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.yfilter)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.yfilter)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
        ipv6_source_address.value_namespace = name_space;
        ipv6_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
        local_cookie_high_value.value_namespace = name_space;
        local_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
        local_cookie_low_value.value_namespace = name_space;
        local_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
        local_cookie_size.value_namespace = name_space;
        local_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
        local_secondary_cookie_high_value.value_namespace = name_space;
        local_secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
        local_secondary_cookie_low_value.value_namespace = name_space;
        local_secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
        local_secondary_cookie_size.value_namespace = name_space;
        local_secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
        remote_circuit_status_up.value_namespace = name_space;
        remote_circuit_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
        remote_cookie_high_value.value_namespace = name_space;
        remote_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
        remote_cookie_low_value.value_namespace = name_space;
        remote_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
        remote_cookie_size.value_namespace = name_space;
        remote_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address.yfilter = yfilter;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dont-fragment-bit" || name == "ipv4-source-address" || name == "ipv6-source-address" || name == "l2tp-class-name" || name == "local-cookie-high-value" || name == "local-cookie-low-value" || name == "local-cookie-size" || name == "local-secondary-cookie-high-value" || name == "local-secondary-cookie-low-value" || name == "local-secondary-cookie-size" || name == "local-session-id" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "remote-circuit-status-up" || name == "remote-cookie-high-value" || name == "remote-cookie-low-value" || name == "remote-cookie-size" || name == "remote-session-id" || name == "tos" || name == "tos-mode" || name == "ttl" || name == "tunnel-state")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::LocalInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "local-interface"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "mtu" || name == "name" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan>())
{
    atm->parent = this;
    ethernet->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    tdm->parent = this;
    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "local-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ethernet" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "tdm" || name == "vlan" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(vpi.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-mode" || name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "vci" || name == "vpi")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dlci.yfilter)
	|| ydk::is_set(fr_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dlci" || name == "fr-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "tdm-mode" || name == "timeslot-group" || name == "timeslot-rate")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(ssrc.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "cas" || name == "payload-bytes" || name == "rtp" || name == "rtp-header-payload-type" || name == "signalling-packets" || name == "ssrc" || name == "timestamp-clock-freq" || name == "timestamp-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "encapsulation-type" || name == "outer-tag" || name == "simple-efp" || name == "vlan-rewrite-tag" || name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "local-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "status-tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::P2MpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_flags{YType::uint8, "local-flags"},
    local_label{YType::uint32, "local-label"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    remote_available{YType::boolean, "remote-available"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_flags{YType::uint8, "remote-flags"},
    remote_label{YType::uint32, "remote-label"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
{

    yang_name = "p2mp-pw"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_data() const
{
    return local_available.is_set
	|| local_extended_tunnel_id.is_set
	|| local_flags.is_set
	|| local_label.is_set
	|| local_p2mp_id.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| remote_available.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_flags.is_set
	|| remote_label.is_set
	|| remote_p2mp_id.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_available.yfilter)
	|| ydk::is_set(local_extended_tunnel_id.yfilter)
	|| ydk::is_set(local_flags.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_p2mp_id.yfilter)
	|| ydk::is_set(local_ptree_type.yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(remote_available.yfilter)
	|| ydk::is_set(remote_extended_tunnel_id.yfilter)
	|| ydk::is_set(remote_flags.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(remote_p2mp_id.yfilter)
	|| ydk::is_set(remote_ptree_type.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.yfilter)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.yfilter)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.yfilter)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.yfilter)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.yfilter)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.yfilter)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.yfilter)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.yfilter)) leaf_name_data.push_back(remote_flags.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.yfilter)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.yfilter)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-available")
    {
        local_available = value;
        local_available.value_namespace = name_space;
        local_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
        local_extended_tunnel_id.value_namespace = name_space;
        local_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
        local_flags.value_namespace = name_space;
        local_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
        local_p2mp_id.value_namespace = name_space;
        local_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
        local_ptree_type.value_namespace = name_space;
        local_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
        remote_available.value_namespace = name_space;
        remote_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
        remote_extended_tunnel_id.value_namespace = name_space;
        remote_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
        remote_flags.value_namespace = name_space;
        remote_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
        remote_p2mp_id.value_namespace = name_space;
        remote_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
        remote_ptree_type.value_namespace = name_space;
        remote_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-available")
    {
        local_available.yfilter = yfilter;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-flags")
    {
        local_flags.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-available")
    {
        remote_available.yfilter = yfilter;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-flags")
    {
        remote_flags.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-available" || name == "local-extended-tunnel-id" || name == "local-flags" || name == "local-label" || name == "local-p2mp-id" || name == "local-ptree-type" || name == "local-tunnel-id" || name == "remote-available" || name == "remote-extended-tunnel-id" || name == "remote-flags" || name == "remote-label" || name == "remote-p2mp-id" || name == "remote-ptree-type" || name == "remote-tunnel-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::PeerId()
    :
    internal_label{YType::uint32, "internal-label"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    type{YType::enumeration, "type"}
{

    yang_name = "peer-id"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::has_data() const
{
    return internal_label.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| type.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(ipv4_peer_id.yfilter)
	|| ydk::is_set(ipv6_peer_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.yfilter)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.yfilter)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
        ipv4_peer_id.value_namespace = name_space;
        ipv4_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
        ipv6_peer_id.value_namespace = name_space;
        ipv6_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PeerId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-label" || name == "ipv4-peer-id" || name == "ipv6-peer-id" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "ip-tunnel-interface-number" || name == "next-hop-ip" || name == "option" || name == "te-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::RemoteInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "remote-interface"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "mtu" || name == "name" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>())
{
    atm->parent = this;
    ethernet->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    tdm->parent = this;
    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ethernet" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "tdm" || name == "vlan" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(vpi.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-mode" || name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "vci" || name == "vpi")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dlci.yfilter)
	|| ydk::is_set(fr_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dlci" || name == "fr-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}


}
}

