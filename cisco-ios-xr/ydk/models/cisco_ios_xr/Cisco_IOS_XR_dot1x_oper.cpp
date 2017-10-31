
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dot1x_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dot1x_oper {

Dot1X::Dot1X()
    :
    statistics(std::make_shared<Dot1X::Statistics>())
	,nodes(std::make_shared<Dot1X::Nodes>())
	,session(std::make_shared<Dot1X::Session>())
{
    statistics->parent = this;
    nodes->parent = this;
    session->parent = this;

    yang_name = "dot1x"; yang_parent_name = "Cisco-IOS-XR-dot1x-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Dot1X::~Dot1X()
{
}

bool Dot1X::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dot1X::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Dot1X::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Dot1X::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dot1X::clone_ptr() const
{
    return std::make_shared<Dot1X>();
}

std::string Dot1X::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dot1X::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dot1X::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dot1X::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "nodes" || name == "session")
        return true;
    return false;
}

Dot1X::Statistics::Statistics()
    :
    interface_statistics(std::make_shared<Dot1X::Statistics::InterfaceStatistics>())
{
    interface_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Statistics::~Statistics()
{
}

bool Dot1X::Statistics::has_data() const
{
    return (interface_statistics !=  nullptr && interface_statistics->has_data());
}

bool Dot1X::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation());
}

std::string Dot1X::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Dot1X::Statistics::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    return children;
}

void Dot1X::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistics")
        return true;
    return false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistics()
{

    yang_name = "interface-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Statistics::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Dot1X::Statistics::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Dot1X::Statistics::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dot1X::Statistics::InterfaceStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Statistics::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Statistics::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Statistics::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Statistics::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    name{YType::str, "name"},
    interface_name{YType::str, "interface-name"},
    pae{YType::str, "pae"}
    	,
    idb(std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb>())
	,auth(std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth>())
	,supp(std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp>())
{
    idb->parent = this;
    auth->parent = this;
    supp->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return name.is_set
	|| interface_name.is_set
	|| pae.is_set
	|| (idb !=  nullptr && idb->has_data())
	|| (auth !=  nullptr && auth->has_data())
	|| (supp !=  nullptr && supp->has_data());
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (idb !=  nullptr && idb->has_operation())
	|| (auth !=  nullptr && auth->has_operation())
	|| (supp !=  nullptr && supp->has_operation());
}

std::string Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/statistics/interface-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idb")
    {
        if(idb == nullptr)
        {
            idb = std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb>();
        }
        return idb;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth>();
        }
        return auth;
    }

    if(child_yang_name == "supp")
    {
        if(supp == nullptr)
        {
            supp = std::make_shared<Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp>();
        }
        return supp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idb != nullptr)
    {
        children["idb"] = idb;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    if(supp != nullptr)
    {
        children["supp"] = supp;
    }

    return children;
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb" || name == "auth" || name == "supp" || name == "name" || name == "interface-name" || name == "pae")
        return true;
    return false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::Idb()
    :
    rx_total{YType::uint32, "rx-total"},
    tx_total{YType::uint32, "tx-total"},
    no_rx_on_intf_down{YType::uint32, "no-rx-on-intf-down"}
{

    yang_name = "idb"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::~Idb()
{
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::has_data() const
{
    return rx_total.is_set
	|| tx_total.is_set
	|| no_rx_on_intf_down.is_set;
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_total.yfilter)
	|| ydk::is_set(no_rx_on_intf_down.yfilter);
}

std::string Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());
    if (no_rx_on_intf_down.is_set || is_set(no_rx_on_intf_down.yfilter)) leaf_name_data.push_back(no_rx_on_intf_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-rx-on-intf-down")
    {
        no_rx_on_intf_down = value;
        no_rx_on_intf_down.value_namespace = name_space;
        no_rx_on_intf_down.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
    if(value_path == "no-rx-on-intf-down")
    {
        no_rx_on_intf_down.yfilter = yfilter;
    }
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-total" || name == "tx-total" || name == "no-rx-on-intf-down")
        return true;
    return false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::Auth()
    :
    rx_start{YType::uint32, "rx-start"},
    rx_logoff{YType::uint32, "rx-logoff"},
    rx_resp{YType::uint32, "rx-resp"},
    rx_resp_id{YType::uint32, "rx-resp-id"},
    rx_invalid{YType::uint32, "rx-invalid"},
    rx_len_err{YType::uint32, "rx-len-err"},
    rx_my_mac_err{YType::uint32, "rx-my-mac-err"},
    rx_total{YType::uint32, "rx-total"},
    tx_req{YType::uint32, "tx-req"},
    tx_reqid{YType::uint32, "tx-reqid"},
    tx_total{YType::uint32, "tx-total"}
{

    yang_name = "auth"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::~Auth()
{
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::has_data() const
{
    return rx_start.is_set
	|| rx_logoff.is_set
	|| rx_resp.is_set
	|| rx_resp_id.is_set
	|| rx_invalid.is_set
	|| rx_len_err.is_set
	|| rx_my_mac_err.is_set
	|| rx_total.is_set
	|| tx_req.is_set
	|| tx_reqid.is_set
	|| tx_total.is_set;
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_start.yfilter)
	|| ydk::is_set(rx_logoff.yfilter)
	|| ydk::is_set(rx_resp.yfilter)
	|| ydk::is_set(rx_resp_id.yfilter)
	|| ydk::is_set(rx_invalid.yfilter)
	|| ydk::is_set(rx_len_err.yfilter)
	|| ydk::is_set(rx_my_mac_err.yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_req.yfilter)
	|| ydk::is_set(tx_reqid.yfilter)
	|| ydk::is_set(tx_total.yfilter);
}

std::string Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_start.is_set || is_set(rx_start.yfilter)) leaf_name_data.push_back(rx_start.get_name_leafdata());
    if (rx_logoff.is_set || is_set(rx_logoff.yfilter)) leaf_name_data.push_back(rx_logoff.get_name_leafdata());
    if (rx_resp.is_set || is_set(rx_resp.yfilter)) leaf_name_data.push_back(rx_resp.get_name_leafdata());
    if (rx_resp_id.is_set || is_set(rx_resp_id.yfilter)) leaf_name_data.push_back(rx_resp_id.get_name_leafdata());
    if (rx_invalid.is_set || is_set(rx_invalid.yfilter)) leaf_name_data.push_back(rx_invalid.get_name_leafdata());
    if (rx_len_err.is_set || is_set(rx_len_err.yfilter)) leaf_name_data.push_back(rx_len_err.get_name_leafdata());
    if (rx_my_mac_err.is_set || is_set(rx_my_mac_err.yfilter)) leaf_name_data.push_back(rx_my_mac_err.get_name_leafdata());
    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_req.is_set || is_set(tx_req.yfilter)) leaf_name_data.push_back(tx_req.get_name_leafdata());
    if (tx_reqid.is_set || is_set(tx_reqid.yfilter)) leaf_name_data.push_back(tx_reqid.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-start")
    {
        rx_start = value;
        rx_start.value_namespace = name_space;
        rx_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-logoff")
    {
        rx_logoff = value;
        rx_logoff.value_namespace = name_space;
        rx_logoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resp")
    {
        rx_resp = value;
        rx_resp.value_namespace = name_space;
        rx_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resp-id")
    {
        rx_resp_id = value;
        rx_resp_id.value_namespace = name_space;
        rx_resp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid = value;
        rx_invalid.value_namespace = name_space;
        rx_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err = value;
        rx_len_err.value_namespace = name_space;
        rx_len_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err = value;
        rx_my_mac_err.value_namespace = name_space;
        rx_my_mac_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-req")
    {
        tx_req = value;
        tx_req.value_namespace = name_space;
        tx_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-reqid")
    {
        tx_reqid = value;
        tx_reqid.value_namespace = name_space;
        tx_reqid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-start")
    {
        rx_start.yfilter = yfilter;
    }
    if(value_path == "rx-logoff")
    {
        rx_logoff.yfilter = yfilter;
    }
    if(value_path == "rx-resp")
    {
        rx_resp.yfilter = yfilter;
    }
    if(value_path == "rx-resp-id")
    {
        rx_resp_id.yfilter = yfilter;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid.yfilter = yfilter;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err.yfilter = yfilter;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err.yfilter = yfilter;
    }
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-req")
    {
        tx_req.yfilter = yfilter;
    }
    if(value_path == "tx-reqid")
    {
        tx_reqid.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-start" || name == "rx-logoff" || name == "rx-resp" || name == "rx-resp-id" || name == "rx-invalid" || name == "rx-len-err" || name == "rx-my-mac-err" || name == "rx-total" || name == "tx-req" || name == "tx-reqid" || name == "tx-total")
        return true;
    return false;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::Supp()
    :
    rx_req{YType::uint32, "rx-req"},
    rx_invalid{YType::uint32, "rx-invalid"},
    rx_len_err{YType::uint32, "rx-len-err"},
    rx_my_mac_err{YType::uint32, "rx-my-mac-err"},
    rx_total{YType::uint32, "rx-total"},
    tx_start{YType::uint32, "tx-start"},
    tx_logoff{YType::uint32, "tx-logoff"},
    tx_resp{YType::uint32, "tx-resp"},
    tx_total{YType::uint32, "tx-total"}
{

    yang_name = "supp"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::~Supp()
{
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::has_data() const
{
    return rx_req.is_set
	|| rx_invalid.is_set
	|| rx_len_err.is_set
	|| rx_my_mac_err.is_set
	|| rx_total.is_set
	|| tx_start.is_set
	|| tx_logoff.is_set
	|| tx_resp.is_set
	|| tx_total.is_set;
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_req.yfilter)
	|| ydk::is_set(rx_invalid.yfilter)
	|| ydk::is_set(rx_len_err.yfilter)
	|| ydk::is_set(rx_my_mac_err.yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_start.yfilter)
	|| ydk::is_set(tx_logoff.yfilter)
	|| ydk::is_set(tx_resp.yfilter)
	|| ydk::is_set(tx_total.yfilter);
}

std::string Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_req.is_set || is_set(rx_req.yfilter)) leaf_name_data.push_back(rx_req.get_name_leafdata());
    if (rx_invalid.is_set || is_set(rx_invalid.yfilter)) leaf_name_data.push_back(rx_invalid.get_name_leafdata());
    if (rx_len_err.is_set || is_set(rx_len_err.yfilter)) leaf_name_data.push_back(rx_len_err.get_name_leafdata());
    if (rx_my_mac_err.is_set || is_set(rx_my_mac_err.yfilter)) leaf_name_data.push_back(rx_my_mac_err.get_name_leafdata());
    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_start.is_set || is_set(tx_start.yfilter)) leaf_name_data.push_back(tx_start.get_name_leafdata());
    if (tx_logoff.is_set || is_set(tx_logoff.yfilter)) leaf_name_data.push_back(tx_logoff.get_name_leafdata());
    if (tx_resp.is_set || is_set(tx_resp.yfilter)) leaf_name_data.push_back(tx_resp.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-req")
    {
        rx_req = value;
        rx_req.value_namespace = name_space;
        rx_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid = value;
        rx_invalid.value_namespace = name_space;
        rx_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err = value;
        rx_len_err.value_namespace = name_space;
        rx_len_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err = value;
        rx_my_mac_err.value_namespace = name_space;
        rx_my_mac_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-start")
    {
        tx_start = value;
        tx_start.value_namespace = name_space;
        tx_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-logoff")
    {
        tx_logoff = value;
        tx_logoff.value_namespace = name_space;
        tx_logoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resp")
    {
        tx_resp = value;
        tx_resp.value_namespace = name_space;
        tx_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-req")
    {
        rx_req.yfilter = yfilter;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid.yfilter = yfilter;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err.yfilter = yfilter;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err.yfilter = yfilter;
    }
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-start")
    {
        tx_start.yfilter = yfilter;
    }
    if(value_path == "tx-logoff")
    {
        tx_logoff.yfilter = yfilter;
    }
    if(value_path == "tx-resp")
    {
        tx_resp.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
}

bool Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-req" || name == "rx-invalid" || name == "rx-len-err" || name == "rx-my-mac-err" || name == "rx-total" || name == "tx-start" || name == "tx-logoff" || name == "tx-resp" || name == "tx-total")
        return true;
    return false;
}

Dot1X::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Nodes::~Nodes()
{
}

bool Dot1X::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dot1X::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dot1X::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Dot1X::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    dot1x_defaults(std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults>())
	,statistics(std::make_shared<Dot1X::Nodes::Node::Statistics>())
{
    dot1x_defaults->parent = this;
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Nodes::Node::~Node()
{
}

bool Dot1X::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (dot1x_defaults !=  nullptr && dot1x_defaults->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dot1X::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (dot1x_defaults !=  nullptr && dot1x_defaults->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dot1X::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x-defaults")
    {
        if(dot1x_defaults == nullptr)
        {
            dot1x_defaults = std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults>();
        }
        return dot1x_defaults;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dot1X::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1x_defaults != nullptr)
    {
        children["dot1x-defaults"] = dot1x_defaults;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dot1X::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-defaults" || name == "statistics" || name == "node-name")
        return true;
    return false;
}

Dot1X::Nodes::Node::Dot1XDefaults::Dot1XDefaults()
    :
    version{YType::uint32, "version"}
    	,
    auth_timers(std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers>())
	,supp_timers(std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers>())
{
    auth_timers->parent = this;
    supp_timers->parent = this;

    yang_name = "dot1x-defaults"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Dot1XDefaults::~Dot1XDefaults()
{
}

bool Dot1X::Nodes::Node::Dot1XDefaults::has_data() const
{
    return version.is_set
	|| (auth_timers !=  nullptr && auth_timers->has_data())
	|| (supp_timers !=  nullptr && supp_timers->has_data());
}

bool Dot1X::Nodes::Node::Dot1XDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (auth_timers !=  nullptr && auth_timers->has_operation())
	|| (supp_timers !=  nullptr && supp_timers->has_operation());
}

std::string Dot1X::Nodes::Node::Dot1XDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Dot1XDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Dot1XDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-timers")
    {
        if(auth_timers == nullptr)
        {
            auth_timers = std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers>();
        }
        return auth_timers;
    }

    if(child_yang_name == "supp-timers")
    {
        if(supp_timers == nullptr)
        {
            supp_timers = std::make_shared<Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers>();
        }
        return supp_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Dot1XDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_timers != nullptr)
    {
        children["auth-timers"] = auth_timers;
    }

    if(supp_timers != nullptr)
    {
        children["supp-timers"] = supp_timers;
    }

    return children;
}

void Dot1X::Nodes::Node::Dot1XDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Dot1XDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Dot1XDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-timers" || name == "supp-timers" || name == "version")
        return true;
    return false;
}

Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::AuthTimers()
    :
    quiet_period{YType::uint32, "quiet-period"},
    tx_period{YType::uint32, "tx-period"},
    max_reauth_req{YType::uint32, "max-reauth-req"},
    supp_timeout{YType::uint32, "supp-timeout"},
    max_req{YType::uint32, "max-req"},
    reauth_period{YType::uint32, "reauth-period"}
{

    yang_name = "auth-timers"; yang_parent_name = "dot1x-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::~AuthTimers()
{
}

bool Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::has_data() const
{
    return quiet_period.is_set
	|| tx_period.is_set
	|| max_reauth_req.is_set
	|| supp_timeout.is_set
	|| max_req.is_set
	|| reauth_period.is_set;
}

bool Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quiet_period.yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| ydk::is_set(max_reauth_req.yfilter)
	|| ydk::is_set(supp_timeout.yfilter)
	|| ydk::is_set(max_req.yfilter)
	|| ydk::is_set(reauth_period.yfilter);
}

std::string Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quiet_period.is_set || is_set(quiet_period.yfilter)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.yfilter)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (reauth_period.is_set || is_set(reauth_period.yfilter)) leaf_name_data.push_back(reauth_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quiet-period")
    {
        quiet_period = value;
        quiet_period.value_namespace = name_space;
        quiet_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
        max_reauth_req.value_namespace = name_space;
        max_reauth_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
        supp_timeout.value_namespace = name_space;
        supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req")
    {
        max_req = value;
        max_req.value_namespace = name_space;
        max_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-period")
    {
        reauth_period = value;
        reauth_period.value_namespace = name_space;
        reauth_period.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quiet-period")
    {
        quiet_period.yfilter = yfilter;
    }
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req.yfilter = yfilter;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout.yfilter = yfilter;
    }
    if(value_path == "max-req")
    {
        max_req.yfilter = yfilter;
    }
    if(value_path == "reauth-period")
    {
        reauth_period.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quiet-period" || name == "tx-period" || name == "max-reauth-req" || name == "supp-timeout" || name == "max-req" || name == "reauth-period")
        return true;
    return false;
}

Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::SuppTimers()
    :
    auth_period{YType::uint32, "auth-period"},
    held_period{YType::uint32, "held-period"},
    start_period{YType::uint32, "start-period"},
    max_start{YType::uint32, "max-start"}
{

    yang_name = "supp-timers"; yang_parent_name = "dot1x-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::~SuppTimers()
{
}

bool Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::has_data() const
{
    return auth_period.is_set
	|| held_period.is_set
	|| start_period.is_set
	|| max_start.is_set;
}

bool Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_period.yfilter)
	|| ydk::is_set(held_period.yfilter)
	|| ydk::is_set(start_period.yfilter)
	|| ydk::is_set(max_start.yfilter);
}

std::string Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supp-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_period.is_set || is_set(auth_period.yfilter)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.yfilter)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.yfilter)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
        auth_period.value_namespace = name_space;
        auth_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-period")
    {
        held_period = value;
        held_period.value_namespace = name_space;
        held_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-period")
    {
        start_period = value;
        start_period.value_namespace = name_space;
        start_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-start")
    {
        max_start = value;
        max_start.value_namespace = name_space;
        max_start.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-period")
    {
        auth_period.yfilter = yfilter;
    }
    if(value_path == "held-period")
    {
        held_period.yfilter = yfilter;
    }
    if(value_path == "start-period")
    {
        start_period.yfilter = yfilter;
    }
    if(value_path == "max-start")
    {
        max_start.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "start-period" || name == "max-start")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::Statistics()
    :
    gl_stats(std::make_shared<Dot1X::Nodes::Node::Statistics::GlStats>())
{
    gl_stats->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::~Statistics()
{
}

bool Dot1X::Nodes::Node::Statistics::has_data() const
{
    for (std::size_t index=0; index<if_stats.size(); index++)
    {
        if(if_stats[index]->has_data())
            return true;
    }
    return (gl_stats !=  nullptr && gl_stats->has_data());
}

bool Dot1X::Nodes::Node::Statistics::has_operation() const
{
    for (std::size_t index=0; index<if_stats.size(); index++)
    {
        if(if_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gl_stats !=  nullptr && gl_stats->has_operation());
}

std::string Dot1X::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gl-stats")
    {
        if(gl_stats == nullptr)
        {
            gl_stats = std::make_shared<Dot1X::Nodes::Node::Statistics::GlStats>();
        }
        return gl_stats;
    }

    if(child_yang_name == "if-stats")
    {
        for(auto const & c : if_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats>();
        c->parent = this;
        if_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gl_stats != nullptr)
    {
        children["gl-stats"] = gl_stats;
    }

    for (auto const & c : if_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gl-stats" || name == "if-stats")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::GlStats::GlStats()
    :
    tx_total{YType::uint32, "tx-total"},
    rx_total{YType::uint32, "rx-total"},
    rx_no_idb{YType::uint32, "rx-no-idb"}
{

    yang_name = "gl-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::GlStats::~GlStats()
{
}

bool Dot1X::Nodes::Node::Statistics::GlStats::has_data() const
{
    return tx_total.is_set
	|| rx_total.is_set
	|| rx_no_idb.is_set;
}

bool Dot1X::Nodes::Node::Statistics::GlStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_total.yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(rx_no_idb.yfilter);
}

std::string Dot1X::Nodes::Node::Statistics::GlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::GlStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());
    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (rx_no_idb.is_set || is_set(rx_no_idb.yfilter)) leaf_name_data.push_back(rx_no_idb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::GlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::GlStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Statistics::GlStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-no-idb")
    {
        rx_no_idb = value;
        rx_no_idb.value_namespace = name_space;
        rx_no_idb.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Statistics::GlStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "rx-no-idb")
    {
        rx_no_idb.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Statistics::GlStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-total" || name == "rx-total" || name == "rx-no-idb")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::IfStats::IfStats()
    :
    interface_name{YType::str, "interface-name"},
    pae{YType::str, "pae"}
    	,
    idb(std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Idb>())
	,auth(std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Auth>())
	,supp(std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Supp>())
{
    idb->parent = this;
    auth->parent = this;
    supp->parent = this;

    yang_name = "if-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::IfStats::~IfStats()
{
}

bool Dot1X::Nodes::Node::Statistics::IfStats::has_data() const
{
    return interface_name.is_set
	|| pae.is_set
	|| (idb !=  nullptr && idb->has_data())
	|| (auth !=  nullptr && auth->has_data())
	|| (supp !=  nullptr && supp->has_data());
}

bool Dot1X::Nodes::Node::Statistics::IfStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (idb !=  nullptr && idb->has_operation())
	|| (auth !=  nullptr && auth->has_operation())
	|| (supp !=  nullptr && supp->has_operation());
}

std::string Dot1X::Nodes::Node::Statistics::IfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::IfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::IfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idb")
    {
        if(idb == nullptr)
        {
            idb = std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Idb>();
        }
        return idb;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Auth>();
        }
        return auth;
    }

    if(child_yang_name == "supp")
    {
        if(supp == nullptr)
        {
            supp = std::make_shared<Dot1X::Nodes::Node::Statistics::IfStats::Supp>();
        }
        return supp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::IfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idb != nullptr)
    {
        children["idb"] = idb;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    if(supp != nullptr)
    {
        children["supp"] = supp;
    }

    return children;
}

void Dot1X::Nodes::Node::Statistics::IfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Statistics::IfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Statistics::IfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb" || name == "auth" || name == "supp" || name == "interface-name" || name == "pae")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::IfStats::Idb::Idb()
    :
    rx_total{YType::uint32, "rx-total"},
    tx_total{YType::uint32, "tx-total"},
    no_rx_on_intf_down{YType::uint32, "no-rx-on-intf-down"}
{

    yang_name = "idb"; yang_parent_name = "if-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::IfStats::Idb::~Idb()
{
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Idb::has_data() const
{
    return rx_total.is_set
	|| tx_total.is_set
	|| no_rx_on_intf_down.is_set;
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Idb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_total.yfilter)
	|| ydk::is_set(no_rx_on_intf_down.yfilter);
}

std::string Dot1X::Nodes::Node::Statistics::IfStats::Idb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::IfStats::Idb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());
    if (no_rx_on_intf_down.is_set || is_set(no_rx_on_intf_down.yfilter)) leaf_name_data.push_back(no_rx_on_intf_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::IfStats::Idb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::IfStats::Idb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Statistics::IfStats::Idb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-rx-on-intf-down")
    {
        no_rx_on_intf_down = value;
        no_rx_on_intf_down.value_namespace = name_space;
        no_rx_on_intf_down.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Statistics::IfStats::Idb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
    if(value_path == "no-rx-on-intf-down")
    {
        no_rx_on_intf_down.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Idb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-total" || name == "tx-total" || name == "no-rx-on-intf-down")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::IfStats::Auth::Auth()
    :
    rx_start{YType::uint32, "rx-start"},
    rx_logoff{YType::uint32, "rx-logoff"},
    rx_resp{YType::uint32, "rx-resp"},
    rx_resp_id{YType::uint32, "rx-resp-id"},
    rx_invalid{YType::uint32, "rx-invalid"},
    rx_len_err{YType::uint32, "rx-len-err"},
    rx_my_mac_err{YType::uint32, "rx-my-mac-err"},
    rx_total{YType::uint32, "rx-total"},
    tx_req{YType::uint32, "tx-req"},
    tx_reqid{YType::uint32, "tx-reqid"},
    tx_total{YType::uint32, "tx-total"}
{

    yang_name = "auth"; yang_parent_name = "if-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::IfStats::Auth::~Auth()
{
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Auth::has_data() const
{
    return rx_start.is_set
	|| rx_logoff.is_set
	|| rx_resp.is_set
	|| rx_resp_id.is_set
	|| rx_invalid.is_set
	|| rx_len_err.is_set
	|| rx_my_mac_err.is_set
	|| rx_total.is_set
	|| tx_req.is_set
	|| tx_reqid.is_set
	|| tx_total.is_set;
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_start.yfilter)
	|| ydk::is_set(rx_logoff.yfilter)
	|| ydk::is_set(rx_resp.yfilter)
	|| ydk::is_set(rx_resp_id.yfilter)
	|| ydk::is_set(rx_invalid.yfilter)
	|| ydk::is_set(rx_len_err.yfilter)
	|| ydk::is_set(rx_my_mac_err.yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_req.yfilter)
	|| ydk::is_set(tx_reqid.yfilter)
	|| ydk::is_set(tx_total.yfilter);
}

std::string Dot1X::Nodes::Node::Statistics::IfStats::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::IfStats::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_start.is_set || is_set(rx_start.yfilter)) leaf_name_data.push_back(rx_start.get_name_leafdata());
    if (rx_logoff.is_set || is_set(rx_logoff.yfilter)) leaf_name_data.push_back(rx_logoff.get_name_leafdata());
    if (rx_resp.is_set || is_set(rx_resp.yfilter)) leaf_name_data.push_back(rx_resp.get_name_leafdata());
    if (rx_resp_id.is_set || is_set(rx_resp_id.yfilter)) leaf_name_data.push_back(rx_resp_id.get_name_leafdata());
    if (rx_invalid.is_set || is_set(rx_invalid.yfilter)) leaf_name_data.push_back(rx_invalid.get_name_leafdata());
    if (rx_len_err.is_set || is_set(rx_len_err.yfilter)) leaf_name_data.push_back(rx_len_err.get_name_leafdata());
    if (rx_my_mac_err.is_set || is_set(rx_my_mac_err.yfilter)) leaf_name_data.push_back(rx_my_mac_err.get_name_leafdata());
    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_req.is_set || is_set(tx_req.yfilter)) leaf_name_data.push_back(tx_req.get_name_leafdata());
    if (tx_reqid.is_set || is_set(tx_reqid.yfilter)) leaf_name_data.push_back(tx_reqid.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::IfStats::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::IfStats::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Statistics::IfStats::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-start")
    {
        rx_start = value;
        rx_start.value_namespace = name_space;
        rx_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-logoff")
    {
        rx_logoff = value;
        rx_logoff.value_namespace = name_space;
        rx_logoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resp")
    {
        rx_resp = value;
        rx_resp.value_namespace = name_space;
        rx_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resp-id")
    {
        rx_resp_id = value;
        rx_resp_id.value_namespace = name_space;
        rx_resp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid = value;
        rx_invalid.value_namespace = name_space;
        rx_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err = value;
        rx_len_err.value_namespace = name_space;
        rx_len_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err = value;
        rx_my_mac_err.value_namespace = name_space;
        rx_my_mac_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-req")
    {
        tx_req = value;
        tx_req.value_namespace = name_space;
        tx_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-reqid")
    {
        tx_reqid = value;
        tx_reqid.value_namespace = name_space;
        tx_reqid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Statistics::IfStats::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-start")
    {
        rx_start.yfilter = yfilter;
    }
    if(value_path == "rx-logoff")
    {
        rx_logoff.yfilter = yfilter;
    }
    if(value_path == "rx-resp")
    {
        rx_resp.yfilter = yfilter;
    }
    if(value_path == "rx-resp-id")
    {
        rx_resp_id.yfilter = yfilter;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid.yfilter = yfilter;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err.yfilter = yfilter;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err.yfilter = yfilter;
    }
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-req")
    {
        tx_req.yfilter = yfilter;
    }
    if(value_path == "tx-reqid")
    {
        tx_reqid.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-start" || name == "rx-logoff" || name == "rx-resp" || name == "rx-resp-id" || name == "rx-invalid" || name == "rx-len-err" || name == "rx-my-mac-err" || name == "rx-total" || name == "tx-req" || name == "tx-reqid" || name == "tx-total")
        return true;
    return false;
}

Dot1X::Nodes::Node::Statistics::IfStats::Supp::Supp()
    :
    rx_req{YType::uint32, "rx-req"},
    rx_invalid{YType::uint32, "rx-invalid"},
    rx_len_err{YType::uint32, "rx-len-err"},
    rx_my_mac_err{YType::uint32, "rx-my-mac-err"},
    rx_total{YType::uint32, "rx-total"},
    tx_start{YType::uint32, "tx-start"},
    tx_logoff{YType::uint32, "tx-logoff"},
    tx_resp{YType::uint32, "tx-resp"},
    tx_total{YType::uint32, "tx-total"}
{

    yang_name = "supp"; yang_parent_name = "if-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Nodes::Node::Statistics::IfStats::Supp::~Supp()
{
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Supp::has_data() const
{
    return rx_req.is_set
	|| rx_invalid.is_set
	|| rx_len_err.is_set
	|| rx_my_mac_err.is_set
	|| rx_total.is_set
	|| tx_start.is_set
	|| tx_logoff.is_set
	|| tx_resp.is_set
	|| tx_total.is_set;
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Supp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_req.yfilter)
	|| ydk::is_set(rx_invalid.yfilter)
	|| ydk::is_set(rx_len_err.yfilter)
	|| ydk::is_set(rx_my_mac_err.yfilter)
	|| ydk::is_set(rx_total.yfilter)
	|| ydk::is_set(tx_start.yfilter)
	|| ydk::is_set(tx_logoff.yfilter)
	|| ydk::is_set(tx_resp.yfilter)
	|| ydk::is_set(tx_total.yfilter);
}

std::string Dot1X::Nodes::Node::Statistics::IfStats::Supp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Nodes::Node::Statistics::IfStats::Supp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_req.is_set || is_set(rx_req.yfilter)) leaf_name_data.push_back(rx_req.get_name_leafdata());
    if (rx_invalid.is_set || is_set(rx_invalid.yfilter)) leaf_name_data.push_back(rx_invalid.get_name_leafdata());
    if (rx_len_err.is_set || is_set(rx_len_err.yfilter)) leaf_name_data.push_back(rx_len_err.get_name_leafdata());
    if (rx_my_mac_err.is_set || is_set(rx_my_mac_err.yfilter)) leaf_name_data.push_back(rx_my_mac_err.get_name_leafdata());
    if (rx_total.is_set || is_set(rx_total.yfilter)) leaf_name_data.push_back(rx_total.get_name_leafdata());
    if (tx_start.is_set || is_set(tx_start.yfilter)) leaf_name_data.push_back(tx_start.get_name_leafdata());
    if (tx_logoff.is_set || is_set(tx_logoff.yfilter)) leaf_name_data.push_back(tx_logoff.get_name_leafdata());
    if (tx_resp.is_set || is_set(tx_resp.yfilter)) leaf_name_data.push_back(tx_resp.get_name_leafdata());
    if (tx_total.is_set || is_set(tx_total.yfilter)) leaf_name_data.push_back(tx_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Nodes::Node::Statistics::IfStats::Supp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Nodes::Node::Statistics::IfStats::Supp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Nodes::Node::Statistics::IfStats::Supp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-req")
    {
        rx_req = value;
        rx_req.value_namespace = name_space;
        rx_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid = value;
        rx_invalid.value_namespace = name_space;
        rx_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err = value;
        rx_len_err.value_namespace = name_space;
        rx_len_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err = value;
        rx_my_mac_err.value_namespace = name_space;
        rx_my_mac_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-total")
    {
        rx_total = value;
        rx_total.value_namespace = name_space;
        rx_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-start")
    {
        tx_start = value;
        tx_start.value_namespace = name_space;
        tx_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-logoff")
    {
        tx_logoff = value;
        tx_logoff.value_namespace = name_space;
        tx_logoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resp")
    {
        tx_resp = value;
        tx_resp.value_namespace = name_space;
        tx_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-total")
    {
        tx_total = value;
        tx_total.value_namespace = name_space;
        tx_total.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Nodes::Node::Statistics::IfStats::Supp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-req")
    {
        rx_req.yfilter = yfilter;
    }
    if(value_path == "rx-invalid")
    {
        rx_invalid.yfilter = yfilter;
    }
    if(value_path == "rx-len-err")
    {
        rx_len_err.yfilter = yfilter;
    }
    if(value_path == "rx-my-mac-err")
    {
        rx_my_mac_err.yfilter = yfilter;
    }
    if(value_path == "rx-total")
    {
        rx_total.yfilter = yfilter;
    }
    if(value_path == "tx-start")
    {
        tx_start.yfilter = yfilter;
    }
    if(value_path == "tx-logoff")
    {
        tx_logoff.yfilter = yfilter;
    }
    if(value_path == "tx-resp")
    {
        tx_resp.yfilter = yfilter;
    }
    if(value_path == "tx-total")
    {
        tx_total.yfilter = yfilter;
    }
}

bool Dot1X::Nodes::Node::Statistics::IfStats::Supp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-req" || name == "rx-invalid" || name == "rx-len-err" || name == "rx-my-mac-err" || name == "rx-total" || name == "tx-start" || name == "tx-logoff" || name == "tx-resp" || name == "tx-total")
        return true;
    return false;
}

Dot1X::Session::Session()
    :
    interface_sessions(std::make_shared<Dot1X::Session::InterfaceSessions>())
{
    interface_sessions->parent = this;

    yang_name = "session"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Session::~Session()
{
}

bool Dot1X::Session::has_data() const
{
    return (interface_sessions !=  nullptr && interface_sessions->has_data());
}

bool Dot1X::Session::has_operation() const
{
    return is_set(yfilter)
	|| (interface_sessions !=  nullptr && interface_sessions->has_operation());
}

std::string Dot1X::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-sessions")
    {
        if(interface_sessions == nullptr)
        {
            interface_sessions = std::make_shared<Dot1X::Session::InterfaceSessions>();
        }
        return interface_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_sessions != nullptr)
    {
        children["interface-sessions"] = interface_sessions;
    }

    return children;
}

void Dot1X::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-sessions")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSessions()
{

    yang_name = "interface-sessions"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Session::InterfaceSessions::~InterfaceSessions()
{
}

bool Dot1X::Session::InterfaceSessions::has_data() const
{
    for (std::size_t index=0; index<interface_session.size(); index++)
    {
        if(interface_session[index]->has_data())
            return true;
    }
    return false;
}

bool Dot1X::Session::InterfaceSessions::has_operation() const
{
    for (std::size_t index=0; index<interface_session.size(); index++)
    {
        if(interface_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dot1X::Session::InterfaceSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Session::InterfaceSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-session")
    {
        for(auto const & c : interface_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession>();
        c->parent = this;
        interface_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Session::InterfaceSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dot1X::Session::InterfaceSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dot1X::Session::InterfaceSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-session")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::InterfaceSession()
    :
    name{YType::str, "name"},
    interface_name{YType::str, "interface-name"},
    interface_sname{YType::str, "interface-sname"},
    if_handle{YType::str, "if-handle"},
    mac{YType::str, "mac"},
    ethertype{YType::str, "ethertype"}
    	,
    intf_info(std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo>())
	,mka_status_info(std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo>())
{
    intf_info->parent = this;
    mka_status_info->parent = this;

    yang_name = "interface-session"; yang_parent_name = "interface-sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::~InterfaceSession()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::has_data() const
{
    return name.is_set
	|| interface_name.is_set
	|| interface_sname.is_set
	|| if_handle.is_set
	|| mac.is_set
	|| ethertype.is_set
	|| (intf_info !=  nullptr && intf_info->has_data())
	|| (mka_status_info !=  nullptr && mka_status_info->has_data());
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_sname.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| (intf_info !=  nullptr && intf_info->has_operation())
	|| (mka_status_info !=  nullptr && mka_status_info->has_operation());
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-oper:dot1x/session/interface-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-session" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_sname.is_set || is_set(interface_sname.yfilter)) leaf_name_data.push_back(interface_sname.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-info")
    {
        if(intf_info == nullptr)
        {
            intf_info = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo>();
        }
        return intf_info;
    }

    if(child_yang_name == "mka-status-info")
    {
        if(mka_status_info == nullptr)
        {
            mka_status_info = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo>();
        }
        return mka_status_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intf_info != nullptr)
    {
        children["intf-info"] = intf_info;
    }

    if(mka_status_info != nullptr)
    {
        children["mka-status-info"] = mka_status_info;
    }

    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sname")
    {
        interface_sname = value;
        interface_sname.value_namespace = name_space;
        interface_sname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-sname")
    {
        interface_sname.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-info" || name == "mka-status-info" || name == "name" || name == "interface-name" || name == "interface-sname" || name == "if-handle" || name == "mac" || name == "ethertype")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::IntfInfo()
    :
    pae{YType::str, "pae"},
    port_status{YType::str, "port-status"},
    dot1x_profile{YType::str, "dot1x-profile"}
    	,
    auth_info(std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo>())
	,supp_info(std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo>())
{
    auth_info->parent = this;
    supp_info->parent = this;

    yang_name = "intf-info"; yang_parent_name = "interface-session"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::~IntfInfo()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::has_data() const
{
    return pae.is_set
	|| port_status.is_set
	|| dot1x_profile.is_set
	|| (auth_info !=  nullptr && auth_info->has_data())
	|| (supp_info !=  nullptr && supp_info->has_data());
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pae.yfilter)
	|| ydk::is_set(port_status.yfilter)
	|| ydk::is_set(dot1x_profile.yfilter)
	|| (auth_info !=  nullptr && auth_info->has_operation())
	|| (supp_info !=  nullptr && supp_info->has_operation());
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());
    if (port_status.is_set || is_set(port_status.yfilter)) leaf_name_data.push_back(port_status.get_name_leafdata());
    if (dot1x_profile.is_set || is_set(dot1x_profile.yfilter)) leaf_name_data.push_back(dot1x_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-info")
    {
        if(auth_info == nullptr)
        {
            auth_info = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo>();
        }
        return auth_info;
    }

    if(child_yang_name == "supp-info")
    {
        if(supp_info == nullptr)
        {
            supp_info = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo>();
        }
        return supp_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_info != nullptr)
    {
        children["auth-info"] = auth_info;
    }

    if(supp_info != nullptr)
    {
        children["supp-info"] = supp_info;
    }

    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-status")
    {
        port_status = value;
        port_status.value_namespace = name_space;
        port_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1x-profile")
    {
        dot1x_profile = value;
        dot1x_profile.value_namespace = name_space;
        dot1x_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
    if(value_path == "port-status")
    {
        port_status.yfilter = yfilter;
    }
    if(value_path == "dot1x-profile")
    {
        dot1x_profile.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-info" || name == "supp-info" || name == "pae" || name == "port-status" || name == "dot1x-profile")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::AuthInfo()
    :
    reauth{YType::str, "reauth"},
    config_dependency{YType::str, "config-dependency"}
{

    yang_name = "auth-info"; yang_parent_name = "intf-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::~AuthInfo()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return reauth.is_set
	|| config_dependency.is_set;
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reauth.yfilter)
	|| ydk::is_set(config_dependency.yfilter);
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauth.is_set || is_set(reauth.yfilter)) leaf_name_data.push_back(reauth.get_name_leafdata());
    if (config_dependency.is_set || is_set(config_dependency.yfilter)) leaf_name_data.push_back(config_dependency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauth")
    {
        reauth = value;
        reauth.value_namespace = name_space;
        reauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-dependency")
    {
        config_dependency = value;
        config_dependency.value_namespace = name_space;
        config_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauth")
    {
        reauth.yfilter = yfilter;
    }
    if(value_path == "config-dependency")
    {
        config_dependency.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "reauth" || name == "config-dependency")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::Client()
    :
    mac{YType::str, "mac"},
    auth_sm_state{YType::str, "auth-sm-state"},
    auth_bend_sm_state{YType::str, "auth-bend-sm-state"},
    time_to_next_reauth{YType::str, "time-to-next-reauth"},
    last_auth_time{YType::str, "last-auth-time"}
{

    yang_name = "client"; yang_parent_name = "auth-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::~Client()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::has_data() const
{
    return mac.is_set
	|| auth_sm_state.is_set
	|| auth_bend_sm_state.is_set
	|| time_to_next_reauth.is_set
	|| last_auth_time.is_set;
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(auth_sm_state.yfilter)
	|| ydk::is_set(auth_bend_sm_state.yfilter)
	|| ydk::is_set(time_to_next_reauth.yfilter)
	|| ydk::is_set(last_auth_time.yfilter);
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (auth_sm_state.is_set || is_set(auth_sm_state.yfilter)) leaf_name_data.push_back(auth_sm_state.get_name_leafdata());
    if (auth_bend_sm_state.is_set || is_set(auth_bend_sm_state.yfilter)) leaf_name_data.push_back(auth_bend_sm_state.get_name_leafdata());
    if (time_to_next_reauth.is_set || is_set(time_to_next_reauth.yfilter)) leaf_name_data.push_back(time_to_next_reauth.get_name_leafdata());
    if (last_auth_time.is_set || is_set(last_auth_time.yfilter)) leaf_name_data.push_back(last_auth_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sm-state")
    {
        auth_sm_state = value;
        auth_sm_state.value_namespace = name_space;
        auth_sm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-bend-sm-state")
    {
        auth_bend_sm_state = value;
        auth_bend_sm_state.value_namespace = name_space;
        auth_bend_sm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-next-reauth")
    {
        time_to_next_reauth = value;
        time_to_next_reauth.value_namespace = name_space;
        time_to_next_reauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-auth-time")
    {
        last_auth_time = value;
        last_auth_time.value_namespace = name_space;
        last_auth_time.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "auth-sm-state")
    {
        auth_sm_state.yfilter = yfilter;
    }
    if(value_path == "auth-bend-sm-state")
    {
        auth_bend_sm_state.yfilter = yfilter;
    }
    if(value_path == "time-to-next-reauth")
    {
        time_to_next_reauth.yfilter = yfilter;
    }
    if(value_path == "last-auth-time")
    {
        last_auth_time.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "auth-sm-state" || name == "auth-bend-sm-state" || name == "time-to-next-reauth" || name == "last-auth-time")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::SuppInfo()
    :
    eap_profile{YType::str, "eap-profile"},
    config_dependency{YType::str, "config-dependency"}
{

    yang_name = "supp-info"; yang_parent_name = "intf-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::~SuppInfo()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return eap_profile.is_set
	|| config_dependency.is_set;
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eap_profile.yfilter)
	|| ydk::is_set(config_dependency.yfilter);
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supp-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap_profile.is_set || is_set(eap_profile.yfilter)) leaf_name_data.push_back(eap_profile.get_name_leafdata());
    if (config_dependency.is_set || is_set(config_dependency.yfilter)) leaf_name_data.push_back(config_dependency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap-profile")
    {
        eap_profile = value;
        eap_profile.value_namespace = name_space;
        eap_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-dependency")
    {
        config_dependency = value;
        config_dependency.value_namespace = name_space;
        config_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap-profile")
    {
        eap_profile.yfilter = yfilter;
    }
    if(value_path == "config-dependency")
    {
        config_dependency.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "eap-profile" || name == "config-dependency")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::Client()
    :
    mac{YType::str, "mac"},
    eap_method{YType::str, "eap-method"},
    last_auth_time{YType::str, "last-auth-time"},
    auth_sm_state{YType::str, "auth-sm-state"},
    auth_bend_sm_state{YType::str, "auth-bend-sm-state"}
{

    yang_name = "client"; yang_parent_name = "supp-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::~Client()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::has_data() const
{
    return mac.is_set
	|| eap_method.is_set
	|| last_auth_time.is_set
	|| auth_sm_state.is_set
	|| auth_bend_sm_state.is_set;
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(eap_method.yfilter)
	|| ydk::is_set(last_auth_time.yfilter)
	|| ydk::is_set(auth_sm_state.yfilter)
	|| ydk::is_set(auth_bend_sm_state.yfilter);
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (eap_method.is_set || is_set(eap_method.yfilter)) leaf_name_data.push_back(eap_method.get_name_leafdata());
    if (last_auth_time.is_set || is_set(last_auth_time.yfilter)) leaf_name_data.push_back(last_auth_time.get_name_leafdata());
    if (auth_sm_state.is_set || is_set(auth_sm_state.yfilter)) leaf_name_data.push_back(auth_sm_state.get_name_leafdata());
    if (auth_bend_sm_state.is_set || is_set(auth_bend_sm_state.yfilter)) leaf_name_data.push_back(auth_bend_sm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap-method")
    {
        eap_method = value;
        eap_method.value_namespace = name_space;
        eap_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-auth-time")
    {
        last_auth_time = value;
        last_auth_time.value_namespace = name_space;
        last_auth_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sm-state")
    {
        auth_sm_state = value;
        auth_sm_state.value_namespace = name_space;
        auth_sm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-bend-sm-state")
    {
        auth_bend_sm_state = value;
        auth_bend_sm_state.value_namespace = name_space;
        auth_bend_sm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "eap-method")
    {
        eap_method.yfilter = yfilter;
    }
    if(value_path == "last-auth-time")
    {
        last_auth_time.yfilter = yfilter;
    }
    if(value_path == "auth-sm-state")
    {
        auth_sm_state.yfilter = yfilter;
    }
    if(value_path == "auth-bend-sm-state")
    {
        auth_bend_sm_state.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "eap-method" || name == "last-auth-time" || name == "auth-sm-state" || name == "auth-bend-sm-state")
        return true;
    return false;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::MkaStatusInfo()
    :
    tie_break_role{YType::str, "tie-break-role"},
    eap_based_macsec{YType::str, "eap-based-macsec"},
    mka_start_time{YType::str, "mka-start-time"},
    mka_stop_time{YType::str, "mka-stop-time"},
    mka_response_time{YType::str, "mka-response-time"}
{

    yang_name = "mka-status-info"; yang_parent_name = "interface-session"; is_top_level_class = false; has_list_ancestor = true;
}

Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::~MkaStatusInfo()
{
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::has_data() const
{
    return tie_break_role.is_set
	|| eap_based_macsec.is_set
	|| mka_start_time.is_set
	|| mka_stop_time.is_set
	|| mka_response_time.is_set;
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tie_break_role.yfilter)
	|| ydk::is_set(eap_based_macsec.yfilter)
	|| ydk::is_set(mka_start_time.yfilter)
	|| ydk::is_set(mka_stop_time.yfilter)
	|| ydk::is_set(mka_response_time.yfilter);
}

std::string Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka-status-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tie_break_role.is_set || is_set(tie_break_role.yfilter)) leaf_name_data.push_back(tie_break_role.get_name_leafdata());
    if (eap_based_macsec.is_set || is_set(eap_based_macsec.yfilter)) leaf_name_data.push_back(eap_based_macsec.get_name_leafdata());
    if (mka_start_time.is_set || is_set(mka_start_time.yfilter)) leaf_name_data.push_back(mka_start_time.get_name_leafdata());
    if (mka_stop_time.is_set || is_set(mka_stop_time.yfilter)) leaf_name_data.push_back(mka_stop_time.get_name_leafdata());
    if (mka_response_time.is_set || is_set(mka_response_time.yfilter)) leaf_name_data.push_back(mka_response_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tie-break-role")
    {
        tie_break_role = value;
        tie_break_role.value_namespace = name_space;
        tie_break_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap-based-macsec")
    {
        eap_based_macsec = value;
        eap_based_macsec.value_namespace = name_space;
        eap_based_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mka-start-time")
    {
        mka_start_time = value;
        mka_start_time.value_namespace = name_space;
        mka_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mka-stop-time")
    {
        mka_stop_time = value;
        mka_stop_time.value_namespace = name_space;
        mka_stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mka-response-time")
    {
        mka_response_time = value;
        mka_response_time.value_namespace = name_space;
        mka_response_time.value_namespace_prefix = name_space_prefix;
    }
}

void Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tie-break-role")
    {
        tie_break_role.yfilter = yfilter;
    }
    if(value_path == "eap-based-macsec")
    {
        eap_based_macsec.yfilter = yfilter;
    }
    if(value_path == "mka-start-time")
    {
        mka_start_time.yfilter = yfilter;
    }
    if(value_path == "mka-stop-time")
    {
        mka_stop_time.yfilter = yfilter;
    }
    if(value_path == "mka-response-time")
    {
        mka_response_time.yfilter = yfilter;
    }
}

bool Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tie-break-role" || name == "eap-based-macsec" || name == "mka-start-time" || name == "mka-stop-time" || name == "mka-response-time")
        return true;
    return false;
}


}
}

