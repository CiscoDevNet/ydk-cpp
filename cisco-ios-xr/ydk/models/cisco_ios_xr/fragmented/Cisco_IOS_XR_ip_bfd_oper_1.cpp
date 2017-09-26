
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-tx-last-time" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-last-output" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-tx-last-rc")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    async_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    last_state_change->parent = this;
    receive_packet->parent = this;
    source_address->parent = this;
    status_brief_information->parent = this;
    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-receive-statistics" || name == "async-transmit-statistics" || name == "echo-received-statistics" || name == "echo-transmit-statistics" || name == "last-state-change" || name == "receive-packet" || name == "source-address" || name == "status-brief-information" || name == "transmit-packet" || name == "desired-minimum-echo-transmit-interval" || name == "internal-label" || name == "latency-average" || name == "latency-maximum" || name == "latency-minimum" || name == "latency-number" || name == "local-discriminator" || name == "node-id" || name == "remote-discriminator" || name == "remote-negotiated-interval" || name == "session-subtype" || name == "sessiontype" || name == "state" || name == "to-up-state-count")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSummary::Ipv4SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSummary::~Ipv4SingleHopSummary()
{
}

bool Bfd::Ipv4SingleHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4SingleHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4SingleHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv4SingleHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopCounters()
    :
    ipv6_multi_hop_packet_counters(std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>())
{
    ipv6_multi_hop_packet_counters->parent = this;

    yang_name = "ipv6-multi-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::~Ipv6MultiHopCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::has_data() const
{
    return (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_data());
}

bool Bfd::Ipv6MultiHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6MultiHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-packet-counters")
    {
        if(ipv6_multi_hop_packet_counters == nullptr)
        {
            ipv6_multi_hop_packet_counters = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>();
        }
        return ipv6_multi_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_multi_hop_packet_counters != nullptr)
    {
        children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounters()
{

    yang_name = "ipv6-multi-hop-packet-counters"; yang_parent_name = "ipv6-multi-hop-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::~Ipv6MultiHopPacketCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-packet-counter")
    {
        for(auto const & c : ipv6_multi_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter>();
        c->parent = this;
        ipv6_multi_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::Ipv6MultiHopPacketCounter()
    :
    destination_address{YType::str, "destination-address"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-multi-hop-packet-counter"; yang_parent_name = "ipv6-multi-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::~Ipv6MultiHopPacketCounter()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_data() const
{
    return destination_address.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(display_type.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/ipv6-multi-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "display-type" || name == "echo-receive-count" || name == "echo-transmit-count" || name == "hello-receive-count" || name == "hello-transmit-count" || name == "location" || name == "source-address" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPaths()
{

    yang_name = "ipv6-multi-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopMultiPaths::~Ipv6MultiHopMultiPaths()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-multi-path")
    {
        for(auto const & c : ipv6_multi_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath>();
        c->parent = this;
        ipv6_multi_hop_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::Ipv6MultiHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6-multi-hop-multi-path"; yang_parent_name = "ipv6-multi-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::~Ipv6MultiHopMultiPath()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_interface_name.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "incoming-label-xr" || name == "local-discriminator" || name == "location" || name == "node-id" || name == "session-interface-name" || name == "session-subtype" || name == "source-address" || name == "state" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummaries()
{

    yang_name = "ipv6-multi-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::~Ipv6MultiHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-node-location-summary")
    {
        for(auto const & c : ipv6_multi_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary>();
        c->parent = this;
        ipv6_multi_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::Ipv6MultiHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-multi-hop-node-location-summary"; yang_parent_name = "ipv6-multi-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::~Ipv6MultiHopNodeLocationSummary()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summary" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "retry-count" || name == "standby-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBriefs()
{

    yang_name = "ipv6-multi-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::~Ipv6MultiHopSessionBriefs()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-session-brief")
    {
        for(auto const & c : ipv6_multi_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief>();
        c->parent = this;
        ipv6_multi_hop_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::Ipv6MultiHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv6-multi-hop-session-brief"; yang_parent_name = "ipv6-multi-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::~Ipv6MultiHopSessionBrief()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "destination-address" || name == "location" || name == "node-id" || name == "session-flags" || name == "session-subtype" || name == "session-type" || name == "source-address" || name == "state" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-multi-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetails()
{

    yang_name = "ipv6-multi-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::~Ipv6MultiHopSessionDetails()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.size(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.size(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-session-detail")
    {
        for(auto const & c : ipv6_multi_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail>();
        c->parent = this;
        ipv6_multi_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::Ipv6MultiHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    mp_download_state->parent = this;
    status_information->parent = this;

    yang_name = "ipv6-multi-hop-session-detail"; yang_parent_name = "ipv6-multi-hop-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::~Ipv6MultiHopSessionDetail()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-information" || name == "lsp-ping-info" || name == "mp-download-state" || name == "owner-information" || name == "status-information" || name == "destination-address" || name == "location" || name == "source-address" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    ip_destination_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_discriminator.is_set
	|| sessiontype.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "local-discriminator" || name == "sessiontype")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-tx-last-time" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-last-output" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-tx-last-rc")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    async_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    last_state_change->parent = this;
    receive_packet->parent = this;
    source_address->parent = this;
    status_brief_information->parent = this;
    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-receive-statistics" || name == "async-transmit-statistics" || name == "echo-received-statistics" || name == "echo-transmit-statistics" || name == "last-state-change" || name == "receive-packet" || name == "source-address" || name == "status-brief-information" || name == "transmit-packet" || name == "desired-minimum-echo-transmit-interval" || name == "internal-label" || name == "latency-average" || name == "latency-maximum" || name == "latency-minimum" || name == "latency-number" || name == "local-discriminator" || name == "node-id" || name == "remote-discriminator" || name == "remote-negotiated-interval" || name == "session-subtype" || name == "sessiontype" || name == "state" || name == "to-up-state-count")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSummary::Ipv6MultiHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-multi-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSummary::~Ipv6MultiHopSummary()
{
}

bool Bfd::Ipv6MultiHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6MultiHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv6MultiHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopCounters()
    :
    ipv6_single_hop_packet_counters(std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters>())
{
    ipv6_single_hop_packet_counters->parent = this;

    yang_name = "ipv6-single-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopCounters::~Ipv6SingleHopCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::has_data() const
{
    return (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_data());
}

bool Bfd::Ipv6SingleHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6SingleHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-packet-counters")
    {
        if(ipv6_single_hop_packet_counters == nullptr)
        {
            ipv6_single_hop_packet_counters = std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters>();
        }
        return ipv6_single_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_single_hop_packet_counters != nullptr)
    {
        children["ipv6-single-hop-packet-counters"] = ipv6_single_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv6SingleHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounters()
{

    yang_name = "ipv6-single-hop-packet-counters"; yang_parent_name = "ipv6-single-hop-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::~Ipv6SingleHopPacketCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.size(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.size(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-packet-counter")
    {
        for(auto const & c : ipv6_single_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter>();
        c->parent = this;
        ipv6_single_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::Ipv6SingleHopPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"}
{

    yang_name = "ipv6-single-hop-packet-counter"; yang_parent_name = "ipv6-single-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::~Ipv6SingleHopPacketCounter()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_data() const
{
    return interface_name.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(display_type.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/ipv6-single-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counter" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "display-type" || name == "echo-receive-count" || name == "echo-transmit-count" || name == "hello-receive-count" || name == "hello-transmit-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummaries()
{

    yang_name = "ipv6-single-hop-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopLocationSummaries::~Ipv6SingleHopLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-location-summary")
    {
        for(auto const & c : ipv6_single_hop_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary>();
        c->parent = this;
        ipv6_single_hop_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-location-summary")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::Ipv6SingleHopLocationSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-location-summary"; yang_parent_name = "ipv6-single-hop-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::~Ipv6SingleHopLocationSummary()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summary" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "retry-count" || name == "standby-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPaths()
{

    yang_name = "ipv6-single-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopMultiPaths::~Ipv6SingleHopMultiPaths()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.size(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.size(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-multi-path")
    {
        for(auto const & c : ipv6_single_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath>();
        c->parent = this;
        ipv6_single_hop_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::Ipv6SingleHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"}
{

    yang_name = "ipv6-single-hop-multi-path"; yang_parent_name = "ipv6-single-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::~Ipv6SingleHopMultiPath()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set;
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_interface_name.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "incoming-label-xr" || name == "interface-name" || name == "local-discriminator" || name == "location" || name == "node-id" || name == "session-interface-name" || name == "session-subtype" || name == "state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummaries()
{

    yang_name = "ipv6-single-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::~Ipv6SingleHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-node-location-summary")
    {
        for(auto const & c : ipv6_single_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary>();
        c->parent = this;
        ipv6_single_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::Ipv6SingleHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-node-location-summary"; yang_parent_name = "ipv6-single-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::~Ipv6SingleHopNodeLocationSummary()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summary" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "retry-count" || name == "standby-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBriefs()
{

    yang_name = "ipv6-single-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionBriefs::~Ipv6SingleHopSessionBriefs()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.size(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.size(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-session-brief")
    {
        for(auto const & c : ipv6_single_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief>();
        c->parent = this;
        ipv6_single_hop_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::Ipv6SingleHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv6-single-hop-session-brief"; yang_parent_name = "ipv6-single-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::~Ipv6SingleHopSessionBrief()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "destination-address" || name == "interface-name" || name == "location" || name == "node-id" || name == "session-flags" || name == "session-subtype" || name == "session-type" || name == "state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-single-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetails()
{

    yang_name = "ipv6-single-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::~Ipv6SingleHopSessionDetails()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-session-detail")
    {
        for(auto const & c : ipv6_single_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail>();
        c->parent = this;
        ipv6_single_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::Ipv6SingleHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    mp_download_state->parent = this;
    status_information->parent = this;

    yang_name = "ipv6-single-hop-session-detail"; yang_parent_name = "ipv6-single-hop-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::~Ipv6SingleHopSessionDetail()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-information" || name == "lsp-ping-info" || name == "mp-download-state" || name == "owner-information" || name == "status-information" || name == "destination-address" || name == "interface-name" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    ip_destination_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_discriminator.is_set
	|| sessiontype.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "local-discriminator" || name == "sessiontype")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-tx-last-time" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-last-output" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-tx-last-rc")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    async_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    last_state_change->parent = this;
    receive_packet->parent = this;
    source_address->parent = this;
    status_brief_information->parent = this;
    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-receive-statistics" || name == "async-transmit-statistics" || name == "echo-received-statistics" || name == "echo-transmit-statistics" || name == "last-state-change" || name == "receive-packet" || name == "source-address" || name == "status-brief-information" || name == "transmit-packet" || name == "desired-minimum-echo-transmit-interval" || name == "internal-label" || name == "latency-average" || name == "latency-maximum" || name == "latency-minimum" || name == "latency-number" || name == "local-discriminator" || name == "node-id" || name == "remote-discriminator" || name == "remote-negotiated-interval" || name == "session-subtype" || name == "sessiontype" || name == "state" || name == "to-up-state-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSummary::Ipv6SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSummary::~Ipv6SingleHopSummary()
{
}

bool Bfd::Ipv6SingleHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::Ipv6SingleHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::LabelCounters::LabelCounters()
    :
    label_packet_counters(std::make_shared<Bfd::LabelCounters::LabelPacketCounters>())
{
    label_packet_counters->parent = this;

    yang_name = "label-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::~LabelCounters()
{
}

bool Bfd::LabelCounters::has_data() const
{
    return (label_packet_counters !=  nullptr && label_packet_counters->has_data());
}

bool Bfd::LabelCounters::has_operation() const
{
    return is_set(yfilter)
	|| (label_packet_counters !=  nullptr && label_packet_counters->has_operation());
}

std::string Bfd::LabelCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-packet-counters")
    {
        if(label_packet_counters == nullptr)
        {
            label_packet_counters = std::make_shared<Bfd::LabelCounters::LabelPacketCounters>();
        }
        return label_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_packet_counters != nullptr)
    {
        children["label-packet-counters"] = label_packet_counters;
    }

    return children;
}

void Bfd::LabelCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-packet-counters")
        return true;
    return false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounters()
{

    yang_name = "label-packet-counters"; yang_parent_name = "label-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::LabelPacketCounters::~LabelPacketCounters()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::has_data() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelCounters::LabelPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelCounters::LabelPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::LabelPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::LabelPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-packet-counter")
    {
        for(auto const & c : label_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter>();
        c->parent = this;
        label_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::LabelPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelCounters::LabelPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelCounters::LabelPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-packet-counter")
        return true;
    return false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::LabelPacketCounter()
    :
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
{

    yang_name = "label-packet-counter"; yang_parent_name = "label-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::~LabelPacketCounter()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_data() const
{
    return display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| interface_name.is_set
	|| location.is_set;
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display_type.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/label-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display-type" || name == "echo-receive-count" || name == "echo-transmit-count" || name == "hello-receive-count" || name == "hello-transmit-count" || name == "interface-name" || name == "location")
        return true;
    return false;
}

Bfd::LabelMultiPaths::LabelMultiPaths()
{

    yang_name = "label-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelMultiPaths::~LabelMultiPaths()
{
}

bool Bfd::LabelMultiPaths::has_data() const
{
    for (std::size_t index=0; index<label_multi_path.size(); index++)
    {
        if(label_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<label_multi_path.size(); index++)
    {
        if(label_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-multi-path")
    {
        for(auto const & c : label_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelMultiPaths::LabelMultiPath>();
        c->parent = this;
        label_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-multi-path")
        return true;
    return false;
}

Bfd::LabelMultiPaths::LabelMultiPath::LabelMultiPath()
    :
    incoming_label{YType::int32, "incoming-label"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"}
{

    yang_name = "label-multi-path"; yang_parent_name = "label-multi-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelMultiPaths::LabelMultiPath::~LabelMultiPath()
{
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_data() const
{
    return incoming_label.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set;
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_interface_name.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::LabelMultiPaths::LabelMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelMultiPaths::LabelMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelMultiPaths::LabelMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelMultiPaths::LabelMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelMultiPaths::LabelMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelMultiPaths::LabelMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelMultiPaths::LabelMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-label" || name == "incoming-label-xr" || name == "interface-name" || name == "local-discriminator" || name == "location" || name == "node-id" || name == "session-interface-name" || name == "session-subtype" || name == "state")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBriefs()
{

    yang_name = "label-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionBriefs::~LabelSessionBriefs()
{
}

bool Bfd::LabelSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<label_session_brief.size(); index++)
    {
        if(label_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<label_session_brief.size(); index++)
    {
        if(label_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-brief")
    {
        for(auto const & c : label_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief>();
        c->parent = this;
        label_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-session-brief")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::LabelSessionBrief()
    :
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "label-session-brief"; yang_parent_name = "label-session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::~LabelSessionBrief()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "incoming-label" || name == "interface-name" || name == "location" || name == "node-id" || name == "session-flags" || name == "session-subtype" || name == "session-type" || name == "state")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "label-session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetails()
{

    yang_name = "label-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::~LabelSessionDetails()
{
}

bool Bfd::LabelSessionDetails::has_data() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-detail")
    {
        for(auto const & c : label_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail>();
        c->parent = this;
        label_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-session-detail")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LabelSessionDetail()
    :
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    mp_download_state->parent = this;
    status_information->parent = this;

    yang_name = "label-session-detail"; yang_parent_name = "label-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::~LabelSessionDetail()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-information" || name == "lsp-ping-info" || name == "mp-download-state" || name == "owner-information" || name == "status-information" || name == "incoming-label" || name == "interface-name" || name == "location")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    ip_destination_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_discriminator.is_set
	|| sessiontype.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "local-discriminator" || name == "sessiontype")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-tx-last-time" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-last-output" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-tx-last-rc")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    async_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    last_state_change->parent = this;
    receive_packet->parent = this;
    source_address->parent = this;
    status_brief_information->parent = this;
    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-receive-statistics" || name == "async-transmit-statistics" || name == "echo-received-statistics" || name == "echo-transmit-statistics" || name == "last-state-change" || name == "receive-packet" || name == "source-address" || name == "status-brief-information" || name == "transmit-packet" || name == "desired-minimum-echo-transmit-interval" || name == "internal-label" || name == "latency-average" || name == "latency-maximum" || name == "latency-minimum" || name == "latency-number" || name == "local-discriminator" || name == "node-id" || name == "remote-discriminator" || name == "remote-negotiated-interval" || name == "session-subtype" || name == "sessiontype" || name == "state" || name == "to-up-state-count")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "last" || name == "maximum" || name == "minimum" || name == "number")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-local-transmit-interval" || name == "negotiated-remote-transmit-interval")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "detection-time" || name == "negotiated-transmit-interval")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(final.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(your_discriminator.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final.is_set || is_set(final.yfilter)) leaf_name_data.push_back(final.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final = value;
        final.value_namespace = name_space;
        final.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-present" || name == "control-plane-independent" || name == "demand" || name == "desired-minimum-transmit-interval" || name == "detection-multiplier" || name == "diagnostic" || name == "final" || name == "ihear-you" || name == "length" || name == "my-discriminator" || name == "poll" || name == "required-minimum-echo-receive-interval" || name == "required-minimum-receive-interval" || name == "state" || name == "version" || name == "your-discriminator")
        return true;
    return false;
}

Bfd::LabelSummary::LabelSummary()
    :
    session_state(std::make_shared<Bfd::LabelSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "label-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummary::~LabelSummary()
{
}

bool Bfd::LabelSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::LabelSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::LabelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::LabelSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "label-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummary::SessionState::~SessionState()
{
}

bool Bfd::LabelSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::LabelSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::LabelSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::LabelSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNodes()
{

    yang_name = "label-summary-nodes"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummaryNodes::~LabelSummaryNodes()
{
}

bool Bfd::LabelSummaryNodes::has_data() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSummaryNodes::has_operation() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSummaryNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-node")
    {
        for(auto const & c : label_summary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode>();
        c->parent = this;
        label_summary_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_summary_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSummaryNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSummaryNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSummaryNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-summary-node")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::LabelSummaryNode()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>())
{
    session_state->parent = this;

    yang_name = "label-summary-node"; yang_parent_name = "label-summary-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::~LabelSummaryNode()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-node" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::LabelSummaryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::LabelSummaryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{

    yang_name = "session-state"; yang_parent_name = "label-summary-node"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::~SessionState()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(up_count.yfilter);
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "retry-count" || name == "standby-count" || name == "total-count" || name == "unknown-count" || name == "up-count")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBriefs()
{

    yang_name = "relation-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationBriefs::~RelationBriefs()
{
}

bool Bfd::RelationBriefs::has_data() const
{
    for (std::size_t index=0; index<relation_brief.size(); index++)
    {
        if(relation_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationBriefs::has_operation() const
{
    for (std::size_t index=0; index<relation_brief.size(); index++)
    {
        if(relation_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::RelationBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relation-brief")
    {
        for(auto const & c : relation_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationBriefs::RelationBrief>();
        c->parent = this;
        relation_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : relation_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::RelationBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::RelationBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::RelationBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relation-brief")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBrief::RelationBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{

    yang_name = "relation-brief"; yang_parent_name = "relation-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationBriefs::RelationBrief::~RelationBrief()
{
}

bool Bfd::RelationBriefs::RelationBrief::has_data() const
{
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| state.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::has_operation() const
{
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::RelationBriefs::RelationBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::RelationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::RelationBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::RelationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-information")
    {
        for(auto const & c : link_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationBriefs::RelationBrief::LinkInformation>();
        c->parent = this;
        link_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationBriefs::RelationBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::RelationBriefs::RelationBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationBriefs::RelationBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::RelationBriefs::RelationBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-information" || name == "destination-address" || name == "interface-name" || name == "state")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::LinkInformation()
    :
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{

    yang_name = "link-information"; yang_parent_name = "relation-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_data() const
{
    return interface_name.is_set
	|| state.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::RelationBriefs::RelationBrief::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/relation-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::RelationBrief::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::RelationBrief::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::RelationBrief::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationBriefs::RelationBrief::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::RelationBriefs::RelationBrief::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationBriefs::RelationBrief::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "state")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetails()
{

    yang_name = "relation-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::~RelationDetails()
{
}

bool Bfd::RelationDetails::has_data() const
{
    for (std::size_t index=0; index<relation_detail.size(); index++)
    {
        if(relation_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationDetails::has_operation() const
{
    for (std::size_t index=0; index<relation_detail.size(); index++)
    {
        if(relation_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::RelationDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relation-detail")
    {
        for(auto const & c : relation_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail>();
        c->parent = this;
        relation_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : relation_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::RelationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::RelationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::RelationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relation-detail")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::RelationDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    state{YType::enumeration, "state"}
{

    yang_name = "relation-detail"; yang_parent_name = "relation-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::RelationDetail::~RelationDetail()
{
}

bool Bfd::RelationDetails::RelationDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| state.is_set;
}

bool Bfd::RelationDetails::RelationDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "link-information")
    {
        for(auto const & c : link_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::LinkInformation>();
        c->parent = this;
        link_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::RelationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-information" || name == "link-information" || name == "destination-address" || name == "interface-name" || name == "local-discriminator" || name == "state")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    ip_destination_address(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "relation-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_discriminator.is_set
	|| sessiontype.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "local-discriminator" || name == "sessiontype")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjusted-detection-multiplier" || name == "adjusted-interval" || name == "detection-multiplier" || name == "interval" || name == "name")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::LinkInformation::LinkInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    state{YType::enumeration, "state"}
{

    yang_name = "link-information"; yang_parent_name = "relation-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::RelationDetails::RelationDetail::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_data() const
{
    return interface_name.is_set
	|| local_discriminator.is_set
	|| state.is_set;
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::RelationDetails::RelationDetail::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::RelationDetails::RelationDetail::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "local-discriminator" || name == "state")
        return true;
    return false;
}


}
}

