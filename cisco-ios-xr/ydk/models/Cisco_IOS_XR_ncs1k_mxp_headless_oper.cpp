
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_headless_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_headless_oper {

HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::OtnStatistics()
    :
    	fec_ec{YType::uint64, "fec-ec"},
	 fec_uc{YType::uint64, "fec-uc"},
	 sm_bei{YType::uint64, "sm-bei"},
	 sm_bip{YType::uint64, "sm-bip"}
{
    yang_name = "otn-statistics"; yang_parent_name = "otn-port-name";
}

HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::~OtnStatistics()
{
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::has_data() const
{
    return fec_ec.is_set
	|| fec_uc.is_set
	|| sm_bei.is_set
	|| sm_bip.is_set;
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ec.operation)
	|| is_set(fec_uc.operation)
	|| is_set(sm_bei.operation)
	|| is_set(sm_bip.operation);
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-statistics";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ec.is_set || is_set(fec_ec.operation)) leaf_name_data.push_back(fec_ec.get_name_leafdata());
    if (fec_uc.is_set || is_set(fec_uc.operation)) leaf_name_data.push_back(fec_uc.get_name_leafdata());
    if (sm_bei.is_set || is_set(sm_bei.operation)) leaf_name_data.push_back(sm_bei.get_name_leafdata());
    if (sm_bip.is_set || is_set(sm_bip.operation)) leaf_name_data.push_back(sm_bip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::get_children()
{
    return children;
}

void HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ec")
    {
        fec_ec = value;
    }
    if(value_path == "fec-uc")
    {
        fec_uc = value;
    }
    if(value_path == "sm-bei")
    {
        sm_bei = value;
    }
    if(value_path == "sm-bip")
    {
        sm_bip = value;
    }
}

HeadlessFuncData::OtnPortNames::OtnPortName::OtnPortName()
    :
    	name{YType::str, "name"},
	 headless_end_time{YType::str, "headless-end-time"},
	 headless_start_time{YType::str, "headless-start-time"},
	 started_stateful{YType::boolean, "started-stateful"}
    	,
    otn_statistics(std::make_unique<HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics>())
{
    otn_statistics->parent = this;
    children["otn-statistics"] = otn_statistics.get();

    yang_name = "otn-port-name"; yang_parent_name = "otn-port-names";
}

HeadlessFuncData::OtnPortNames::OtnPortName::~OtnPortName()
{
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::has_data() const
{
    return name.is_set
	|| headless_end_time.is_set
	|| headless_start_time.is_set
	|| started_stateful.is_set
	|| (otn_statistics !=  nullptr && otn_statistics->has_data());
}

bool HeadlessFuncData::OtnPortNames::OtnPortName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(headless_end_time.operation)
	|| is_set(headless_start_time.operation)
	|| is_set(started_stateful.operation)
	|| (otn_statistics !=  nullptr && is_set(otn_statistics->operation));
}

std::string HeadlessFuncData::OtnPortNames::OtnPortName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-port-name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::OtnPortNames::OtnPortName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/otn-port-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (headless_end_time.is_set || is_set(headless_end_time.operation)) leaf_name_data.push_back(headless_end_time.get_name_leafdata());
    if (headless_start_time.is_set || is_set(headless_start_time.operation)) leaf_name_data.push_back(headless_start_time.get_name_leafdata());
    if (started_stateful.is_set || is_set(started_stateful.operation)) leaf_name_data.push_back(started_stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::OtnPortNames::OtnPortName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn-statistics")
    {
        if(otn_statistics != nullptr)
        {
            children["otn-statistics"] = otn_statistics.get();
        }
        else
        {
            otn_statistics = std::make_unique<HeadlessFuncData::OtnPortNames::OtnPortName::OtnStatistics>();
            otn_statistics->parent = this;
            children["otn-statistics"] = otn_statistics.get();
        }
        return children.at("otn-statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::OtnPortNames::OtnPortName::get_children()
{
    if(children.find("otn-statistics") == children.end())
    {
        if(otn_statistics != nullptr)
        {
            children["otn-statistics"] = otn_statistics.get();
        }
    }

    return children;
}

void HeadlessFuncData::OtnPortNames::OtnPortName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time = value;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time = value;
    }
    if(value_path == "started-stateful")
    {
        started_stateful = value;
    }
}

HeadlessFuncData::OtnPortNames::OtnPortNames()
{
    yang_name = "otn-port-names"; yang_parent_name = "headless-func-data";
}

HeadlessFuncData::OtnPortNames::~OtnPortNames()
{
}

bool HeadlessFuncData::OtnPortNames::has_data() const
{
    for (std::size_t index=0; index<otn_port_name.size(); index++)
    {
        if(otn_port_name[index]->has_data())
            return true;
    }
    return false;
}

bool HeadlessFuncData::OtnPortNames::has_operation() const
{
    for (std::size_t index=0; index<otn_port_name.size(); index++)
    {
        if(otn_port_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HeadlessFuncData::OtnPortNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-port-names";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::OtnPortNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::OtnPortNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn-port-name")
    {
        for(auto const & c : otn_port_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HeadlessFuncData::OtnPortNames::OtnPortName>();
        c->parent = this;
        otn_port_name.push_back(std::move(c));
        children[segment_path] = otn_port_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::OtnPortNames::get_children()
{
    for (auto const & c : otn_port_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HeadlessFuncData::OtnPortNames::set_value(const std::string & value_path, std::string value)
{
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::EtherStatistics()
    :
    	rx_bytes_good{YType::uint64, "rx-bytes-good"},
	 rx_error_jabbers{YType::uint64, "rx-error-jabbers"},
	 rx_lldp_pkt{YType::uint64, "rx-lldp-pkt"},
	 rx_packets{YType::uint64, "rx-packets"},
	 rx_pause{YType::uint64, "rx-pause"},
	 rx_pkt_drop{YType::uint64, "rx-pkt-drop"},
	 rx_pkts1024_to1518_bytes{YType::uint64, "rx-pkts1024-to1518-bytes"},
	 rx_pkts128to255_bytes{YType::uint64, "rx-pkts128to255-bytes"},
	 rx_pkts256_to511_bytes{YType::uint64, "rx-pkts256-to511-bytes"},
	 rx_pkts512_to1023_bytes{YType::uint64, "rx-pkts512-to1023-bytes"},
	 rx_pkts64_bytes{YType::uint64, "rx-pkts64-bytes"},
	 rx_pkts65_to127_bytes{YType::uint64, "rx-pkts65-to127-bytes"},
	 rx_pkts_bad_fcs{YType::uint64, "rx-pkts-bad-fcs"},
	 rx_pkts_broadcast{YType::uint64, "rx-pkts-broadcast"},
	 rx_pkts_good{YType::uint64, "rx-pkts-good"},
	 rx_pkts_multicast{YType::uint64, "rx-pkts-multicast"},
	 rx_pkts_over_sized{YType::uint64, "rx-pkts-over-sized"},
	 rx_pkts_under_sized{YType::uint64, "rx-pkts-under-sized"},
	 rx_pkts_unicast{YType::uint64, "rx-pkts-unicast"},
	 rx_recv_fragments{YType::uint64, "rx-recv-fragments"},
	 rx_total_bytes{YType::uint64, "rx-total-bytes"},
	 tx_bad_fcs{YType::uint64, "tx-bad-fcs"},
	 tx_bytes_good{YType::uint64, "tx-bytes-good"},
	 tx_fragments{YType::uint64, "tx-fragments"},
	 tx_jabber{YType::uint64, "tx-jabber"},
	 tx_packets{YType::uint64, "tx-packets"},
	 tx_pause{YType::uint64, "tx-pause"},
	 tx_pkts_good{YType::uint64, "tx-pkts-good"},
	 tx_pkts_over_sized{YType::uint64, "tx-pkts-over-sized"},
	 tx_pkts_under_sized{YType::uint64, "tx-pkts-under-sized"},
	 tx_total_bytes{YType::uint64, "tx-total-bytes"}
{
    yang_name = "ether-statistics"; yang_parent_name = "ethernet-port-name";
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::~EtherStatistics()
{
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::has_data() const
{
    return rx_bytes_good.is_set
	|| rx_error_jabbers.is_set
	|| rx_lldp_pkt.is_set
	|| rx_packets.is_set
	|| rx_pause.is_set
	|| rx_pkt_drop.is_set
	|| rx_pkts1024_to1518_bytes.is_set
	|| rx_pkts128to255_bytes.is_set
	|| rx_pkts256_to511_bytes.is_set
	|| rx_pkts512_to1023_bytes.is_set
	|| rx_pkts64_bytes.is_set
	|| rx_pkts65_to127_bytes.is_set
	|| rx_pkts_bad_fcs.is_set
	|| rx_pkts_broadcast.is_set
	|| rx_pkts_good.is_set
	|| rx_pkts_multicast.is_set
	|| rx_pkts_over_sized.is_set
	|| rx_pkts_under_sized.is_set
	|| rx_pkts_unicast.is_set
	|| rx_recv_fragments.is_set
	|| rx_total_bytes.is_set
	|| tx_bad_fcs.is_set
	|| tx_bytes_good.is_set
	|| tx_fragments.is_set
	|| tx_jabber.is_set
	|| tx_packets.is_set
	|| tx_pause.is_set
	|| tx_pkts_good.is_set
	|| tx_pkts_over_sized.is_set
	|| tx_pkts_under_sized.is_set
	|| tx_total_bytes.is_set;
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_bytes_good.operation)
	|| is_set(rx_error_jabbers.operation)
	|| is_set(rx_lldp_pkt.operation)
	|| is_set(rx_packets.operation)
	|| is_set(rx_pause.operation)
	|| is_set(rx_pkt_drop.operation)
	|| is_set(rx_pkts1024_to1518_bytes.operation)
	|| is_set(rx_pkts128to255_bytes.operation)
	|| is_set(rx_pkts256_to511_bytes.operation)
	|| is_set(rx_pkts512_to1023_bytes.operation)
	|| is_set(rx_pkts64_bytes.operation)
	|| is_set(rx_pkts65_to127_bytes.operation)
	|| is_set(rx_pkts_bad_fcs.operation)
	|| is_set(rx_pkts_broadcast.operation)
	|| is_set(rx_pkts_good.operation)
	|| is_set(rx_pkts_multicast.operation)
	|| is_set(rx_pkts_over_sized.operation)
	|| is_set(rx_pkts_under_sized.operation)
	|| is_set(rx_pkts_unicast.operation)
	|| is_set(rx_recv_fragments.operation)
	|| is_set(rx_total_bytes.operation)
	|| is_set(tx_bad_fcs.operation)
	|| is_set(tx_bytes_good.operation)
	|| is_set(tx_fragments.operation)
	|| is_set(tx_jabber.operation)
	|| is_set(tx_packets.operation)
	|| is_set(tx_pause.operation)
	|| is_set(tx_pkts_good.operation)
	|| is_set(tx_pkts_over_sized.operation)
	|| is_set(tx_pkts_under_sized.operation)
	|| is_set(tx_total_bytes.operation);
}

std::string HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-statistics";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_bytes_good.is_set || is_set(rx_bytes_good.operation)) leaf_name_data.push_back(rx_bytes_good.get_name_leafdata());
    if (rx_error_jabbers.is_set || is_set(rx_error_jabbers.operation)) leaf_name_data.push_back(rx_error_jabbers.get_name_leafdata());
    if (rx_lldp_pkt.is_set || is_set(rx_lldp_pkt.operation)) leaf_name_data.push_back(rx_lldp_pkt.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.operation)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (rx_pause.is_set || is_set(rx_pause.operation)) leaf_name_data.push_back(rx_pause.get_name_leafdata());
    if (rx_pkt_drop.is_set || is_set(rx_pkt_drop.operation)) leaf_name_data.push_back(rx_pkt_drop.get_name_leafdata());
    if (rx_pkts1024_to1518_bytes.is_set || is_set(rx_pkts1024_to1518_bytes.operation)) leaf_name_data.push_back(rx_pkts1024_to1518_bytes.get_name_leafdata());
    if (rx_pkts128to255_bytes.is_set || is_set(rx_pkts128to255_bytes.operation)) leaf_name_data.push_back(rx_pkts128to255_bytes.get_name_leafdata());
    if (rx_pkts256_to511_bytes.is_set || is_set(rx_pkts256_to511_bytes.operation)) leaf_name_data.push_back(rx_pkts256_to511_bytes.get_name_leafdata());
    if (rx_pkts512_to1023_bytes.is_set || is_set(rx_pkts512_to1023_bytes.operation)) leaf_name_data.push_back(rx_pkts512_to1023_bytes.get_name_leafdata());
    if (rx_pkts64_bytes.is_set || is_set(rx_pkts64_bytes.operation)) leaf_name_data.push_back(rx_pkts64_bytes.get_name_leafdata());
    if (rx_pkts65_to127_bytes.is_set || is_set(rx_pkts65_to127_bytes.operation)) leaf_name_data.push_back(rx_pkts65_to127_bytes.get_name_leafdata());
    if (rx_pkts_bad_fcs.is_set || is_set(rx_pkts_bad_fcs.operation)) leaf_name_data.push_back(rx_pkts_bad_fcs.get_name_leafdata());
    if (rx_pkts_broadcast.is_set || is_set(rx_pkts_broadcast.operation)) leaf_name_data.push_back(rx_pkts_broadcast.get_name_leafdata());
    if (rx_pkts_good.is_set || is_set(rx_pkts_good.operation)) leaf_name_data.push_back(rx_pkts_good.get_name_leafdata());
    if (rx_pkts_multicast.is_set || is_set(rx_pkts_multicast.operation)) leaf_name_data.push_back(rx_pkts_multicast.get_name_leafdata());
    if (rx_pkts_over_sized.is_set || is_set(rx_pkts_over_sized.operation)) leaf_name_data.push_back(rx_pkts_over_sized.get_name_leafdata());
    if (rx_pkts_under_sized.is_set || is_set(rx_pkts_under_sized.operation)) leaf_name_data.push_back(rx_pkts_under_sized.get_name_leafdata());
    if (rx_pkts_unicast.is_set || is_set(rx_pkts_unicast.operation)) leaf_name_data.push_back(rx_pkts_unicast.get_name_leafdata());
    if (rx_recv_fragments.is_set || is_set(rx_recv_fragments.operation)) leaf_name_data.push_back(rx_recv_fragments.get_name_leafdata());
    if (rx_total_bytes.is_set || is_set(rx_total_bytes.operation)) leaf_name_data.push_back(rx_total_bytes.get_name_leafdata());
    if (tx_bad_fcs.is_set || is_set(tx_bad_fcs.operation)) leaf_name_data.push_back(tx_bad_fcs.get_name_leafdata());
    if (tx_bytes_good.is_set || is_set(tx_bytes_good.operation)) leaf_name_data.push_back(tx_bytes_good.get_name_leafdata());
    if (tx_fragments.is_set || is_set(tx_fragments.operation)) leaf_name_data.push_back(tx_fragments.get_name_leafdata());
    if (tx_jabber.is_set || is_set(tx_jabber.operation)) leaf_name_data.push_back(tx_jabber.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.operation)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (tx_pause.is_set || is_set(tx_pause.operation)) leaf_name_data.push_back(tx_pause.get_name_leafdata());
    if (tx_pkts_good.is_set || is_set(tx_pkts_good.operation)) leaf_name_data.push_back(tx_pkts_good.get_name_leafdata());
    if (tx_pkts_over_sized.is_set || is_set(tx_pkts_over_sized.operation)) leaf_name_data.push_back(tx_pkts_over_sized.get_name_leafdata());
    if (tx_pkts_under_sized.is_set || is_set(tx_pkts_under_sized.operation)) leaf_name_data.push_back(tx_pkts_under_sized.get_name_leafdata());
    if (tx_total_bytes.is_set || is_set(tx_total_bytes.operation)) leaf_name_data.push_back(tx_total_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::get_children()
{
    return children;
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-bytes-good")
    {
        rx_bytes_good = value;
    }
    if(value_path == "rx-error-jabbers")
    {
        rx_error_jabbers = value;
    }
    if(value_path == "rx-lldp-pkt")
    {
        rx_lldp_pkt = value;
    }
    if(value_path == "rx-packets")
    {
        rx_packets = value;
    }
    if(value_path == "rx-pause")
    {
        rx_pause = value;
    }
    if(value_path == "rx-pkt-drop")
    {
        rx_pkt_drop = value;
    }
    if(value_path == "rx-pkts1024-to1518-bytes")
    {
        rx_pkts1024_to1518_bytes = value;
    }
    if(value_path == "rx-pkts128to255-bytes")
    {
        rx_pkts128to255_bytes = value;
    }
    if(value_path == "rx-pkts256-to511-bytes")
    {
        rx_pkts256_to511_bytes = value;
    }
    if(value_path == "rx-pkts512-to1023-bytes")
    {
        rx_pkts512_to1023_bytes = value;
    }
    if(value_path == "rx-pkts64-bytes")
    {
        rx_pkts64_bytes = value;
    }
    if(value_path == "rx-pkts65-to127-bytes")
    {
        rx_pkts65_to127_bytes = value;
    }
    if(value_path == "rx-pkts-bad-fcs")
    {
        rx_pkts_bad_fcs = value;
    }
    if(value_path == "rx-pkts-broadcast")
    {
        rx_pkts_broadcast = value;
    }
    if(value_path == "rx-pkts-good")
    {
        rx_pkts_good = value;
    }
    if(value_path == "rx-pkts-multicast")
    {
        rx_pkts_multicast = value;
    }
    if(value_path == "rx-pkts-over-sized")
    {
        rx_pkts_over_sized = value;
    }
    if(value_path == "rx-pkts-under-sized")
    {
        rx_pkts_under_sized = value;
    }
    if(value_path == "rx-pkts-unicast")
    {
        rx_pkts_unicast = value;
    }
    if(value_path == "rx-recv-fragments")
    {
        rx_recv_fragments = value;
    }
    if(value_path == "rx-total-bytes")
    {
        rx_total_bytes = value;
    }
    if(value_path == "tx-bad-fcs")
    {
        tx_bad_fcs = value;
    }
    if(value_path == "tx-bytes-good")
    {
        tx_bytes_good = value;
    }
    if(value_path == "tx-fragments")
    {
        tx_fragments = value;
    }
    if(value_path == "tx-jabber")
    {
        tx_jabber = value;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
    }
    if(value_path == "tx-pause")
    {
        tx_pause = value;
    }
    if(value_path == "tx-pkts-good")
    {
        tx_pkts_good = value;
    }
    if(value_path == "tx-pkts-over-sized")
    {
        tx_pkts_over_sized = value;
    }
    if(value_path == "tx-pkts-under-sized")
    {
        tx_pkts_under_sized = value;
    }
    if(value_path == "tx-total-bytes")
    {
        tx_total_bytes = value;
    }
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::EthernetPortName()
    :
    	name{YType::str, "name"},
	 headless_end_time{YType::str, "headless-end-time"},
	 headless_start_time{YType::str, "headless-start-time"},
	 started_stateful{YType::boolean, "started-stateful"}
    	,
    ether_statistics(std::make_unique<HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics>())
{
    ether_statistics->parent = this;
    children["ether-statistics"] = ether_statistics.get();

    yang_name = "ethernet-port-name"; yang_parent_name = "ethernet-port-names";
}

HeadlessFuncData::EthernetPortNames::EthernetPortName::~EthernetPortName()
{
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::has_data() const
{
    return name.is_set
	|| headless_end_time.is_set
	|| headless_start_time.is_set
	|| started_stateful.is_set
	|| (ether_statistics !=  nullptr && ether_statistics->has_data());
}

bool HeadlessFuncData::EthernetPortNames::EthernetPortName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(headless_end_time.operation)
	|| is_set(headless_start_time.operation)
	|| is_set(started_stateful.operation)
	|| (ether_statistics !=  nullptr && is_set(ether_statistics->operation));
}

std::string HeadlessFuncData::EthernetPortNames::EthernetPortName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::EthernetPortNames::EthernetPortName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/ethernet-port-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (headless_end_time.is_set || is_set(headless_end_time.operation)) leaf_name_data.push_back(headless_end_time.get_name_leafdata());
    if (headless_start_time.is_set || is_set(headless_start_time.operation)) leaf_name_data.push_back(headless_start_time.get_name_leafdata());
    if (started_stateful.is_set || is_set(started_stateful.operation)) leaf_name_data.push_back(started_stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::EthernetPortNames::EthernetPortName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ether-statistics")
    {
        if(ether_statistics != nullptr)
        {
            children["ether-statistics"] = ether_statistics.get();
        }
        else
        {
            ether_statistics = std::make_unique<HeadlessFuncData::EthernetPortNames::EthernetPortName::EtherStatistics>();
            ether_statistics->parent = this;
            children["ether-statistics"] = ether_statistics.get();
        }
        return children.at("ether-statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::EthernetPortNames::EthernetPortName::get_children()
{
    if(children.find("ether-statistics") == children.end())
    {
        if(ether_statistics != nullptr)
        {
            children["ether-statistics"] = ether_statistics.get();
        }
    }

    return children;
}

void HeadlessFuncData::EthernetPortNames::EthernetPortName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "headless-end-time")
    {
        headless_end_time = value;
    }
    if(value_path == "headless-start-time")
    {
        headless_start_time = value;
    }
    if(value_path == "started-stateful")
    {
        started_stateful = value;
    }
}

HeadlessFuncData::EthernetPortNames::EthernetPortNames()
{
    yang_name = "ethernet-port-names"; yang_parent_name = "headless-func-data";
}

HeadlessFuncData::EthernetPortNames::~EthernetPortNames()
{
}

bool HeadlessFuncData::EthernetPortNames::has_data() const
{
    for (std::size_t index=0; index<ethernet_port_name.size(); index++)
    {
        if(ethernet_port_name[index]->has_data())
            return true;
    }
    return false;
}

bool HeadlessFuncData::EthernetPortNames::has_operation() const
{
    for (std::size_t index=0; index<ethernet_port_name.size(); index++)
    {
        if(ethernet_port_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HeadlessFuncData::EthernetPortNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-names";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::EthernetPortNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::EthernetPortNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-port-name")
    {
        for(auto const & c : ethernet_port_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HeadlessFuncData::EthernetPortNames::EthernetPortName>();
        c->parent = this;
        ethernet_port_name.push_back(std::move(c));
        children[segment_path] = ethernet_port_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::EthernetPortNames::get_children()
{
    for (auto const & c : ethernet_port_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HeadlessFuncData::EthernetPortNames::set_value(const std::string & value_path, std::string value)
{
}

HeadlessFuncData::HeadlessFuncData()
    :
    ethernet_port_names(std::make_unique<HeadlessFuncData::EthernetPortNames>())
	,otn_port_names(std::make_unique<HeadlessFuncData::OtnPortNames>())
{
    ethernet_port_names->parent = this;
    children["ethernet-port-names"] = ethernet_port_names.get();

    otn_port_names->parent = this;
    children["otn-port-names"] = otn_port_names.get();

    yang_name = "headless-func-data"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-headless-oper";
}

HeadlessFuncData::~HeadlessFuncData()
{
}

bool HeadlessFuncData::has_data() const
{
    return (ethernet_port_names !=  nullptr && ethernet_port_names->has_data())
	|| (otn_port_names !=  nullptr && otn_port_names->has_data());
}

bool HeadlessFuncData::has_operation() const
{
    return is_set(operation)
	|| (ethernet_port_names !=  nullptr && is_set(ethernet_port_names->operation))
	|| (otn_port_names !=  nullptr && is_set(otn_port_names->operation));
}

std::string HeadlessFuncData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data";

    return path_buffer.str();

}

EntityPath HeadlessFuncData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HeadlessFuncData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-port-names")
    {
        if(ethernet_port_names != nullptr)
        {
            children["ethernet-port-names"] = ethernet_port_names.get();
        }
        else
        {
            ethernet_port_names = std::make_unique<HeadlessFuncData::EthernetPortNames>();
            ethernet_port_names->parent = this;
            children["ethernet-port-names"] = ethernet_port_names.get();
        }
        return children.at("ethernet-port-names");
    }

    if(child_yang_name == "otn-port-names")
    {
        if(otn_port_names != nullptr)
        {
            children["otn-port-names"] = otn_port_names.get();
        }
        else
        {
            otn_port_names = std::make_unique<HeadlessFuncData::OtnPortNames>();
            otn_port_names->parent = this;
            children["otn-port-names"] = otn_port_names.get();
        }
        return children.at("otn-port-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HeadlessFuncData::get_children()
{
    if(children.find("ethernet-port-names") == children.end())
    {
        if(ethernet_port_names != nullptr)
        {
            children["ethernet-port-names"] = ethernet_port_names.get();
        }
    }

    if(children.find("otn-port-names") == children.end())
    {
        if(otn_port_names != nullptr)
        {
            children["otn-port-names"] = otn_port_names.get();
        }
    }

    return children;
}

void HeadlessFuncData::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HeadlessFuncData::clone_ptr()
{
    return std::make_unique<HeadlessFuncData>();
}


}
}

