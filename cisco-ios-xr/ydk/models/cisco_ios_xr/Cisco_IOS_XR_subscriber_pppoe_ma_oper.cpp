
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_pppoe_ma_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_oper {

Pppoe::Pppoe()
    :
    access_interface_statistics(std::make_shared<Pppoe::AccessInterfaceStatistics>())
    , nodes(std::make_shared<Pppoe::Nodes>())
{
    access_interface_statistics->parent = this;
    nodes->parent = this;

    yang_name = "pppoe"; yang_parent_name = "Cisco-IOS-XR-subscriber-pppoe-ma-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Pppoe::~Pppoe()
{
}

bool Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return (access_interface_statistics !=  nullptr && access_interface_statistics->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| (access_interface_statistics !=  nullptr && access_interface_statistics->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-statistics")
    {
        if(access_interface_statistics == nullptr)
        {
            access_interface_statistics = std::make_shared<Pppoe::AccessInterfaceStatistics>();
        }
        return access_interface_statistics;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Pppoe::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_interface_statistics != nullptr)
    {
        _children["access-interface-statistics"] = access_interface_statistics;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Pppoe::clone_ptr() const
{
    return std::make_shared<Pppoe>();
}

std::string Pppoe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pppoe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pppoe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pppoe::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-statistics" || name == "nodes")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistics()
    :
    access_interface_statistic(this, {"interface_name"})
{

    yang_name = "access-interface-statistics"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppoe::AccessInterfaceStatistics::~AccessInterfaceStatistics()
{
}

bool Pppoe::AccessInterfaceStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_interface_statistic.len(); index++)
    {
        if(access_interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::AccessInterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<access_interface_statistic.len(); index++)
    {
        if(access_interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppoe::AccessInterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-statistic")
    {
        auto ent_ = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic>();
        ent_->parent = this;
        access_interface_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_interface_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::AccessInterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::AccessInterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::AccessInterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-statistic")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::AccessInterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"}
        ,
    packet_counts(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts>())
{
    packet_counts->parent = this;

    yang_name = "access-interface-statistic"; yang_parent_name = "access-interface-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::~AccessInterfaceStatistic()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (packet_counts !=  nullptr && packet_counts->has_data());
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (packet_counts !=  nullptr && packet_counts->has_operation());
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/access-interface-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counts")
    {
        if(packet_counts == nullptr)
        {
            packet_counts = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts>();
        }
        return packet_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packet_counts != nullptr)
    {
        _children["packet-counts"] = packet_counts;
    }

    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "interface-name")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PacketCounts()
    :
    padi(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi>())
    , pado(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado>())
    , padr(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr>())
    , pads_success(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess>())
    , pads_error(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError>())
    , padt(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt>())
    , session_state(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState>())
    , other(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other>())
{
    padi->parent = this;
    pado->parent = this;
    padr->parent = this;
    pads_success->parent = this;
    pads_error->parent = this;
    padt->parent = this;
    session_state->parent = this;
    other->parent = this;

    yang_name = "packet-counts"; yang_parent_name = "access-interface-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::~PacketCounts()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::has_data() const
{
    if (is_presence_container) return true;
    return (padi !=  nullptr && padi->has_data())
	|| (pado !=  nullptr && pado->has_data())
	|| (padr !=  nullptr && padr->has_data())
	|| (pads_success !=  nullptr && pads_success->has_data())
	|| (pads_error !=  nullptr && pads_error->has_data())
	|| (padt !=  nullptr && padt->has_data())
	|| (session_state !=  nullptr && session_state->has_data())
	|| (other !=  nullptr && other->has_data());
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::has_operation() const
{
    return is_set(yfilter)
	|| (padi !=  nullptr && padi->has_operation())
	|| (pado !=  nullptr && pado->has_operation())
	|| (padr !=  nullptr && padr->has_operation())
	|| (pads_success !=  nullptr && pads_success->has_operation())
	|| (pads_error !=  nullptr && pads_error->has_operation())
	|| (padt !=  nullptr && padt->has_operation())
	|| (session_state !=  nullptr && session_state->has_operation())
	|| (other !=  nullptr && other->has_operation());
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padi")
    {
        if(padi == nullptr)
        {
            padi = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi>();
        }
        return padi;
    }

    if(child_yang_name == "pado")
    {
        if(pado == nullptr)
        {
            pado = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado>();
        }
        return pado;
    }

    if(child_yang_name == "padr")
    {
        if(padr == nullptr)
        {
            padr = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr>();
        }
        return padr;
    }

    if(child_yang_name == "pads-success")
    {
        if(pads_success == nullptr)
        {
            pads_success = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess>();
        }
        return pads_success;
    }

    if(child_yang_name == "pads-error")
    {
        if(pads_error == nullptr)
        {
            pads_error = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError>();
        }
        return pads_error;
    }

    if(child_yang_name == "padt")
    {
        if(padt == nullptr)
        {
            padt = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt>();
        }
        return padt;
    }

    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState>();
        }
        return session_state;
    }

    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other>();
        }
        return other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padi != nullptr)
    {
        _children["padi"] = padi;
    }

    if(pado != nullptr)
    {
        _children["pado"] = pado;
    }

    if(padr != nullptr)
    {
        _children["padr"] = padr;
    }

    if(pads_success != nullptr)
    {
        _children["pads-success"] = pads_success;
    }

    if(pads_error != nullptr)
    {
        _children["pads-error"] = pads_error;
    }

    if(padt != nullptr)
    {
        _children["padt"] = padt;
    }

    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    if(other != nullptr)
    {
        _children["other"] = other;
    }

    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padi" || name == "pado" || name == "padr" || name == "pads-success" || name == "pads-error" || name == "padt" || name == "session-state" || name == "other")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::Padi()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padi"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::~Padi()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::Pado()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pado"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::~Pado()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pado";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::Padr()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padr"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::~Padr()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::PadsSuccess()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pads-success"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::~PadsSuccess()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::PadsError()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pads-error"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::~PadsError()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::Padt()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padt"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::~Padt()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::SessionState()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "session-state"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::~SessionState()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::Other()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "other"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::~Other()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppoe::Nodes::~Nodes()
{
}

bool Pppoe::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppoe::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Pppoe::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    disconnect_history(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory>())
    , disconnect_history_unique(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique>())
    , statistics(std::make_shared<Pppoe::Nodes::Node::Statistics>())
    , access_interface(std::make_shared<Pppoe::Nodes::Node::AccessInterface>())
    , interfaces(std::make_shared<Pppoe::Nodes::Node::Interfaces>())
    , bba_groups(std::make_shared<Pppoe::Nodes::Node::BbaGroups>())
    , summary_total(std::make_shared<Pppoe::Nodes::Node::SummaryTotal>())
{
    disconnect_history->parent = this;
    disconnect_history_unique->parent = this;
    statistics->parent = this;
    access_interface->parent = this;
    interfaces->parent = this;
    bba_groups->parent = this;
    summary_total->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppoe::Nodes::Node::~Node()
{
}

bool Pppoe::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (disconnect_history !=  nullptr && disconnect_history->has_data())
	|| (disconnect_history_unique !=  nullptr && disconnect_history_unique->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (bba_groups !=  nullptr && bba_groups->has_data())
	|| (summary_total !=  nullptr && summary_total->has_data());
}

bool Pppoe::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (disconnect_history !=  nullptr && disconnect_history->has_operation())
	|| (disconnect_history_unique !=  nullptr && disconnect_history_unique->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (bba_groups !=  nullptr && bba_groups->has_operation())
	|| (summary_total !=  nullptr && summary_total->has_operation());
}

std::string Pppoe::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppoe::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect-history")
    {
        if(disconnect_history == nullptr)
        {
            disconnect_history = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory>();
        }
        return disconnect_history;
    }

    if(child_yang_name == "disconnect-history-unique")
    {
        if(disconnect_history_unique == nullptr)
        {
            disconnect_history_unique = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique>();
        }
        return disconnect_history_unique;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Pppoe::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "access-interface")
    {
        if(access_interface == nullptr)
        {
            access_interface = std::make_shared<Pppoe::Nodes::Node::AccessInterface>();
        }
        return access_interface;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pppoe::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "bba-groups")
    {
        if(bba_groups == nullptr)
        {
            bba_groups = std::make_shared<Pppoe::Nodes::Node::BbaGroups>();
        }
        return bba_groups;
    }

    if(child_yang_name == "summary-total")
    {
        if(summary_total == nullptr)
        {
            summary_total = std::make_shared<Pppoe::Nodes::Node::SummaryTotal>();
        }
        return summary_total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect_history != nullptr)
    {
        _children["disconnect-history"] = disconnect_history;
    }

    if(disconnect_history_unique != nullptr)
    {
        _children["disconnect-history-unique"] = disconnect_history_unique;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(access_interface != nullptr)
    {
        _children["access-interface"] = access_interface;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(bba_groups != nullptr)
    {
        _children["bba-groups"] = bba_groups;
    }

    if(summary_total != nullptr)
    {
        _children["summary-total"] = summary_total;
    }

    return _children;
}

void Pppoe::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect-history" || name == "disconnect-history-unique" || name == "statistics" || name == "access-interface" || name == "interfaces" || name == "bba-groups" || name == "summary-total" || name == "node-name")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::DisconnectHistory()
    :
    current_idx{YType::uint32, "current-idx"}
        ,
    entry(this, {})
{

    yang_name = "disconnect-history"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::~DisconnectHistory()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return current_idx.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistory::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(current_idx.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_idx.is_set || is_set(current_idx.yfilter)) leaf_name_data.push_back(current_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-idx")
    {
        current_idx = value;
        current_idx.value_namespace = name_space;
        current_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-idx")
    {
        current_idx.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "current-idx")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::Entry()
    :
    timestamp{YType::uint64, "timestamp"},
    ifname{YType::str, "ifname"},
    trigger{YType::enumeration, "trigger"}
        ,
    session_idb(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb>())
{
    session_idb->parent = this;

    yang_name = "entry"; yang_parent_name = "disconnect-history"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::~Entry()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| ifname.is_set
	|| trigger.is_set
	|| (session_idb !=  nullptr && session_idb->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(trigger.yfilter)
	|| (session_idb !=  nullptr && session_idb->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-idb")
    {
        if(session_idb == nullptr)
        {
            session_idb = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb>();
        }
        return session_idb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_idb != nullptr)
    {
        _children["session-idb"] = session_idb;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-idb" || name == "timestamp" || name == "ifname" || name == "trigger")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::SessionIdb()
    :
    interface{YType::str, "interface"},
    access_interface{YType::str, "access-interface"},
    session_id{YType::uint16, "session-id"},
    sub_label{YType::uint32, "sub-label"},
    peer_mac_address{YType::str, "peer-mac-address"},
    state{YType::enumeration, "state"},
    cdm_object_handle{YType::uint32, "cdm-object-handle"},
    chkpt_id{YType::uint32, "chkpt-id"},
    punted_count{YType::uint32, "punted-count"},
    port_limit{YType::uint32, "port-limit"},
    is_counted{YType::int32, "is-counted"},
    is_vlan_outer_tag{YType::int32, "is-vlan-outer-tag"},
    is_vlan_inner_tag{YType::int32, "is-vlan-inner-tag"},
    is_cleanup_pending{YType::int32, "is-cleanup-pending"},
    is_disconnect_done_pending{YType::int32, "is-disconnect-done-pending"},
    is_delete_done_pending{YType::int32, "is-delete-done-pending"},
    is_intf_create_callback_pending{YType::int32, "is-intf-create-callback-pending"},
    is_publish_encaps_attr_pending{YType::int32, "is-publish-encaps-attr-pending"},
    is_publish_encaps_attr_cb_pending{YType::int32, "is-publish-encaps-attr-cb-pending"},
    is_intf_delete_callback_pending{YType::int32, "is-intf-delete-callback-pending"},
    is_intf_delete_pending{YType::int32, "is-intf-delete-pending"},
    is_im_owned_resource{YType::int32, "is-im-owned-resource"},
    is_im_final_received{YType::int32, "is-im-final-received"},
    is_im_owned_resource_missing{YType::int32, "is-im-owned-resource-missing"},
    is_aaa_start_request_callback_pending{YType::int32, "is-aaa-start-request-callback-pending"},
    is_aaa_owned_resource{YType::int32, "is-aaa-owned-resource"},
    is_aaa_disconnect_requested{YType::int32, "is-aaa-disconnect-requested"},
    is_aaa_disconnect_received{YType::int32, "is-aaa-disconnect-received"},
    is_sub_db_activate_callback_pending{YType::int32, "is-sub-db-activate-callback-pending"},
    is_pads_sent{YType::int32, "is-pads-sent"},
    is_padt_received{YType::int32, "is-padt-received"},
    is_in_flight{YType::int32, "is-in-flight"},
    is_radius_override{YType::int32, "is-radius-override"},
    expected_notifications{YType::uint8, "expected-notifications"},
    received_notifications{YType::uint8, "received-notifications"},
    srg_state{YType::enumeration, "srg-state"},
    is_srg_data_received{YType::int32, "is-srg-data-received"},
    is_iedge_data_received{YType::int32, "is-iedge-data-received"}
        ,
    tags(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags>())
    , vlan_outer_tag(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag>())
    , vlan_inner_tag(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag>())
{
    tags->parent = this;
    vlan_outer_tag->parent = this;
    vlan_inner_tag->parent = this;

    yang_name = "session-idb"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::~SessionIdb()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| access_interface.is_set
	|| session_id.is_set
	|| sub_label.is_set
	|| peer_mac_address.is_set
	|| state.is_set
	|| cdm_object_handle.is_set
	|| chkpt_id.is_set
	|| punted_count.is_set
	|| port_limit.is_set
	|| is_counted.is_set
	|| is_vlan_outer_tag.is_set
	|| is_vlan_inner_tag.is_set
	|| is_cleanup_pending.is_set
	|| is_disconnect_done_pending.is_set
	|| is_delete_done_pending.is_set
	|| is_intf_create_callback_pending.is_set
	|| is_publish_encaps_attr_pending.is_set
	|| is_publish_encaps_attr_cb_pending.is_set
	|| is_intf_delete_callback_pending.is_set
	|| is_intf_delete_pending.is_set
	|| is_im_owned_resource.is_set
	|| is_im_final_received.is_set
	|| is_im_owned_resource_missing.is_set
	|| is_aaa_start_request_callback_pending.is_set
	|| is_aaa_owned_resource.is_set
	|| is_aaa_disconnect_requested.is_set
	|| is_aaa_disconnect_received.is_set
	|| is_sub_db_activate_callback_pending.is_set
	|| is_pads_sent.is_set
	|| is_padt_received.is_set
	|| is_in_flight.is_set
	|| is_radius_override.is_set
	|| expected_notifications.is_set
	|| received_notifications.is_set
	|| srg_state.is_set
	|| is_srg_data_received.is_set
	|| is_iedge_data_received.is_set
	|| (tags !=  nullptr && tags->has_data())
	|| (vlan_outer_tag !=  nullptr && vlan_outer_tag->has_data())
	|| (vlan_inner_tag !=  nullptr && vlan_inner_tag->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(access_interface.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(sub_label.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(cdm_object_handle.yfilter)
	|| ydk::is_set(chkpt_id.yfilter)
	|| ydk::is_set(punted_count.yfilter)
	|| ydk::is_set(port_limit.yfilter)
	|| ydk::is_set(is_counted.yfilter)
	|| ydk::is_set(is_vlan_outer_tag.yfilter)
	|| ydk::is_set(is_vlan_inner_tag.yfilter)
	|| ydk::is_set(is_cleanup_pending.yfilter)
	|| ydk::is_set(is_disconnect_done_pending.yfilter)
	|| ydk::is_set(is_delete_done_pending.yfilter)
	|| ydk::is_set(is_intf_create_callback_pending.yfilter)
	|| ydk::is_set(is_publish_encaps_attr_pending.yfilter)
	|| ydk::is_set(is_publish_encaps_attr_cb_pending.yfilter)
	|| ydk::is_set(is_intf_delete_callback_pending.yfilter)
	|| ydk::is_set(is_intf_delete_pending.yfilter)
	|| ydk::is_set(is_im_owned_resource.yfilter)
	|| ydk::is_set(is_im_final_received.yfilter)
	|| ydk::is_set(is_im_owned_resource_missing.yfilter)
	|| ydk::is_set(is_aaa_start_request_callback_pending.yfilter)
	|| ydk::is_set(is_aaa_owned_resource.yfilter)
	|| ydk::is_set(is_aaa_disconnect_requested.yfilter)
	|| ydk::is_set(is_aaa_disconnect_received.yfilter)
	|| ydk::is_set(is_sub_db_activate_callback_pending.yfilter)
	|| ydk::is_set(is_pads_sent.yfilter)
	|| ydk::is_set(is_padt_received.yfilter)
	|| ydk::is_set(is_in_flight.yfilter)
	|| ydk::is_set(is_radius_override.yfilter)
	|| ydk::is_set(expected_notifications.yfilter)
	|| ydk::is_set(received_notifications.yfilter)
	|| ydk::is_set(srg_state.yfilter)
	|| ydk::is_set(is_srg_data_received.yfilter)
	|| ydk::is_set(is_iedge_data_received.yfilter)
	|| (tags !=  nullptr && tags->has_operation())
	|| (vlan_outer_tag !=  nullptr && vlan_outer_tag->has_operation())
	|| (vlan_inner_tag !=  nullptr && vlan_inner_tag->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (access_interface.is_set || is_set(access_interface.yfilter)) leaf_name_data.push_back(access_interface.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (sub_label.is_set || is_set(sub_label.yfilter)) leaf_name_data.push_back(sub_label.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (cdm_object_handle.is_set || is_set(cdm_object_handle.yfilter)) leaf_name_data.push_back(cdm_object_handle.get_name_leafdata());
    if (chkpt_id.is_set || is_set(chkpt_id.yfilter)) leaf_name_data.push_back(chkpt_id.get_name_leafdata());
    if (punted_count.is_set || is_set(punted_count.yfilter)) leaf_name_data.push_back(punted_count.get_name_leafdata());
    if (port_limit.is_set || is_set(port_limit.yfilter)) leaf_name_data.push_back(port_limit.get_name_leafdata());
    if (is_counted.is_set || is_set(is_counted.yfilter)) leaf_name_data.push_back(is_counted.get_name_leafdata());
    if (is_vlan_outer_tag.is_set || is_set(is_vlan_outer_tag.yfilter)) leaf_name_data.push_back(is_vlan_outer_tag.get_name_leafdata());
    if (is_vlan_inner_tag.is_set || is_set(is_vlan_inner_tag.yfilter)) leaf_name_data.push_back(is_vlan_inner_tag.get_name_leafdata());
    if (is_cleanup_pending.is_set || is_set(is_cleanup_pending.yfilter)) leaf_name_data.push_back(is_cleanup_pending.get_name_leafdata());
    if (is_disconnect_done_pending.is_set || is_set(is_disconnect_done_pending.yfilter)) leaf_name_data.push_back(is_disconnect_done_pending.get_name_leafdata());
    if (is_delete_done_pending.is_set || is_set(is_delete_done_pending.yfilter)) leaf_name_data.push_back(is_delete_done_pending.get_name_leafdata());
    if (is_intf_create_callback_pending.is_set || is_set(is_intf_create_callback_pending.yfilter)) leaf_name_data.push_back(is_intf_create_callback_pending.get_name_leafdata());
    if (is_publish_encaps_attr_pending.is_set || is_set(is_publish_encaps_attr_pending.yfilter)) leaf_name_data.push_back(is_publish_encaps_attr_pending.get_name_leafdata());
    if (is_publish_encaps_attr_cb_pending.is_set || is_set(is_publish_encaps_attr_cb_pending.yfilter)) leaf_name_data.push_back(is_publish_encaps_attr_cb_pending.get_name_leafdata());
    if (is_intf_delete_callback_pending.is_set || is_set(is_intf_delete_callback_pending.yfilter)) leaf_name_data.push_back(is_intf_delete_callback_pending.get_name_leafdata());
    if (is_intf_delete_pending.is_set || is_set(is_intf_delete_pending.yfilter)) leaf_name_data.push_back(is_intf_delete_pending.get_name_leafdata());
    if (is_im_owned_resource.is_set || is_set(is_im_owned_resource.yfilter)) leaf_name_data.push_back(is_im_owned_resource.get_name_leafdata());
    if (is_im_final_received.is_set || is_set(is_im_final_received.yfilter)) leaf_name_data.push_back(is_im_final_received.get_name_leafdata());
    if (is_im_owned_resource_missing.is_set || is_set(is_im_owned_resource_missing.yfilter)) leaf_name_data.push_back(is_im_owned_resource_missing.get_name_leafdata());
    if (is_aaa_start_request_callback_pending.is_set || is_set(is_aaa_start_request_callback_pending.yfilter)) leaf_name_data.push_back(is_aaa_start_request_callback_pending.get_name_leafdata());
    if (is_aaa_owned_resource.is_set || is_set(is_aaa_owned_resource.yfilter)) leaf_name_data.push_back(is_aaa_owned_resource.get_name_leafdata());
    if (is_aaa_disconnect_requested.is_set || is_set(is_aaa_disconnect_requested.yfilter)) leaf_name_data.push_back(is_aaa_disconnect_requested.get_name_leafdata());
    if (is_aaa_disconnect_received.is_set || is_set(is_aaa_disconnect_received.yfilter)) leaf_name_data.push_back(is_aaa_disconnect_received.get_name_leafdata());
    if (is_sub_db_activate_callback_pending.is_set || is_set(is_sub_db_activate_callback_pending.yfilter)) leaf_name_data.push_back(is_sub_db_activate_callback_pending.get_name_leafdata());
    if (is_pads_sent.is_set || is_set(is_pads_sent.yfilter)) leaf_name_data.push_back(is_pads_sent.get_name_leafdata());
    if (is_padt_received.is_set || is_set(is_padt_received.yfilter)) leaf_name_data.push_back(is_padt_received.get_name_leafdata());
    if (is_in_flight.is_set || is_set(is_in_flight.yfilter)) leaf_name_data.push_back(is_in_flight.get_name_leafdata());
    if (is_radius_override.is_set || is_set(is_radius_override.yfilter)) leaf_name_data.push_back(is_radius_override.get_name_leafdata());
    if (expected_notifications.is_set || is_set(expected_notifications.yfilter)) leaf_name_data.push_back(expected_notifications.get_name_leafdata());
    if (received_notifications.is_set || is_set(received_notifications.yfilter)) leaf_name_data.push_back(received_notifications.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.yfilter)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (is_srg_data_received.is_set || is_set(is_srg_data_received.yfilter)) leaf_name_data.push_back(is_srg_data_received.get_name_leafdata());
    if (is_iedge_data_received.is_set || is_set(is_iedge_data_received.yfilter)) leaf_name_data.push_back(is_iedge_data_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        if(tags == nullptr)
        {
            tags = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags>();
        }
        return tags;
    }

    if(child_yang_name == "vlan-outer-tag")
    {
        if(vlan_outer_tag == nullptr)
        {
            vlan_outer_tag = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag>();
        }
        return vlan_outer_tag;
    }

    if(child_yang_name == "vlan-inner-tag")
    {
        if(vlan_inner_tag == nullptr)
        {
            vlan_inner_tag = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag>();
        }
        return vlan_inner_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tags != nullptr)
    {
        _children["tags"] = tags;
    }

    if(vlan_outer_tag != nullptr)
    {
        _children["vlan-outer-tag"] = vlan_outer_tag;
    }

    if(vlan_inner_tag != nullptr)
    {
        _children["vlan-inner-tag"] = vlan_inner_tag;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface")
    {
        access_interface = value;
        access_interface.value_namespace = name_space;
        access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-label")
    {
        sub_label = value;
        sub_label.value_namespace = name_space;
        sub_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdm-object-handle")
    {
        cdm_object_handle = value;
        cdm_object_handle.value_namespace = name_space;
        cdm_object_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chkpt-id")
    {
        chkpt_id = value;
        chkpt_id.value_namespace = name_space;
        chkpt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punted-count")
    {
        punted_count = value;
        punted_count.value_namespace = name_space;
        punted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-limit")
    {
        port_limit = value;
        port_limit.value_namespace = name_space;
        port_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-counted")
    {
        is_counted = value;
        is_counted.value_namespace = name_space;
        is_counted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vlan-outer-tag")
    {
        is_vlan_outer_tag = value;
        is_vlan_outer_tag.value_namespace = name_space;
        is_vlan_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vlan-inner-tag")
    {
        is_vlan_inner_tag = value;
        is_vlan_inner_tag.value_namespace = name_space;
        is_vlan_inner_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cleanup-pending")
    {
        is_cleanup_pending = value;
        is_cleanup_pending.value_namespace = name_space;
        is_cleanup_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disconnect-done-pending")
    {
        is_disconnect_done_pending = value;
        is_disconnect_done_pending.value_namespace = name_space;
        is_disconnect_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delete-done-pending")
    {
        is_delete_done_pending = value;
        is_delete_done_pending.value_namespace = name_space;
        is_delete_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-create-callback-pending")
    {
        is_intf_create_callback_pending = value;
        is_intf_create_callback_pending.value_namespace = name_space;
        is_intf_create_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-publish-encaps-attr-pending")
    {
        is_publish_encaps_attr_pending = value;
        is_publish_encaps_attr_pending.value_namespace = name_space;
        is_publish_encaps_attr_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-publish-encaps-attr-cb-pending")
    {
        is_publish_encaps_attr_cb_pending = value;
        is_publish_encaps_attr_cb_pending.value_namespace = name_space;
        is_publish_encaps_attr_cb_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-delete-callback-pending")
    {
        is_intf_delete_callback_pending = value;
        is_intf_delete_callback_pending.value_namespace = name_space;
        is_intf_delete_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-delete-pending")
    {
        is_intf_delete_pending = value;
        is_intf_delete_pending.value_namespace = name_space;
        is_intf_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-owned-resource")
    {
        is_im_owned_resource = value;
        is_im_owned_resource.value_namespace = name_space;
        is_im_owned_resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-final-received")
    {
        is_im_final_received = value;
        is_im_final_received.value_namespace = name_space;
        is_im_final_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-owned-resource-missing")
    {
        is_im_owned_resource_missing = value;
        is_im_owned_resource_missing.value_namespace = name_space;
        is_im_owned_resource_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-start-request-callback-pending")
    {
        is_aaa_start_request_callback_pending = value;
        is_aaa_start_request_callback_pending.value_namespace = name_space;
        is_aaa_start_request_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-owned-resource")
    {
        is_aaa_owned_resource = value;
        is_aaa_owned_resource.value_namespace = name_space;
        is_aaa_owned_resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-disconnect-requested")
    {
        is_aaa_disconnect_requested = value;
        is_aaa_disconnect_requested.value_namespace = name_space;
        is_aaa_disconnect_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-disconnect-received")
    {
        is_aaa_disconnect_received = value;
        is_aaa_disconnect_received.value_namespace = name_space;
        is_aaa_disconnect_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sub-db-activate-callback-pending")
    {
        is_sub_db_activate_callback_pending = value;
        is_sub_db_activate_callback_pending.value_namespace = name_space;
        is_sub_db_activate_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pads-sent")
    {
        is_pads_sent = value;
        is_pads_sent.value_namespace = name_space;
        is_pads_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-padt-received")
    {
        is_padt_received = value;
        is_padt_received.value_namespace = name_space;
        is_padt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-flight")
    {
        is_in_flight = value;
        is_in_flight.value_namespace = name_space;
        is_in_flight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-radius-override")
    {
        is_radius_override = value;
        is_radius_override.value_namespace = name_space;
        is_radius_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-notifications")
    {
        expected_notifications = value;
        expected_notifications.value_namespace = name_space;
        expected_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-notifications")
    {
        received_notifications = value;
        received_notifications.value_namespace = name_space;
        received_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
        srg_state.value_namespace = name_space;
        srg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srg-data-received")
    {
        is_srg_data_received = value;
        is_srg_data_received.value_namespace = name_space;
        is_srg_data_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-iedge-data-received")
    {
        is_iedge_data_received = value;
        is_iedge_data_received.value_namespace = name_space;
        is_iedge_data_received.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "access-interface")
    {
        access_interface.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "sub-label")
    {
        sub_label.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "cdm-object-handle")
    {
        cdm_object_handle.yfilter = yfilter;
    }
    if(value_path == "chkpt-id")
    {
        chkpt_id.yfilter = yfilter;
    }
    if(value_path == "punted-count")
    {
        punted_count.yfilter = yfilter;
    }
    if(value_path == "port-limit")
    {
        port_limit.yfilter = yfilter;
    }
    if(value_path == "is-counted")
    {
        is_counted.yfilter = yfilter;
    }
    if(value_path == "is-vlan-outer-tag")
    {
        is_vlan_outer_tag.yfilter = yfilter;
    }
    if(value_path == "is-vlan-inner-tag")
    {
        is_vlan_inner_tag.yfilter = yfilter;
    }
    if(value_path == "is-cleanup-pending")
    {
        is_cleanup_pending.yfilter = yfilter;
    }
    if(value_path == "is-disconnect-done-pending")
    {
        is_disconnect_done_pending.yfilter = yfilter;
    }
    if(value_path == "is-delete-done-pending")
    {
        is_delete_done_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-create-callback-pending")
    {
        is_intf_create_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-publish-encaps-attr-pending")
    {
        is_publish_encaps_attr_pending.yfilter = yfilter;
    }
    if(value_path == "is-publish-encaps-attr-cb-pending")
    {
        is_publish_encaps_attr_cb_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-delete-callback-pending")
    {
        is_intf_delete_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-delete-pending")
    {
        is_intf_delete_pending.yfilter = yfilter;
    }
    if(value_path == "is-im-owned-resource")
    {
        is_im_owned_resource.yfilter = yfilter;
    }
    if(value_path == "is-im-final-received")
    {
        is_im_final_received.yfilter = yfilter;
    }
    if(value_path == "is-im-owned-resource-missing")
    {
        is_im_owned_resource_missing.yfilter = yfilter;
    }
    if(value_path == "is-aaa-start-request-callback-pending")
    {
        is_aaa_start_request_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-aaa-owned-resource")
    {
        is_aaa_owned_resource.yfilter = yfilter;
    }
    if(value_path == "is-aaa-disconnect-requested")
    {
        is_aaa_disconnect_requested.yfilter = yfilter;
    }
    if(value_path == "is-aaa-disconnect-received")
    {
        is_aaa_disconnect_received.yfilter = yfilter;
    }
    if(value_path == "is-sub-db-activate-callback-pending")
    {
        is_sub_db_activate_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-pads-sent")
    {
        is_pads_sent.yfilter = yfilter;
    }
    if(value_path == "is-padt-received")
    {
        is_padt_received.yfilter = yfilter;
    }
    if(value_path == "is-in-flight")
    {
        is_in_flight.yfilter = yfilter;
    }
    if(value_path == "is-radius-override")
    {
        is_radius_override.yfilter = yfilter;
    }
    if(value_path == "expected-notifications")
    {
        expected_notifications.yfilter = yfilter;
    }
    if(value_path == "received-notifications")
    {
        received_notifications.yfilter = yfilter;
    }
    if(value_path == "srg-state")
    {
        srg_state.yfilter = yfilter;
    }
    if(value_path == "is-srg-data-received")
    {
        is_srg_data_received.yfilter = yfilter;
    }
    if(value_path == "is-iedge-data-received")
    {
        is_iedge_data_received.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "vlan-outer-tag" || name == "vlan-inner-tag" || name == "interface" || name == "access-interface" || name == "session-id" || name == "sub-label" || name == "peer-mac-address" || name == "state" || name == "cdm-object-handle" || name == "chkpt-id" || name == "punted-count" || name == "port-limit" || name == "is-counted" || name == "is-vlan-outer-tag" || name == "is-vlan-inner-tag" || name == "is-cleanup-pending" || name == "is-disconnect-done-pending" || name == "is-delete-done-pending" || name == "is-intf-create-callback-pending" || name == "is-publish-encaps-attr-pending" || name == "is-publish-encaps-attr-cb-pending" || name == "is-intf-delete-callback-pending" || name == "is-intf-delete-pending" || name == "is-im-owned-resource" || name == "is-im-final-received" || name == "is-im-owned-resource-missing" || name == "is-aaa-start-request-callback-pending" || name == "is-aaa-owned-resource" || name == "is-aaa-disconnect-requested" || name == "is-aaa-disconnect-received" || name == "is-sub-db-activate-callback-pending" || name == "is-pads-sent" || name == "is-padt-received" || name == "is-in-flight" || name == "is-radius-override" || name == "expected-notifications" || name == "received-notifications" || name == "srg-state" || name == "is-srg-data-received" || name == "is-iedge-data-received")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::Tags()
    :
    is_service_name{YType::int32, "is-service-name"},
    is_max_payload{YType::int32, "is-max-payload"},
    is_host_uniq{YType::int32, "is-host-uniq"},
    is_relay_session_id{YType::int32, "is-relay-session-id"},
    is_vendor_specific{YType::int32, "is-vendor-specific"},
    is_iwf{YType::int32, "is-iwf"},
    is_remote_id{YType::int32, "is-remote-id"},
    is_circuit_id{YType::int32, "is-circuit-id"},
    is_dsl_tag{YType::int32, "is-dsl-tag"},
    service_name{YType::str, "service-name"},
    max_payload{YType::uint32, "max-payload"},
    host_uniq{YType::str, "host-uniq"},
    relay_session_id{YType::str, "relay-session-id"},
    remote_id{YType::str, "remote-id"},
    circuit_id{YType::str, "circuit-id"},
    is_dsl_actual_up{YType::int32, "is-dsl-actual-up"},
    is_dsl_actual_down{YType::int32, "is-dsl-actual-down"},
    is_dsl_min_up{YType::int32, "is-dsl-min-up"},
    is_dsl_min_down{YType::int32, "is-dsl-min-down"},
    is_dsl_attain_up{YType::int32, "is-dsl-attain-up"},
    is_dsl_attain_down{YType::int32, "is-dsl-attain-down"},
    is_dsl_max_up{YType::int32, "is-dsl-max-up"},
    is_dsl_max_down{YType::int32, "is-dsl-max-down"},
    is_dsl_min_up_low{YType::int32, "is-dsl-min-up-low"},
    is_dsl_min_down_low{YType::int32, "is-dsl-min-down-low"},
    is_dsl_max_delay_up{YType::int32, "is-dsl-max-delay-up"},
    is_dsl_actual_delay_up{YType::int32, "is-dsl-actual-delay-up"},
    is_dsl_max_delay_down{YType::int32, "is-dsl-max-delay-down"},
    is_dsl_actual_delay_down{YType::int32, "is-dsl-actual-delay-down"},
    is_access_loop_encapsulation{YType::int32, "is-access-loop-encapsulation"},
    dsl_actual_up{YType::uint32, "dsl-actual-up"},
    dsl_actual_down{YType::uint32, "dsl-actual-down"},
    dsl_min_up{YType::uint32, "dsl-min-up"},
    dsl_min_down{YType::uint32, "dsl-min-down"},
    dsl_attain_up{YType::uint32, "dsl-attain-up"},
    dsl_attain_down{YType::uint32, "dsl-attain-down"},
    dsl_max_up{YType::uint32, "dsl-max-up"},
    dsl_max_down{YType::uint32, "dsl-max-down"},
    dsl_min_up_low{YType::uint32, "dsl-min-up-low"},
    dsl_min_down_low{YType::uint32, "dsl-min-down-low"},
    dsl_max_delay_up{YType::uint32, "dsl-max-delay-up"},
    dsl_actual_delay_up{YType::uint32, "dsl-actual-delay-up"},
    dsl_max_delay_down{YType::uint32, "dsl-max-delay-down"},
    dsl_actual_delay_down{YType::uint32, "dsl-actual-delay-down"}
        ,
    access_loop_encapsulation(std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation>())
{
    access_loop_encapsulation->parent = this;

    yang_name = "tags"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::~Tags()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::has_data() const
{
    if (is_presence_container) return true;
    return is_service_name.is_set
	|| is_max_payload.is_set
	|| is_host_uniq.is_set
	|| is_relay_session_id.is_set
	|| is_vendor_specific.is_set
	|| is_iwf.is_set
	|| is_remote_id.is_set
	|| is_circuit_id.is_set
	|| is_dsl_tag.is_set
	|| service_name.is_set
	|| max_payload.is_set
	|| host_uniq.is_set
	|| relay_session_id.is_set
	|| remote_id.is_set
	|| circuit_id.is_set
	|| is_dsl_actual_up.is_set
	|| is_dsl_actual_down.is_set
	|| is_dsl_min_up.is_set
	|| is_dsl_min_down.is_set
	|| is_dsl_attain_up.is_set
	|| is_dsl_attain_down.is_set
	|| is_dsl_max_up.is_set
	|| is_dsl_max_down.is_set
	|| is_dsl_min_up_low.is_set
	|| is_dsl_min_down_low.is_set
	|| is_dsl_max_delay_up.is_set
	|| is_dsl_actual_delay_up.is_set
	|| is_dsl_max_delay_down.is_set
	|| is_dsl_actual_delay_down.is_set
	|| is_access_loop_encapsulation.is_set
	|| dsl_actual_up.is_set
	|| dsl_actual_down.is_set
	|| dsl_min_up.is_set
	|| dsl_min_down.is_set
	|| dsl_attain_up.is_set
	|| dsl_attain_down.is_set
	|| dsl_max_up.is_set
	|| dsl_max_down.is_set
	|| dsl_min_up_low.is_set
	|| dsl_min_down_low.is_set
	|| dsl_max_delay_up.is_set
	|| dsl_actual_delay_up.is_set
	|| dsl_max_delay_down.is_set
	|| dsl_actual_delay_down.is_set
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_service_name.yfilter)
	|| ydk::is_set(is_max_payload.yfilter)
	|| ydk::is_set(is_host_uniq.yfilter)
	|| ydk::is_set(is_relay_session_id.yfilter)
	|| ydk::is_set(is_vendor_specific.yfilter)
	|| ydk::is_set(is_iwf.yfilter)
	|| ydk::is_set(is_remote_id.yfilter)
	|| ydk::is_set(is_circuit_id.yfilter)
	|| ydk::is_set(is_dsl_tag.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(max_payload.yfilter)
	|| ydk::is_set(host_uniq.yfilter)
	|| ydk::is_set(relay_session_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(is_dsl_actual_up.yfilter)
	|| ydk::is_set(is_dsl_actual_down.yfilter)
	|| ydk::is_set(is_dsl_min_up.yfilter)
	|| ydk::is_set(is_dsl_min_down.yfilter)
	|| ydk::is_set(is_dsl_attain_up.yfilter)
	|| ydk::is_set(is_dsl_attain_down.yfilter)
	|| ydk::is_set(is_dsl_max_up.yfilter)
	|| ydk::is_set(is_dsl_max_down.yfilter)
	|| ydk::is_set(is_dsl_min_up_low.yfilter)
	|| ydk::is_set(is_dsl_min_down_low.yfilter)
	|| ydk::is_set(is_dsl_max_delay_up.yfilter)
	|| ydk::is_set(is_dsl_actual_delay_up.yfilter)
	|| ydk::is_set(is_dsl_max_delay_down.yfilter)
	|| ydk::is_set(is_dsl_actual_delay_down.yfilter)
	|| ydk::is_set(is_access_loop_encapsulation.yfilter)
	|| ydk::is_set(dsl_actual_up.yfilter)
	|| ydk::is_set(dsl_actual_down.yfilter)
	|| ydk::is_set(dsl_min_up.yfilter)
	|| ydk::is_set(dsl_min_down.yfilter)
	|| ydk::is_set(dsl_attain_up.yfilter)
	|| ydk::is_set(dsl_attain_down.yfilter)
	|| ydk::is_set(dsl_max_up.yfilter)
	|| ydk::is_set(dsl_max_down.yfilter)
	|| ydk::is_set(dsl_min_up_low.yfilter)
	|| ydk::is_set(dsl_min_down_low.yfilter)
	|| ydk::is_set(dsl_max_delay_up.yfilter)
	|| ydk::is_set(dsl_actual_delay_up.yfilter)
	|| ydk::is_set(dsl_max_delay_down.yfilter)
	|| ydk::is_set(dsl_actual_delay_down.yfilter)
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_service_name.is_set || is_set(is_service_name.yfilter)) leaf_name_data.push_back(is_service_name.get_name_leafdata());
    if (is_max_payload.is_set || is_set(is_max_payload.yfilter)) leaf_name_data.push_back(is_max_payload.get_name_leafdata());
    if (is_host_uniq.is_set || is_set(is_host_uniq.yfilter)) leaf_name_data.push_back(is_host_uniq.get_name_leafdata());
    if (is_relay_session_id.is_set || is_set(is_relay_session_id.yfilter)) leaf_name_data.push_back(is_relay_session_id.get_name_leafdata());
    if (is_vendor_specific.is_set || is_set(is_vendor_specific.yfilter)) leaf_name_data.push_back(is_vendor_specific.get_name_leafdata());
    if (is_iwf.is_set || is_set(is_iwf.yfilter)) leaf_name_data.push_back(is_iwf.get_name_leafdata());
    if (is_remote_id.is_set || is_set(is_remote_id.yfilter)) leaf_name_data.push_back(is_remote_id.get_name_leafdata());
    if (is_circuit_id.is_set || is_set(is_circuit_id.yfilter)) leaf_name_data.push_back(is_circuit_id.get_name_leafdata());
    if (is_dsl_tag.is_set || is_set(is_dsl_tag.yfilter)) leaf_name_data.push_back(is_dsl_tag.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (max_payload.is_set || is_set(max_payload.yfilter)) leaf_name_data.push_back(max_payload.get_name_leafdata());
    if (host_uniq.is_set || is_set(host_uniq.yfilter)) leaf_name_data.push_back(host_uniq.get_name_leafdata());
    if (relay_session_id.is_set || is_set(relay_session_id.yfilter)) leaf_name_data.push_back(relay_session_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (is_dsl_actual_up.is_set || is_set(is_dsl_actual_up.yfilter)) leaf_name_data.push_back(is_dsl_actual_up.get_name_leafdata());
    if (is_dsl_actual_down.is_set || is_set(is_dsl_actual_down.yfilter)) leaf_name_data.push_back(is_dsl_actual_down.get_name_leafdata());
    if (is_dsl_min_up.is_set || is_set(is_dsl_min_up.yfilter)) leaf_name_data.push_back(is_dsl_min_up.get_name_leafdata());
    if (is_dsl_min_down.is_set || is_set(is_dsl_min_down.yfilter)) leaf_name_data.push_back(is_dsl_min_down.get_name_leafdata());
    if (is_dsl_attain_up.is_set || is_set(is_dsl_attain_up.yfilter)) leaf_name_data.push_back(is_dsl_attain_up.get_name_leafdata());
    if (is_dsl_attain_down.is_set || is_set(is_dsl_attain_down.yfilter)) leaf_name_data.push_back(is_dsl_attain_down.get_name_leafdata());
    if (is_dsl_max_up.is_set || is_set(is_dsl_max_up.yfilter)) leaf_name_data.push_back(is_dsl_max_up.get_name_leafdata());
    if (is_dsl_max_down.is_set || is_set(is_dsl_max_down.yfilter)) leaf_name_data.push_back(is_dsl_max_down.get_name_leafdata());
    if (is_dsl_min_up_low.is_set || is_set(is_dsl_min_up_low.yfilter)) leaf_name_data.push_back(is_dsl_min_up_low.get_name_leafdata());
    if (is_dsl_min_down_low.is_set || is_set(is_dsl_min_down_low.yfilter)) leaf_name_data.push_back(is_dsl_min_down_low.get_name_leafdata());
    if (is_dsl_max_delay_up.is_set || is_set(is_dsl_max_delay_up.yfilter)) leaf_name_data.push_back(is_dsl_max_delay_up.get_name_leafdata());
    if (is_dsl_actual_delay_up.is_set || is_set(is_dsl_actual_delay_up.yfilter)) leaf_name_data.push_back(is_dsl_actual_delay_up.get_name_leafdata());
    if (is_dsl_max_delay_down.is_set || is_set(is_dsl_max_delay_down.yfilter)) leaf_name_data.push_back(is_dsl_max_delay_down.get_name_leafdata());
    if (is_dsl_actual_delay_down.is_set || is_set(is_dsl_actual_delay_down.yfilter)) leaf_name_data.push_back(is_dsl_actual_delay_down.get_name_leafdata());
    if (is_access_loop_encapsulation.is_set || is_set(is_access_loop_encapsulation.yfilter)) leaf_name_data.push_back(is_access_loop_encapsulation.get_name_leafdata());
    if (dsl_actual_up.is_set || is_set(dsl_actual_up.yfilter)) leaf_name_data.push_back(dsl_actual_up.get_name_leafdata());
    if (dsl_actual_down.is_set || is_set(dsl_actual_down.yfilter)) leaf_name_data.push_back(dsl_actual_down.get_name_leafdata());
    if (dsl_min_up.is_set || is_set(dsl_min_up.yfilter)) leaf_name_data.push_back(dsl_min_up.get_name_leafdata());
    if (dsl_min_down.is_set || is_set(dsl_min_down.yfilter)) leaf_name_data.push_back(dsl_min_down.get_name_leafdata());
    if (dsl_attain_up.is_set || is_set(dsl_attain_up.yfilter)) leaf_name_data.push_back(dsl_attain_up.get_name_leafdata());
    if (dsl_attain_down.is_set || is_set(dsl_attain_down.yfilter)) leaf_name_data.push_back(dsl_attain_down.get_name_leafdata());
    if (dsl_max_up.is_set || is_set(dsl_max_up.yfilter)) leaf_name_data.push_back(dsl_max_up.get_name_leafdata());
    if (dsl_max_down.is_set || is_set(dsl_max_down.yfilter)) leaf_name_data.push_back(dsl_max_down.get_name_leafdata());
    if (dsl_min_up_low.is_set || is_set(dsl_min_up_low.yfilter)) leaf_name_data.push_back(dsl_min_up_low.get_name_leafdata());
    if (dsl_min_down_low.is_set || is_set(dsl_min_down_low.yfilter)) leaf_name_data.push_back(dsl_min_down_low.get_name_leafdata());
    if (dsl_max_delay_up.is_set || is_set(dsl_max_delay_up.yfilter)) leaf_name_data.push_back(dsl_max_delay_up.get_name_leafdata());
    if (dsl_actual_delay_up.is_set || is_set(dsl_actual_delay_up.yfilter)) leaf_name_data.push_back(dsl_actual_delay_up.get_name_leafdata());
    if (dsl_max_delay_down.is_set || is_set(dsl_max_delay_down.yfilter)) leaf_name_data.push_back(dsl_max_delay_down.get_name_leafdata());
    if (dsl_actual_delay_down.is_set || is_set(dsl_actual_delay_down.yfilter)) leaf_name_data.push_back(dsl_actual_delay_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-loop-encapsulation")
    {
        if(access_loop_encapsulation == nullptr)
        {
            access_loop_encapsulation = std::make_shared<Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation>();
        }
        return access_loop_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_loop_encapsulation != nullptr)
    {
        _children["access-loop-encapsulation"] = access_loop_encapsulation;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-service-name")
    {
        is_service_name = value;
        is_service_name.value_namespace = name_space;
        is_service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-payload")
    {
        is_max_payload = value;
        is_max_payload.value_namespace = name_space;
        is_max_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-host-uniq")
    {
        is_host_uniq = value;
        is_host_uniq.value_namespace = name_space;
        is_host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-relay-session-id")
    {
        is_relay_session_id = value;
        is_relay_session_id.value_namespace = name_space;
        is_relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vendor-specific")
    {
        is_vendor_specific = value;
        is_vendor_specific.value_namespace = name_space;
        is_vendor_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-iwf")
    {
        is_iwf = value;
        is_iwf.value_namespace = name_space;
        is_iwf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-id")
    {
        is_remote_id = value;
        is_remote_id.value_namespace = name_space;
        is_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-circuit-id")
    {
        is_circuit_id = value;
        is_circuit_id.value_namespace = name_space;
        is_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-tag")
    {
        is_dsl_tag = value;
        is_dsl_tag.value_namespace = name_space;
        is_dsl_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-payload")
    {
        max_payload = value;
        max_payload.value_namespace = name_space;
        max_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-uniq")
    {
        host_uniq = value;
        host_uniq.value_namespace = name_space;
        host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id = value;
        relay_session_id.value_namespace = name_space;
        relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-up")
    {
        is_dsl_actual_up = value;
        is_dsl_actual_up.value_namespace = name_space;
        is_dsl_actual_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-down")
    {
        is_dsl_actual_down = value;
        is_dsl_actual_down.value_namespace = name_space;
        is_dsl_actual_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-up")
    {
        is_dsl_min_up = value;
        is_dsl_min_up.value_namespace = name_space;
        is_dsl_min_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-down")
    {
        is_dsl_min_down = value;
        is_dsl_min_down.value_namespace = name_space;
        is_dsl_min_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-attain-up")
    {
        is_dsl_attain_up = value;
        is_dsl_attain_up.value_namespace = name_space;
        is_dsl_attain_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-attain-down")
    {
        is_dsl_attain_down = value;
        is_dsl_attain_down.value_namespace = name_space;
        is_dsl_attain_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-up")
    {
        is_dsl_max_up = value;
        is_dsl_max_up.value_namespace = name_space;
        is_dsl_max_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-down")
    {
        is_dsl_max_down = value;
        is_dsl_max_down.value_namespace = name_space;
        is_dsl_max_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-up-low")
    {
        is_dsl_min_up_low = value;
        is_dsl_min_up_low.value_namespace = name_space;
        is_dsl_min_up_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-down-low")
    {
        is_dsl_min_down_low = value;
        is_dsl_min_down_low.value_namespace = name_space;
        is_dsl_min_down_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-delay-up")
    {
        is_dsl_max_delay_up = value;
        is_dsl_max_delay_up.value_namespace = name_space;
        is_dsl_max_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-delay-up")
    {
        is_dsl_actual_delay_up = value;
        is_dsl_actual_delay_up.value_namespace = name_space;
        is_dsl_actual_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-delay-down")
    {
        is_dsl_max_delay_down = value;
        is_dsl_max_delay_down.value_namespace = name_space;
        is_dsl_max_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-delay-down")
    {
        is_dsl_actual_delay_down = value;
        is_dsl_actual_delay_down.value_namespace = name_space;
        is_dsl_actual_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-access-loop-encapsulation")
    {
        is_access_loop_encapsulation = value;
        is_access_loop_encapsulation.value_namespace = name_space;
        is_access_loop_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up = value;
        dsl_actual_up.value_namespace = name_space;
        dsl_actual_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down = value;
        dsl_actual_down.value_namespace = name_space;
        dsl_actual_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up = value;
        dsl_min_up.value_namespace = name_space;
        dsl_min_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down = value;
        dsl_min_down.value_namespace = name_space;
        dsl_min_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up = value;
        dsl_attain_up.value_namespace = name_space;
        dsl_attain_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down = value;
        dsl_attain_down.value_namespace = name_space;
        dsl_attain_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up = value;
        dsl_max_up.value_namespace = name_space;
        dsl_max_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down = value;
        dsl_max_down.value_namespace = name_space;
        dsl_max_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low = value;
        dsl_min_up_low.value_namespace = name_space;
        dsl_min_up_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low = value;
        dsl_min_down_low.value_namespace = name_space;
        dsl_min_down_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up = value;
        dsl_max_delay_up.value_namespace = name_space;
        dsl_max_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up = value;
        dsl_actual_delay_up.value_namespace = name_space;
        dsl_actual_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down = value;
        dsl_max_delay_down.value_namespace = name_space;
        dsl_max_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down = value;
        dsl_actual_delay_down.value_namespace = name_space;
        dsl_actual_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-service-name")
    {
        is_service_name.yfilter = yfilter;
    }
    if(value_path == "is-max-payload")
    {
        is_max_payload.yfilter = yfilter;
    }
    if(value_path == "is-host-uniq")
    {
        is_host_uniq.yfilter = yfilter;
    }
    if(value_path == "is-relay-session-id")
    {
        is_relay_session_id.yfilter = yfilter;
    }
    if(value_path == "is-vendor-specific")
    {
        is_vendor_specific.yfilter = yfilter;
    }
    if(value_path == "is-iwf")
    {
        is_iwf.yfilter = yfilter;
    }
    if(value_path == "is-remote-id")
    {
        is_remote_id.yfilter = yfilter;
    }
    if(value_path == "is-circuit-id")
    {
        is_circuit_id.yfilter = yfilter;
    }
    if(value_path == "is-dsl-tag")
    {
        is_dsl_tag.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "max-payload")
    {
        max_payload.yfilter = yfilter;
    }
    if(value_path == "host-uniq")
    {
        host_uniq.yfilter = yfilter;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-up")
    {
        is_dsl_actual_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-down")
    {
        is_dsl_actual_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-up")
    {
        is_dsl_min_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-down")
    {
        is_dsl_min_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-attain-up")
    {
        is_dsl_attain_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-attain-down")
    {
        is_dsl_attain_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-up")
    {
        is_dsl_max_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-down")
    {
        is_dsl_max_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-up-low")
    {
        is_dsl_min_up_low.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-down-low")
    {
        is_dsl_min_down_low.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-delay-up")
    {
        is_dsl_max_delay_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-delay-up")
    {
        is_dsl_actual_delay_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-delay-down")
    {
        is_dsl_max_delay_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-delay-down")
    {
        is_dsl_actual_delay_down.yfilter = yfilter;
    }
    if(value_path == "is-access-loop-encapsulation")
    {
        is_access_loop_encapsulation.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down.yfilter = yfilter;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-loop-encapsulation" || name == "is-service-name" || name == "is-max-payload" || name == "is-host-uniq" || name == "is-relay-session-id" || name == "is-vendor-specific" || name == "is-iwf" || name == "is-remote-id" || name == "is-circuit-id" || name == "is-dsl-tag" || name == "service-name" || name == "max-payload" || name == "host-uniq" || name == "relay-session-id" || name == "remote-id" || name == "circuit-id" || name == "is-dsl-actual-up" || name == "is-dsl-actual-down" || name == "is-dsl-min-up" || name == "is-dsl-min-down" || name == "is-dsl-attain-up" || name == "is-dsl-attain-down" || name == "is-dsl-max-up" || name == "is-dsl-max-down" || name == "is-dsl-min-up-low" || name == "is-dsl-min-down-low" || name == "is-dsl-max-delay-up" || name == "is-dsl-actual-delay-up" || name == "is-dsl-max-delay-down" || name == "is-dsl-actual-delay-down" || name == "is-access-loop-encapsulation" || name == "dsl-actual-up" || name == "dsl-actual-down" || name == "dsl-min-up" || name == "dsl-min-down" || name == "dsl-attain-up" || name == "dsl-attain-down" || name == "dsl-max-up" || name == "dsl-max-down" || name == "dsl-min-up-low" || name == "dsl-min-down-low" || name == "dsl-max-delay-up" || name == "dsl-actual-delay-up" || name == "dsl-max-delay-down" || name == "dsl-actual-delay-down")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::AccessLoopEncapsulation()
    :
    data_link{YType::uint8, "data-link"},
    encaps1{YType::uint8, "encaps1"},
    encaps2{YType::uint8, "encaps2"}
{

    yang_name = "access-loop-encapsulation"; yang_parent_name = "tags"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::~AccessLoopEncapsulation()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return data_link.is_set
	|| encaps1.is_set
	|| encaps2.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_link.yfilter)
	|| ydk::is_set(encaps1.yfilter)
	|| ydk::is_set(encaps2.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-loop-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_link.is_set || is_set(data_link.yfilter)) leaf_name_data.push_back(data_link.get_name_leafdata());
    if (encaps1.is_set || is_set(encaps1.yfilter)) leaf_name_data.push_back(encaps1.get_name_leafdata());
    if (encaps2.is_set || is_set(encaps2.yfilter)) leaf_name_data.push_back(encaps2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-link")
    {
        data_link = value;
        data_link.value_namespace = name_space;
        data_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps1")
    {
        encaps1 = value;
        encaps1.value_namespace = name_space;
        encaps1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps2")
    {
        encaps2 = value;
        encaps2.value_namespace = name_space;
        encaps2.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-link")
    {
        data_link.yfilter = yfilter;
    }
    if(value_path == "encaps1")
    {
        encaps1.yfilter = yfilter;
    }
    if(value_path == "encaps2")
    {
        encaps2.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link" || name == "encaps1" || name == "encaps2")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::VlanOuterTag()
    :
    ether_type{YType::uint16, "ether-type"},
    user_priority{YType::uint8, "user-priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "vlan-outer-tag"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::~VlanOuterTag()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| user_priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-outer-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanOuterTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "user-priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::VlanInnerTag()
    :
    ether_type{YType::uint16, "ether-type"},
    user_priority{YType::uint8, "user-priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "vlan-inner-tag"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::~VlanInnerTag()
{
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| user_priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inner-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistory::Entry::SessionIdb::VlanInnerTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "user-priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::DisconnectHistoryUnique()
    :
    disconnect_count{YType::uint32, "disconnect-count"}
        ,
    entry(this, {})
{

    yang_name = "disconnect-history-unique"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::~DisconnectHistoryUnique()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (auto const & leaf : disconnect_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (auto const & leaf : disconnect_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disconnect_count.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect-history-unique";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto disconnect_count_name_datas = disconnect_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), disconnect_count_name_datas.begin(), disconnect_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnect-count")
    {
        disconnect_count.append(value);
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnect-count")
    {
        disconnect_count.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "disconnect-count")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::Entry()
    :
    timestamp{YType::uint64, "timestamp"},
    ifname{YType::str, "ifname"},
    trigger{YType::enumeration, "trigger"}
        ,
    session_idb(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb>())
{
    session_idb->parent = this;

    yang_name = "entry"; yang_parent_name = "disconnect-history-unique"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::~Entry()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| ifname.is_set
	|| trigger.is_set
	|| (session_idb !=  nullptr && session_idb->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(trigger.yfilter)
	|| (session_idb !=  nullptr && session_idb->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-idb")
    {
        if(session_idb == nullptr)
        {
            session_idb = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb>();
        }
        return session_idb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_idb != nullptr)
    {
        _children["session-idb"] = session_idb;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-idb" || name == "timestamp" || name == "ifname" || name == "trigger")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::SessionIdb()
    :
    interface{YType::str, "interface"},
    access_interface{YType::str, "access-interface"},
    session_id{YType::uint16, "session-id"},
    sub_label{YType::uint32, "sub-label"},
    peer_mac_address{YType::str, "peer-mac-address"},
    state{YType::enumeration, "state"},
    cdm_object_handle{YType::uint32, "cdm-object-handle"},
    chkpt_id{YType::uint32, "chkpt-id"},
    punted_count{YType::uint32, "punted-count"},
    port_limit{YType::uint32, "port-limit"},
    is_counted{YType::int32, "is-counted"},
    is_vlan_outer_tag{YType::int32, "is-vlan-outer-tag"},
    is_vlan_inner_tag{YType::int32, "is-vlan-inner-tag"},
    is_cleanup_pending{YType::int32, "is-cleanup-pending"},
    is_disconnect_done_pending{YType::int32, "is-disconnect-done-pending"},
    is_delete_done_pending{YType::int32, "is-delete-done-pending"},
    is_intf_create_callback_pending{YType::int32, "is-intf-create-callback-pending"},
    is_publish_encaps_attr_pending{YType::int32, "is-publish-encaps-attr-pending"},
    is_publish_encaps_attr_cb_pending{YType::int32, "is-publish-encaps-attr-cb-pending"},
    is_intf_delete_callback_pending{YType::int32, "is-intf-delete-callback-pending"},
    is_intf_delete_pending{YType::int32, "is-intf-delete-pending"},
    is_im_owned_resource{YType::int32, "is-im-owned-resource"},
    is_im_final_received{YType::int32, "is-im-final-received"},
    is_im_owned_resource_missing{YType::int32, "is-im-owned-resource-missing"},
    is_aaa_start_request_callback_pending{YType::int32, "is-aaa-start-request-callback-pending"},
    is_aaa_owned_resource{YType::int32, "is-aaa-owned-resource"},
    is_aaa_disconnect_requested{YType::int32, "is-aaa-disconnect-requested"},
    is_aaa_disconnect_received{YType::int32, "is-aaa-disconnect-received"},
    is_sub_db_activate_callback_pending{YType::int32, "is-sub-db-activate-callback-pending"},
    is_pads_sent{YType::int32, "is-pads-sent"},
    is_padt_received{YType::int32, "is-padt-received"},
    is_in_flight{YType::int32, "is-in-flight"},
    is_radius_override{YType::int32, "is-radius-override"},
    expected_notifications{YType::uint8, "expected-notifications"},
    received_notifications{YType::uint8, "received-notifications"},
    srg_state{YType::enumeration, "srg-state"},
    is_srg_data_received{YType::int32, "is-srg-data-received"},
    is_iedge_data_received{YType::int32, "is-iedge-data-received"}
        ,
    tags(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags>())
    , vlan_outer_tag(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag>())
    , vlan_inner_tag(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag>())
{
    tags->parent = this;
    vlan_outer_tag->parent = this;
    vlan_inner_tag->parent = this;

    yang_name = "session-idb"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::~SessionIdb()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| access_interface.is_set
	|| session_id.is_set
	|| sub_label.is_set
	|| peer_mac_address.is_set
	|| state.is_set
	|| cdm_object_handle.is_set
	|| chkpt_id.is_set
	|| punted_count.is_set
	|| port_limit.is_set
	|| is_counted.is_set
	|| is_vlan_outer_tag.is_set
	|| is_vlan_inner_tag.is_set
	|| is_cleanup_pending.is_set
	|| is_disconnect_done_pending.is_set
	|| is_delete_done_pending.is_set
	|| is_intf_create_callback_pending.is_set
	|| is_publish_encaps_attr_pending.is_set
	|| is_publish_encaps_attr_cb_pending.is_set
	|| is_intf_delete_callback_pending.is_set
	|| is_intf_delete_pending.is_set
	|| is_im_owned_resource.is_set
	|| is_im_final_received.is_set
	|| is_im_owned_resource_missing.is_set
	|| is_aaa_start_request_callback_pending.is_set
	|| is_aaa_owned_resource.is_set
	|| is_aaa_disconnect_requested.is_set
	|| is_aaa_disconnect_received.is_set
	|| is_sub_db_activate_callback_pending.is_set
	|| is_pads_sent.is_set
	|| is_padt_received.is_set
	|| is_in_flight.is_set
	|| is_radius_override.is_set
	|| expected_notifications.is_set
	|| received_notifications.is_set
	|| srg_state.is_set
	|| is_srg_data_received.is_set
	|| is_iedge_data_received.is_set
	|| (tags !=  nullptr && tags->has_data())
	|| (vlan_outer_tag !=  nullptr && vlan_outer_tag->has_data())
	|| (vlan_inner_tag !=  nullptr && vlan_inner_tag->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(access_interface.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(sub_label.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(cdm_object_handle.yfilter)
	|| ydk::is_set(chkpt_id.yfilter)
	|| ydk::is_set(punted_count.yfilter)
	|| ydk::is_set(port_limit.yfilter)
	|| ydk::is_set(is_counted.yfilter)
	|| ydk::is_set(is_vlan_outer_tag.yfilter)
	|| ydk::is_set(is_vlan_inner_tag.yfilter)
	|| ydk::is_set(is_cleanup_pending.yfilter)
	|| ydk::is_set(is_disconnect_done_pending.yfilter)
	|| ydk::is_set(is_delete_done_pending.yfilter)
	|| ydk::is_set(is_intf_create_callback_pending.yfilter)
	|| ydk::is_set(is_publish_encaps_attr_pending.yfilter)
	|| ydk::is_set(is_publish_encaps_attr_cb_pending.yfilter)
	|| ydk::is_set(is_intf_delete_callback_pending.yfilter)
	|| ydk::is_set(is_intf_delete_pending.yfilter)
	|| ydk::is_set(is_im_owned_resource.yfilter)
	|| ydk::is_set(is_im_final_received.yfilter)
	|| ydk::is_set(is_im_owned_resource_missing.yfilter)
	|| ydk::is_set(is_aaa_start_request_callback_pending.yfilter)
	|| ydk::is_set(is_aaa_owned_resource.yfilter)
	|| ydk::is_set(is_aaa_disconnect_requested.yfilter)
	|| ydk::is_set(is_aaa_disconnect_received.yfilter)
	|| ydk::is_set(is_sub_db_activate_callback_pending.yfilter)
	|| ydk::is_set(is_pads_sent.yfilter)
	|| ydk::is_set(is_padt_received.yfilter)
	|| ydk::is_set(is_in_flight.yfilter)
	|| ydk::is_set(is_radius_override.yfilter)
	|| ydk::is_set(expected_notifications.yfilter)
	|| ydk::is_set(received_notifications.yfilter)
	|| ydk::is_set(srg_state.yfilter)
	|| ydk::is_set(is_srg_data_received.yfilter)
	|| ydk::is_set(is_iedge_data_received.yfilter)
	|| (tags !=  nullptr && tags->has_operation())
	|| (vlan_outer_tag !=  nullptr && vlan_outer_tag->has_operation())
	|| (vlan_inner_tag !=  nullptr && vlan_inner_tag->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (access_interface.is_set || is_set(access_interface.yfilter)) leaf_name_data.push_back(access_interface.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (sub_label.is_set || is_set(sub_label.yfilter)) leaf_name_data.push_back(sub_label.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (cdm_object_handle.is_set || is_set(cdm_object_handle.yfilter)) leaf_name_data.push_back(cdm_object_handle.get_name_leafdata());
    if (chkpt_id.is_set || is_set(chkpt_id.yfilter)) leaf_name_data.push_back(chkpt_id.get_name_leafdata());
    if (punted_count.is_set || is_set(punted_count.yfilter)) leaf_name_data.push_back(punted_count.get_name_leafdata());
    if (port_limit.is_set || is_set(port_limit.yfilter)) leaf_name_data.push_back(port_limit.get_name_leafdata());
    if (is_counted.is_set || is_set(is_counted.yfilter)) leaf_name_data.push_back(is_counted.get_name_leafdata());
    if (is_vlan_outer_tag.is_set || is_set(is_vlan_outer_tag.yfilter)) leaf_name_data.push_back(is_vlan_outer_tag.get_name_leafdata());
    if (is_vlan_inner_tag.is_set || is_set(is_vlan_inner_tag.yfilter)) leaf_name_data.push_back(is_vlan_inner_tag.get_name_leafdata());
    if (is_cleanup_pending.is_set || is_set(is_cleanup_pending.yfilter)) leaf_name_data.push_back(is_cleanup_pending.get_name_leafdata());
    if (is_disconnect_done_pending.is_set || is_set(is_disconnect_done_pending.yfilter)) leaf_name_data.push_back(is_disconnect_done_pending.get_name_leafdata());
    if (is_delete_done_pending.is_set || is_set(is_delete_done_pending.yfilter)) leaf_name_data.push_back(is_delete_done_pending.get_name_leafdata());
    if (is_intf_create_callback_pending.is_set || is_set(is_intf_create_callback_pending.yfilter)) leaf_name_data.push_back(is_intf_create_callback_pending.get_name_leafdata());
    if (is_publish_encaps_attr_pending.is_set || is_set(is_publish_encaps_attr_pending.yfilter)) leaf_name_data.push_back(is_publish_encaps_attr_pending.get_name_leafdata());
    if (is_publish_encaps_attr_cb_pending.is_set || is_set(is_publish_encaps_attr_cb_pending.yfilter)) leaf_name_data.push_back(is_publish_encaps_attr_cb_pending.get_name_leafdata());
    if (is_intf_delete_callback_pending.is_set || is_set(is_intf_delete_callback_pending.yfilter)) leaf_name_data.push_back(is_intf_delete_callback_pending.get_name_leafdata());
    if (is_intf_delete_pending.is_set || is_set(is_intf_delete_pending.yfilter)) leaf_name_data.push_back(is_intf_delete_pending.get_name_leafdata());
    if (is_im_owned_resource.is_set || is_set(is_im_owned_resource.yfilter)) leaf_name_data.push_back(is_im_owned_resource.get_name_leafdata());
    if (is_im_final_received.is_set || is_set(is_im_final_received.yfilter)) leaf_name_data.push_back(is_im_final_received.get_name_leafdata());
    if (is_im_owned_resource_missing.is_set || is_set(is_im_owned_resource_missing.yfilter)) leaf_name_data.push_back(is_im_owned_resource_missing.get_name_leafdata());
    if (is_aaa_start_request_callback_pending.is_set || is_set(is_aaa_start_request_callback_pending.yfilter)) leaf_name_data.push_back(is_aaa_start_request_callback_pending.get_name_leafdata());
    if (is_aaa_owned_resource.is_set || is_set(is_aaa_owned_resource.yfilter)) leaf_name_data.push_back(is_aaa_owned_resource.get_name_leafdata());
    if (is_aaa_disconnect_requested.is_set || is_set(is_aaa_disconnect_requested.yfilter)) leaf_name_data.push_back(is_aaa_disconnect_requested.get_name_leafdata());
    if (is_aaa_disconnect_received.is_set || is_set(is_aaa_disconnect_received.yfilter)) leaf_name_data.push_back(is_aaa_disconnect_received.get_name_leafdata());
    if (is_sub_db_activate_callback_pending.is_set || is_set(is_sub_db_activate_callback_pending.yfilter)) leaf_name_data.push_back(is_sub_db_activate_callback_pending.get_name_leafdata());
    if (is_pads_sent.is_set || is_set(is_pads_sent.yfilter)) leaf_name_data.push_back(is_pads_sent.get_name_leafdata());
    if (is_padt_received.is_set || is_set(is_padt_received.yfilter)) leaf_name_data.push_back(is_padt_received.get_name_leafdata());
    if (is_in_flight.is_set || is_set(is_in_flight.yfilter)) leaf_name_data.push_back(is_in_flight.get_name_leafdata());
    if (is_radius_override.is_set || is_set(is_radius_override.yfilter)) leaf_name_data.push_back(is_radius_override.get_name_leafdata());
    if (expected_notifications.is_set || is_set(expected_notifications.yfilter)) leaf_name_data.push_back(expected_notifications.get_name_leafdata());
    if (received_notifications.is_set || is_set(received_notifications.yfilter)) leaf_name_data.push_back(received_notifications.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.yfilter)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (is_srg_data_received.is_set || is_set(is_srg_data_received.yfilter)) leaf_name_data.push_back(is_srg_data_received.get_name_leafdata());
    if (is_iedge_data_received.is_set || is_set(is_iedge_data_received.yfilter)) leaf_name_data.push_back(is_iedge_data_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        if(tags == nullptr)
        {
            tags = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags>();
        }
        return tags;
    }

    if(child_yang_name == "vlan-outer-tag")
    {
        if(vlan_outer_tag == nullptr)
        {
            vlan_outer_tag = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag>();
        }
        return vlan_outer_tag;
    }

    if(child_yang_name == "vlan-inner-tag")
    {
        if(vlan_inner_tag == nullptr)
        {
            vlan_inner_tag = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag>();
        }
        return vlan_inner_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tags != nullptr)
    {
        _children["tags"] = tags;
    }

    if(vlan_outer_tag != nullptr)
    {
        _children["vlan-outer-tag"] = vlan_outer_tag;
    }

    if(vlan_inner_tag != nullptr)
    {
        _children["vlan-inner-tag"] = vlan_inner_tag;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface")
    {
        access_interface = value;
        access_interface.value_namespace = name_space;
        access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-label")
    {
        sub_label = value;
        sub_label.value_namespace = name_space;
        sub_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdm-object-handle")
    {
        cdm_object_handle = value;
        cdm_object_handle.value_namespace = name_space;
        cdm_object_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chkpt-id")
    {
        chkpt_id = value;
        chkpt_id.value_namespace = name_space;
        chkpt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punted-count")
    {
        punted_count = value;
        punted_count.value_namespace = name_space;
        punted_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-limit")
    {
        port_limit = value;
        port_limit.value_namespace = name_space;
        port_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-counted")
    {
        is_counted = value;
        is_counted.value_namespace = name_space;
        is_counted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vlan-outer-tag")
    {
        is_vlan_outer_tag = value;
        is_vlan_outer_tag.value_namespace = name_space;
        is_vlan_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vlan-inner-tag")
    {
        is_vlan_inner_tag = value;
        is_vlan_inner_tag.value_namespace = name_space;
        is_vlan_inner_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cleanup-pending")
    {
        is_cleanup_pending = value;
        is_cleanup_pending.value_namespace = name_space;
        is_cleanup_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disconnect-done-pending")
    {
        is_disconnect_done_pending = value;
        is_disconnect_done_pending.value_namespace = name_space;
        is_disconnect_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delete-done-pending")
    {
        is_delete_done_pending = value;
        is_delete_done_pending.value_namespace = name_space;
        is_delete_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-create-callback-pending")
    {
        is_intf_create_callback_pending = value;
        is_intf_create_callback_pending.value_namespace = name_space;
        is_intf_create_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-publish-encaps-attr-pending")
    {
        is_publish_encaps_attr_pending = value;
        is_publish_encaps_attr_pending.value_namespace = name_space;
        is_publish_encaps_attr_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-publish-encaps-attr-cb-pending")
    {
        is_publish_encaps_attr_cb_pending = value;
        is_publish_encaps_attr_cb_pending.value_namespace = name_space;
        is_publish_encaps_attr_cb_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-delete-callback-pending")
    {
        is_intf_delete_callback_pending = value;
        is_intf_delete_callback_pending.value_namespace = name_space;
        is_intf_delete_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-intf-delete-pending")
    {
        is_intf_delete_pending = value;
        is_intf_delete_pending.value_namespace = name_space;
        is_intf_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-owned-resource")
    {
        is_im_owned_resource = value;
        is_im_owned_resource.value_namespace = name_space;
        is_im_owned_resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-final-received")
    {
        is_im_final_received = value;
        is_im_final_received.value_namespace = name_space;
        is_im_final_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-owned-resource-missing")
    {
        is_im_owned_resource_missing = value;
        is_im_owned_resource_missing.value_namespace = name_space;
        is_im_owned_resource_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-start-request-callback-pending")
    {
        is_aaa_start_request_callback_pending = value;
        is_aaa_start_request_callback_pending.value_namespace = name_space;
        is_aaa_start_request_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-owned-resource")
    {
        is_aaa_owned_resource = value;
        is_aaa_owned_resource.value_namespace = name_space;
        is_aaa_owned_resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-disconnect-requested")
    {
        is_aaa_disconnect_requested = value;
        is_aaa_disconnect_requested.value_namespace = name_space;
        is_aaa_disconnect_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aaa-disconnect-received")
    {
        is_aaa_disconnect_received = value;
        is_aaa_disconnect_received.value_namespace = name_space;
        is_aaa_disconnect_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sub-db-activate-callback-pending")
    {
        is_sub_db_activate_callback_pending = value;
        is_sub_db_activate_callback_pending.value_namespace = name_space;
        is_sub_db_activate_callback_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pads-sent")
    {
        is_pads_sent = value;
        is_pads_sent.value_namespace = name_space;
        is_pads_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-padt-received")
    {
        is_padt_received = value;
        is_padt_received.value_namespace = name_space;
        is_padt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-flight")
    {
        is_in_flight = value;
        is_in_flight.value_namespace = name_space;
        is_in_flight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-radius-override")
    {
        is_radius_override = value;
        is_radius_override.value_namespace = name_space;
        is_radius_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-notifications")
    {
        expected_notifications = value;
        expected_notifications.value_namespace = name_space;
        expected_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-notifications")
    {
        received_notifications = value;
        received_notifications.value_namespace = name_space;
        received_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
        srg_state.value_namespace = name_space;
        srg_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srg-data-received")
    {
        is_srg_data_received = value;
        is_srg_data_received.value_namespace = name_space;
        is_srg_data_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-iedge-data-received")
    {
        is_iedge_data_received = value;
        is_iedge_data_received.value_namespace = name_space;
        is_iedge_data_received.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "access-interface")
    {
        access_interface.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "sub-label")
    {
        sub_label.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "cdm-object-handle")
    {
        cdm_object_handle.yfilter = yfilter;
    }
    if(value_path == "chkpt-id")
    {
        chkpt_id.yfilter = yfilter;
    }
    if(value_path == "punted-count")
    {
        punted_count.yfilter = yfilter;
    }
    if(value_path == "port-limit")
    {
        port_limit.yfilter = yfilter;
    }
    if(value_path == "is-counted")
    {
        is_counted.yfilter = yfilter;
    }
    if(value_path == "is-vlan-outer-tag")
    {
        is_vlan_outer_tag.yfilter = yfilter;
    }
    if(value_path == "is-vlan-inner-tag")
    {
        is_vlan_inner_tag.yfilter = yfilter;
    }
    if(value_path == "is-cleanup-pending")
    {
        is_cleanup_pending.yfilter = yfilter;
    }
    if(value_path == "is-disconnect-done-pending")
    {
        is_disconnect_done_pending.yfilter = yfilter;
    }
    if(value_path == "is-delete-done-pending")
    {
        is_delete_done_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-create-callback-pending")
    {
        is_intf_create_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-publish-encaps-attr-pending")
    {
        is_publish_encaps_attr_pending.yfilter = yfilter;
    }
    if(value_path == "is-publish-encaps-attr-cb-pending")
    {
        is_publish_encaps_attr_cb_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-delete-callback-pending")
    {
        is_intf_delete_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-intf-delete-pending")
    {
        is_intf_delete_pending.yfilter = yfilter;
    }
    if(value_path == "is-im-owned-resource")
    {
        is_im_owned_resource.yfilter = yfilter;
    }
    if(value_path == "is-im-final-received")
    {
        is_im_final_received.yfilter = yfilter;
    }
    if(value_path == "is-im-owned-resource-missing")
    {
        is_im_owned_resource_missing.yfilter = yfilter;
    }
    if(value_path == "is-aaa-start-request-callback-pending")
    {
        is_aaa_start_request_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-aaa-owned-resource")
    {
        is_aaa_owned_resource.yfilter = yfilter;
    }
    if(value_path == "is-aaa-disconnect-requested")
    {
        is_aaa_disconnect_requested.yfilter = yfilter;
    }
    if(value_path == "is-aaa-disconnect-received")
    {
        is_aaa_disconnect_received.yfilter = yfilter;
    }
    if(value_path == "is-sub-db-activate-callback-pending")
    {
        is_sub_db_activate_callback_pending.yfilter = yfilter;
    }
    if(value_path == "is-pads-sent")
    {
        is_pads_sent.yfilter = yfilter;
    }
    if(value_path == "is-padt-received")
    {
        is_padt_received.yfilter = yfilter;
    }
    if(value_path == "is-in-flight")
    {
        is_in_flight.yfilter = yfilter;
    }
    if(value_path == "is-radius-override")
    {
        is_radius_override.yfilter = yfilter;
    }
    if(value_path == "expected-notifications")
    {
        expected_notifications.yfilter = yfilter;
    }
    if(value_path == "received-notifications")
    {
        received_notifications.yfilter = yfilter;
    }
    if(value_path == "srg-state")
    {
        srg_state.yfilter = yfilter;
    }
    if(value_path == "is-srg-data-received")
    {
        is_srg_data_received.yfilter = yfilter;
    }
    if(value_path == "is-iedge-data-received")
    {
        is_iedge_data_received.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "vlan-outer-tag" || name == "vlan-inner-tag" || name == "interface" || name == "access-interface" || name == "session-id" || name == "sub-label" || name == "peer-mac-address" || name == "state" || name == "cdm-object-handle" || name == "chkpt-id" || name == "punted-count" || name == "port-limit" || name == "is-counted" || name == "is-vlan-outer-tag" || name == "is-vlan-inner-tag" || name == "is-cleanup-pending" || name == "is-disconnect-done-pending" || name == "is-delete-done-pending" || name == "is-intf-create-callback-pending" || name == "is-publish-encaps-attr-pending" || name == "is-publish-encaps-attr-cb-pending" || name == "is-intf-delete-callback-pending" || name == "is-intf-delete-pending" || name == "is-im-owned-resource" || name == "is-im-final-received" || name == "is-im-owned-resource-missing" || name == "is-aaa-start-request-callback-pending" || name == "is-aaa-owned-resource" || name == "is-aaa-disconnect-requested" || name == "is-aaa-disconnect-received" || name == "is-sub-db-activate-callback-pending" || name == "is-pads-sent" || name == "is-padt-received" || name == "is-in-flight" || name == "is-radius-override" || name == "expected-notifications" || name == "received-notifications" || name == "srg-state" || name == "is-srg-data-received" || name == "is-iedge-data-received")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::Tags()
    :
    is_service_name{YType::int32, "is-service-name"},
    is_max_payload{YType::int32, "is-max-payload"},
    is_host_uniq{YType::int32, "is-host-uniq"},
    is_relay_session_id{YType::int32, "is-relay-session-id"},
    is_vendor_specific{YType::int32, "is-vendor-specific"},
    is_iwf{YType::int32, "is-iwf"},
    is_remote_id{YType::int32, "is-remote-id"},
    is_circuit_id{YType::int32, "is-circuit-id"},
    is_dsl_tag{YType::int32, "is-dsl-tag"},
    service_name{YType::str, "service-name"},
    max_payload{YType::uint32, "max-payload"},
    host_uniq{YType::str, "host-uniq"},
    relay_session_id{YType::str, "relay-session-id"},
    remote_id{YType::str, "remote-id"},
    circuit_id{YType::str, "circuit-id"},
    is_dsl_actual_up{YType::int32, "is-dsl-actual-up"},
    is_dsl_actual_down{YType::int32, "is-dsl-actual-down"},
    is_dsl_min_up{YType::int32, "is-dsl-min-up"},
    is_dsl_min_down{YType::int32, "is-dsl-min-down"},
    is_dsl_attain_up{YType::int32, "is-dsl-attain-up"},
    is_dsl_attain_down{YType::int32, "is-dsl-attain-down"},
    is_dsl_max_up{YType::int32, "is-dsl-max-up"},
    is_dsl_max_down{YType::int32, "is-dsl-max-down"},
    is_dsl_min_up_low{YType::int32, "is-dsl-min-up-low"},
    is_dsl_min_down_low{YType::int32, "is-dsl-min-down-low"},
    is_dsl_max_delay_up{YType::int32, "is-dsl-max-delay-up"},
    is_dsl_actual_delay_up{YType::int32, "is-dsl-actual-delay-up"},
    is_dsl_max_delay_down{YType::int32, "is-dsl-max-delay-down"},
    is_dsl_actual_delay_down{YType::int32, "is-dsl-actual-delay-down"},
    is_access_loop_encapsulation{YType::int32, "is-access-loop-encapsulation"},
    dsl_actual_up{YType::uint32, "dsl-actual-up"},
    dsl_actual_down{YType::uint32, "dsl-actual-down"},
    dsl_min_up{YType::uint32, "dsl-min-up"},
    dsl_min_down{YType::uint32, "dsl-min-down"},
    dsl_attain_up{YType::uint32, "dsl-attain-up"},
    dsl_attain_down{YType::uint32, "dsl-attain-down"},
    dsl_max_up{YType::uint32, "dsl-max-up"},
    dsl_max_down{YType::uint32, "dsl-max-down"},
    dsl_min_up_low{YType::uint32, "dsl-min-up-low"},
    dsl_min_down_low{YType::uint32, "dsl-min-down-low"},
    dsl_max_delay_up{YType::uint32, "dsl-max-delay-up"},
    dsl_actual_delay_up{YType::uint32, "dsl-actual-delay-up"},
    dsl_max_delay_down{YType::uint32, "dsl-max-delay-down"},
    dsl_actual_delay_down{YType::uint32, "dsl-actual-delay-down"}
        ,
    access_loop_encapsulation(std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation>())
{
    access_loop_encapsulation->parent = this;

    yang_name = "tags"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::~Tags()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::has_data() const
{
    if (is_presence_container) return true;
    return is_service_name.is_set
	|| is_max_payload.is_set
	|| is_host_uniq.is_set
	|| is_relay_session_id.is_set
	|| is_vendor_specific.is_set
	|| is_iwf.is_set
	|| is_remote_id.is_set
	|| is_circuit_id.is_set
	|| is_dsl_tag.is_set
	|| service_name.is_set
	|| max_payload.is_set
	|| host_uniq.is_set
	|| relay_session_id.is_set
	|| remote_id.is_set
	|| circuit_id.is_set
	|| is_dsl_actual_up.is_set
	|| is_dsl_actual_down.is_set
	|| is_dsl_min_up.is_set
	|| is_dsl_min_down.is_set
	|| is_dsl_attain_up.is_set
	|| is_dsl_attain_down.is_set
	|| is_dsl_max_up.is_set
	|| is_dsl_max_down.is_set
	|| is_dsl_min_up_low.is_set
	|| is_dsl_min_down_low.is_set
	|| is_dsl_max_delay_up.is_set
	|| is_dsl_actual_delay_up.is_set
	|| is_dsl_max_delay_down.is_set
	|| is_dsl_actual_delay_down.is_set
	|| is_access_loop_encapsulation.is_set
	|| dsl_actual_up.is_set
	|| dsl_actual_down.is_set
	|| dsl_min_up.is_set
	|| dsl_min_down.is_set
	|| dsl_attain_up.is_set
	|| dsl_attain_down.is_set
	|| dsl_max_up.is_set
	|| dsl_max_down.is_set
	|| dsl_min_up_low.is_set
	|| dsl_min_down_low.is_set
	|| dsl_max_delay_up.is_set
	|| dsl_actual_delay_up.is_set
	|| dsl_max_delay_down.is_set
	|| dsl_actual_delay_down.is_set
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_data());
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_service_name.yfilter)
	|| ydk::is_set(is_max_payload.yfilter)
	|| ydk::is_set(is_host_uniq.yfilter)
	|| ydk::is_set(is_relay_session_id.yfilter)
	|| ydk::is_set(is_vendor_specific.yfilter)
	|| ydk::is_set(is_iwf.yfilter)
	|| ydk::is_set(is_remote_id.yfilter)
	|| ydk::is_set(is_circuit_id.yfilter)
	|| ydk::is_set(is_dsl_tag.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(max_payload.yfilter)
	|| ydk::is_set(host_uniq.yfilter)
	|| ydk::is_set(relay_session_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(is_dsl_actual_up.yfilter)
	|| ydk::is_set(is_dsl_actual_down.yfilter)
	|| ydk::is_set(is_dsl_min_up.yfilter)
	|| ydk::is_set(is_dsl_min_down.yfilter)
	|| ydk::is_set(is_dsl_attain_up.yfilter)
	|| ydk::is_set(is_dsl_attain_down.yfilter)
	|| ydk::is_set(is_dsl_max_up.yfilter)
	|| ydk::is_set(is_dsl_max_down.yfilter)
	|| ydk::is_set(is_dsl_min_up_low.yfilter)
	|| ydk::is_set(is_dsl_min_down_low.yfilter)
	|| ydk::is_set(is_dsl_max_delay_up.yfilter)
	|| ydk::is_set(is_dsl_actual_delay_up.yfilter)
	|| ydk::is_set(is_dsl_max_delay_down.yfilter)
	|| ydk::is_set(is_dsl_actual_delay_down.yfilter)
	|| ydk::is_set(is_access_loop_encapsulation.yfilter)
	|| ydk::is_set(dsl_actual_up.yfilter)
	|| ydk::is_set(dsl_actual_down.yfilter)
	|| ydk::is_set(dsl_min_up.yfilter)
	|| ydk::is_set(dsl_min_down.yfilter)
	|| ydk::is_set(dsl_attain_up.yfilter)
	|| ydk::is_set(dsl_attain_down.yfilter)
	|| ydk::is_set(dsl_max_up.yfilter)
	|| ydk::is_set(dsl_max_down.yfilter)
	|| ydk::is_set(dsl_min_up_low.yfilter)
	|| ydk::is_set(dsl_min_down_low.yfilter)
	|| ydk::is_set(dsl_max_delay_up.yfilter)
	|| ydk::is_set(dsl_actual_delay_up.yfilter)
	|| ydk::is_set(dsl_max_delay_down.yfilter)
	|| ydk::is_set(dsl_actual_delay_down.yfilter)
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_operation());
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_service_name.is_set || is_set(is_service_name.yfilter)) leaf_name_data.push_back(is_service_name.get_name_leafdata());
    if (is_max_payload.is_set || is_set(is_max_payload.yfilter)) leaf_name_data.push_back(is_max_payload.get_name_leafdata());
    if (is_host_uniq.is_set || is_set(is_host_uniq.yfilter)) leaf_name_data.push_back(is_host_uniq.get_name_leafdata());
    if (is_relay_session_id.is_set || is_set(is_relay_session_id.yfilter)) leaf_name_data.push_back(is_relay_session_id.get_name_leafdata());
    if (is_vendor_specific.is_set || is_set(is_vendor_specific.yfilter)) leaf_name_data.push_back(is_vendor_specific.get_name_leafdata());
    if (is_iwf.is_set || is_set(is_iwf.yfilter)) leaf_name_data.push_back(is_iwf.get_name_leafdata());
    if (is_remote_id.is_set || is_set(is_remote_id.yfilter)) leaf_name_data.push_back(is_remote_id.get_name_leafdata());
    if (is_circuit_id.is_set || is_set(is_circuit_id.yfilter)) leaf_name_data.push_back(is_circuit_id.get_name_leafdata());
    if (is_dsl_tag.is_set || is_set(is_dsl_tag.yfilter)) leaf_name_data.push_back(is_dsl_tag.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (max_payload.is_set || is_set(max_payload.yfilter)) leaf_name_data.push_back(max_payload.get_name_leafdata());
    if (host_uniq.is_set || is_set(host_uniq.yfilter)) leaf_name_data.push_back(host_uniq.get_name_leafdata());
    if (relay_session_id.is_set || is_set(relay_session_id.yfilter)) leaf_name_data.push_back(relay_session_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (is_dsl_actual_up.is_set || is_set(is_dsl_actual_up.yfilter)) leaf_name_data.push_back(is_dsl_actual_up.get_name_leafdata());
    if (is_dsl_actual_down.is_set || is_set(is_dsl_actual_down.yfilter)) leaf_name_data.push_back(is_dsl_actual_down.get_name_leafdata());
    if (is_dsl_min_up.is_set || is_set(is_dsl_min_up.yfilter)) leaf_name_data.push_back(is_dsl_min_up.get_name_leafdata());
    if (is_dsl_min_down.is_set || is_set(is_dsl_min_down.yfilter)) leaf_name_data.push_back(is_dsl_min_down.get_name_leafdata());
    if (is_dsl_attain_up.is_set || is_set(is_dsl_attain_up.yfilter)) leaf_name_data.push_back(is_dsl_attain_up.get_name_leafdata());
    if (is_dsl_attain_down.is_set || is_set(is_dsl_attain_down.yfilter)) leaf_name_data.push_back(is_dsl_attain_down.get_name_leafdata());
    if (is_dsl_max_up.is_set || is_set(is_dsl_max_up.yfilter)) leaf_name_data.push_back(is_dsl_max_up.get_name_leafdata());
    if (is_dsl_max_down.is_set || is_set(is_dsl_max_down.yfilter)) leaf_name_data.push_back(is_dsl_max_down.get_name_leafdata());
    if (is_dsl_min_up_low.is_set || is_set(is_dsl_min_up_low.yfilter)) leaf_name_data.push_back(is_dsl_min_up_low.get_name_leafdata());
    if (is_dsl_min_down_low.is_set || is_set(is_dsl_min_down_low.yfilter)) leaf_name_data.push_back(is_dsl_min_down_low.get_name_leafdata());
    if (is_dsl_max_delay_up.is_set || is_set(is_dsl_max_delay_up.yfilter)) leaf_name_data.push_back(is_dsl_max_delay_up.get_name_leafdata());
    if (is_dsl_actual_delay_up.is_set || is_set(is_dsl_actual_delay_up.yfilter)) leaf_name_data.push_back(is_dsl_actual_delay_up.get_name_leafdata());
    if (is_dsl_max_delay_down.is_set || is_set(is_dsl_max_delay_down.yfilter)) leaf_name_data.push_back(is_dsl_max_delay_down.get_name_leafdata());
    if (is_dsl_actual_delay_down.is_set || is_set(is_dsl_actual_delay_down.yfilter)) leaf_name_data.push_back(is_dsl_actual_delay_down.get_name_leafdata());
    if (is_access_loop_encapsulation.is_set || is_set(is_access_loop_encapsulation.yfilter)) leaf_name_data.push_back(is_access_loop_encapsulation.get_name_leafdata());
    if (dsl_actual_up.is_set || is_set(dsl_actual_up.yfilter)) leaf_name_data.push_back(dsl_actual_up.get_name_leafdata());
    if (dsl_actual_down.is_set || is_set(dsl_actual_down.yfilter)) leaf_name_data.push_back(dsl_actual_down.get_name_leafdata());
    if (dsl_min_up.is_set || is_set(dsl_min_up.yfilter)) leaf_name_data.push_back(dsl_min_up.get_name_leafdata());
    if (dsl_min_down.is_set || is_set(dsl_min_down.yfilter)) leaf_name_data.push_back(dsl_min_down.get_name_leafdata());
    if (dsl_attain_up.is_set || is_set(dsl_attain_up.yfilter)) leaf_name_data.push_back(dsl_attain_up.get_name_leafdata());
    if (dsl_attain_down.is_set || is_set(dsl_attain_down.yfilter)) leaf_name_data.push_back(dsl_attain_down.get_name_leafdata());
    if (dsl_max_up.is_set || is_set(dsl_max_up.yfilter)) leaf_name_data.push_back(dsl_max_up.get_name_leafdata());
    if (dsl_max_down.is_set || is_set(dsl_max_down.yfilter)) leaf_name_data.push_back(dsl_max_down.get_name_leafdata());
    if (dsl_min_up_low.is_set || is_set(dsl_min_up_low.yfilter)) leaf_name_data.push_back(dsl_min_up_low.get_name_leafdata());
    if (dsl_min_down_low.is_set || is_set(dsl_min_down_low.yfilter)) leaf_name_data.push_back(dsl_min_down_low.get_name_leafdata());
    if (dsl_max_delay_up.is_set || is_set(dsl_max_delay_up.yfilter)) leaf_name_data.push_back(dsl_max_delay_up.get_name_leafdata());
    if (dsl_actual_delay_up.is_set || is_set(dsl_actual_delay_up.yfilter)) leaf_name_data.push_back(dsl_actual_delay_up.get_name_leafdata());
    if (dsl_max_delay_down.is_set || is_set(dsl_max_delay_down.yfilter)) leaf_name_data.push_back(dsl_max_delay_down.get_name_leafdata());
    if (dsl_actual_delay_down.is_set || is_set(dsl_actual_delay_down.yfilter)) leaf_name_data.push_back(dsl_actual_delay_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-loop-encapsulation")
    {
        if(access_loop_encapsulation == nullptr)
        {
            access_loop_encapsulation = std::make_shared<Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation>();
        }
        return access_loop_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_loop_encapsulation != nullptr)
    {
        _children["access-loop-encapsulation"] = access_loop_encapsulation;
    }

    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-service-name")
    {
        is_service_name = value;
        is_service_name.value_namespace = name_space;
        is_service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-payload")
    {
        is_max_payload = value;
        is_max_payload.value_namespace = name_space;
        is_max_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-host-uniq")
    {
        is_host_uniq = value;
        is_host_uniq.value_namespace = name_space;
        is_host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-relay-session-id")
    {
        is_relay_session_id = value;
        is_relay_session_id.value_namespace = name_space;
        is_relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vendor-specific")
    {
        is_vendor_specific = value;
        is_vendor_specific.value_namespace = name_space;
        is_vendor_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-iwf")
    {
        is_iwf = value;
        is_iwf.value_namespace = name_space;
        is_iwf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-id")
    {
        is_remote_id = value;
        is_remote_id.value_namespace = name_space;
        is_remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-circuit-id")
    {
        is_circuit_id = value;
        is_circuit_id.value_namespace = name_space;
        is_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-tag")
    {
        is_dsl_tag = value;
        is_dsl_tag.value_namespace = name_space;
        is_dsl_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-payload")
    {
        max_payload = value;
        max_payload.value_namespace = name_space;
        max_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-uniq")
    {
        host_uniq = value;
        host_uniq.value_namespace = name_space;
        host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id = value;
        relay_session_id.value_namespace = name_space;
        relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-up")
    {
        is_dsl_actual_up = value;
        is_dsl_actual_up.value_namespace = name_space;
        is_dsl_actual_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-down")
    {
        is_dsl_actual_down = value;
        is_dsl_actual_down.value_namespace = name_space;
        is_dsl_actual_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-up")
    {
        is_dsl_min_up = value;
        is_dsl_min_up.value_namespace = name_space;
        is_dsl_min_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-down")
    {
        is_dsl_min_down = value;
        is_dsl_min_down.value_namespace = name_space;
        is_dsl_min_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-attain-up")
    {
        is_dsl_attain_up = value;
        is_dsl_attain_up.value_namespace = name_space;
        is_dsl_attain_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-attain-down")
    {
        is_dsl_attain_down = value;
        is_dsl_attain_down.value_namespace = name_space;
        is_dsl_attain_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-up")
    {
        is_dsl_max_up = value;
        is_dsl_max_up.value_namespace = name_space;
        is_dsl_max_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-down")
    {
        is_dsl_max_down = value;
        is_dsl_max_down.value_namespace = name_space;
        is_dsl_max_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-up-low")
    {
        is_dsl_min_up_low = value;
        is_dsl_min_up_low.value_namespace = name_space;
        is_dsl_min_up_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-min-down-low")
    {
        is_dsl_min_down_low = value;
        is_dsl_min_down_low.value_namespace = name_space;
        is_dsl_min_down_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-delay-up")
    {
        is_dsl_max_delay_up = value;
        is_dsl_max_delay_up.value_namespace = name_space;
        is_dsl_max_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-delay-up")
    {
        is_dsl_actual_delay_up = value;
        is_dsl_actual_delay_up.value_namespace = name_space;
        is_dsl_actual_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-max-delay-down")
    {
        is_dsl_max_delay_down = value;
        is_dsl_max_delay_down.value_namespace = name_space;
        is_dsl_max_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dsl-actual-delay-down")
    {
        is_dsl_actual_delay_down = value;
        is_dsl_actual_delay_down.value_namespace = name_space;
        is_dsl_actual_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-access-loop-encapsulation")
    {
        is_access_loop_encapsulation = value;
        is_access_loop_encapsulation.value_namespace = name_space;
        is_access_loop_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up = value;
        dsl_actual_up.value_namespace = name_space;
        dsl_actual_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down = value;
        dsl_actual_down.value_namespace = name_space;
        dsl_actual_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up = value;
        dsl_min_up.value_namespace = name_space;
        dsl_min_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down = value;
        dsl_min_down.value_namespace = name_space;
        dsl_min_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up = value;
        dsl_attain_up.value_namespace = name_space;
        dsl_attain_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down = value;
        dsl_attain_down.value_namespace = name_space;
        dsl_attain_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up = value;
        dsl_max_up.value_namespace = name_space;
        dsl_max_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down = value;
        dsl_max_down.value_namespace = name_space;
        dsl_max_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low = value;
        dsl_min_up_low.value_namespace = name_space;
        dsl_min_up_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low = value;
        dsl_min_down_low.value_namespace = name_space;
        dsl_min_down_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up = value;
        dsl_max_delay_up.value_namespace = name_space;
        dsl_max_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up = value;
        dsl_actual_delay_up.value_namespace = name_space;
        dsl_actual_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down = value;
        dsl_max_delay_down.value_namespace = name_space;
        dsl_max_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down = value;
        dsl_actual_delay_down.value_namespace = name_space;
        dsl_actual_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-service-name")
    {
        is_service_name.yfilter = yfilter;
    }
    if(value_path == "is-max-payload")
    {
        is_max_payload.yfilter = yfilter;
    }
    if(value_path == "is-host-uniq")
    {
        is_host_uniq.yfilter = yfilter;
    }
    if(value_path == "is-relay-session-id")
    {
        is_relay_session_id.yfilter = yfilter;
    }
    if(value_path == "is-vendor-specific")
    {
        is_vendor_specific.yfilter = yfilter;
    }
    if(value_path == "is-iwf")
    {
        is_iwf.yfilter = yfilter;
    }
    if(value_path == "is-remote-id")
    {
        is_remote_id.yfilter = yfilter;
    }
    if(value_path == "is-circuit-id")
    {
        is_circuit_id.yfilter = yfilter;
    }
    if(value_path == "is-dsl-tag")
    {
        is_dsl_tag.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "max-payload")
    {
        max_payload.yfilter = yfilter;
    }
    if(value_path == "host-uniq")
    {
        host_uniq.yfilter = yfilter;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-up")
    {
        is_dsl_actual_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-down")
    {
        is_dsl_actual_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-up")
    {
        is_dsl_min_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-down")
    {
        is_dsl_min_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-attain-up")
    {
        is_dsl_attain_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-attain-down")
    {
        is_dsl_attain_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-up")
    {
        is_dsl_max_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-down")
    {
        is_dsl_max_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-up-low")
    {
        is_dsl_min_up_low.yfilter = yfilter;
    }
    if(value_path == "is-dsl-min-down-low")
    {
        is_dsl_min_down_low.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-delay-up")
    {
        is_dsl_max_delay_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-delay-up")
    {
        is_dsl_actual_delay_up.yfilter = yfilter;
    }
    if(value_path == "is-dsl-max-delay-down")
    {
        is_dsl_max_delay_down.yfilter = yfilter;
    }
    if(value_path == "is-dsl-actual-delay-down")
    {
        is_dsl_actual_delay_down.yfilter = yfilter;
    }
    if(value_path == "is-access-loop-encapsulation")
    {
        is_access_loop_encapsulation.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down.yfilter = yfilter;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-loop-encapsulation" || name == "is-service-name" || name == "is-max-payload" || name == "is-host-uniq" || name == "is-relay-session-id" || name == "is-vendor-specific" || name == "is-iwf" || name == "is-remote-id" || name == "is-circuit-id" || name == "is-dsl-tag" || name == "service-name" || name == "max-payload" || name == "host-uniq" || name == "relay-session-id" || name == "remote-id" || name == "circuit-id" || name == "is-dsl-actual-up" || name == "is-dsl-actual-down" || name == "is-dsl-min-up" || name == "is-dsl-min-down" || name == "is-dsl-attain-up" || name == "is-dsl-attain-down" || name == "is-dsl-max-up" || name == "is-dsl-max-down" || name == "is-dsl-min-up-low" || name == "is-dsl-min-down-low" || name == "is-dsl-max-delay-up" || name == "is-dsl-actual-delay-up" || name == "is-dsl-max-delay-down" || name == "is-dsl-actual-delay-down" || name == "is-access-loop-encapsulation" || name == "dsl-actual-up" || name == "dsl-actual-down" || name == "dsl-min-up" || name == "dsl-min-down" || name == "dsl-attain-up" || name == "dsl-attain-down" || name == "dsl-max-up" || name == "dsl-max-down" || name == "dsl-min-up-low" || name == "dsl-min-down-low" || name == "dsl-max-delay-up" || name == "dsl-actual-delay-up" || name == "dsl-max-delay-down" || name == "dsl-actual-delay-down")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::AccessLoopEncapsulation()
    :
    data_link{YType::uint8, "data-link"},
    encaps1{YType::uint8, "encaps1"},
    encaps2{YType::uint8, "encaps2"}
{

    yang_name = "access-loop-encapsulation"; yang_parent_name = "tags"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::~AccessLoopEncapsulation()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return data_link.is_set
	|| encaps1.is_set
	|| encaps2.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_link.yfilter)
	|| ydk::is_set(encaps1.yfilter)
	|| ydk::is_set(encaps2.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-loop-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_link.is_set || is_set(data_link.yfilter)) leaf_name_data.push_back(data_link.get_name_leafdata());
    if (encaps1.is_set || is_set(encaps1.yfilter)) leaf_name_data.push_back(encaps1.get_name_leafdata());
    if (encaps2.is_set || is_set(encaps2.yfilter)) leaf_name_data.push_back(encaps2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-link")
    {
        data_link = value;
        data_link.value_namespace = name_space;
        data_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps1")
    {
        encaps1 = value;
        encaps1.value_namespace = name_space;
        encaps1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps2")
    {
        encaps2 = value;
        encaps2.value_namespace = name_space;
        encaps2.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-link")
    {
        data_link.yfilter = yfilter;
    }
    if(value_path == "encaps1")
    {
        encaps1.yfilter = yfilter;
    }
    if(value_path == "encaps2")
    {
        encaps2.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::Tags::AccessLoopEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link" || name == "encaps1" || name == "encaps2")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::VlanOuterTag()
    :
    ether_type{YType::uint16, "ether-type"},
    user_priority{YType::uint8, "user-priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "vlan-outer-tag"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::~VlanOuterTag()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| user_priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-outer-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanOuterTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "user-priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::VlanInnerTag()
    :
    ether_type{YType::uint16, "ether-type"},
    user_priority{YType::uint8, "user-priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "vlan-inner-tag"; yang_parent_name = "session-idb"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::~VlanInnerTag()
{
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| user_priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(user_priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inner-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (user_priority.is_set || is_set(user_priority.yfilter)) leaf_name_data.push_back(user_priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-priority")
    {
        user_priority = value;
        user_priority.value_namespace = name_space;
        user_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "user-priority")
    {
        user_priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::DisconnectHistoryUnique::Entry::SessionIdb::VlanInnerTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "user-priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::Statistics()
    :
    packet_counts(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts>())
    , packet_error_counts(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketErrorCounts>())
{
    packet_counts->parent = this;
    packet_error_counts->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::~Statistics()
{
}

bool Pppoe::Nodes::Node::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (packet_counts !=  nullptr && packet_counts->has_data())
	|| (packet_error_counts !=  nullptr && packet_error_counts->has_data());
}

bool Pppoe::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet_counts !=  nullptr && packet_counts->has_operation())
	|| (packet_error_counts !=  nullptr && packet_error_counts->has_operation());
}

std::string Pppoe::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counts")
    {
        if(packet_counts == nullptr)
        {
            packet_counts = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts>();
        }
        return packet_counts;
    }

    if(child_yang_name == "packet-error-counts")
    {
        if(packet_error_counts == nullptr)
        {
            packet_error_counts = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketErrorCounts>();
        }
        return packet_error_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packet_counts != nullptr)
    {
        _children["packet-counts"] = packet_counts;
    }

    if(packet_error_counts != nullptr)
    {
        _children["packet-error-counts"] = packet_error_counts;
    }

    return _children;
}

void Pppoe::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "packet-error-counts")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PacketCounts()
    :
    padi(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padi>())
    , pado(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Pado>())
    , padr(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padr>())
    , pads_success(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess>())
    , pads_error(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError>())
    , padt(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padt>())
    , session_state(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState>())
    , other(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Other>())
{
    padi->parent = this;
    pado->parent = this;
    padr->parent = this;
    pads_success->parent = this;
    pads_error->parent = this;
    padt->parent = this;
    session_state->parent = this;
    other->parent = this;

    yang_name = "packet-counts"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::~PacketCounts()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::has_data() const
{
    if (is_presence_container) return true;
    return (padi !=  nullptr && padi->has_data())
	|| (pado !=  nullptr && pado->has_data())
	|| (padr !=  nullptr && padr->has_data())
	|| (pads_success !=  nullptr && pads_success->has_data())
	|| (pads_error !=  nullptr && pads_error->has_data())
	|| (padt !=  nullptr && padt->has_data())
	|| (session_state !=  nullptr && session_state->has_data())
	|| (other !=  nullptr && other->has_data());
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::has_operation() const
{
    return is_set(yfilter)
	|| (padi !=  nullptr && padi->has_operation())
	|| (pado !=  nullptr && pado->has_operation())
	|| (padr !=  nullptr && padr->has_operation())
	|| (pads_success !=  nullptr && pads_success->has_operation())
	|| (pads_error !=  nullptr && pads_error->has_operation())
	|| (padt !=  nullptr && padt->has_operation())
	|| (session_state !=  nullptr && session_state->has_operation())
	|| (other !=  nullptr && other->has_operation());
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padi")
    {
        if(padi == nullptr)
        {
            padi = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padi>();
        }
        return padi;
    }

    if(child_yang_name == "pado")
    {
        if(pado == nullptr)
        {
            pado = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Pado>();
        }
        return pado;
    }

    if(child_yang_name == "padr")
    {
        if(padr == nullptr)
        {
            padr = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padr>();
        }
        return padr;
    }

    if(child_yang_name == "pads-success")
    {
        if(pads_success == nullptr)
        {
            pads_success = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess>();
        }
        return pads_success;
    }

    if(child_yang_name == "pads-error")
    {
        if(pads_error == nullptr)
        {
            pads_error = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError>();
        }
        return pads_error;
    }

    if(child_yang_name == "padt")
    {
        if(padt == nullptr)
        {
            padt = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padt>();
        }
        return padt;
    }

    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState>();
        }
        return session_state;
    }

    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Other>();
        }
        return other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padi != nullptr)
    {
        _children["padi"] = padi;
    }

    if(pado != nullptr)
    {
        _children["pado"] = pado;
    }

    if(padr != nullptr)
    {
        _children["padr"] = padr;
    }

    if(pads_success != nullptr)
    {
        _children["pads-success"] = pads_success;
    }

    if(pads_error != nullptr)
    {
        _children["pads-error"] = pads_error;
    }

    if(padt != nullptr)
    {
        _children["padt"] = padt;
    }

    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    if(other != nullptr)
    {
        _children["other"] = other;
    }

    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padi" || name == "pado" || name == "padr" || name == "pads-success" || name == "pads-error" || name == "padt" || name == "session-state" || name == "other")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::Padi()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padi"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::~Padi()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::Pado()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pado"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::~Pado()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pado";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::Padr()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padr"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::~Padr()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::PadsSuccess()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pads-success"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::~PadsSuccess()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::PadsError()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "pads-error"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::~PadsError()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::Padt()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "padt"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::~Padt()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::SessionState()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "session-state"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::~SessionState()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Other::Other()
    :
    sent{YType::uint32, "sent"},
    received{YType::uint32, "received"},
    dropped{YType::uint32, "dropped"}
{

    yang_name = "other"; yang_parent_name = "packet-counts"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Other::~Other()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Other::has_data() const
{
    if (is_presence_container) return true;
    return sent.is_set
	|| received.is_set
	|| dropped.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Other::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Other::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Other::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Other::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "dropped")
        return true;
    return false;
}

Pppoe::Nodes::Node::Statistics::PacketErrorCounts::PacketErrorCounts()
    :
    no_interface_handle{YType::uint32, "no-interface-handle"},
    no_packet_payload{YType::uint32, "no-packet-payload"},
    no_packet_mac_address{YType::uint32, "no-packet-mac-address"},
    invalid_version_type_value{YType::uint32, "invalid-version-type-value"},
    bad_packet_length{YType::uint32, "bad-packet-length"},
    unknown_interface{YType::uint32, "unknown-interface"},
    pado_received{YType::uint32, "pado-received"},
    pads_received{YType::uint32, "pads-received"},
    unknown_packet_type_received{YType::uint32, "unknown-packet-type-received"},
    unexpected_session_id_in_packet{YType::uint32, "unexpected-session-id-in-packet"},
    no_service_name_tag{YType::uint32, "no-service-name-tag"},
    padt_for_unknown_session{YType::uint32, "padt-for-unknown-session"},
    padt_with_wrong_peer_mac{YType::uint32, "padt-with-wrong-peer-mac"},
    padt_with_wrong_vlan_tags{YType::uint32, "padt-with-wrong-vlan-tags"},
    zero_length_host_uniq{YType::uint32, "zero-length-host-uniq"},
    padt_before_pads_sent{YType::uint32, "padt-before-pads-sent"},
    session_stage_packet_for_unknown_session{YType::uint32, "session-stage-packet-for-unknown-session"},
    session_stage_packet_with_wrong_mac{YType::uint32, "session-stage-packet-with-wrong-mac"},
    session_stage_packet_with_wrong_vlan_tags{YType::uint32, "session-stage-packet-with-wrong-vlan-tags"},
    session_stage_packet_with_no_error{YType::uint32, "session-stage-packet-with-no-error"},
    tag_too_short{YType::uint32, "tag-too-short"},
    bad_tag_length_field{YType::uint32, "bad-tag-length-field"},
    multiple_service_name_tags{YType::uint32, "multiple-service-name-tags"},
    multiple_max_payload_tags{YType::uint32, "multiple-max-payload-tags"},
    invalid_max_payload_tag{YType::uint32, "invalid-max-payload-tag"},
    multiple_vendor_specific_tags{YType::uint32, "multiple-vendor-specific-tags"},
    unexpected_ac_name_tag{YType::uint32, "unexpected-ac-name-tag"},
    unexpected_error_tags{YType::uint32, "unexpected-error-tags"},
    unknown_tag_received{YType::uint32, "unknown-tag-received"},
    no_iana_code_invendor_tag{YType::uint32, "no-iana-code-invendor-tag"},
    invalid_iana_code_invendor_tag{YType::uint32, "invalid-iana-code-invendor-tag"},
    vendor_tag_too_short{YType::uint32, "vendor-tag-too-short"},
    bad_vendor_tag_length_field{YType::uint32, "bad-vendor-tag-length-field"},
    multiple_host_uniq_tags{YType::uint32, "multiple-host-uniq-tags"},
    multiple_relay_session_id_tags{YType::uint32, "multiple-relay-session-id-tags"},
    multiple_circuit_id_tags{YType::uint32, "multiple-circuit-id-tags"},
    multiple_remote_id_tags{YType::uint32, "multiple-remote-id-tags"},
    invalid_dsl_tag{YType::uint32, "invalid-dsl-tag"},
    multiple_of_the_same_dsl_tag{YType::uint32, "multiple-of-the-same-dsl-tag"},
    invalid_iwf_tag{YType::uint32, "invalid-iwf-tag"},
    multiple_iwf_tags{YType::uint32, "multiple-iwf-tags"},
    unknownvendor_tag{YType::uint32, "unknownvendor-tag"},
    no_space_left_in_packet{YType::uint32, "no-space-left-in-packet"},
    duplicate_host_uniq_tag_received{YType::uint32, "duplicate-host-uniq-tag-received"},
    duplicate_relay_session_id_tag_received{YType::uint32, "duplicate-relay-session-id-tag-received"},
    packet_too_long{YType::uint32, "packet-too-long"},
    invalid_ale_tag{YType::uint32, "invalid-ale-tag"},
    multiple_ale_tags{YType::uint32, "multiple-ale-tags"},
    invalid_service_name{YType::uint32, "invalid-service-name"},
    invalid_peer_mac{YType::uint32, "invalid-peer-mac"},
    invalid_vlan_tags{YType::uint32, "invalid-vlan-tags"},
    packet_on_srg_slave{YType::uint32, "packet-on-srg-slave"}
{

    yang_name = "packet-error-counts"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Statistics::PacketErrorCounts::~PacketErrorCounts()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketErrorCounts::has_data() const
{
    if (is_presence_container) return true;
    return no_interface_handle.is_set
	|| no_packet_payload.is_set
	|| no_packet_mac_address.is_set
	|| invalid_version_type_value.is_set
	|| bad_packet_length.is_set
	|| unknown_interface.is_set
	|| pado_received.is_set
	|| pads_received.is_set
	|| unknown_packet_type_received.is_set
	|| unexpected_session_id_in_packet.is_set
	|| no_service_name_tag.is_set
	|| padt_for_unknown_session.is_set
	|| padt_with_wrong_peer_mac.is_set
	|| padt_with_wrong_vlan_tags.is_set
	|| zero_length_host_uniq.is_set
	|| padt_before_pads_sent.is_set
	|| session_stage_packet_for_unknown_session.is_set
	|| session_stage_packet_with_wrong_mac.is_set
	|| session_stage_packet_with_wrong_vlan_tags.is_set
	|| session_stage_packet_with_no_error.is_set
	|| tag_too_short.is_set
	|| bad_tag_length_field.is_set
	|| multiple_service_name_tags.is_set
	|| multiple_max_payload_tags.is_set
	|| invalid_max_payload_tag.is_set
	|| multiple_vendor_specific_tags.is_set
	|| unexpected_ac_name_tag.is_set
	|| unexpected_error_tags.is_set
	|| unknown_tag_received.is_set
	|| no_iana_code_invendor_tag.is_set
	|| invalid_iana_code_invendor_tag.is_set
	|| vendor_tag_too_short.is_set
	|| bad_vendor_tag_length_field.is_set
	|| multiple_host_uniq_tags.is_set
	|| multiple_relay_session_id_tags.is_set
	|| multiple_circuit_id_tags.is_set
	|| multiple_remote_id_tags.is_set
	|| invalid_dsl_tag.is_set
	|| multiple_of_the_same_dsl_tag.is_set
	|| invalid_iwf_tag.is_set
	|| multiple_iwf_tags.is_set
	|| unknownvendor_tag.is_set
	|| no_space_left_in_packet.is_set
	|| duplicate_host_uniq_tag_received.is_set
	|| duplicate_relay_session_id_tag_received.is_set
	|| packet_too_long.is_set
	|| invalid_ale_tag.is_set
	|| multiple_ale_tags.is_set
	|| invalid_service_name.is_set
	|| invalid_peer_mac.is_set
	|| invalid_vlan_tags.is_set
	|| packet_on_srg_slave.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketErrorCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_interface_handle.yfilter)
	|| ydk::is_set(no_packet_payload.yfilter)
	|| ydk::is_set(no_packet_mac_address.yfilter)
	|| ydk::is_set(invalid_version_type_value.yfilter)
	|| ydk::is_set(bad_packet_length.yfilter)
	|| ydk::is_set(unknown_interface.yfilter)
	|| ydk::is_set(pado_received.yfilter)
	|| ydk::is_set(pads_received.yfilter)
	|| ydk::is_set(unknown_packet_type_received.yfilter)
	|| ydk::is_set(unexpected_session_id_in_packet.yfilter)
	|| ydk::is_set(no_service_name_tag.yfilter)
	|| ydk::is_set(padt_for_unknown_session.yfilter)
	|| ydk::is_set(padt_with_wrong_peer_mac.yfilter)
	|| ydk::is_set(padt_with_wrong_vlan_tags.yfilter)
	|| ydk::is_set(zero_length_host_uniq.yfilter)
	|| ydk::is_set(padt_before_pads_sent.yfilter)
	|| ydk::is_set(session_stage_packet_for_unknown_session.yfilter)
	|| ydk::is_set(session_stage_packet_with_wrong_mac.yfilter)
	|| ydk::is_set(session_stage_packet_with_wrong_vlan_tags.yfilter)
	|| ydk::is_set(session_stage_packet_with_no_error.yfilter)
	|| ydk::is_set(tag_too_short.yfilter)
	|| ydk::is_set(bad_tag_length_field.yfilter)
	|| ydk::is_set(multiple_service_name_tags.yfilter)
	|| ydk::is_set(multiple_max_payload_tags.yfilter)
	|| ydk::is_set(invalid_max_payload_tag.yfilter)
	|| ydk::is_set(multiple_vendor_specific_tags.yfilter)
	|| ydk::is_set(unexpected_ac_name_tag.yfilter)
	|| ydk::is_set(unexpected_error_tags.yfilter)
	|| ydk::is_set(unknown_tag_received.yfilter)
	|| ydk::is_set(no_iana_code_invendor_tag.yfilter)
	|| ydk::is_set(invalid_iana_code_invendor_tag.yfilter)
	|| ydk::is_set(vendor_tag_too_short.yfilter)
	|| ydk::is_set(bad_vendor_tag_length_field.yfilter)
	|| ydk::is_set(multiple_host_uniq_tags.yfilter)
	|| ydk::is_set(multiple_relay_session_id_tags.yfilter)
	|| ydk::is_set(multiple_circuit_id_tags.yfilter)
	|| ydk::is_set(multiple_remote_id_tags.yfilter)
	|| ydk::is_set(invalid_dsl_tag.yfilter)
	|| ydk::is_set(multiple_of_the_same_dsl_tag.yfilter)
	|| ydk::is_set(invalid_iwf_tag.yfilter)
	|| ydk::is_set(multiple_iwf_tags.yfilter)
	|| ydk::is_set(unknownvendor_tag.yfilter)
	|| ydk::is_set(no_space_left_in_packet.yfilter)
	|| ydk::is_set(duplicate_host_uniq_tag_received.yfilter)
	|| ydk::is_set(duplicate_relay_session_id_tag_received.yfilter)
	|| ydk::is_set(packet_too_long.yfilter)
	|| ydk::is_set(invalid_ale_tag.yfilter)
	|| ydk::is_set(multiple_ale_tags.yfilter)
	|| ydk::is_set(invalid_service_name.yfilter)
	|| ydk::is_set(invalid_peer_mac.yfilter)
	|| ydk::is_set(invalid_vlan_tags.yfilter)
	|| ydk::is_set(packet_on_srg_slave.yfilter);
}

std::string Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-error-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_interface_handle.is_set || is_set(no_interface_handle.yfilter)) leaf_name_data.push_back(no_interface_handle.get_name_leafdata());
    if (no_packet_payload.is_set || is_set(no_packet_payload.yfilter)) leaf_name_data.push_back(no_packet_payload.get_name_leafdata());
    if (no_packet_mac_address.is_set || is_set(no_packet_mac_address.yfilter)) leaf_name_data.push_back(no_packet_mac_address.get_name_leafdata());
    if (invalid_version_type_value.is_set || is_set(invalid_version_type_value.yfilter)) leaf_name_data.push_back(invalid_version_type_value.get_name_leafdata());
    if (bad_packet_length.is_set || is_set(bad_packet_length.yfilter)) leaf_name_data.push_back(bad_packet_length.get_name_leafdata());
    if (unknown_interface.is_set || is_set(unknown_interface.yfilter)) leaf_name_data.push_back(unknown_interface.get_name_leafdata());
    if (pado_received.is_set || is_set(pado_received.yfilter)) leaf_name_data.push_back(pado_received.get_name_leafdata());
    if (pads_received.is_set || is_set(pads_received.yfilter)) leaf_name_data.push_back(pads_received.get_name_leafdata());
    if (unknown_packet_type_received.is_set || is_set(unknown_packet_type_received.yfilter)) leaf_name_data.push_back(unknown_packet_type_received.get_name_leafdata());
    if (unexpected_session_id_in_packet.is_set || is_set(unexpected_session_id_in_packet.yfilter)) leaf_name_data.push_back(unexpected_session_id_in_packet.get_name_leafdata());
    if (no_service_name_tag.is_set || is_set(no_service_name_tag.yfilter)) leaf_name_data.push_back(no_service_name_tag.get_name_leafdata());
    if (padt_for_unknown_session.is_set || is_set(padt_for_unknown_session.yfilter)) leaf_name_data.push_back(padt_for_unknown_session.get_name_leafdata());
    if (padt_with_wrong_peer_mac.is_set || is_set(padt_with_wrong_peer_mac.yfilter)) leaf_name_data.push_back(padt_with_wrong_peer_mac.get_name_leafdata());
    if (padt_with_wrong_vlan_tags.is_set || is_set(padt_with_wrong_vlan_tags.yfilter)) leaf_name_data.push_back(padt_with_wrong_vlan_tags.get_name_leafdata());
    if (zero_length_host_uniq.is_set || is_set(zero_length_host_uniq.yfilter)) leaf_name_data.push_back(zero_length_host_uniq.get_name_leafdata());
    if (padt_before_pads_sent.is_set || is_set(padt_before_pads_sent.yfilter)) leaf_name_data.push_back(padt_before_pads_sent.get_name_leafdata());
    if (session_stage_packet_for_unknown_session.is_set || is_set(session_stage_packet_for_unknown_session.yfilter)) leaf_name_data.push_back(session_stage_packet_for_unknown_session.get_name_leafdata());
    if (session_stage_packet_with_wrong_mac.is_set || is_set(session_stage_packet_with_wrong_mac.yfilter)) leaf_name_data.push_back(session_stage_packet_with_wrong_mac.get_name_leafdata());
    if (session_stage_packet_with_wrong_vlan_tags.is_set || is_set(session_stage_packet_with_wrong_vlan_tags.yfilter)) leaf_name_data.push_back(session_stage_packet_with_wrong_vlan_tags.get_name_leafdata());
    if (session_stage_packet_with_no_error.is_set || is_set(session_stage_packet_with_no_error.yfilter)) leaf_name_data.push_back(session_stage_packet_with_no_error.get_name_leafdata());
    if (tag_too_short.is_set || is_set(tag_too_short.yfilter)) leaf_name_data.push_back(tag_too_short.get_name_leafdata());
    if (bad_tag_length_field.is_set || is_set(bad_tag_length_field.yfilter)) leaf_name_data.push_back(bad_tag_length_field.get_name_leafdata());
    if (multiple_service_name_tags.is_set || is_set(multiple_service_name_tags.yfilter)) leaf_name_data.push_back(multiple_service_name_tags.get_name_leafdata());
    if (multiple_max_payload_tags.is_set || is_set(multiple_max_payload_tags.yfilter)) leaf_name_data.push_back(multiple_max_payload_tags.get_name_leafdata());
    if (invalid_max_payload_tag.is_set || is_set(invalid_max_payload_tag.yfilter)) leaf_name_data.push_back(invalid_max_payload_tag.get_name_leafdata());
    if (multiple_vendor_specific_tags.is_set || is_set(multiple_vendor_specific_tags.yfilter)) leaf_name_data.push_back(multiple_vendor_specific_tags.get_name_leafdata());
    if (unexpected_ac_name_tag.is_set || is_set(unexpected_ac_name_tag.yfilter)) leaf_name_data.push_back(unexpected_ac_name_tag.get_name_leafdata());
    if (unexpected_error_tags.is_set || is_set(unexpected_error_tags.yfilter)) leaf_name_data.push_back(unexpected_error_tags.get_name_leafdata());
    if (unknown_tag_received.is_set || is_set(unknown_tag_received.yfilter)) leaf_name_data.push_back(unknown_tag_received.get_name_leafdata());
    if (no_iana_code_invendor_tag.is_set || is_set(no_iana_code_invendor_tag.yfilter)) leaf_name_data.push_back(no_iana_code_invendor_tag.get_name_leafdata());
    if (invalid_iana_code_invendor_tag.is_set || is_set(invalid_iana_code_invendor_tag.yfilter)) leaf_name_data.push_back(invalid_iana_code_invendor_tag.get_name_leafdata());
    if (vendor_tag_too_short.is_set || is_set(vendor_tag_too_short.yfilter)) leaf_name_data.push_back(vendor_tag_too_short.get_name_leafdata());
    if (bad_vendor_tag_length_field.is_set || is_set(bad_vendor_tag_length_field.yfilter)) leaf_name_data.push_back(bad_vendor_tag_length_field.get_name_leafdata());
    if (multiple_host_uniq_tags.is_set || is_set(multiple_host_uniq_tags.yfilter)) leaf_name_data.push_back(multiple_host_uniq_tags.get_name_leafdata());
    if (multiple_relay_session_id_tags.is_set || is_set(multiple_relay_session_id_tags.yfilter)) leaf_name_data.push_back(multiple_relay_session_id_tags.get_name_leafdata());
    if (multiple_circuit_id_tags.is_set || is_set(multiple_circuit_id_tags.yfilter)) leaf_name_data.push_back(multiple_circuit_id_tags.get_name_leafdata());
    if (multiple_remote_id_tags.is_set || is_set(multiple_remote_id_tags.yfilter)) leaf_name_data.push_back(multiple_remote_id_tags.get_name_leafdata());
    if (invalid_dsl_tag.is_set || is_set(invalid_dsl_tag.yfilter)) leaf_name_data.push_back(invalid_dsl_tag.get_name_leafdata());
    if (multiple_of_the_same_dsl_tag.is_set || is_set(multiple_of_the_same_dsl_tag.yfilter)) leaf_name_data.push_back(multiple_of_the_same_dsl_tag.get_name_leafdata());
    if (invalid_iwf_tag.is_set || is_set(invalid_iwf_tag.yfilter)) leaf_name_data.push_back(invalid_iwf_tag.get_name_leafdata());
    if (multiple_iwf_tags.is_set || is_set(multiple_iwf_tags.yfilter)) leaf_name_data.push_back(multiple_iwf_tags.get_name_leafdata());
    if (unknownvendor_tag.is_set || is_set(unknownvendor_tag.yfilter)) leaf_name_data.push_back(unknownvendor_tag.get_name_leafdata());
    if (no_space_left_in_packet.is_set || is_set(no_space_left_in_packet.yfilter)) leaf_name_data.push_back(no_space_left_in_packet.get_name_leafdata());
    if (duplicate_host_uniq_tag_received.is_set || is_set(duplicate_host_uniq_tag_received.yfilter)) leaf_name_data.push_back(duplicate_host_uniq_tag_received.get_name_leafdata());
    if (duplicate_relay_session_id_tag_received.is_set || is_set(duplicate_relay_session_id_tag_received.yfilter)) leaf_name_data.push_back(duplicate_relay_session_id_tag_received.get_name_leafdata());
    if (packet_too_long.is_set || is_set(packet_too_long.yfilter)) leaf_name_data.push_back(packet_too_long.get_name_leafdata());
    if (invalid_ale_tag.is_set || is_set(invalid_ale_tag.yfilter)) leaf_name_data.push_back(invalid_ale_tag.get_name_leafdata());
    if (multiple_ale_tags.is_set || is_set(multiple_ale_tags.yfilter)) leaf_name_data.push_back(multiple_ale_tags.get_name_leafdata());
    if (invalid_service_name.is_set || is_set(invalid_service_name.yfilter)) leaf_name_data.push_back(invalid_service_name.get_name_leafdata());
    if (invalid_peer_mac.is_set || is_set(invalid_peer_mac.yfilter)) leaf_name_data.push_back(invalid_peer_mac.get_name_leafdata());
    if (invalid_vlan_tags.is_set || is_set(invalid_vlan_tags.yfilter)) leaf_name_data.push_back(invalid_vlan_tags.get_name_leafdata());
    if (packet_on_srg_slave.is_set || is_set(packet_on_srg_slave.yfilter)) leaf_name_data.push_back(packet_on_srg_slave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Statistics::PacketErrorCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-interface-handle")
    {
        no_interface_handle = value;
        no_interface_handle.value_namespace = name_space;
        no_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-packet-payload")
    {
        no_packet_payload = value;
        no_packet_payload.value_namespace = name_space;
        no_packet_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-packet-mac-address")
    {
        no_packet_mac_address = value;
        no_packet_mac_address.value_namespace = name_space;
        no_packet_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-version-type-value")
    {
        invalid_version_type_value = value;
        invalid_version_type_value.value_namespace = name_space;
        invalid_version_type_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packet-length")
    {
        bad_packet_length = value;
        bad_packet_length.value_namespace = name_space;
        bad_packet_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-interface")
    {
        unknown_interface = value;
        unknown_interface.value_namespace = name_space;
        unknown_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pado-received")
    {
        pado_received = value;
        pado_received.value_namespace = name_space;
        pado_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pads-received")
    {
        pads_received = value;
        pads_received.value_namespace = name_space;
        pads_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-packet-type-received")
    {
        unknown_packet_type_received = value;
        unknown_packet_type_received.value_namespace = name_space;
        unknown_packet_type_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-session-id-in-packet")
    {
        unexpected_session_id_in_packet = value;
        unexpected_session_id_in_packet.value_namespace = name_space;
        unexpected_session_id_in_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-service-name-tag")
    {
        no_service_name_tag = value;
        no_service_name_tag.value_namespace = name_space;
        no_service_name_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padt-for-unknown-session")
    {
        padt_for_unknown_session = value;
        padt_for_unknown_session.value_namespace = name_space;
        padt_for_unknown_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padt-with-wrong-peer-mac")
    {
        padt_with_wrong_peer_mac = value;
        padt_with_wrong_peer_mac.value_namespace = name_space;
        padt_with_wrong_peer_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padt-with-wrong-vlan-tags")
    {
        padt_with_wrong_vlan_tags = value;
        padt_with_wrong_vlan_tags.value_namespace = name_space;
        padt_with_wrong_vlan_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-length-host-uniq")
    {
        zero_length_host_uniq = value;
        zero_length_host_uniq.value_namespace = name_space;
        zero_length_host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padt-before-pads-sent")
    {
        padt_before_pads_sent = value;
        padt_before_pads_sent.value_namespace = name_space;
        padt_before_pads_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-stage-packet-for-unknown-session")
    {
        session_stage_packet_for_unknown_session = value;
        session_stage_packet_for_unknown_session.value_namespace = name_space;
        session_stage_packet_for_unknown_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-stage-packet-with-wrong-mac")
    {
        session_stage_packet_with_wrong_mac = value;
        session_stage_packet_with_wrong_mac.value_namespace = name_space;
        session_stage_packet_with_wrong_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-stage-packet-with-wrong-vlan-tags")
    {
        session_stage_packet_with_wrong_vlan_tags = value;
        session_stage_packet_with_wrong_vlan_tags.value_namespace = name_space;
        session_stage_packet_with_wrong_vlan_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-stage-packet-with-no-error")
    {
        session_stage_packet_with_no_error = value;
        session_stage_packet_with_no_error.value_namespace = name_space;
        session_stage_packet_with_no_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-too-short")
    {
        tag_too_short = value;
        tag_too_short.value_namespace = name_space;
        tag_too_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-tag-length-field")
    {
        bad_tag_length_field = value;
        bad_tag_length_field.value_namespace = name_space;
        bad_tag_length_field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-service-name-tags")
    {
        multiple_service_name_tags = value;
        multiple_service_name_tags.value_namespace = name_space;
        multiple_service_name_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-max-payload-tags")
    {
        multiple_max_payload_tags = value;
        multiple_max_payload_tags.value_namespace = name_space;
        multiple_max_payload_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-max-payload-tag")
    {
        invalid_max_payload_tag = value;
        invalid_max_payload_tag.value_namespace = name_space;
        invalid_max_payload_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-vendor-specific-tags")
    {
        multiple_vendor_specific_tags = value;
        multiple_vendor_specific_tags.value_namespace = name_space;
        multiple_vendor_specific_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-ac-name-tag")
    {
        unexpected_ac_name_tag = value;
        unexpected_ac_name_tag.value_namespace = name_space;
        unexpected_ac_name_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-error-tags")
    {
        unexpected_error_tags = value;
        unexpected_error_tags.value_namespace = name_space;
        unexpected_error_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-tag-received")
    {
        unknown_tag_received = value;
        unknown_tag_received.value_namespace = name_space;
        unknown_tag_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-iana-code-invendor-tag")
    {
        no_iana_code_invendor_tag = value;
        no_iana_code_invendor_tag.value_namespace = name_space;
        no_iana_code_invendor_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-iana-code-invendor-tag")
    {
        invalid_iana_code_invendor_tag = value;
        invalid_iana_code_invendor_tag.value_namespace = name_space;
        invalid_iana_code_invendor_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-tag-too-short")
    {
        vendor_tag_too_short = value;
        vendor_tag_too_short.value_namespace = name_space;
        vendor_tag_too_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-vendor-tag-length-field")
    {
        bad_vendor_tag_length_field = value;
        bad_vendor_tag_length_field.value_namespace = name_space;
        bad_vendor_tag_length_field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-host-uniq-tags")
    {
        multiple_host_uniq_tags = value;
        multiple_host_uniq_tags.value_namespace = name_space;
        multiple_host_uniq_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-relay-session-id-tags")
    {
        multiple_relay_session_id_tags = value;
        multiple_relay_session_id_tags.value_namespace = name_space;
        multiple_relay_session_id_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-circuit-id-tags")
    {
        multiple_circuit_id_tags = value;
        multiple_circuit_id_tags.value_namespace = name_space;
        multiple_circuit_id_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-remote-id-tags")
    {
        multiple_remote_id_tags = value;
        multiple_remote_id_tags.value_namespace = name_space;
        multiple_remote_id_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-dsl-tag")
    {
        invalid_dsl_tag = value;
        invalid_dsl_tag.value_namespace = name_space;
        invalid_dsl_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-of-the-same-dsl-tag")
    {
        multiple_of_the_same_dsl_tag = value;
        multiple_of_the_same_dsl_tag.value_namespace = name_space;
        multiple_of_the_same_dsl_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-iwf-tag")
    {
        invalid_iwf_tag = value;
        invalid_iwf_tag.value_namespace = name_space;
        invalid_iwf_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-iwf-tags")
    {
        multiple_iwf_tags = value;
        multiple_iwf_tags.value_namespace = name_space;
        multiple_iwf_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownvendor-tag")
    {
        unknownvendor_tag = value;
        unknownvendor_tag.value_namespace = name_space;
        unknownvendor_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-space-left-in-packet")
    {
        no_space_left_in_packet = value;
        no_space_left_in_packet.value_namespace = name_space;
        no_space_left_in_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-host-uniq-tag-received")
    {
        duplicate_host_uniq_tag_received = value;
        duplicate_host_uniq_tag_received.value_namespace = name_space;
        duplicate_host_uniq_tag_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-relay-session-id-tag-received")
    {
        duplicate_relay_session_id_tag_received = value;
        duplicate_relay_session_id_tag_received.value_namespace = name_space;
        duplicate_relay_session_id_tag_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-too-long")
    {
        packet_too_long = value;
        packet_too_long.value_namespace = name_space;
        packet_too_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-ale-tag")
    {
        invalid_ale_tag = value;
        invalid_ale_tag.value_namespace = name_space;
        invalid_ale_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple-ale-tags")
    {
        multiple_ale_tags = value;
        multiple_ale_tags.value_namespace = name_space;
        multiple_ale_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-service-name")
    {
        invalid_service_name = value;
        invalid_service_name.value_namespace = name_space;
        invalid_service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-peer-mac")
    {
        invalid_peer_mac = value;
        invalid_peer_mac.value_namespace = name_space;
        invalid_peer_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-vlan-tags")
    {
        invalid_vlan_tags = value;
        invalid_vlan_tags.value_namespace = name_space;
        invalid_vlan_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-on-srg-slave")
    {
        packet_on_srg_slave = value;
        packet_on_srg_slave.value_namespace = name_space;
        packet_on_srg_slave.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Statistics::PacketErrorCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-interface-handle")
    {
        no_interface_handle.yfilter = yfilter;
    }
    if(value_path == "no-packet-payload")
    {
        no_packet_payload.yfilter = yfilter;
    }
    if(value_path == "no-packet-mac-address")
    {
        no_packet_mac_address.yfilter = yfilter;
    }
    if(value_path == "invalid-version-type-value")
    {
        invalid_version_type_value.yfilter = yfilter;
    }
    if(value_path == "bad-packet-length")
    {
        bad_packet_length.yfilter = yfilter;
    }
    if(value_path == "unknown-interface")
    {
        unknown_interface.yfilter = yfilter;
    }
    if(value_path == "pado-received")
    {
        pado_received.yfilter = yfilter;
    }
    if(value_path == "pads-received")
    {
        pads_received.yfilter = yfilter;
    }
    if(value_path == "unknown-packet-type-received")
    {
        unknown_packet_type_received.yfilter = yfilter;
    }
    if(value_path == "unexpected-session-id-in-packet")
    {
        unexpected_session_id_in_packet.yfilter = yfilter;
    }
    if(value_path == "no-service-name-tag")
    {
        no_service_name_tag.yfilter = yfilter;
    }
    if(value_path == "padt-for-unknown-session")
    {
        padt_for_unknown_session.yfilter = yfilter;
    }
    if(value_path == "padt-with-wrong-peer-mac")
    {
        padt_with_wrong_peer_mac.yfilter = yfilter;
    }
    if(value_path == "padt-with-wrong-vlan-tags")
    {
        padt_with_wrong_vlan_tags.yfilter = yfilter;
    }
    if(value_path == "zero-length-host-uniq")
    {
        zero_length_host_uniq.yfilter = yfilter;
    }
    if(value_path == "padt-before-pads-sent")
    {
        padt_before_pads_sent.yfilter = yfilter;
    }
    if(value_path == "session-stage-packet-for-unknown-session")
    {
        session_stage_packet_for_unknown_session.yfilter = yfilter;
    }
    if(value_path == "session-stage-packet-with-wrong-mac")
    {
        session_stage_packet_with_wrong_mac.yfilter = yfilter;
    }
    if(value_path == "session-stage-packet-with-wrong-vlan-tags")
    {
        session_stage_packet_with_wrong_vlan_tags.yfilter = yfilter;
    }
    if(value_path == "session-stage-packet-with-no-error")
    {
        session_stage_packet_with_no_error.yfilter = yfilter;
    }
    if(value_path == "tag-too-short")
    {
        tag_too_short.yfilter = yfilter;
    }
    if(value_path == "bad-tag-length-field")
    {
        bad_tag_length_field.yfilter = yfilter;
    }
    if(value_path == "multiple-service-name-tags")
    {
        multiple_service_name_tags.yfilter = yfilter;
    }
    if(value_path == "multiple-max-payload-tags")
    {
        multiple_max_payload_tags.yfilter = yfilter;
    }
    if(value_path == "invalid-max-payload-tag")
    {
        invalid_max_payload_tag.yfilter = yfilter;
    }
    if(value_path == "multiple-vendor-specific-tags")
    {
        multiple_vendor_specific_tags.yfilter = yfilter;
    }
    if(value_path == "unexpected-ac-name-tag")
    {
        unexpected_ac_name_tag.yfilter = yfilter;
    }
    if(value_path == "unexpected-error-tags")
    {
        unexpected_error_tags.yfilter = yfilter;
    }
    if(value_path == "unknown-tag-received")
    {
        unknown_tag_received.yfilter = yfilter;
    }
    if(value_path == "no-iana-code-invendor-tag")
    {
        no_iana_code_invendor_tag.yfilter = yfilter;
    }
    if(value_path == "invalid-iana-code-invendor-tag")
    {
        invalid_iana_code_invendor_tag.yfilter = yfilter;
    }
    if(value_path == "vendor-tag-too-short")
    {
        vendor_tag_too_short.yfilter = yfilter;
    }
    if(value_path == "bad-vendor-tag-length-field")
    {
        bad_vendor_tag_length_field.yfilter = yfilter;
    }
    if(value_path == "multiple-host-uniq-tags")
    {
        multiple_host_uniq_tags.yfilter = yfilter;
    }
    if(value_path == "multiple-relay-session-id-tags")
    {
        multiple_relay_session_id_tags.yfilter = yfilter;
    }
    if(value_path == "multiple-circuit-id-tags")
    {
        multiple_circuit_id_tags.yfilter = yfilter;
    }
    if(value_path == "multiple-remote-id-tags")
    {
        multiple_remote_id_tags.yfilter = yfilter;
    }
    if(value_path == "invalid-dsl-tag")
    {
        invalid_dsl_tag.yfilter = yfilter;
    }
    if(value_path == "multiple-of-the-same-dsl-tag")
    {
        multiple_of_the_same_dsl_tag.yfilter = yfilter;
    }
    if(value_path == "invalid-iwf-tag")
    {
        invalid_iwf_tag.yfilter = yfilter;
    }
    if(value_path == "multiple-iwf-tags")
    {
        multiple_iwf_tags.yfilter = yfilter;
    }
    if(value_path == "unknownvendor-tag")
    {
        unknownvendor_tag.yfilter = yfilter;
    }
    if(value_path == "no-space-left-in-packet")
    {
        no_space_left_in_packet.yfilter = yfilter;
    }
    if(value_path == "duplicate-host-uniq-tag-received")
    {
        duplicate_host_uniq_tag_received.yfilter = yfilter;
    }
    if(value_path == "duplicate-relay-session-id-tag-received")
    {
        duplicate_relay_session_id_tag_received.yfilter = yfilter;
    }
    if(value_path == "packet-too-long")
    {
        packet_too_long.yfilter = yfilter;
    }
    if(value_path == "invalid-ale-tag")
    {
        invalid_ale_tag.yfilter = yfilter;
    }
    if(value_path == "multiple-ale-tags")
    {
        multiple_ale_tags.yfilter = yfilter;
    }
    if(value_path == "invalid-service-name")
    {
        invalid_service_name.yfilter = yfilter;
    }
    if(value_path == "invalid-peer-mac")
    {
        invalid_peer_mac.yfilter = yfilter;
    }
    if(value_path == "invalid-vlan-tags")
    {
        invalid_vlan_tags.yfilter = yfilter;
    }
    if(value_path == "packet-on-srg-slave")
    {
        packet_on_srg_slave.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Statistics::PacketErrorCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-interface-handle" || name == "no-packet-payload" || name == "no-packet-mac-address" || name == "invalid-version-type-value" || name == "bad-packet-length" || name == "unknown-interface" || name == "pado-received" || name == "pads-received" || name == "unknown-packet-type-received" || name == "unexpected-session-id-in-packet" || name == "no-service-name-tag" || name == "padt-for-unknown-session" || name == "padt-with-wrong-peer-mac" || name == "padt-with-wrong-vlan-tags" || name == "zero-length-host-uniq" || name == "padt-before-pads-sent" || name == "session-stage-packet-for-unknown-session" || name == "session-stage-packet-with-wrong-mac" || name == "session-stage-packet-with-wrong-vlan-tags" || name == "session-stage-packet-with-no-error" || name == "tag-too-short" || name == "bad-tag-length-field" || name == "multiple-service-name-tags" || name == "multiple-max-payload-tags" || name == "invalid-max-payload-tag" || name == "multiple-vendor-specific-tags" || name == "unexpected-ac-name-tag" || name == "unexpected-error-tags" || name == "unknown-tag-received" || name == "no-iana-code-invendor-tag" || name == "invalid-iana-code-invendor-tag" || name == "vendor-tag-too-short" || name == "bad-vendor-tag-length-field" || name == "multiple-host-uniq-tags" || name == "multiple-relay-session-id-tags" || name == "multiple-circuit-id-tags" || name == "multiple-remote-id-tags" || name == "invalid-dsl-tag" || name == "multiple-of-the-same-dsl-tag" || name == "invalid-iwf-tag" || name == "multiple-iwf-tags" || name == "unknownvendor-tag" || name == "no-space-left-in-packet" || name == "duplicate-host-uniq-tag-received" || name == "duplicate-relay-session-id-tag-received" || name == "packet-too-long" || name == "invalid-ale-tag" || name == "multiple-ale-tags" || name == "invalid-service-name" || name == "invalid-peer-mac" || name == "invalid-vlan-tags" || name == "packet-on-srg-slave")
        return true;
    return false;
}

Pppoe::Nodes::Node::AccessInterface::AccessInterface()
    :
    summaries(std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries>())
{
    summaries->parent = this;

    yang_name = "access-interface"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::AccessInterface::~AccessInterface()
{
}

bool Pppoe::Nodes::Node::AccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return (summaries !=  nullptr && summaries->has_data());
}

bool Pppoe::Nodes::Node::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| (summaries !=  nullptr && summaries->has_operation());
}

std::string Pppoe::Nodes::Node::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summaries")
    {
        if(summaries == nullptr)
        {
            summaries = std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries>();
        }
        return summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summaries != nullptr)
    {
        _children["summaries"] = summaries;
    }

    return _children;
}

void Pppoe::Nodes::Node::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summaries")
        return true;
    return false;
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summaries()
    :
    summary(this, {"interface_name"})
{

    yang_name = "summaries"; yang_parent_name = "access-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::AccessInterface::Summaries::~Summaries()
{
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::has_operation() const
{
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::Node::AccessInterface::Summaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::AccessInterface::Summaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::AccessInterface::Summaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries::Summary>();
        ent_->parent = this;
        summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::AccessInterface::Summaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::Summary()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_state{YType::uint32, "interface-state"},
    mac_address{YType::str, "mac-address"},
    bba_group_name{YType::str, "bba-group-name"},
    is_ready{YType::int32, "is-ready"},
    sessions{YType::uint32, "sessions"},
    incomplete_sessions{YType::uint32, "incomplete-sessions"}
{

    yang_name = "summary"; yang_parent_name = "summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::~Summary()
{
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_state.is_set
	|| mac_address.is_set
	|| bba_group_name.is_set
	|| is_ready.is_set
	|| sessions.is_set
	|| incomplete_sessions.is_set;
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(bba_group_name.yfilter)
	|| ydk::is_set(is_ready.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(incomplete_sessions.yfilter);
}

std::string Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (is_ready.is_set || is_set(is_ready.yfilter)) leaf_name_data.push_back(is_ready.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (incomplete_sessions.is_set || is_set(incomplete_sessions.yfilter)) leaf_name_data.push_back(incomplete_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ready")
    {
        is_ready = value;
        is_ready.value_namespace = name_space;
        is_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions = value;
        incomplete_sessions.value_namespace = name_space;
        incomplete_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
    if(value_path == "is-ready")
    {
        is_ready.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "interface-state" || name == "mac-address" || name == "bba-group-name" || name == "is-ready" || name == "sessions" || name == "incomplete-sessions")
        return true;
    return false;
}

Pppoe::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Pppoe::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pppoe::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    access_interface_name{YType::str, "access-interface-name"},
    bba_group_name{YType::str, "bba-group-name"},
    session_id{YType::uint16, "session-id"},
    local_mac_address{YType::str, "local-mac-address"},
    peer_mac_address{YType::str, "peer-mac-address"},
    is_complete{YType::int32, "is-complete"},
    vlan_outer_id{YType::uint16, "vlan-outer-id"},
    vlan_inner_id{YType::uint16, "vlan-inner-id"},
    srg_state{YType::enumeration, "srg-state"}
        ,
    tags(std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags>())
{
    tags->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| access_interface_name.is_set
	|| bba_group_name.is_set
	|| session_id.is_set
	|| local_mac_address.is_set
	|| peer_mac_address.is_set
	|| is_complete.is_set
	|| vlan_outer_id.is_set
	|| vlan_inner_id.is_set
	|| srg_state.is_set
	|| (tags !=  nullptr && tags->has_data());
}

bool Pppoe::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(access_interface_name.yfilter)
	|| ydk::is_set(bba_group_name.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(local_mac_address.yfilter)
	|| ydk::is_set(peer_mac_address.yfilter)
	|| ydk::is_set(is_complete.yfilter)
	|| ydk::is_set(vlan_outer_id.yfilter)
	|| ydk::is_set(vlan_inner_id.yfilter)
	|| ydk::is_set(srg_state.yfilter)
	|| (tags !=  nullptr && tags->has_operation());
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.yfilter)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (local_mac_address.is_set || is_set(local_mac_address.yfilter)) leaf_name_data.push_back(local_mac_address.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.yfilter)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (is_complete.is_set || is_set(is_complete.yfilter)) leaf_name_data.push_back(is_complete.get_name_leafdata());
    if (vlan_outer_id.is_set || is_set(vlan_outer_id.yfilter)) leaf_name_data.push_back(vlan_outer_id.get_name_leafdata());
    if (vlan_inner_id.is_set || is_set(vlan_inner_id.yfilter)) leaf_name_data.push_back(vlan_inner_id.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.yfilter)) leaf_name_data.push_back(srg_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        if(tags == nullptr)
        {
            tags = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags>();
        }
        return tags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tags != nullptr)
    {
        _children["tags"] = tags;
    }

    return _children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
        access_interface_name.value_namespace = name_space;
        access_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mac-address")
    {
        local_mac_address = value;
        local_mac_address.value_namespace = name_space;
        local_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
        peer_mac_address.value_namespace = name_space;
        peer_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-complete")
    {
        is_complete = value;
        is_complete.value_namespace = name_space;
        is_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-outer-id")
    {
        vlan_outer_id = value;
        vlan_outer_id.value_namespace = name_space;
        vlan_outer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-inner-id")
    {
        vlan_inner_id = value;
        vlan_inner_id.value_namespace = name_space;
        vlan_inner_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
        srg_state.value_namespace = name_space;
        srg_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name.yfilter = yfilter;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "local-mac-address")
    {
        local_mac_address.yfilter = yfilter;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address.yfilter = yfilter;
    }
    if(value_path == "is-complete")
    {
        is_complete.yfilter = yfilter;
    }
    if(value_path == "vlan-outer-id")
    {
        vlan_outer_id.yfilter = yfilter;
    }
    if(value_path == "vlan-inner-id")
    {
        vlan_inner_id.yfilter = yfilter;
    }
    if(value_path == "srg-state")
    {
        srg_state.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tags" || name == "interface-name" || name == "interface-name-xr" || name == "access-interface-name" || name == "bba-group-name" || name == "session-id" || name == "local-mac-address" || name == "peer-mac-address" || name == "is-complete" || name == "vlan-outer-id" || name == "vlan-inner-id" || name == "srg-state")
        return true;
    return false;
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::Tags()
    :
    service_name{YType::str, "service-name"},
    max_payload{YType::uint16, "max-payload"},
    host_uniq{YType::str, "host-uniq"},
    relay_session_id{YType::str, "relay-session-id"},
    remote_id{YType::str, "remote-id"},
    circuit_id{YType::str, "circuit-id"},
    is_iwf{YType::int32, "is-iwf"},
    dsl_actual_up{YType::uint32, "dsl-actual-up"},
    dsl_actual_down{YType::uint32, "dsl-actual-down"},
    dsl_min_up{YType::uint32, "dsl-min-up"},
    dsl_min_down{YType::uint32, "dsl-min-down"},
    dsl_attain_up{YType::uint32, "dsl-attain-up"},
    dsl_attain_down{YType::uint32, "dsl-attain-down"},
    dsl_max_up{YType::uint32, "dsl-max-up"},
    dsl_max_down{YType::uint32, "dsl-max-down"},
    dsl_min_up_low{YType::uint32, "dsl-min-up-low"},
    dsl_min_down_low{YType::uint32, "dsl-min-down-low"},
    dsl_max_delay_up{YType::uint32, "dsl-max-delay-up"},
    dsl_actual_delay_up{YType::uint32, "dsl-actual-delay-up"},
    dsl_max_delay_down{YType::uint32, "dsl-max-delay-down"},
    dsl_actual_delay_down{YType::uint32, "dsl-actual-delay-down"}
        ,
    access_loop_encapsulation(std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation>())
{
    access_loop_encapsulation->parent = this;

    yang_name = "tags"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::~Tags()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| max_payload.is_set
	|| host_uniq.is_set
	|| relay_session_id.is_set
	|| remote_id.is_set
	|| circuit_id.is_set
	|| is_iwf.is_set
	|| dsl_actual_up.is_set
	|| dsl_actual_down.is_set
	|| dsl_min_up.is_set
	|| dsl_min_down.is_set
	|| dsl_attain_up.is_set
	|| dsl_attain_down.is_set
	|| dsl_max_up.is_set
	|| dsl_max_down.is_set
	|| dsl_min_up_low.is_set
	|| dsl_min_down_low.is_set
	|| dsl_max_delay_up.is_set
	|| dsl_actual_delay_up.is_set
	|| dsl_max_delay_down.is_set
	|| dsl_actual_delay_down.is_set
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_data());
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(max_payload.yfilter)
	|| ydk::is_set(host_uniq.yfilter)
	|| ydk::is_set(relay_session_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(is_iwf.yfilter)
	|| ydk::is_set(dsl_actual_up.yfilter)
	|| ydk::is_set(dsl_actual_down.yfilter)
	|| ydk::is_set(dsl_min_up.yfilter)
	|| ydk::is_set(dsl_min_down.yfilter)
	|| ydk::is_set(dsl_attain_up.yfilter)
	|| ydk::is_set(dsl_attain_down.yfilter)
	|| ydk::is_set(dsl_max_up.yfilter)
	|| ydk::is_set(dsl_max_down.yfilter)
	|| ydk::is_set(dsl_min_up_low.yfilter)
	|| ydk::is_set(dsl_min_down_low.yfilter)
	|| ydk::is_set(dsl_max_delay_up.yfilter)
	|| ydk::is_set(dsl_actual_delay_up.yfilter)
	|| ydk::is_set(dsl_max_delay_down.yfilter)
	|| ydk::is_set(dsl_actual_delay_down.yfilter)
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_operation());
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (max_payload.is_set || is_set(max_payload.yfilter)) leaf_name_data.push_back(max_payload.get_name_leafdata());
    if (host_uniq.is_set || is_set(host_uniq.yfilter)) leaf_name_data.push_back(host_uniq.get_name_leafdata());
    if (relay_session_id.is_set || is_set(relay_session_id.yfilter)) leaf_name_data.push_back(relay_session_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (is_iwf.is_set || is_set(is_iwf.yfilter)) leaf_name_data.push_back(is_iwf.get_name_leafdata());
    if (dsl_actual_up.is_set || is_set(dsl_actual_up.yfilter)) leaf_name_data.push_back(dsl_actual_up.get_name_leafdata());
    if (dsl_actual_down.is_set || is_set(dsl_actual_down.yfilter)) leaf_name_data.push_back(dsl_actual_down.get_name_leafdata());
    if (dsl_min_up.is_set || is_set(dsl_min_up.yfilter)) leaf_name_data.push_back(dsl_min_up.get_name_leafdata());
    if (dsl_min_down.is_set || is_set(dsl_min_down.yfilter)) leaf_name_data.push_back(dsl_min_down.get_name_leafdata());
    if (dsl_attain_up.is_set || is_set(dsl_attain_up.yfilter)) leaf_name_data.push_back(dsl_attain_up.get_name_leafdata());
    if (dsl_attain_down.is_set || is_set(dsl_attain_down.yfilter)) leaf_name_data.push_back(dsl_attain_down.get_name_leafdata());
    if (dsl_max_up.is_set || is_set(dsl_max_up.yfilter)) leaf_name_data.push_back(dsl_max_up.get_name_leafdata());
    if (dsl_max_down.is_set || is_set(dsl_max_down.yfilter)) leaf_name_data.push_back(dsl_max_down.get_name_leafdata());
    if (dsl_min_up_low.is_set || is_set(dsl_min_up_low.yfilter)) leaf_name_data.push_back(dsl_min_up_low.get_name_leafdata());
    if (dsl_min_down_low.is_set || is_set(dsl_min_down_low.yfilter)) leaf_name_data.push_back(dsl_min_down_low.get_name_leafdata());
    if (dsl_max_delay_up.is_set || is_set(dsl_max_delay_up.yfilter)) leaf_name_data.push_back(dsl_max_delay_up.get_name_leafdata());
    if (dsl_actual_delay_up.is_set || is_set(dsl_actual_delay_up.yfilter)) leaf_name_data.push_back(dsl_actual_delay_up.get_name_leafdata());
    if (dsl_max_delay_down.is_set || is_set(dsl_max_delay_down.yfilter)) leaf_name_data.push_back(dsl_max_delay_down.get_name_leafdata());
    if (dsl_actual_delay_down.is_set || is_set(dsl_actual_delay_down.yfilter)) leaf_name_data.push_back(dsl_actual_delay_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-loop-encapsulation")
    {
        if(access_loop_encapsulation == nullptr)
        {
            access_loop_encapsulation = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation>();
        }
        return access_loop_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_loop_encapsulation != nullptr)
    {
        _children["access-loop-encapsulation"] = access_loop_encapsulation;
    }

    return _children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-payload")
    {
        max_payload = value;
        max_payload.value_namespace = name_space;
        max_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-uniq")
    {
        host_uniq = value;
        host_uniq.value_namespace = name_space;
        host_uniq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id = value;
        relay_session_id.value_namespace = name_space;
        relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-iwf")
    {
        is_iwf = value;
        is_iwf.value_namespace = name_space;
        is_iwf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up = value;
        dsl_actual_up.value_namespace = name_space;
        dsl_actual_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down = value;
        dsl_actual_down.value_namespace = name_space;
        dsl_actual_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up = value;
        dsl_min_up.value_namespace = name_space;
        dsl_min_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down = value;
        dsl_min_down.value_namespace = name_space;
        dsl_min_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up = value;
        dsl_attain_up.value_namespace = name_space;
        dsl_attain_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down = value;
        dsl_attain_down.value_namespace = name_space;
        dsl_attain_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up = value;
        dsl_max_up.value_namespace = name_space;
        dsl_max_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down = value;
        dsl_max_down.value_namespace = name_space;
        dsl_max_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low = value;
        dsl_min_up_low.value_namespace = name_space;
        dsl_min_up_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low = value;
        dsl_min_down_low.value_namespace = name_space;
        dsl_min_down_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up = value;
        dsl_max_delay_up.value_namespace = name_space;
        dsl_max_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up = value;
        dsl_actual_delay_up.value_namespace = name_space;
        dsl_actual_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down = value;
        dsl_max_delay_down.value_namespace = name_space;
        dsl_max_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down = value;
        dsl_actual_delay_down.value_namespace = name_space;
        dsl_actual_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "max-payload")
    {
        max_payload.yfilter = yfilter;
    }
    if(value_path == "host-uniq")
    {
        host_uniq.yfilter = yfilter;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "is-iwf")
    {
        is_iwf.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up.yfilter = yfilter;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down.yfilter = yfilter;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down.yfilter = yfilter;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low.yfilter = yfilter;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up.yfilter = yfilter;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down.yfilter = yfilter;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-loop-encapsulation" || name == "service-name" || name == "max-payload" || name == "host-uniq" || name == "relay-session-id" || name == "remote-id" || name == "circuit-id" || name == "is-iwf" || name == "dsl-actual-up" || name == "dsl-actual-down" || name == "dsl-min-up" || name == "dsl-min-down" || name == "dsl-attain-up" || name == "dsl-attain-down" || name == "dsl-max-up" || name == "dsl-max-down" || name == "dsl-min-up-low" || name == "dsl-min-down-low" || name == "dsl-max-delay-up" || name == "dsl-actual-delay-up" || name == "dsl-max-delay-down" || name == "dsl-actual-delay-down")
        return true;
    return false;
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::AccessLoopEncapsulation()
    :
    data_link{YType::uint8, "data-link"},
    encaps1{YType::uint8, "encaps1"},
    encaps2{YType::uint8, "encaps2"}
{

    yang_name = "access-loop-encapsulation"; yang_parent_name = "tags"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::~AccessLoopEncapsulation()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return data_link.is_set
	|| encaps1.is_set
	|| encaps2.is_set;
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_link.yfilter)
	|| ydk::is_set(encaps1.yfilter)
	|| ydk::is_set(encaps2.yfilter);
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-loop-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_link.is_set || is_set(data_link.yfilter)) leaf_name_data.push_back(data_link.get_name_leafdata());
    if (encaps1.is_set || is_set(encaps1.yfilter)) leaf_name_data.push_back(encaps1.get_name_leafdata());
    if (encaps2.is_set || is_set(encaps2.yfilter)) leaf_name_data.push_back(encaps2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-link")
    {
        data_link = value;
        data_link.value_namespace = name_space;
        data_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps1")
    {
        encaps1 = value;
        encaps1.value_namespace = name_space;
        encaps1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encaps2")
    {
        encaps2 = value;
        encaps2.value_namespace = name_space;
        encaps2.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-link")
    {
        data_link.yfilter = yfilter;
    }
    if(value_path == "encaps1")
    {
        encaps1.yfilter = yfilter;
    }
    if(value_path == "encaps2")
    {
        encaps2.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link" || name == "encaps1" || name == "encaps2")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroups()
    :
    bba_group(this, {"bba_group_name"})
{

    yang_name = "bba-groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::~BbaGroups()
{
}

bool Pppoe::Nodes::Node::BbaGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bba_group.len(); index++)
    {
        if(bba_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::has_operation() const
{
    for (std::size_t index=0; index<bba_group.len(); index++)
    {
        if(bba_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bba-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bba-group")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup>();
        ent_->parent = this;
        bba_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bba_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::BbaGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::BbaGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bba-group")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::BbaGroup()
    :
    bba_group_name{YType::str, "bba-group-name"}
        ,
    limit_config(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig>())
    , limits(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits>())
    , throttles(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles>())
    , throttle_config(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig>())
{
    limit_config->parent = this;
    limits->parent = this;
    throttles->parent = this;
    throttle_config->parent = this;

    yang_name = "bba-group"; yang_parent_name = "bba-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::~BbaGroup()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::has_data() const
{
    if (is_presence_container) return true;
    return bba_group_name.is_set
	|| (limit_config !=  nullptr && limit_config->has_data())
	|| (limits !=  nullptr && limits->has_data())
	|| (throttles !=  nullptr && throttles->has_data())
	|| (throttle_config !=  nullptr && throttle_config->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bba_group_name.yfilter)
	|| (limit_config !=  nullptr && limit_config->has_operation())
	|| (limits !=  nullptr && limits->has_operation())
	|| (throttles !=  nullptr && throttles->has_operation())
	|| (throttle_config !=  nullptr && throttle_config->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bba-group";
    ADD_KEY_TOKEN(bba_group_name, "bba-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit-config")
    {
        if(limit_config == nullptr)
        {
            limit_config = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig>();
        }
        return limit_config;
    }

    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits>();
        }
        return limits;
    }

    if(child_yang_name == "throttles")
    {
        if(throttles == nullptr)
        {
            throttles = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles>();
        }
        return throttles;
    }

    if(child_yang_name == "throttle-config")
    {
        if(throttle_config == nullptr)
        {
            throttle_config = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig>();
        }
        return throttle_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit_config != nullptr)
    {
        _children["limit-config"] = limit_config;
    }

    if(limits != nullptr)
    {
        _children["limits"] = limits;
    }

    if(throttles != nullptr)
    {
        _children["throttles"] = throttles;
    }

    if(throttle_config != nullptr)
    {
        _children["throttle-config"] = throttle_config;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit-config" || name == "limits" || name == "throttles" || name == "throttle-config" || name == "bba-group-name")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::LimitConfig()
    :
    card(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card>())
    , access_intf(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf>())
    , mac(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac>())
    , mac_iwf(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf>())
    , mac_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface>())
    , mac_iwf_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface>())
    , circuit_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId>())
    , remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId>())
    , circuit_id_and_remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId>())
    , outer_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId>())
    , inner_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId>())
    , vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId>())
{
    card->parent = this;
    access_intf->parent = this;
    mac->parent = this;
    mac_iwf->parent = this;
    mac_access_interface->parent = this;
    mac_iwf_access_interface->parent = this;
    circuit_id->parent = this;
    remote_id->parent = this;
    circuit_id_and_remote_id->parent = this;
    outer_vlan_id->parent = this;
    inner_vlan_id->parent = this;
    vlan_id->parent = this;

    yang_name = "limit-config"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::~LimitConfig()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::has_data() const
{
    if (is_presence_container) return true;
    return (card !=  nullptr && card->has_data())
	|| (access_intf !=  nullptr && access_intf->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mac_iwf !=  nullptr && mac_iwf->has_data())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_data())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_data())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_data())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_data())
	|| (vlan_id !=  nullptr && vlan_id->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::has_operation() const
{
    return is_set(yfilter)
	|| (card !=  nullptr && card->has_operation())
	|| (access_intf !=  nullptr && access_intf->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mac_iwf !=  nullptr && mac_iwf->has_operation())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_operation())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_operation())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_operation())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_operation())
	|| (vlan_id !=  nullptr && vlan_id->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card>();
        }
        return card;
    }

    if(child_yang_name == "access-intf")
    {
        if(access_intf == nullptr)
        {
            access_intf = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf>();
        }
        return access_intf;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mac-iwf")
    {
        if(mac_iwf == nullptr)
        {
            mac_iwf = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf>();
        }
        return mac_iwf;
    }

    if(child_yang_name == "mac-access-interface")
    {
        if(mac_access_interface == nullptr)
        {
            mac_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface>();
        }
        return mac_access_interface;
    }

    if(child_yang_name == "mac-iwf-access-interface")
    {
        if(mac_iwf_access_interface == nullptr)
        {
            mac_iwf_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface>();
        }
        return mac_iwf_access_interface;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "circuit-id-and-remote-id")
    {
        if(circuit_id_and_remote_id == nullptr)
        {
            circuit_id_and_remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId>();
        }
        return circuit_id_and_remote_id;
    }

    if(child_yang_name == "outer-vlan-id")
    {
        if(outer_vlan_id == nullptr)
        {
            outer_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId>();
        }
        return outer_vlan_id;
    }

    if(child_yang_name == "inner-vlan-id")
    {
        if(inner_vlan_id == nullptr)
        {
            inner_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId>();
        }
        return inner_vlan_id;
    }

    if(child_yang_name == "vlan-id")
    {
        if(vlan_id == nullptr)
        {
            vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId>();
        }
        return vlan_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card != nullptr)
    {
        _children["card"] = card;
    }

    if(access_intf != nullptr)
    {
        _children["access-intf"] = access_intf;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(mac_iwf != nullptr)
    {
        _children["mac-iwf"] = mac_iwf;
    }

    if(mac_access_interface != nullptr)
    {
        _children["mac-access-interface"] = mac_access_interface;
    }

    if(mac_iwf_access_interface != nullptr)
    {
        _children["mac-iwf-access-interface"] = mac_iwf_access_interface;
    }

    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    if(remote_id != nullptr)
    {
        _children["remote-id"] = remote_id;
    }

    if(circuit_id_and_remote_id != nullptr)
    {
        _children["circuit-id-and-remote-id"] = circuit_id_and_remote_id;
    }

    if(outer_vlan_id != nullptr)
    {
        _children["outer-vlan-id"] = outer_vlan_id;
    }

    if(inner_vlan_id != nullptr)
    {
        _children["inner-vlan-id"] = inner_vlan_id;
    }

    if(vlan_id != nullptr)
    {
        _children["vlan-id"] = vlan_id;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "access-intf" || name == "mac" || name == "mac-iwf" || name == "mac-access-interface" || name == "mac-iwf-access-interface" || name == "circuit-id" || name == "remote-id" || name == "circuit-id-and-remote-id" || name == "outer-vlan-id" || name == "inner-vlan-id" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::Card()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "card"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::~Card()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::AccessIntf()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "access-intf"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::~AccessIntf()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-intf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::Mac()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "mac"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::~Mac()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::MacIwf()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "mac-iwf"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::~MacIwf()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::MacAccessInterface()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "mac-access-interface"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::~MacAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::MacIwfAccessInterface()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "mac-iwf-access-interface"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::~MacIwfAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::CircuitId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "circuit-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::~CircuitId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::RemoteId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "remote-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::~RemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::CircuitIdAndRemoteId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "circuit-id-and-remote-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::~CircuitIdAndRemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::OuterVlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "outer-vlan-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::~OuterVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::InnerVlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "inner-vlan-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::~InnerVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::VlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    threshold{YType::uint32, "threshold"},
    radius_override_enabled{YType::int32, "radius-override-enabled"}
{

    yang_name = "vlan-id"; yang_parent_name = "limit-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::~VlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return max_limit.is_set
	|| threshold.is_set
	|| radius_override_enabled.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_limit.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(radius_override_enabled.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.yfilter)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.yfilter)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
        max_limit.value_namespace = name_space;
        max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
        radius_override_enabled.value_namespace = name_space;
        radius_override_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-limit")
    {
        max_limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-limit" || name == "threshold" || name == "radius-override-enabled")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limits()
    :
    limit(this, {})
{

    yang_name = "limits"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::~Limits()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<limit.len(); index++)
    {
        if(limit[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::has_operation() const
{
    for (std::size_t index=0; index<limit.len(); index++)
    {
        if(limit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit>();
        ent_->parent = this;
        limit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : limit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::Limit()
    :
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    iwf{YType::boolean, "iwf"},
    circuit_id{YType::str, "circuit-id"},
    remote_id{YType::str, "remote-id"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    state{YType::enumeration, "state"},
    session_count{YType::uint32, "session-count"},
    radius_override_set{YType::int32, "radius-override-set"},
    override_limit{YType::uint32, "override-limit"}
{

    yang_name = "limit"; yang_parent_name = "limits"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::~Limit()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| mac_address.is_set
	|| iwf.is_set
	|| circuit_id.is_set
	|| remote_id.is_set
	|| outer_vlan_id.is_set
	|| inner_vlan_id.is_set
	|| state.is_set
	|| session_count.is_set
	|| radius_override_set.is_set
	|| override_limit.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(iwf.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(radius_override_set.yfilter)
	|| ydk::is_set(override_limit.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (iwf.is_set || is_set(iwf.yfilter)) leaf_name_data.push_back(iwf.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (radius_override_set.is_set || is_set(radius_override_set.yfilter)) leaf_name_data.push_back(radius_override_set.get_name_leafdata());
    if (override_limit.is_set || is_set(override_limit.yfilter)) leaf_name_data.push_back(override_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iwf")
    {
        iwf = value;
        iwf.value_namespace = name_space;
        iwf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-override-set")
    {
        radius_override_set = value;
        radius_override_set.value_namespace = name_space;
        radius_override_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-limit")
    {
        override_limit = value;
        override_limit.value_namespace = name_space;
        override_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "iwf")
    {
        iwf.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "radius-override-set")
    {
        radius_override_set.yfilter = yfilter;
    }
    if(value_path == "override-limit")
    {
        override_limit.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "mac-address" || name == "iwf" || name == "circuit-id" || name == "remote-id" || name == "outer-vlan-id" || name == "inner-vlan-id" || name == "state" || name == "session-count" || name == "radius-override-set" || name == "override-limit")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttles()
    :
    throttle(this, {})
{

    yang_name = "throttles"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::~Throttles()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<throttle.len(); index++)
    {
        if(throttle[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::has_operation() const
{
    for (std::size_t index=0; index<throttle.len(); index++)
    {
        if(throttle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle")
    {
        auto ent_ = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle>();
        ent_->parent = this;
        throttle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : throttle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::Throttle()
    :
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    iwf{YType::boolean, "iwf"},
    circuit_id{YType::str, "circuit-id"},
    remote_id{YType::str, "remote-id"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    state{YType::enumeration, "state"},
    time_left{YType::uint32, "time-left"},
    since_reset{YType::uint32, "since-reset"},
    padi_count{YType::uint32, "padi-count"},
    padr_count{YType::uint32, "padr-count"}
{

    yang_name = "throttle"; yang_parent_name = "throttles"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::~Throttle()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| mac_address.is_set
	|| iwf.is_set
	|| circuit_id.is_set
	|| remote_id.is_set
	|| outer_vlan_id.is_set
	|| inner_vlan_id.is_set
	|| state.is_set
	|| time_left.is_set
	|| since_reset.is_set
	|| padi_count.is_set
	|| padr_count.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(iwf.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(time_left.yfilter)
	|| ydk::is_set(since_reset.yfilter)
	|| ydk::is_set(padi_count.yfilter)
	|| ydk::is_set(padr_count.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (iwf.is_set || is_set(iwf.yfilter)) leaf_name_data.push_back(iwf.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());
    if (since_reset.is_set || is_set(since_reset.yfilter)) leaf_name_data.push_back(since_reset.get_name_leafdata());
    if (padi_count.is_set || is_set(padi_count.yfilter)) leaf_name_data.push_back(padi_count.get_name_leafdata());
    if (padr_count.is_set || is_set(padr_count.yfilter)) leaf_name_data.push_back(padr_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iwf")
    {
        iwf = value;
        iwf.value_namespace = name_space;
        iwf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "since-reset")
    {
        since_reset = value;
        since_reset.value_namespace = name_space;
        since_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padi-count")
    {
        padi_count = value;
        padi_count.value_namespace = name_space;
        padi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padr-count")
    {
        padr_count = value;
        padr_count.value_namespace = name_space;
        padr_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "iwf")
    {
        iwf.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
    if(value_path == "since-reset")
    {
        since_reset.yfilter = yfilter;
    }
    if(value_path == "padi-count")
    {
        padi_count.yfilter = yfilter;
    }
    if(value_path == "padr-count")
    {
        padr_count.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "mac-address" || name == "iwf" || name == "circuit-id" || name == "remote-id" || name == "outer-vlan-id" || name == "inner-vlan-id" || name == "state" || name == "time-left" || name == "since-reset" || name == "padi-count" || name == "padr-count")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::ThrottleConfig()
    :
    mac(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac>())
    , mac_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface>())
    , mac_iwf_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface>())
    , circuit_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId>())
    , remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId>())
    , circuit_id_and_remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId>())
    , outer_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId>())
    , inner_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId>())
    , vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId>())
{
    mac->parent = this;
    mac_access_interface->parent = this;
    mac_iwf_access_interface->parent = this;
    circuit_id->parent = this;
    remote_id->parent = this;
    circuit_id_and_remote_id->parent = this;
    outer_vlan_id->parent = this;
    inner_vlan_id->parent = this;
    vlan_id->parent = this;

    yang_name = "throttle-config"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::~ThrottleConfig()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_data())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_data())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_data())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_data())
	|| (vlan_id !=  nullptr && vlan_id->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_operation())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_operation())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_operation())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_operation())
	|| (vlan_id !=  nullptr && vlan_id->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mac-access-interface")
    {
        if(mac_access_interface == nullptr)
        {
            mac_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface>();
        }
        return mac_access_interface;
    }

    if(child_yang_name == "mac-iwf-access-interface")
    {
        if(mac_iwf_access_interface == nullptr)
        {
            mac_iwf_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface>();
        }
        return mac_iwf_access_interface;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "circuit-id-and-remote-id")
    {
        if(circuit_id_and_remote_id == nullptr)
        {
            circuit_id_and_remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId>();
        }
        return circuit_id_and_remote_id;
    }

    if(child_yang_name == "outer-vlan-id")
    {
        if(outer_vlan_id == nullptr)
        {
            outer_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId>();
        }
        return outer_vlan_id;
    }

    if(child_yang_name == "inner-vlan-id")
    {
        if(inner_vlan_id == nullptr)
        {
            inner_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId>();
        }
        return inner_vlan_id;
    }

    if(child_yang_name == "vlan-id")
    {
        if(vlan_id == nullptr)
        {
            vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId>();
        }
        return vlan_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(mac_access_interface != nullptr)
    {
        _children["mac-access-interface"] = mac_access_interface;
    }

    if(mac_iwf_access_interface != nullptr)
    {
        _children["mac-iwf-access-interface"] = mac_iwf_access_interface;
    }

    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    if(remote_id != nullptr)
    {
        _children["remote-id"] = remote_id;
    }

    if(circuit_id_and_remote_id != nullptr)
    {
        _children["circuit-id-and-remote-id"] = circuit_id_and_remote_id;
    }

    if(outer_vlan_id != nullptr)
    {
        _children["outer-vlan-id"] = outer_vlan_id;
    }

    if(inner_vlan_id != nullptr)
    {
        _children["inner-vlan-id"] = inner_vlan_id;
    }

    if(vlan_id != nullptr)
    {
        _children["vlan-id"] = vlan_id;
    }

    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-access-interface" || name == "mac-iwf-access-interface" || name == "circuit-id" || name == "remote-id" || name == "circuit-id-and-remote-id" || name == "outer-vlan-id" || name == "inner-vlan-id" || name == "vlan-id")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::Mac()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::~Mac()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::MacAccessInterface()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac-access-interface"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::~MacAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::MacIwfAccessInterface()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac-iwf-access-interface"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::~MacIwfAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::CircuitId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "circuit-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::~CircuitId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::RemoteId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "remote-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::~RemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::CircuitIdAndRemoteId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "circuit-id-and-remote-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::~CircuitIdAndRemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::OuterVlanId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "outer-vlan-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::~OuterVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::InnerVlanId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "inner-vlan-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::~InnerVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::VlanId()
    :
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "vlan-id"; yang_parent_name = "throttle-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::~VlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

Pppoe::Nodes::Node::SummaryTotal::SummaryTotal()
    :
    ready_access_interfaces{YType::uint32, "ready-access-interfaces"},
    not_ready_access_interfaces{YType::uint32, "not-ready-access-interfaces"},
    complete_sessions{YType::uint32, "complete-sessions"},
    incomplete_sessions{YType::uint32, "incomplete-sessions"},
    flow_control_limit{YType::uint32, "flow-control-limit"},
    flow_control_in_flight_sessions{YType::uint32, "flow-control-in-flight-sessions"},
    flow_control_dropped_sessions{YType::uint64, "flow-control-dropped-sessions"},
    flow_control_disconnected_sessions{YType::uint64, "flow-control-disconnected-sessions"},
    flow_control_successful_sessions{YType::uint64, "flow-control-successful-sessions"},
    pppoema_subscriber_infra_flow_control{YType::uint32, "pppoema-subscriber-infra-flow-control"}
{

    yang_name = "summary-total"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppoe::Nodes::Node::SummaryTotal::~SummaryTotal()
{
}

bool Pppoe::Nodes::Node::SummaryTotal::has_data() const
{
    if (is_presence_container) return true;
    return ready_access_interfaces.is_set
	|| not_ready_access_interfaces.is_set
	|| complete_sessions.is_set
	|| incomplete_sessions.is_set
	|| flow_control_limit.is_set
	|| flow_control_in_flight_sessions.is_set
	|| flow_control_dropped_sessions.is_set
	|| flow_control_disconnected_sessions.is_set
	|| flow_control_successful_sessions.is_set
	|| pppoema_subscriber_infra_flow_control.is_set;
}

bool Pppoe::Nodes::Node::SummaryTotal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ready_access_interfaces.yfilter)
	|| ydk::is_set(not_ready_access_interfaces.yfilter)
	|| ydk::is_set(complete_sessions.yfilter)
	|| ydk::is_set(incomplete_sessions.yfilter)
	|| ydk::is_set(flow_control_limit.yfilter)
	|| ydk::is_set(flow_control_in_flight_sessions.yfilter)
	|| ydk::is_set(flow_control_dropped_sessions.yfilter)
	|| ydk::is_set(flow_control_disconnected_sessions.yfilter)
	|| ydk::is_set(flow_control_successful_sessions.yfilter)
	|| ydk::is_set(pppoema_subscriber_infra_flow_control.yfilter);
}

std::string Pppoe::Nodes::Node::SummaryTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppoe::Nodes::Node::SummaryTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ready_access_interfaces.is_set || is_set(ready_access_interfaces.yfilter)) leaf_name_data.push_back(ready_access_interfaces.get_name_leafdata());
    if (not_ready_access_interfaces.is_set || is_set(not_ready_access_interfaces.yfilter)) leaf_name_data.push_back(not_ready_access_interfaces.get_name_leafdata());
    if (complete_sessions.is_set || is_set(complete_sessions.yfilter)) leaf_name_data.push_back(complete_sessions.get_name_leafdata());
    if (incomplete_sessions.is_set || is_set(incomplete_sessions.yfilter)) leaf_name_data.push_back(incomplete_sessions.get_name_leafdata());
    if (flow_control_limit.is_set || is_set(flow_control_limit.yfilter)) leaf_name_data.push_back(flow_control_limit.get_name_leafdata());
    if (flow_control_in_flight_sessions.is_set || is_set(flow_control_in_flight_sessions.yfilter)) leaf_name_data.push_back(flow_control_in_flight_sessions.get_name_leafdata());
    if (flow_control_dropped_sessions.is_set || is_set(flow_control_dropped_sessions.yfilter)) leaf_name_data.push_back(flow_control_dropped_sessions.get_name_leafdata());
    if (flow_control_disconnected_sessions.is_set || is_set(flow_control_disconnected_sessions.yfilter)) leaf_name_data.push_back(flow_control_disconnected_sessions.get_name_leafdata());
    if (flow_control_successful_sessions.is_set || is_set(flow_control_successful_sessions.yfilter)) leaf_name_data.push_back(flow_control_successful_sessions.get_name_leafdata());
    if (pppoema_subscriber_infra_flow_control.is_set || is_set(pppoema_subscriber_infra_flow_control.yfilter)) leaf_name_data.push_back(pppoema_subscriber_infra_flow_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppoe::Nodes::Node::SummaryTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppoe::Nodes::Node::SummaryTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppoe::Nodes::Node::SummaryTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ready-access-interfaces")
    {
        ready_access_interfaces = value;
        ready_access_interfaces.value_namespace = name_space;
        ready_access_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-access-interfaces")
    {
        not_ready_access_interfaces = value;
        not_ready_access_interfaces.value_namespace = name_space;
        not_ready_access_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-sessions")
    {
        complete_sessions = value;
        complete_sessions.value_namespace = name_space;
        complete_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions = value;
        incomplete_sessions.value_namespace = name_space;
        incomplete_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-limit")
    {
        flow_control_limit = value;
        flow_control_limit.value_namespace = name_space;
        flow_control_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-in-flight-sessions")
    {
        flow_control_in_flight_sessions = value;
        flow_control_in_flight_sessions.value_namespace = name_space;
        flow_control_in_flight_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-dropped-sessions")
    {
        flow_control_dropped_sessions = value;
        flow_control_dropped_sessions.value_namespace = name_space;
        flow_control_dropped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-disconnected-sessions")
    {
        flow_control_disconnected_sessions = value;
        flow_control_disconnected_sessions.value_namespace = name_space;
        flow_control_disconnected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-successful-sessions")
    {
        flow_control_successful_sessions = value;
        flow_control_successful_sessions.value_namespace = name_space;
        flow_control_successful_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoema-subscriber-infra-flow-control")
    {
        pppoema_subscriber_infra_flow_control = value;
        pppoema_subscriber_infra_flow_control.value_namespace = name_space;
        pppoema_subscriber_infra_flow_control.value_namespace_prefix = name_space_prefix;
    }
}

void Pppoe::Nodes::Node::SummaryTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ready-access-interfaces")
    {
        ready_access_interfaces.yfilter = yfilter;
    }
    if(value_path == "not-ready-access-interfaces")
    {
        not_ready_access_interfaces.yfilter = yfilter;
    }
    if(value_path == "complete-sessions")
    {
        complete_sessions.yfilter = yfilter;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions.yfilter = yfilter;
    }
    if(value_path == "flow-control-limit")
    {
        flow_control_limit.yfilter = yfilter;
    }
    if(value_path == "flow-control-in-flight-sessions")
    {
        flow_control_in_flight_sessions.yfilter = yfilter;
    }
    if(value_path == "flow-control-dropped-sessions")
    {
        flow_control_dropped_sessions.yfilter = yfilter;
    }
    if(value_path == "flow-control-disconnected-sessions")
    {
        flow_control_disconnected_sessions.yfilter = yfilter;
    }
    if(value_path == "flow-control-successful-sessions")
    {
        flow_control_successful_sessions.yfilter = yfilter;
    }
    if(value_path == "pppoema-subscriber-infra-flow-control")
    {
        pppoema_subscriber_infra_flow_control.yfilter = yfilter;
    }
}

bool Pppoe::Nodes::Node::SummaryTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ready-access-interfaces" || name == "not-ready-access-interfaces" || name == "complete-sessions" || name == "incomplete-sessions" || name == "flow-control-limit" || name == "flow-control-in-flight-sessions" || name == "flow-control-dropped-sessions" || name == "flow-control-disconnected-sessions" || name == "flow-control-successful-sessions" || name == "pppoema-subscriber-infra-flow-control")
        return true;
    return false;
}

const Enum::YLeaf PppoeMaSessionState::destroying {0, "destroying"};
const Enum::YLeaf PppoeMaSessionState::deleting {1, "deleting"};
const Enum::YLeaf PppoeMaSessionState::initializing {2, "initializing"};
const Enum::YLeaf PppoeMaSessionState::created {3, "created"};
const Enum::YLeaf PppoeMaSessionState::stopping {4, "stopping"};
const Enum::YLeaf PppoeMaSessionState::started {5, "started"};
const Enum::YLeaf PppoeMaSessionState::activated {6, "activated"};
const Enum::YLeaf PppoeMaSessionState::complete {7, "complete"};

const Enum::YLeaf PppoeMaSessionIdbSrgState::none {0, "none"};
const Enum::YLeaf PppoeMaSessionIdbSrgState::active {1, "active"};
const Enum::YLeaf PppoeMaSessionIdbSrgState::standby {2, "standby"};

const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_error {0, "pppoe-ma-session-trig-error"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_publish_encaps_attr_fail {1, "pppoe-ma-session-trig-publish-encaps-attr-fail"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_if_create_fail {2, "pppoe-ma-session-trig-if-create-fail"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_iedge_session_start_fail {3, "pppoe-ma-session-trig-iedge-session-start-fail"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_iedge_session_update_fail {4, "pppoe-ma-session-trig-iedge-session-update-fail"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_sub_db_activate_fail {5, "pppoe-ma-session-trig-sub-db-activate-fail"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_in_flight_timeout {6, "pppoe-ma-session-trig-in-flight-timeout"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_down {7, "pppoe-ma-session-trig-down"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_parent {8, "pppoe-ma-session-trig-parent"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_padt {9, "pppoe-ma-session-trig-padt"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_session_pak {10, "pppoe-ma-session-trig-session-pak"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_final {11, "pppoe-ma-session-trig-final"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_no_im_or {12, "pppoe-ma-session-trig-no-im-or"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_restart {13, "pppoe-ma-session-trig-restart"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_admissions_config_change {14, "pppoe-ma-session-trig-admissions-config-change"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_iedge_disconnect {15, "pppoe-ma-session-trig-iedge-disconnect"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_invalid_vlan_tags {16, "pppoe-ma-session-trig-invalid-vlan-tags"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_port_limit_disconnect {17, "pppoe-ma-session-trig-port-limit-disconnect"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_srg_disconnect {18, "pppoe-ma-session-trig-srg-disconnect"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_srg_sweep {19, "pppoe-ma-session-trig-srg-sweep"};
const Enum::YLeaf PppoeMaSessionTrig::pppoe_ma_session_trig_count {20, "pppoe-ma-session-trig-count"};

const Enum::YLeaf PppoeMaLimitState::ok {0, "ok"};
const Enum::YLeaf PppoeMaLimitState::warning {1, "warning"};
const Enum::YLeaf PppoeMaLimitState::block {2, "block"};

const Enum::YLeaf PppoeMaThrottleState::idle {0, "idle"};
const Enum::YLeaf PppoeMaThrottleState::monitor {1, "monitor"};
const Enum::YLeaf PppoeMaThrottleState::block {2, "block"};


}
}

