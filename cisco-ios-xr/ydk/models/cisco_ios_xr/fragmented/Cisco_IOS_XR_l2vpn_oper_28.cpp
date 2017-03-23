
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_28.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_36.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_30.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_29.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_31.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_32.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_35.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_data() const
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

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FsbiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_data() const
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

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
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

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnicastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedDrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsgDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionOoODrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionP2MpStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacMove' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SequenceNumber' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::P2MpPw()
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
    yang_name = "p2mp-pw"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_data() const
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

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_operation() const
{
    return is_set(operation)
	|| is_set(local_available.operation)
	|| is_set(local_extended_tunnel_id.operation)
	|| is_set(local_flags.operation)
	|| is_set(local_label.operation)
	|| is_set(local_p2mp_id.operation)
	|| is_set(local_ptree_type.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_available.operation)
	|| is_set(remote_extended_tunnel_id.operation)
	|| is_set(remote_flags.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_p2mp_id.operation)
	|| is_set(remote_ptree_type.operation)
	|| is_set(remote_tunnel_id.operation);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpPw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.operation)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.operation)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.operation)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.operation)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.operation)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.operation)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.operation)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.operation)) leaf_name_data.push_back(remote_flags.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.operation)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.operation)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-available")
    {
        local_available = value;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectBrief::XconnectBrief()
    :
    main_total_down{YType::uint32, "main-total-down"},
    main_total_unresolved{YType::uint32, "main-total-unresolved"},
    main_total_up{YType::uint32, "main-total-up"},
    memory_state{YType::enumeration, "memory-state"},
    undefined_xc{YType::uint32, "undefined-xc"}
{
    yang_name = "xconnect-brief"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::XconnectBrief::~XconnectBrief()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_data() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_data())
            return true;
    }
    return main_total_down.is_set
	|| main_total_unresolved.is_set
	|| main_total_up.is_set
	|| memory_state.is_set
	|| undefined_xc.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_operation() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(main_total_down.operation)
	|| is_set(main_total_unresolved.operation)
	|| is_set(main_total_up.operation)
	|| is_set(memory_state.operation)
	|| is_set(undefined_xc.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-brief";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::XconnectBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectBrief' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_total_down.is_set || is_set(main_total_down.operation)) leaf_name_data.push_back(main_total_down.get_name_leafdata());
    if (main_total_unresolved.is_set || is_set(main_total_unresolved.operation)) leaf_name_data.push_back(main_total_unresolved.get_name_leafdata());
    if (main_total_up.is_set || is_set(main_total_up.operation)) leaf_name_data.push_back(main_total_up.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.operation)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (undefined_xc.is_set || is_set(undefined_xc.operation)) leaf_name_data.push_back(undefined_xc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-report-matrix")
    {
        for(auto const & c : encapsulation_report_matrix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix>();
        c->parent = this;
        encapsulation_report_matrix.push_back(std::move(c));
        children[segment_path] = encapsulation_report_matrix.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-total")
    {
        for(auto const & c : encapsulation_total)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal>();
        c->parent = this;
        encapsulation_total.push_back(std::move(c));
        children[segment_path] = encapsulation_total.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::XconnectBrief::get_children()
{
    for (auto const & c : encapsulation_report_matrix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : encapsulation_total)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "main-total-down")
    {
        main_total_down = value;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved = value;
    }
    if(value_path == "main-total-up")
    {
        main_total_up = value;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc = value;
    }
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::EncapsulationReportMatrix()
{
    yang_name = "encapsulation-report-matrix"; yang_parent_name = "xconnect-brief";
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::~EncapsulationReportMatrix()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_data() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_operation() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-report-matrix";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationReportMatrix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac1")
    {
        for(auto const & c : ac1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1>();
        c->parent = this;
        ac1.push_back(std::move(c));
        children[segment_path] = ac1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_children()
{
    for (auto const & c : ac1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac1()
{
    yang_name = "ac1"; yang_parent_name = "encapsulation-report-matrix";
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::~Ac1()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_data() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_operation() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac1";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac1' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac2")
    {
        for(auto const & c : ac2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2>();
        c->parent = this;
        ac2.push_back(std::move(c));
        children[segment_path] = ac2.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_children()
{
    for (auto const & c : ac2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::Ac2()
    :
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"},
    down_count{YType::uint32, "down-count"},
    unresolved_count{YType::uint32, "unresolved-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "ac2"; yang_parent_name = "ac1";
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::~Ac2()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_data() const
{
    for (auto const & leaf : down_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unresolved_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_operation() const
{
    for (auto const & leaf : down_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unresolved_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ac1_encapsulation.operation)
	|| is_set(ac2_encapsulation.operation)
	|| is_set(down_count.operation)
	|| is_set(unresolved_count.operation)
	|| is_set(up_count.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac2";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.operation)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.operation)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    auto down_count_name_datas = down_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_count_name_datas.begin(), down_count_name_datas.end());
    auto unresolved_count_name_datas = unresolved_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unresolved_count_name_datas.begin(), unresolved_count_name_datas.end());
    auto up_count_name_datas = up_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_count_name_datas.begin(), up_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
    }
    if(value_path == "down-count")
    {
        down_count.append(value);
    }
    if(value_path == "unresolved-count")
    {
        unresolved_count.append(value);
    }
    if(value_path == "up-count")
    {
        up_count.append(value);
    }
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::EncapsulationTotal()
    :
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"},
    down_count{YType::uint32, "down-count"},
    unresolved_count{YType::uint32, "unresolved-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "encapsulation-total"; yang_parent_name = "xconnect-brief";
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::~EncapsulationTotal()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_data() const
{
    for (auto const & leaf : down_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unresolved_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_operation() const
{
    for (auto const & leaf : down_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unresolved_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ac1_encapsulation.operation)
	|| is_set(ac2_encapsulation.operation)
	|| is_set(down_count.operation)
	|| is_set(unresolved_count.operation)
	|| is_set(up_count.operation);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-total";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationTotal' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.operation)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.operation)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    auto down_count_name_datas = down_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_count_name_datas.begin(), down_count_name_datas.end());
    auto unresolved_count_name_datas = unresolved_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unresolved_count_name_datas.begin(), unresolved_count_name_datas.end());
    auto up_count_name_datas = up_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_count_name_datas.begin(), up_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
    }
    if(value_path == "down-count")
    {
        down_count.append(value);
    }
    if(value_path == "unresolved-count")
    {
        unresolved_count.append(value);
    }
    if(value_path == "up-count")
    {
        up_count.append(value);
    }
}

L2Vpn::L2Vpn()
    :
    bridge_domains(std::make_shared<L2Vpn::BridgeDomains>())
	,bridge_summary(std::make_shared<L2Vpn::BridgeSummary>())
	,discoveries(std::make_shared<L2Vpn::Discoveries>())
	,discovery_summary(std::make_shared<L2Vpn::DiscoverySummary>())
	,flexible_xconnect_service_summary(std::make_shared<L2Vpn::FlexibleXconnectServiceSummary>())
	,flexible_xconnect_services(std::make_shared<L2Vpn::FlexibleXconnectServices>())
	,g8032(std::make_shared<L2Vpn::G8032>())
	,generic_interface_list_details(std::make_shared<L2Vpn::GenericInterfaceListDetails>())
	,generic_interfaces(std::make_shared<L2Vpn::GenericInterfaces>())
	,global_settings(std::make_shared<L2Vpn::GlobalSettings>())
	,iccp_sm(std::make_shared<L2Vpn::IccpSm>())
	,indexes(std::make_shared<L2Vpn::Indexes>())
	,l2vpn_collaborators(std::make_shared<L2Vpn::L2VpnCollaborators>())
	,l2vpn_pbb_bsa(std::make_shared<L2Vpn::L2VpnPbbBsa>())
	,l2vpn_resource_state(std::make_shared<L2Vpn::L2VpnResourceState>())
	,main_interfaces(std::make_shared<L2Vpn::MainInterfaces>())
	,mstp_ports(std::make_shared<L2Vpn::MstpPorts>())
	,mstp_vlans(std::make_shared<L2Vpn::MstpVlans>())
	,mvrp(std::make_shared<L2Vpn::Mvrp>())
	,nsr(std::make_shared<L2Vpn::Nsr>())
	,proc_fsm(std::make_shared<L2Vpn::ProcFsm>())
	,pseudowire_classes(std::make_shared<L2Vpn::PseudowireClasses>())
	,pseudowire_headend(std::make_shared<L2Vpn::PseudowireHeadend>())
	,pwr(std::make_shared<L2Vpn::Pwr>())
	,xconnect_brief(std::make_shared<L2Vpn::XconnectBrief>())
	,xconnect_groups(std::make_shared<L2Vpn::XconnectGroups>())
	,xconnect_mp2mp_ce2ces(std::make_shared<L2Vpn::XconnectMp2MpCe2Ces>())
	,xconnect_mp2mps(std::make_shared<L2Vpn::XconnectMp2Mps>())
	,xconnect_summary(std::make_shared<L2Vpn::XconnectSummary>())
	,xconnects(std::make_shared<L2Vpn::Xconnects>())
{
    bridge_domains->parent = this;
    children["bridge-domains"] = bridge_domains;

    bridge_summary->parent = this;
    children["bridge-summary"] = bridge_summary;

    discoveries->parent = this;
    children["discoveries"] = discoveries;

    discovery_summary->parent = this;
    children["discovery-summary"] = discovery_summary;

    flexible_xconnect_service_summary->parent = this;
    children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;

    flexible_xconnect_services->parent = this;
    children["flexible-xconnect-services"] = flexible_xconnect_services;

    g8032->parent = this;
    children["g8032"] = g8032;

    generic_interface_list_details->parent = this;
    children["generic-interface-list-details"] = generic_interface_list_details;

    generic_interfaces->parent = this;
    children["generic-interfaces"] = generic_interfaces;

    global_settings->parent = this;
    children["global-settings"] = global_settings;

    iccp_sm->parent = this;
    children["iccp-sm"] = iccp_sm;

    indexes->parent = this;
    children["indexes"] = indexes;

    l2vpn_collaborators->parent = this;
    children["l2vpn-collaborators"] = l2vpn_collaborators;

    l2vpn_pbb_bsa->parent = this;
    children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;

    l2vpn_resource_state->parent = this;
    children["l2vpn-resource-state"] = l2vpn_resource_state;

    main_interfaces->parent = this;
    children["main-interfaces"] = main_interfaces;

    mstp_ports->parent = this;
    children["mstp-ports"] = mstp_ports;

    mstp_vlans->parent = this;
    children["mstp-vlans"] = mstp_vlans;

    mvrp->parent = this;
    children["mvrp"] = mvrp;

    nsr->parent = this;
    children["nsr"] = nsr;

    proc_fsm->parent = this;
    children["proc-fsm"] = proc_fsm;

    pseudowire_classes->parent = this;
    children["pseudowire-classes"] = pseudowire_classes;

    pseudowire_headend->parent = this;
    children["pseudowire-headend"] = pseudowire_headend;

    pwr->parent = this;
    children["pwr"] = pwr;

    xconnect_brief->parent = this;
    children["xconnect-brief"] = xconnect_brief;

    xconnect_groups->parent = this;
    children["xconnect-groups"] = xconnect_groups;

    xconnect_mp2mp_ce2ces->parent = this;
    children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;

    xconnect_mp2mps->parent = this;
    children["xconnect-mp2mps"] = xconnect_mp2mps;

    xconnect_summary->parent = this;
    children["xconnect-summary"] = xconnect_summary;

    xconnects->parent = this;
    children["xconnects"] = xconnects;

    yang_name = "l2vpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper";
}

L2Vpn::~L2Vpn()
{
}

bool L2Vpn::has_data() const
{
    return (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (bridge_summary !=  nullptr && bridge_summary->has_data())
	|| (discoveries !=  nullptr && discoveries->has_data())
	|| (discovery_summary !=  nullptr && discovery_summary->has_data())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_data())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_data())
	|| (g8032 !=  nullptr && g8032->has_data())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_data())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_data())
	|| (global_settings !=  nullptr && global_settings->has_data())
	|| (iccp_sm !=  nullptr && iccp_sm->has_data())
	|| (indexes !=  nullptr && indexes->has_data())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_data())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_data())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_data())
	|| (main_interfaces !=  nullptr && main_interfaces->has_data())
	|| (mstp_ports !=  nullptr && mstp_ports->has_data())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (proc_fsm !=  nullptr && proc_fsm->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_data())
	|| (pwr !=  nullptr && pwr->has_data())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_data())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (xconnects !=  nullptr && xconnects->has_data());
}

bool L2Vpn::has_operation() const
{
    return is_set(operation)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (bridge_summary !=  nullptr && bridge_summary->has_operation())
	|| (discoveries !=  nullptr && discoveries->has_operation())
	|| (discovery_summary !=  nullptr && discovery_summary->has_operation())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_operation())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_operation())
	|| (g8032 !=  nullptr && g8032->has_operation())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_operation())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation())
	|| (global_settings !=  nullptr && global_settings->has_operation())
	|| (iccp_sm !=  nullptr && iccp_sm->has_operation())
	|| (indexes !=  nullptr && indexes->has_operation())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_operation())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_operation())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_operation())
	|| (main_interfaces !=  nullptr && main_interfaces->has_operation())
	|| (mstp_ports !=  nullptr && mstp_ports->has_operation())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (proc_fsm !=  nullptr && proc_fsm->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_operation())
	|| (pwr !=  nullptr && pwr->has_operation())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_operation())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (xconnects !=  nullptr && xconnects->has_operation());
}

std::string L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn";

    return path_buffer.str();

}

EntityPath L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains != nullptr)
        {
            children["bridge-domains"] = bridge_domains;
        }
        else
        {
            bridge_domains = std::make_shared<L2Vpn::BridgeDomains>();
            bridge_domains->parent = this;
            children["bridge-domains"] = bridge_domains;
        }
        return children.at("bridge-domains");
    }

    if(child_yang_name == "bridge-summary")
    {
        if(bridge_summary != nullptr)
        {
            children["bridge-summary"] = bridge_summary;
        }
        else
        {
            bridge_summary = std::make_shared<L2Vpn::BridgeSummary>();
            bridge_summary->parent = this;
            children["bridge-summary"] = bridge_summary;
        }
        return children.at("bridge-summary");
    }

    if(child_yang_name == "discoveries")
    {
        if(discoveries != nullptr)
        {
            children["discoveries"] = discoveries;
        }
        else
        {
            discoveries = std::make_shared<L2Vpn::Discoveries>();
            discoveries->parent = this;
            children["discoveries"] = discoveries;
        }
        return children.at("discoveries");
    }

    if(child_yang_name == "discovery-summary")
    {
        if(discovery_summary != nullptr)
        {
            children["discovery-summary"] = discovery_summary;
        }
        else
        {
            discovery_summary = std::make_shared<L2Vpn::DiscoverySummary>();
            discovery_summary->parent = this;
            children["discovery-summary"] = discovery_summary;
        }
        return children.at("discovery-summary");
    }

    if(child_yang_name == "flexible-xconnect-service-summary")
    {
        if(flexible_xconnect_service_summary != nullptr)
        {
            children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
        }
        else
        {
            flexible_xconnect_service_summary = std::make_shared<L2Vpn::FlexibleXconnectServiceSummary>();
            flexible_xconnect_service_summary->parent = this;
            children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
        }
        return children.at("flexible-xconnect-service-summary");
    }

    if(child_yang_name == "flexible-xconnect-services")
    {
        if(flexible_xconnect_services != nullptr)
        {
            children["flexible-xconnect-services"] = flexible_xconnect_services;
        }
        else
        {
            flexible_xconnect_services = std::make_shared<L2Vpn::FlexibleXconnectServices>();
            flexible_xconnect_services->parent = this;
            children["flexible-xconnect-services"] = flexible_xconnect_services;
        }
        return children.at("flexible-xconnect-services");
    }

    if(child_yang_name == "g8032")
    {
        if(g8032 != nullptr)
        {
            children["g8032"] = g8032;
        }
        else
        {
            g8032 = std::make_shared<L2Vpn::G8032>();
            g8032->parent = this;
            children["g8032"] = g8032;
        }
        return children.at("g8032");
    }

    if(child_yang_name == "generic-interface-list-details")
    {
        if(generic_interface_list_details != nullptr)
        {
            children["generic-interface-list-details"] = generic_interface_list_details;
        }
        else
        {
            generic_interface_list_details = std::make_shared<L2Vpn::GenericInterfaceListDetails>();
            generic_interface_list_details->parent = this;
            children["generic-interface-list-details"] = generic_interface_list_details;
        }
        return children.at("generic-interface-list-details");
    }

    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces != nullptr)
        {
            children["generic-interfaces"] = generic_interfaces;
        }
        else
        {
            generic_interfaces = std::make_shared<L2Vpn::GenericInterfaces>();
            generic_interfaces->parent = this;
            children["generic-interfaces"] = generic_interfaces;
        }
        return children.at("generic-interfaces");
    }

    if(child_yang_name == "global-settings")
    {
        if(global_settings != nullptr)
        {
            children["global-settings"] = global_settings;
        }
        else
        {
            global_settings = std::make_shared<L2Vpn::GlobalSettings>();
            global_settings->parent = this;
            children["global-settings"] = global_settings;
        }
        return children.at("global-settings");
    }

    if(child_yang_name == "iccp-sm")
    {
        if(iccp_sm != nullptr)
        {
            children["iccp-sm"] = iccp_sm;
        }
        else
        {
            iccp_sm = std::make_shared<L2Vpn::IccpSm>();
            iccp_sm->parent = this;
            children["iccp-sm"] = iccp_sm;
        }
        return children.at("iccp-sm");
    }

    if(child_yang_name == "indexes")
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes;
        }
        else
        {
            indexes = std::make_shared<L2Vpn::Indexes>();
            indexes->parent = this;
            children["indexes"] = indexes;
        }
        return children.at("indexes");
    }

    if(child_yang_name == "l2vpn-collaborators")
    {
        if(l2vpn_collaborators != nullptr)
        {
            children["l2vpn-collaborators"] = l2vpn_collaborators;
        }
        else
        {
            l2vpn_collaborators = std::make_shared<L2Vpn::L2VpnCollaborators>();
            l2vpn_collaborators->parent = this;
            children["l2vpn-collaborators"] = l2vpn_collaborators;
        }
        return children.at("l2vpn-collaborators");
    }

    if(child_yang_name == "l2vpn-pbb-bsa")
    {
        if(l2vpn_pbb_bsa != nullptr)
        {
            children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
        }
        else
        {
            l2vpn_pbb_bsa = std::make_shared<L2Vpn::L2VpnPbbBsa>();
            l2vpn_pbb_bsa->parent = this;
            children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
        }
        return children.at("l2vpn-pbb-bsa");
    }

    if(child_yang_name == "l2vpn-resource-state")
    {
        if(l2vpn_resource_state != nullptr)
        {
            children["l2vpn-resource-state"] = l2vpn_resource_state;
        }
        else
        {
            l2vpn_resource_state = std::make_shared<L2Vpn::L2VpnResourceState>();
            l2vpn_resource_state->parent = this;
            children["l2vpn-resource-state"] = l2vpn_resource_state;
        }
        return children.at("l2vpn-resource-state");
    }

    if(child_yang_name == "main-interfaces")
    {
        if(main_interfaces != nullptr)
        {
            children["main-interfaces"] = main_interfaces;
        }
        else
        {
            main_interfaces = std::make_shared<L2Vpn::MainInterfaces>();
            main_interfaces->parent = this;
            children["main-interfaces"] = main_interfaces;
        }
        return children.at("main-interfaces");
    }

    if(child_yang_name == "mstp-ports")
    {
        if(mstp_ports != nullptr)
        {
            children["mstp-ports"] = mstp_ports;
        }
        else
        {
            mstp_ports = std::make_shared<L2Vpn::MstpPorts>();
            mstp_ports->parent = this;
            children["mstp-ports"] = mstp_ports;
        }
        return children.at("mstp-ports");
    }

    if(child_yang_name == "mstp-vlans")
    {
        if(mstp_vlans != nullptr)
        {
            children["mstp-vlans"] = mstp_vlans;
        }
        else
        {
            mstp_vlans = std::make_shared<L2Vpn::MstpVlans>();
            mstp_vlans->parent = this;
            children["mstp-vlans"] = mstp_vlans;
        }
        return children.at("mstp-vlans");
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp != nullptr)
        {
            children["mvrp"] = mvrp;
        }
        else
        {
            mvrp = std::make_shared<L2Vpn::Mvrp>();
            mvrp->parent = this;
            children["mvrp"] = mvrp;
        }
        return children.at("mvrp");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<L2Vpn::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "proc-fsm")
    {
        if(proc_fsm != nullptr)
        {
            children["proc-fsm"] = proc_fsm;
        }
        else
        {
            proc_fsm = std::make_shared<L2Vpn::ProcFsm>();
            proc_fsm->parent = this;
            children["proc-fsm"] = proc_fsm;
        }
        return children.at("proc-fsm");
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes != nullptr)
        {
            children["pseudowire-classes"] = pseudowire_classes;
        }
        else
        {
            pseudowire_classes = std::make_shared<L2Vpn::PseudowireClasses>();
            pseudowire_classes->parent = this;
            children["pseudowire-classes"] = pseudowire_classes;
        }
        return children.at("pseudowire-classes");
    }

    if(child_yang_name == "pseudowire-headend")
    {
        if(pseudowire_headend != nullptr)
        {
            children["pseudowire-headend"] = pseudowire_headend;
        }
        else
        {
            pseudowire_headend = std::make_shared<L2Vpn::PseudowireHeadend>();
            pseudowire_headend->parent = this;
            children["pseudowire-headend"] = pseudowire_headend;
        }
        return children.at("pseudowire-headend");
    }

    if(child_yang_name == "pwr")
    {
        if(pwr != nullptr)
        {
            children["pwr"] = pwr;
        }
        else
        {
            pwr = std::make_shared<L2Vpn::Pwr>();
            pwr->parent = this;
            children["pwr"] = pwr;
        }
        return children.at("pwr");
    }

    if(child_yang_name == "xconnect-brief")
    {
        if(xconnect_brief != nullptr)
        {
            children["xconnect-brief"] = xconnect_brief;
        }
        else
        {
            xconnect_brief = std::make_shared<L2Vpn::XconnectBrief>();
            xconnect_brief->parent = this;
            children["xconnect-brief"] = xconnect_brief;
        }
        return children.at("xconnect-brief");
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups != nullptr)
        {
            children["xconnect-groups"] = xconnect_groups;
        }
        else
        {
            xconnect_groups = std::make_shared<L2Vpn::XconnectGroups>();
            xconnect_groups->parent = this;
            children["xconnect-groups"] = xconnect_groups;
        }
        return children.at("xconnect-groups");
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ces")
    {
        if(xconnect_mp2mp_ce2ces != nullptr)
        {
            children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
        }
        else
        {
            xconnect_mp2mp_ce2ces = std::make_shared<L2Vpn::XconnectMp2MpCe2Ces>();
            xconnect_mp2mp_ce2ces->parent = this;
            children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
        }
        return children.at("xconnect-mp2mp-ce2ces");
    }

    if(child_yang_name == "xconnect-mp2mps")
    {
        if(xconnect_mp2mps != nullptr)
        {
            children["xconnect-mp2mps"] = xconnect_mp2mps;
        }
        else
        {
            xconnect_mp2mps = std::make_shared<L2Vpn::XconnectMp2Mps>();
            xconnect_mp2mps->parent = this;
            children["xconnect-mp2mps"] = xconnect_mp2mps;
        }
        return children.at("xconnect-mp2mps");
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary != nullptr)
        {
            children["xconnect-summary"] = xconnect_summary;
        }
        else
        {
            xconnect_summary = std::make_shared<L2Vpn::XconnectSummary>();
            xconnect_summary->parent = this;
            children["xconnect-summary"] = xconnect_summary;
        }
        return children.at("xconnect-summary");
    }

    if(child_yang_name == "xconnects")
    {
        if(xconnects != nullptr)
        {
            children["xconnects"] = xconnects;
        }
        else
        {
            xconnects = std::make_shared<L2Vpn::Xconnects>();
            xconnects->parent = this;
            children["xconnects"] = xconnects;
        }
        return children.at("xconnects");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::get_children()
{
    if(children.find("bridge-domains") == children.end())
    {
        if(bridge_domains != nullptr)
        {
            children["bridge-domains"] = bridge_domains;
        }
    }

    if(children.find("bridge-summary") == children.end())
    {
        if(bridge_summary != nullptr)
        {
            children["bridge-summary"] = bridge_summary;
        }
    }

    if(children.find("discoveries") == children.end())
    {
        if(discoveries != nullptr)
        {
            children["discoveries"] = discoveries;
        }
    }

    if(children.find("discovery-summary") == children.end())
    {
        if(discovery_summary != nullptr)
        {
            children["discovery-summary"] = discovery_summary;
        }
    }

    if(children.find("flexible-xconnect-service-summary") == children.end())
    {
        if(flexible_xconnect_service_summary != nullptr)
        {
            children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
        }
    }

    if(children.find("flexible-xconnect-services") == children.end())
    {
        if(flexible_xconnect_services != nullptr)
        {
            children["flexible-xconnect-services"] = flexible_xconnect_services;
        }
    }

    if(children.find("g8032") == children.end())
    {
        if(g8032 != nullptr)
        {
            children["g8032"] = g8032;
        }
    }

    if(children.find("generic-interface-list-details") == children.end())
    {
        if(generic_interface_list_details != nullptr)
        {
            children["generic-interface-list-details"] = generic_interface_list_details;
        }
    }

    if(children.find("generic-interfaces") == children.end())
    {
        if(generic_interfaces != nullptr)
        {
            children["generic-interfaces"] = generic_interfaces;
        }
    }

    if(children.find("global-settings") == children.end())
    {
        if(global_settings != nullptr)
        {
            children["global-settings"] = global_settings;
        }
    }

    if(children.find("iccp-sm") == children.end())
    {
        if(iccp_sm != nullptr)
        {
            children["iccp-sm"] = iccp_sm;
        }
    }

    if(children.find("indexes") == children.end())
    {
        if(indexes != nullptr)
        {
            children["indexes"] = indexes;
        }
    }

    if(children.find("l2vpn-collaborators") == children.end())
    {
        if(l2vpn_collaborators != nullptr)
        {
            children["l2vpn-collaborators"] = l2vpn_collaborators;
        }
    }

    if(children.find("l2vpn-pbb-bsa") == children.end())
    {
        if(l2vpn_pbb_bsa != nullptr)
        {
            children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
        }
    }

    if(children.find("l2vpn-resource-state") == children.end())
    {
        if(l2vpn_resource_state != nullptr)
        {
            children["l2vpn-resource-state"] = l2vpn_resource_state;
        }
    }

    if(children.find("main-interfaces") == children.end())
    {
        if(main_interfaces != nullptr)
        {
            children["main-interfaces"] = main_interfaces;
        }
    }

    if(children.find("mstp-ports") == children.end())
    {
        if(mstp_ports != nullptr)
        {
            children["mstp-ports"] = mstp_ports;
        }
    }

    if(children.find("mstp-vlans") == children.end())
    {
        if(mstp_vlans != nullptr)
        {
            children["mstp-vlans"] = mstp_vlans;
        }
    }

    if(children.find("mvrp") == children.end())
    {
        if(mvrp != nullptr)
        {
            children["mvrp"] = mvrp;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("proc-fsm") == children.end())
    {
        if(proc_fsm != nullptr)
        {
            children["proc-fsm"] = proc_fsm;
        }
    }

    if(children.find("pseudowire-classes") == children.end())
    {
        if(pseudowire_classes != nullptr)
        {
            children["pseudowire-classes"] = pseudowire_classes;
        }
    }

    if(children.find("pseudowire-headend") == children.end())
    {
        if(pseudowire_headend != nullptr)
        {
            children["pseudowire-headend"] = pseudowire_headend;
        }
    }

    if(children.find("pwr") == children.end())
    {
        if(pwr != nullptr)
        {
            children["pwr"] = pwr;
        }
    }

    if(children.find("xconnect-brief") == children.end())
    {
        if(xconnect_brief != nullptr)
        {
            children["xconnect-brief"] = xconnect_brief;
        }
    }

    if(children.find("xconnect-groups") == children.end())
    {
        if(xconnect_groups != nullptr)
        {
            children["xconnect-groups"] = xconnect_groups;
        }
    }

    if(children.find("xconnect-mp2mp-ce2ces") == children.end())
    {
        if(xconnect_mp2mp_ce2ces != nullptr)
        {
            children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
        }
    }

    if(children.find("xconnect-mp2mps") == children.end())
    {
        if(xconnect_mp2mps != nullptr)
        {
            children["xconnect-mp2mps"] = xconnect_mp2mps;
        }
    }

    if(children.find("xconnect-summary") == children.end())
    {
        if(xconnect_summary != nullptr)
        {
            children["xconnect-summary"] = xconnect_summary;
        }
    }

    if(children.find("xconnects") == children.end())
    {
        if(xconnects != nullptr)
        {
            children["xconnects"] = xconnects;
        }
    }

    return children;
}

void L2Vpn::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2Vpn::clone_ptr() const
{
    return std::make_shared<L2Vpn>();
}

std::string L2Vpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Vpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Vpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Vpn::PseudowireHeadend::PseudowireHeadend()
    :
    detail_interfaces(std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces>())
	,summary(std::make_shared<L2Vpn::PseudowireHeadend::Summary>())
{
    detail_interfaces->parent = this;
    children["detail-interfaces"] = detail_interfaces;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "pseudowire-headend"; yang_parent_name = "l2vpn";
}

L2Vpn::PseudowireHeadend::~PseudowireHeadend()
{
}

bool L2Vpn::PseudowireHeadend::has_data() const
{
    return (detail_interfaces !=  nullptr && detail_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool L2Vpn::PseudowireHeadend::has_operation() const
{
    return is_set(operation)
	|| (detail_interfaces !=  nullptr && detail_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpn::PseudowireHeadend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-headend";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-interfaces")
    {
        if(detail_interfaces != nullptr)
        {
            children["detail-interfaces"] = detail_interfaces;
        }
        else
        {
            detail_interfaces = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces>();
            detail_interfaces->parent = this;
            children["detail-interfaces"] = detail_interfaces;
        }
        return children.at("detail-interfaces");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<L2Vpn::PseudowireHeadend::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::get_children()
{
    if(children.find("detail-interfaces") == children.end())
    {
        if(detail_interfaces != nullptr)
        {
            children["detail-interfaces"] = detail_interfaces;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void L2Vpn::PseudowireHeadend::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterfaces()
{
    yang_name = "detail-interfaces"; yang_parent_name = "pseudowire-headend";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::~DetailInterfaces()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::has_data() const
{
    for (std::size_t index=0; index<detail_interface.size(); index++)
    {
        if(detail_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::has_operation() const
{
    for (std::size_t index=0; index<detail_interface.size(); index++)
    {
        if(detail_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interfaces";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pseudowire-headend/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-interface")
    {
        for(auto const & c : detail_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface>();
        c->parent = this;
        detail_interface.push_back(std::move(c));
        children[segment_path] = detail_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::get_children()
{
    for (auto const & c : detail_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::DetailInterface()
    :
    interface_name{YType::str, "interface-name"},
    admin_state{YType::enumeration, "admin-state"},
    bandwidth{YType::uint32, "bandwidth"},
    control_word{YType::boolean, "control-word"},
    interface_state{YType::enumeration, "interface-state"},
    l2_overhead{YType::uint32, "l2-overhead"},
    label{YType::uint32, "label"},
    mtu{YType::uint32, "mtu"},
    vctype{YType::uint32, "vctype"}
    	,
    generic_interface_list(std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>())
	,l2_address(std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>())
{
    generic_interface_list->parent = this;
    children["generic-interface-list"] = generic_interface_list;

    l2_address->parent = this;
    children["l2-address"] = l2_address;

    yang_name = "detail-interface"; yang_parent_name = "detail-interfaces";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::~DetailInterface()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::has_data() const
{
    return interface_name.is_set
	|| admin_state.is_set
	|| bandwidth.is_set
	|| control_word.is_set
	|| interface_state.is_set
	|| l2_overhead.is_set
	|| label.is_set
	|| mtu.is_set
	|| vctype.is_set
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_data())
	|| (l2_address !=  nullptr && l2_address->has_data());
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(admin_state.operation)
	|| is_set(bandwidth.operation)
	|| is_set(control_word.operation)
	|| is_set(interface_state.operation)
	|| is_set(l2_overhead.operation)
	|| is_set(label.operation)
	|| is_set(mtu.operation)
	|| is_set(vctype.operation)
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_operation())
	|| (l2_address !=  nullptr && l2_address->has_operation());
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pseudowire-headend/detail-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.operation)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.operation)) leaf_name_data.push_back(vctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-interface-list")
    {
        if(generic_interface_list != nullptr)
        {
            children["generic-interface-list"] = generic_interface_list;
        }
        else
        {
            generic_interface_list = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>();
            generic_interface_list->parent = this;
            children["generic-interface-list"] = generic_interface_list;
        }
        return children.at("generic-interface-list");
    }

    if(child_yang_name == "l2-address")
    {
        if(l2_address != nullptr)
        {
            children["l2-address"] = l2_address;
        }
        else
        {
            l2_address = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>();
            l2_address->parent = this;
            children["l2-address"] = l2_address;
        }
        return children.at("l2-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::get_children()
{
    if(children.find("generic-interface-list") == children.end())
    {
        if(generic_interface_list != nullptr)
        {
            children["generic-interface-list"] = generic_interface_list;
        }
    }

    if(children.find("l2-address") == children.end())
    {
        if(l2_address != nullptr)
        {
            children["l2-address"] = l2_address;
        }
    }

    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "vctype")
    {
        vctype = value;
    }
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::L2Address()
    :
    interface_type{YType::enumeration, "interface-type"}
    	,
    mac_address(std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "l2-address"; yang_parent_name = "detail-interface";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::~L2Address()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_data() const
{
    return interface_type.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_type.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-address";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Address' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_children()
{
    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::MacAddress()
    :
    mac_address{YType::str, "mac-address"}
{
    yang_name = "mac-address"; yang_parent_name = "l2-address";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::~MacAddress()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_data() const
{
    return mac_address.is_set;
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation);
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_children()
{
    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    id{YType::uint32, "id"}
{
    yang_name = "generic-interface-list"; yang_parent_name = "detail-interface";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::~GenericInterfaceList()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| id.is_set;
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(generic_interface_list_name.operation)
	|| is_set(id.operation);
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericInterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.operation)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-detail")
    {
        for(auto const & c : interface_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail>();
        c->parent = this;
        interface_detail.push_back(std::move(c));
        children[segment_path] = interface_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_children()
{
    for (auto const & c : interface_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::InterfaceDetail()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    interface_name{YType::str, "interface-name"},
    interface_state{YType::enumeration, "interface-state"},
    misconfigured{YType::boolean, "misconfigured"},
    replicate_state{YType::enumeration, "replicate-state"}
{
    yang_name = "interface-detail"; yang_parent_name = "generic-interface-list";
}

L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::~InterfaceDetail()
{
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_data() const
{
    return bundle_interface_name.is_set
	|| interface_name.is_set
	|| interface_state.is_set
	|| misconfigured.is_set
	|| replicate_state.is_set;
}

bool L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_state.operation)
	|| is_set(misconfigured.operation)
	|| is_set(replicate_state.operation);
}

std::string L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (misconfigured.is_set || is_set(misconfigured.operation)) leaf_name_data.push_back(misconfigured.get_name_leafdata());
    if (replicate_state.is_set || is_set(replicate_state.operation)) leaf_name_data.push_back(replicate_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_children()
{
    return children;
}

void L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "misconfigured")
    {
        misconfigured = value;
    }
    if(value_path == "replicate-state")
    {
        replicate_state = value;
    }
}

L2Vpn::PseudowireHeadend::Summary::Summary()
    :
    admin_down_interfaces{YType::uint32, "admin-down-interfaces"},
    admin_down_pseudowire_ether_interfaces{YType::uint32, "admin-down-pseudowire-ether-interfaces"},
    admin_down_pseudowire_iw_interfaces{YType::uint32, "admin-down-pseudowire-iw-interfaces"},
    down_interfaces{YType::uint32, "down-interfaces"},
    down_pseudowire_ether_interfaces{YType::uint32, "down-pseudowire-ether-interfaces"},
    down_pseudowire_iw_interfaces{YType::uint32, "down-pseudowire-iw-interfaces"},
    interfaces{YType::uint32, "interfaces"},
    pseudowire_iw_interfaces{YType::uint32, "pseudowire-iw-interfaces"},
    psuedowire_ether_interfaces{YType::uint32, "psuedowire-ether-interfaces"},
    up_interfaces{YType::uint32, "up-interfaces"},
    up_pseudowire_iw_interfaces{YType::uint32, "up-pseudowire-iw-interfaces"},
    up_psuedowire_ether_interfaces{YType::uint32, "up-psuedowire-ether-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "pseudowire-headend";
}

L2Vpn::PseudowireHeadend::Summary::~Summary()
{
}

bool L2Vpn::PseudowireHeadend::Summary::has_data() const
{
    return admin_down_interfaces.is_set
	|| admin_down_pseudowire_ether_interfaces.is_set
	|| admin_down_pseudowire_iw_interfaces.is_set
	|| down_interfaces.is_set
	|| down_pseudowire_ether_interfaces.is_set
	|| down_pseudowire_iw_interfaces.is_set
	|| interfaces.is_set
	|| pseudowire_iw_interfaces.is_set
	|| psuedowire_ether_interfaces.is_set
	|| up_interfaces.is_set
	|| up_pseudowire_iw_interfaces.is_set
	|| up_psuedowire_ether_interfaces.is_set;
}

bool L2Vpn::PseudowireHeadend::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_down_interfaces.operation)
	|| is_set(admin_down_pseudowire_ether_interfaces.operation)
	|| is_set(admin_down_pseudowire_iw_interfaces.operation)
	|| is_set(down_interfaces.operation)
	|| is_set(down_pseudowire_ether_interfaces.operation)
	|| is_set(down_pseudowire_iw_interfaces.operation)
	|| is_set(interfaces.operation)
	|| is_set(pseudowire_iw_interfaces.operation)
	|| is_set(psuedowire_ether_interfaces.operation)
	|| is_set(up_interfaces.operation)
	|| is_set(up_pseudowire_iw_interfaces.operation)
	|| is_set(up_psuedowire_ether_interfaces.operation);
}

std::string L2Vpn::PseudowireHeadend::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath L2Vpn::PseudowireHeadend::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pseudowire-headend/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interfaces.is_set || is_set(admin_down_interfaces.operation)) leaf_name_data.push_back(admin_down_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_ether_interfaces.is_set || is_set(admin_down_pseudowire_ether_interfaces.operation)) leaf_name_data.push_back(admin_down_pseudowire_ether_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_iw_interfaces.is_set || is_set(admin_down_pseudowire_iw_interfaces.operation)) leaf_name_data.push_back(admin_down_pseudowire_iw_interfaces.get_name_leafdata());
    if (down_interfaces.is_set || is_set(down_interfaces.operation)) leaf_name_data.push_back(down_interfaces.get_name_leafdata());
    if (down_pseudowire_ether_interfaces.is_set || is_set(down_pseudowire_ether_interfaces.operation)) leaf_name_data.push_back(down_pseudowire_ether_interfaces.get_name_leafdata());
    if (down_pseudowire_iw_interfaces.is_set || is_set(down_pseudowire_iw_interfaces.operation)) leaf_name_data.push_back(down_pseudowire_iw_interfaces.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (pseudowire_iw_interfaces.is_set || is_set(pseudowire_iw_interfaces.operation)) leaf_name_data.push_back(pseudowire_iw_interfaces.get_name_leafdata());
    if (psuedowire_ether_interfaces.is_set || is_set(psuedowire_ether_interfaces.operation)) leaf_name_data.push_back(psuedowire_ether_interfaces.get_name_leafdata());
    if (up_interfaces.is_set || is_set(up_interfaces.operation)) leaf_name_data.push_back(up_interfaces.get_name_leafdata());
    if (up_pseudowire_iw_interfaces.is_set || is_set(up_pseudowire_iw_interfaces.operation)) leaf_name_data.push_back(up_pseudowire_iw_interfaces.get_name_leafdata());
    if (up_psuedowire_ether_interfaces.is_set || is_set(up_psuedowire_ether_interfaces.operation)) leaf_name_data.push_back(up_psuedowire_ether_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PseudowireHeadend::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PseudowireHeadend::Summary::get_children()
{
    return children;
}

void L2Vpn::PseudowireHeadend::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-down-interfaces")
    {
        admin_down_interfaces = value;
    }
    if(value_path == "admin-down-pseudowire-ether-interfaces")
    {
        admin_down_pseudowire_ether_interfaces = value;
    }
    if(value_path == "admin-down-pseudowire-iw-interfaces")
    {
        admin_down_pseudowire_iw_interfaces = value;
    }
    if(value_path == "down-interfaces")
    {
        down_interfaces = value;
    }
    if(value_path == "down-pseudowire-ether-interfaces")
    {
        down_pseudowire_ether_interfaces = value;
    }
    if(value_path == "down-pseudowire-iw-interfaces")
    {
        down_pseudowire_iw_interfaces = value;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "pseudowire-iw-interfaces")
    {
        pseudowire_iw_interfaces = value;
    }
    if(value_path == "psuedowire-ether-interfaces")
    {
        psuedowire_ether_interfaces = value;
    }
    if(value_path == "up-interfaces")
    {
        up_interfaces = value;
    }
    if(value_path == "up-pseudowire-iw-interfaces")
    {
        up_pseudowire_iw_interfaces = value;
    }
    if(value_path == "up-psuedowire-ether-interfaces")
    {
        up_psuedowire_ether_interfaces = value;
    }
}

L2Vpn::Discoveries::Discoveries()
{
    yang_name = "discoveries"; yang_parent_name = "l2vpn";
}

L2Vpn::Discoveries::~Discoveries()
{
}

bool L2Vpn::Discoveries::has_data() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        for(auto const & c : discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery>();
        c->parent = this;
        discovery.push_back(std::move(c));
        children[segment_path] = discovery.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::get_children()
{
    for (auto const & c : discovery)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Discoveries::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Discoveries::Discovery::Discovery()
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
    signalling_info(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;
    children["signalling-info"] = signalling_info;

    yang_name = "discovery"; yang_parent_name = "discoveries";
}

L2Vpn::Discoveries::Discovery::~Discovery()
{
}

bool L2Vpn::Discoveries::Discovery::has_data() const
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

bool L2Vpn::Discoveries::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(is_service_connected.operation)
	|| is_set(mtu_mismatch_ignore.operation)
	|| is_set(number_vpn.operation)
	|| is_set(service_name.operation)
	|| is_set(service_name_xr.operation)
	|| is_set(vpn_id.operation)
	|| is_set(vpn_name.operation)
	|| is_set(vpn_name_xr.operation)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2Vpn::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.operation)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.operation)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.operation)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.operation)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.operation)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.operation)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signalling-info")
    {
        if(signalling_info != nullptr)
        {
            children["signalling-info"] = signalling_info;
        }
        else
        {
            signalling_info = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo>();
            signalling_info->parent = this;
            children["signalling-info"] = signalling_info;
        }
        return children.at("signalling-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::get_children()
{
    if(children.find("signalling-info") == children.end())
    {
        if(signalling_info != nullptr)
        {
            children["signalling-info"] = signalling_info;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
    	,
    bgp_sig_info(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
	,ldp_sig_info(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;
    children["bgp-sig-info"] = bgp_sig_info;

    ldp_sig_info->parent = this;
    children["ldp-sig-info"] = ldp_sig_info;

    yang_name = "signalling-info"; yang_parent_name = "discovery";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::has_data() const
{
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_signalling_method.operation)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.operation)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info != nullptr)
        {
            children["bgp-sig-info"] = bgp_sig_info;
        }
        else
        {
            bgp_sig_info = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
            bgp_sig_info->parent = this;
            children["bgp-sig-info"] = bgp_sig_info;
        }
        return children.at("bgp-sig-info");
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info != nullptr)
        {
            children["ldp-sig-info"] = ldp_sig_info;
        }
        else
        {
            ldp_sig_info = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
            ldp_sig_info->parent = this;
            children["ldp-sig-info"] = ldp_sig_info;
        }
        return children.at("ldp-sig-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::get_children()
{
    if(children.find("bgp-sig-info") == children.end())
    {
        if(bgp_sig_info != nullptr)
        {
            children["bgp-sig-info"] = bgp_sig_info;
        }
    }

    if(children.find("ldp-sig-info") == children.end())
    {
        if(ldp_sig_info != nullptr)
        {
            children["ldp-sig-info"] = ldp_sig_info;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
{
    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
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

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
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
    return is_set(operation)
	|| is_set(number_edges.operation)
	|| is_set(number_remote_edges.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.operation)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.operation)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "edge")
    {
        for(auto const & c : edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        c->parent = this;
        edge.push_back(std::move(c));
        children[segment_path] = edge.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "redge")
    {
        for(auto const & c : redge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        c->parent = this;
        redge.push_back(std::move(c));
        children[segment_path] = redge.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children()
{
    for (auto const & c : edge)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : redge)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{
    yang_name = "edge"; yang_parent_name = "bgp-sig-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(label_count.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        c->parent = this;
        label_block.push_back(std::move(c));
        children[segment_path] = label_block.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children()
{
    for (auto const & c : label_block)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    status_vector{YType::uint8, "status-vector"}
{
    yang_name = "label-block"; yang_parent_name = "edge";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(leaf.is_set)
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

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(block_offset.operation)
	|| is_set(block_size.operation)
	|| is_set(label_base.operation)
	|| is_set(label_error.operation)
	|| is_set(label_time_created.operation)
	|| is_set(local_edge_id.operation)
	|| is_set(next_hop.operation)
	|| is_set(status_vector.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/bgp-sig-info/edge/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.operation)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.operation)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.operation)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.operation)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.operation)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.operation)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto status_vector_name_datas = status_vector.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), status_vector_name_datas.begin(), status_vector_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
    }
    if(value_path == "block-size")
    {
        block_size = value;
    }
    if(value_path == "label-base")
    {
        label_base = value;
    }
    if(value_path == "label-error")
    {
        label_error = value;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "status-vector")
    {
        status_vector.append(value);
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{
    yang_name = "redge"; yang_parent_name = "bgp-sig-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(edge_id.operation)
	|| is_set(label_count.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.operation)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        c->parent = this;
        label_block.push_back(std::move(c));
        children[segment_path] = label_block.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children()
{
    for (auto const & c : label_block)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    label_base{YType::uint32, "label-base"},
    label_error{YType::enumeration, "label-error"},
    label_time_created{YType::uint32, "label-time-created"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    status_vector{YType::uint8, "status-vector"}
{
    yang_name = "label-block"; yang_parent_name = "redge";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(leaf.is_set)
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

bool L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (auto const & leaf : status_vector.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(block_offset.operation)
	|| is_set(block_size.operation)
	|| is_set(label_base.operation)
	|| is_set(label_error.operation)
	|| is_set(label_time_created.operation)
	|| is_set(local_edge_id.operation)
	|| is_set(next_hop.operation)
	|| is_set(status_vector.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/bgp-sig-info/redge/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_offset.is_set || is_set(block_offset.operation)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.operation)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.operation)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.operation)) leaf_name_data.push_back(label_error.get_name_leafdata());
    if (label_time_created.is_set || is_set(label_time_created.operation)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.operation)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    auto status_vector_name_datas = status_vector.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), status_vector_name_datas.begin(), status_vector_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block-offset")
    {
        block_offset = value;
    }
    if(value_path == "block-size")
    {
        block_size = value;
    }
    if(value_path == "label-base")
    {
        label_base = value;
    }
    if(value_path == "label-error")
    {
        label_error = value;
    }
    if(value_path == "label-time-created")
    {
        label_time_created = value;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "status-vector")
    {
        status_vector.append(value);
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
    	,
    local_vpls_id(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
{
    local_vpls_id->parent = this;
    children["local-vpls-id"] = local_vpls_id;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
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

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_l2_router_id.operation)
	|| is_set(number_remote_edges.operation)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.operation)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.operation)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id != nullptr)
        {
            children["local-vpls-id"] = local_vpls_id;
        }
        else
        {
            local_vpls_id = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
            local_vpls_id->parent = this;
            children["local-vpls-id"] = local_vpls_id;
        }
        return children.at("local-vpls-id");
    }

    if(child_yang_name == "remote-nlri")
    {
        for(auto const & c : remote_nlri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        c->parent = this;
        remote_nlri.push_back(std::move(c));
        children[segment_path] = remote_nlri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children()
{
    if(children.find("local-vpls-id") == children.end())
    {
        if(local_vpls_id != nullptr)
        {
            children["local-vpls-id"] = local_vpls_id;
        }
    }

    for (auto const & c : remote_nlri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "local-vpls-id";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::~Auto_()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    local_address{YType::str, "local-address"},
    nlri_time_created{YType::uint32, "nlri-time-created"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{
    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info";
}

L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    return local_address.is_set
	|| nlri_time_created.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(nlri_time_created.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_l2_router_id.operation);
}

std::string L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";

    return path_buffer.str();

}

EntityPath L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (nlri_time_created.is_set || is_set(nlri_time_created.operation)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.operation)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children()
{
    return children;
}

void L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
    }
}

L2Vpn::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_down{YType::uint32, "number-fxc-down"},
    number_fxc_up{YType::uint32, "number-fxc-up"}
{
    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "l2vpn";
}

L2Vpn::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2Vpn::FlexibleXconnectServiceSummary::has_data() const
{
    return number_fxc.is_set
	|| number_fxc_down.is_set
	|| number_fxc_up.is_set;
}

bool L2Vpn::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(number_fxc.operation)
	|| is_set(number_fxc_down.operation)
	|| is_set(number_fxc_up.operation);
}

std::string L2Vpn::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";

    return path_buffer.str();

}

EntityPath L2Vpn::FlexibleXconnectServiceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.operation)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.operation)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.operation)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::FlexibleXconnectServiceSummary::get_children()
{
    return children;
}

void L2Vpn::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
    }
}

L2Vpn::MainInterfaces::MainInterfaces()
{
    yang_name = "main-interfaces"; yang_parent_name = "l2vpn";
}

L2Vpn::MainInterfaces::~MainInterfaces()
{
}

bool L2Vpn::MainInterfaces::has_data() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "main-interface")
    {
        for(auto const & c : main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::MainInterfaces::MainInterface>();
        c->parent = this;
        main_interface.push_back(std::move(c));
        children[segment_path] = main_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::get_children()
{
    for (auto const & c : main_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::MainInterfaces::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    main_interface_info(std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo>())
	,main_interface_instances(std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances>())
{
    main_interface_info->parent = this;
    children["main-interface-info"] = main_interface_info;

    main_interface_instances->parent = this;
    children["main-interface-instances"] = main_interface_instances;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces";
}

L2Vpn::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2Vpn::MainInterfaces::MainInterface::has_data() const
{
    return interface_name.is_set
	|| (main_interface_info !=  nullptr && main_interface_info->has_data())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data());
}

bool L2Vpn::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation());
}

std::string L2Vpn::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/main-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info != nullptr)
        {
            children["main-interface-info"] = main_interface_info;
        }
        else
        {
            main_interface_info = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo>();
            main_interface_info->parent = this;
            children["main-interface-info"] = main_interface_info;
        }
        return children.at("main-interface-info");
    }

    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances != nullptr)
        {
            children["main-interface-instances"] = main_interface_instances;
        }
        else
        {
            main_interface_instances = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances>();
            main_interface_instances->parent = this;
            children["main-interface-instances"] = main_interface_instances;
        }
        return children.at("main-interface-instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::get_children()
{
    if(children.find("main-interface-info") == children.end())
    {
        if(main_interface_info != nullptr)
        {
            children["main-interface-info"] = main_interface_info;
        }
    }

    if(children.find("main-interface-instances") == children.end())
    {
        if(main_interface_instances != nullptr)
        {
            children["main-interface-instances"] = main_interface_instances;
        }
    }

    return children;
}

void L2Vpn::MainInterfaces::MainInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
{
    yang_name = "main-interface-instances"; yang_parent_name = "main-interface";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInstances' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "main-interface-instance")
    {
        for(auto const & c : main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        c->parent = this;
        main_interface_instance.push_back(std::move(c));
        children[segment_path] = main_interface_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::get_children()
{
    for (auto const & c : main_interface_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::int32, "instance"}
    	,
    main_interface_instance_bridge_ports(std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
	,main_interface_instance_info(std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
{
    main_interface_instance_bridge_ports->parent = this;
    children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;

    main_interface_instance_info->parent = this;
    children["main-interface-instance-info"] = main_interface_instance_info;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    return instance.is_set
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data());
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance.operation)
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation());
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance" <<"[instance='" <<instance <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInstance' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports != nullptr)
        {
            children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
        }
        else
        {
            main_interface_instance_bridge_ports = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
            main_interface_instance_bridge_ports->parent = this;
            children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
        }
        return children.at("main-interface-instance-bridge-ports");
    }

    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info != nullptr)
        {
            children["main-interface-instance-info"] = main_interface_instance_info;
        }
        else
        {
            main_interface_instance_info = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
            main_interface_instance_info->parent = this;
            children["main-interface-instance-info"] = main_interface_instance_info;
        }
        return children.at("main-interface-instance-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children()
{
    if(children.find("main-interface-instance-bridge-ports") == children.end())
    {
        if(main_interface_instance_bridge_ports != nullptr)
        {
            children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
        }
    }

    if(children.find("main-interface-instance-info") == children.end())
    {
        if(main_interface_instance_info != nullptr)
        {
            children["main-interface-instance-info"] = main_interface_instance_info;
        }
    }

    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance")
    {
        instance = value;
    }
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    return configured_instance.is_set
	|| flush_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| interface_count.is_set;
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_instance.operation)
	|| is_set(flush_count.operation)
	|| is_set(instance_flags.operation)
	|| is_set(instance_id.operation)
	|| is_set(instance_state.operation)
	|| is_set(interface_count.operation);
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInstanceInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.operation)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.operation)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.operation)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.operation)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children()
{
    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
{
    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInstanceBridgePorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        for(auto const & c : main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        c->parent = this;
        main_interface_instance_bridge_port.push_back(std::move(c));
        children[segment_path] = main_interface_instance_bridge_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children()
{
    for (auto const & c : main_interface_instance_bridge_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{
    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_port.operation)
	|| is_set(bridge_port_xr.operation)
	|| is_set(instance_id.operation);
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port" <<"[bridge-port='" <<bridge_port <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInstanceBridgePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.operation)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.operation)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children()
{
    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    interface_count{YType::uint32, "interface-count"},
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"}
{
    yang_name = "main-interface-info"; yang_parent_name = "main-interface";
}

L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    return interface_count.is_set
	|| main_interface_handle.is_set
	|| protected_.is_set;
}

bool L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_count.operation)
	|| is_set(main_interface_handle.operation)
	|| is_set(protected_.operation);
}

std::string L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";

    return path_buffer.str();

}

EntityPath L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MainInterfaceInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (main_interface_handle.is_set || is_set(main_interface_handle.operation)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::get_children()
{
    return children;
}

void L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
}

L2Vpn::IccpSm::IccpSm()
    :
    iccp_groups(std::make_shared<L2Vpn::IccpSm::IccpGroups>())
	,iccp_sm_summary(std::make_shared<L2Vpn::IccpSm::IccpSmSummary>())
{
    iccp_groups->parent = this;
    children["iccp-groups"] = iccp_groups;

    iccp_sm_summary->parent = this;
    children["iccp-sm-summary"] = iccp_sm_summary;

    yang_name = "iccp-sm"; yang_parent_name = "l2vpn";
}

L2Vpn::IccpSm::~IccpSm()
{
}

bool L2Vpn::IccpSm::has_data() const
{
    return (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_data());
}

bool L2Vpn::IccpSm::has_operation() const
{
    return is_set(operation)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_operation());
}

std::string L2Vpn::IccpSm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
        else
        {
            iccp_groups = std::make_shared<L2Vpn::IccpSm::IccpGroups>();
            iccp_groups->parent = this;
            children["iccp-groups"] = iccp_groups;
        }
        return children.at("iccp-groups");
    }

    if(child_yang_name == "iccp-sm-summary")
    {
        if(iccp_sm_summary != nullptr)
        {
            children["iccp-sm-summary"] = iccp_sm_summary;
        }
        else
        {
            iccp_sm_summary = std::make_shared<L2Vpn::IccpSm::IccpSmSummary>();
            iccp_sm_summary->parent = this;
            children["iccp-sm-summary"] = iccp_sm_summary;
        }
        return children.at("iccp-sm-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::get_children()
{
    if(children.find("iccp-groups") == children.end())
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
    }

    if(children.find("iccp-sm-summary") == children.end())
    {
        if(iccp_sm_summary != nullptr)
        {
            children["iccp-sm-summary"] = iccp_sm_summary;
        }
    }

    return children;
}

void L2Vpn::IccpSm::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    connected_groups{YType::uint32, "connected-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    failed_ports{YType::uint32, "failed-ports"},
    groups{YType::uint32, "groups"},
    operational_ports{YType::uint32, "operational-ports"},
    ports{YType::uint32, "ports"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    reverting_ports{YType::uint32, "reverting-ports"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"}
{
    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm";
}

L2Vpn::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2Vpn::IccpSm::IccpSmSummary::has_data() const
{
    return connected_groups.is_set
	|| connecting_groups.is_set
	|| failed_ports.is_set
	|| groups.is_set
	|| operational_ports.is_set
	|| ports.is_set
	|| provisioned_groups.is_set
	|| reverting_ports.is_set
	|| synchronized_groups.is_set
	|| synchronizing_groups.is_set
	|| unconfigured_ports.is_set
	|| unknown_ports.is_set
	|| unresolved_groups.is_set
	|| unsynchronized_ports.is_set;
}

bool L2Vpn::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(connected_groups.operation)
	|| is_set(connecting_groups.operation)
	|| is_set(failed_ports.operation)
	|| is_set(groups.operation)
	|| is_set(operational_ports.operation)
	|| is_set(ports.operation)
	|| is_set(provisioned_groups.operation)
	|| is_set(reverting_ports.operation)
	|| is_set(synchronized_groups.operation)
	|| is_set(synchronizing_groups.operation)
	|| is_set(unconfigured_ports.operation)
	|| is_set(unknown_ports.operation)
	|| is_set(unresolved_groups.operation)
	|| is_set(unsynchronized_ports.operation);
}

std::string L2Vpn::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpSmSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/iccp-sm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected_groups.is_set || is_set(connected_groups.operation)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.operation)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.operation)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (groups.is_set || is_set(groups.operation)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.operation)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (ports.is_set || is_set(ports.operation)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.operation)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.operation)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.operation)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.operation)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.operation)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.operation)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.operation)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.operation)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpSmSummary::get_children()
{
    return children;
}

void L2Vpn::IccpSm::IccpSmSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected-groups")
    {
        connected_groups = value;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
    }
    if(value_path == "groups")
    {
        groups = value;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
    }
    if(value_path == "ports")
    {
        ports = value;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroups()
{
    yang_name = "iccp-groups"; yang_parent_name = "iccp-sm";
}

L2Vpn::IccpSm::IccpGroups::~IccpGroups()
{
}

bool L2Vpn::IccpSm::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::IccpSm::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::IccpSm::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/iccp-sm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroup()
    :
    group_id{YType::uint32, "group-id"}
    	,
    iccp_group_info(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>())
	,iccp_ports(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts>())
{
    iccp_group_info->parent = this;
    children["iccp-group-info"] = iccp_group_info;

    iccp_ports->parent = this;
    children["iccp-ports"] = iccp_ports;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::has_data() const
{
    return group_id.is_set
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_data())
	|| (iccp_ports !=  nullptr && iccp_ports->has_data());
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_operation())
	|| (iccp_ports !=  nullptr && iccp_ports->has_operation());
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/iccp-sm/iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-info")
    {
        if(iccp_group_info != nullptr)
        {
            children["iccp-group-info"] = iccp_group_info;
        }
        else
        {
            iccp_group_info = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>();
            iccp_group_info->parent = this;
            children["iccp-group-info"] = iccp_group_info;
        }
        return children.at("iccp-group-info");
    }

    if(child_yang_name == "iccp-ports")
    {
        if(iccp_ports != nullptr)
        {
            children["iccp-ports"] = iccp_ports;
        }
        else
        {
            iccp_ports = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts>();
            iccp_ports->parent = this;
            children["iccp-ports"] = iccp_ports;
        }
        return children.at("iccp-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::get_children()
{
    if(children.find("iccp-group-info") == children.end())
    {
        if(iccp_group_info != nullptr)
        {
            children["iccp-group-info"] = iccp_group_info;
        }
    }

    if(children.find("iccp-ports") == children.end())
    {
        if(iccp_ports != nullptr)
        {
            children["iccp-ports"] = iccp_ports;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    iccp_member_up{YType::boolean, "iccp-member-up"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"}
{
    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| iccp_member_up.is_set
	|| iccp_transport_up.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(iccp_member_up.operation)
	|| is_set(iccp_transport_up.operation)
	|| is_set(local_node_id.operation)
	|| is_set(remote_node_id.operation)
	|| is_set(state.operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.operation)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.operation)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.operation)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.operation)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        c->parent = this;
        ports.push_back(std::move(c));
        children[segment_path] = ports.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children()
{
    for (auto const & c : ports)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
	,remote_port(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    children["local-port"] = local_port;

    remote_port->parent = this;
    children["remote-port"] = remote_port;

    yang_name = "ports"; yang_parent_name = "iccp-group-info";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_flush_tcn.operation)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ports' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.operation)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-port")
    {
        if(local_port != nullptr)
        {
            children["local-port"] = local_port;
        }
        else
        {
            local_port = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
            local_port->parent = this;
            children["local-port"] = local_port;
        }
        return children.at("local-port");
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port != nullptr)
        {
            children["remote-port"] = remote_port;
        }
        else
        {
            remote_port = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
            remote_port->parent = this;
            children["remote-port"] = remote_port;
        }
        return children.at("remote-port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children()
{
    if(children.find("local-port") == children.end())
    {
        if(local_port != nullptr)
        {
            children["local-port"] = local_port;
        }
    }

    if(children.find("remote-port") == children.end())
    {
        if(remote_port != nullptr)
        {
            children["remote-port"] = remote_port;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{
    yang_name = "local-port"; yang_parent_name = "ports";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(operation)
	|| is_set(fsm_state.operation)
	|| is_set(port_fail_code.operation)
	|| is_set(port_state.operation)
	|| is_set(reversion_time.operation)
	|| is_set(reversion_time_remaining.operation)
	|| is_set(vlan_state.operation)
	|| is_set(vlan_vector.operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.operation)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.operation)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.operation)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.operation)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.operation)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.operation)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.operation)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children()
{
    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
    }
    if(value_path == "port-state")
    {
        port_state = value;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{
    yang_name = "remote-port"; yang_parent_name = "ports";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(fsm_state.operation)
	|| is_set(port_fail_code.operation)
	|| is_set(port_state.operation)
	|| is_set(reversion_time.operation)
	|| is_set(reversion_time_remaining.operation)
	|| is_set(vlan_state.operation)
	|| is_set(vlan_vector.operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.operation)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.operation)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.operation)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.operation)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.operation)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.operation)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.operation)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children()
{
    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
    }
    if(value_path == "port-state")
    {
        port_state = value;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
{
    yang_name = "iccp-ports"; yang_parent_name = "iccp-group";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpPorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-port")
    {
        for(auto const & c : iccp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        c->parent = this;
        iccp_port.push_back(std::move(c));
        children[segment_path] = iccp_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children()
{
    for (auto const & c : iccp_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
	,remote_port(std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    children["local-port"] = local_port;

    remote_port->parent = this;
    children["remote-port"] = remote_port;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_flush_tcn.operation)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpPort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.operation)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-port")
    {
        if(local_port != nullptr)
        {
            children["local-port"] = local_port;
        }
        else
        {
            local_port = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
            local_port->parent = this;
            children["local-port"] = local_port;
        }
        return children.at("local-port");
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port != nullptr)
        {
            children["remote-port"] = remote_port;
        }
        else
        {
            remote_port = std::make_shared<L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
            remote_port->parent = this;
            children["remote-port"] = remote_port;
        }
        return children.at("remote-port");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children()
{
    if(children.find("local-port") == children.end())
    {
        if(local_port != nullptr)
        {
            children["local-port"] = local_port;
        }
    }

    if(children.find("remote-port") == children.end())
    {
        if(remote_port != nullptr)
        {
            children["remote-port"] = remote_port;
        }
    }

    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{
    yang_name = "local-port"; yang_parent_name = "iccp-port";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(operation)
	|| is_set(fsm_state.operation)
	|| is_set(port_fail_code.operation)
	|| is_set(port_state.operation)
	|| is_set(reversion_time.operation)
	|| is_set(reversion_time_remaining.operation)
	|| is_set(vlan_state.operation)
	|| is_set(vlan_vector.operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.operation)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.operation)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.operation)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.operation)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.operation)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.operation)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.operation)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children()
{
    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
    }
    if(value_path == "port-state")
    {
        port_state = value;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
    }
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{
    yang_name = "remote-port"; yang_parent_name = "iccp-port";
}

L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(fsm_state.operation)
	|| is_set(port_fail_code.operation)
	|| is_set(port_state.operation)
	|| is_set(reversion_time.operation)
	|| is_set(reversion_time_remaining.operation)
	|| is_set(vlan_state.operation)
	|| is_set(vlan_vector.operation);
}

std::string L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";

    return path_buffer.str();

}

EntityPath L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.operation)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.operation)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.operation)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.operation)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.operation)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.operation)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.operation)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children()
{
    return children;
}

void L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
    }
    if(value_path == "port-state")
    {
        port_state = value;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
    }
}

L2Vpn::BridgeSummary::BridgeSummary()
    :
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_down{YType::uint32, "num-vn-is-down"},
    num_vn_is_unresolved{YType::uint32, "num-vn-is-unresolved"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_bridge_domains{YType::uint32, "number-bridge-domains"},
    number_bridge_domains_shut{YType::uint32, "number-bridge-domains-shut"},
    number_bridge_domains_up{YType::uint32, "number-bridge-domains-up"},
    number_default_bridge_doamins{YType::uint32, "number-default-bridge-doamins"},
    number_groups{YType::uint32, "number-groups"},
    number_p2mp{YType::uint32, "number-p2mp"},
    number_p2mp_down{YType::uint32, "number-p2mp-down"},
    number_p2mp_up{YType::uint32, "number-p2mp-up"},
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
    yang_name = "bridge-summary"; yang_parent_name = "l2vpn";
}

L2Vpn::BridgeSummary::~BridgeSummary()
{
}

bool L2Vpn::BridgeSummary::has_data() const
{
    return num_vn_is.is_set
	|| num_vn_is_down.is_set
	|| num_vn_is_unresolved.is_set
	|| num_vn_is_up.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_bridge_domains.is_set
	|| number_bridge_domains_shut.is_set
	|| number_bridge_domains_up.is_set
	|| number_default_bridge_doamins.is_set
	|| number_groups.is_set
	|| number_p2mp.is_set
	|| number_p2mp_down.is_set
	|| number_p2mp_up.is_set
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

bool L2Vpn::BridgeSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(num_vn_is.operation)
	|| is_set(num_vn_is_down.operation)
	|| is_set(num_vn_is_unresolved.operation)
	|| is_set(num_vn_is_up.operation)
	|| is_set(number_a_cs.operation)
	|| is_set(number_a_cs_up.operation)
	|| is_set(number_bridge_domains.operation)
	|| is_set(number_bridge_domains_shut.operation)
	|| is_set(number_bridge_domains_up.operation)
	|| is_set(number_default_bridge_doamins.operation)
	|| is_set(number_groups.operation)
	|| is_set(number_p2mp.operation)
	|| is_set(number_p2mp_down.operation)
	|| is_set(number_p2mp_up.operation)
	|| is_set(number_p_ws_up.operation)
	|| is_set(number_pbb_core.operation)
	|| is_set(number_pbb_edge.operation)
	|| is_set(number_pseudowires.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(partially_programmed_a_cs.operation)
	|| is_set(partially_programmed_bridges.operation)
	|| is_set(partially_programmed_pseudowires.operation)
	|| is_set(standby_pseudowires.operation);
}

std::string L2Vpn::BridgeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-summary";

    return path_buffer.str();

}

EntityPath L2Vpn::BridgeSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vn_is.is_set || is_set(num_vn_is.operation)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_down.is_set || is_set(num_vn_is_down.operation)) leaf_name_data.push_back(num_vn_is_down.get_name_leafdata());
    if (num_vn_is_unresolved.is_set || is_set(num_vn_is_unresolved.operation)) leaf_name_data.push_back(num_vn_is_unresolved.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.operation)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.operation)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.operation)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_bridge_domains.is_set || is_set(number_bridge_domains.operation)) leaf_name_data.push_back(number_bridge_domains.get_name_leafdata());
    if (number_bridge_domains_shut.is_set || is_set(number_bridge_domains_shut.operation)) leaf_name_data.push_back(number_bridge_domains_shut.get_name_leafdata());
    if (number_bridge_domains_up.is_set || is_set(number_bridge_domains_up.operation)) leaf_name_data.push_back(number_bridge_domains_up.get_name_leafdata());
    if (number_default_bridge_doamins.is_set || is_set(number_default_bridge_doamins.operation)) leaf_name_data.push_back(number_default_bridge_doamins.get_name_leafdata());
    if (number_groups.is_set || is_set(number_groups.operation)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_p2mp.is_set || is_set(number_p2mp.operation)) leaf_name_data.push_back(number_p2mp.get_name_leafdata());
    if (number_p2mp_down.is_set || is_set(number_p2mp_down.operation)) leaf_name_data.push_back(number_p2mp_down.get_name_leafdata());
    if (number_p2mp_up.is_set || is_set(number_p2mp_up.operation)) leaf_name_data.push_back(number_p2mp_up.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.operation)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_pbb_core.is_set || is_set(number_pbb_core.operation)) leaf_name_data.push_back(number_pbb_core.get_name_leafdata());
    if (number_pbb_edge.is_set || is_set(number_pbb_edge.operation)) leaf_name_data.push_back(number_pbb_edge.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.operation)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.operation)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());
    if (partially_programmed_bridges.is_set || is_set(partially_programmed_bridges.operation)) leaf_name_data.push_back(partially_programmed_bridges.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.operation)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.operation)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::BridgeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::BridgeSummary::get_children()
{
    return children;
}

void L2Vpn::BridgeSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down = value;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved = value;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains = value;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut = value;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up = value;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins = value;
    }
    if(value_path == "number-groups")
    {
        number_groups = value;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp = value;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down = value;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up = value;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core = value;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge = value;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges = value;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
    }
}

L2Vpn::Nsr::Nsr()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    state_transition_time{YType::uint32, "state-transition-time"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpn::Nsr::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpn::Nsr::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpn::Nsr::NsrStatus>())
{
    failover_status->parent = this;
    children["failover-status"] = failover_status;

    issu_status->parent = this;
    children["issu-status"] = issu_status;

    nsr_status->parent = this;
    children["nsr-status"] = nsr_status;

    yang_name = "nsr"; yang_parent_name = "l2vpn";
}

L2Vpn::Nsr::~Nsr()
{
}

bool L2Vpn::Nsr::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : state_transition_time.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpn::Nsr::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : state_transition_time.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(process_role.operation)
	|| is_set(process_state.operation)
	|| is_set(state_transition_time.operation)
	|| is_set(sw_install_in_progress.operation)
	|| is_set(sync_flags.operation)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpn::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.operation)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.operation)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.operation)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    auto state_transition_time_name_datas = state_transition_time.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), state_transition_time_name_datas.begin(), state_transition_time_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Nsr::EventHistory>();
        c->parent = this;
        event_history.push_back(std::move(c));
        children[segment_path] = event_history.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status != nullptr)
        {
            children["failover-status"] = failover_status;
        }
        else
        {
            failover_status = std::make_shared<L2Vpn::Nsr::FailoverStatus>();
            failover_status->parent = this;
            children["failover-status"] = failover_status;
        }
        return children.at("failover-status");
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status != nullptr)
        {
            children["issu-status"] = issu_status;
        }
        else
        {
            issu_status = std::make_shared<L2Vpn::Nsr::IssuStatus>();
            issu_status->parent = this;
            children["issu-status"] = issu_status;
        }
        return children.at("issu-status");
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
        else
        {
            nsr_status = std::make_shared<L2Vpn::Nsr::NsrStatus>();
            nsr_status->parent = this;
            children["nsr-status"] = nsr_status;
        }
        return children.at("nsr-status");
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Nsr::ReportCard>();
        c->parent = this;
        report_card.push_back(std::move(c));
        children[segment_path] = report_card.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Nsr::XidInfo>();
        c->parent = this;
        xid_info.push_back(std::move(c));
        children[segment_path] = xid_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::get_children()
{
    for (auto const & c : event_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("failover-status") == children.end())
    {
        if(failover_status != nullptr)
        {
            children["failover-status"] = failover_status;
        }
    }

    if(children.find("issu-status") == children.end())
    {
        if(issu_status != nullptr)
        {
            children["issu-status"] = issu_status;
        }
    }

    if(children.find("nsr-status") == children.end())
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
    }

    for (auto const & c : report_card)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : xid_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-role")
    {
        process_role = value;
    }
    if(value_path == "process-state")
    {
        process_state = value;
    }
    if(value_path == "state-transition-time")
    {
        state_transition_time.append(value);
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
}

L2Vpn::Nsr::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{
    yang_name = "failover-status"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpn::Nsr::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpn::Nsr::FailoverStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(master_time.operation)
	|| is_set(start_time.operation)
	|| is_set(triggered_time.operation);
}

std::string L2Vpn::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::FailoverStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.operation)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.operation)) leaf_name_data.push_back(triggered_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::FailoverStatus::get_children()
{
    return children;
}

void L2Vpn::Nsr::FailoverStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "master-time")
    {
        master_time = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
    }
}

L2Vpn::Nsr::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpn::Nsr::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    children["idt-status"] = idt_status;

    previ_ous_idt_status->parent = this;
    children["previ-ous-idt-status"] = previ_ous_idt_status;

    yang_name = "nsr-status"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2Vpn::Nsr::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpn::Nsr::NsrStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpn::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::NsrStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt-status")
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
        else
        {
            idt_status = std::make_shared<L2Vpn::Nsr::NsrStatus::IdtStatus>();
            idt_status->parent = this;
            children["idt-status"] = idt_status;
        }
        return children.at("idt-status");
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status != nullptr)
        {
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
        else
        {
            previ_ous_idt_status = std::make_shared<L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus>();
            previ_ous_idt_status->parent = this;
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
        return children.at("previ-ous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::NsrStatus::get_children()
{
    if(children.find("idt-status") == children.end())
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
    }

    if(children.find("previ-ous-idt-status") == children.end())
    {
        if(previ_ous_idt_status != nullptr)
        {
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
    }

    return children;
}

void L2Vpn::Nsr::NsrStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpn::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "nsr-status";
}

L2Vpn::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpn::Nsr::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpn::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpn::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::NsrStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/nsr-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::NsrStatus::IdtStatus::get_children()
{
    return children;
}

void L2Vpn::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status";
}

L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/nsr-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::get_children()
{
    return children;
}

void L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpn::Nsr::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpn::Nsr::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    children["idt-status"] = idt_status;

    previ_ous_idt_status->parent = this;
    children["previ-ous-idt-status"] = previ_ous_idt_status;

    yang_name = "issu-status"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2Vpn::Nsr::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpn::Nsr::IssuStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpn::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::IssuStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt-status")
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
        else
        {
            idt_status = std::make_shared<L2Vpn::Nsr::IssuStatus::IdtStatus>();
            idt_status->parent = this;
            children["idt-status"] = idt_status;
        }
        return children.at("idt-status");
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status != nullptr)
        {
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
        else
        {
            previ_ous_idt_status = std::make_shared<L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus>();
            previ_ous_idt_status->parent = this;
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
        return children.at("previ-ous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::IssuStatus::get_children()
{
    if(children.find("idt-status") == children.end())
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
    }

    if(children.find("previ-ous-idt-status") == children.end())
    {
        if(previ_ous_idt_status != nullptr)
        {
            children["previ-ous-idt-status"] = previ_ous_idt_status;
        }
    }

    return children;
}

void L2Vpn::Nsr::IssuStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpn::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "issu-status";
}

L2Vpn::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpn::Nsr::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpn::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpn::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::IssuStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/issu-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::IssuStatus::IdtStatus::get_children()
{
    return children;
}

void L2Vpn::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status";
}

L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/issu-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::get_children()
{
    return children;
}

void L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

L2Vpn::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{
    yang_name = "xid-info"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::XidInfo::~XidInfo()
{
}

bool L2Vpn::Nsr::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpn::Nsr::XidInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(app_type.operation)
	|| is_set(sent_ids.operation);
}

std::string L2Vpn::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::XidInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.operation)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.operation)) leaf_name_data.push_back(sent_ids.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::XidInfo::get_children()
{
    return children;
}

void L2Vpn::Nsr::XidInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "app-type")
    {
        app_type = value;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
    }
}

L2Vpn::Nsr::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{
    yang_name = "report-card"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::ReportCard::~ReportCard()
{
}

bool L2Vpn::Nsr::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpn::Nsr::ReportCard::has_operation() const
{
    return is_set(operation)
	|| is_set(collaborator_idt_done.operation)
	|| is_set(collaborator_is_connected.operation)
	|| is_set(collaborator_skipped.operation)
	|| is_set(connection_change_time.operation)
	|| is_set(idt_time.operation);
}

std::string L2Vpn::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::ReportCard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.operation)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.operation)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.operation)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.operation)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.operation)) leaf_name_data.push_back(idt_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::ReportCard::get_children()
{
    return children;
}

void L2Vpn::Nsr::ReportCard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
    }
}

L2Vpn::Nsr::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{
    yang_name = "event-history"; yang_parent_name = "nsr";
}

L2Vpn::Nsr::EventHistory::~EventHistory()
{
}

bool L2Vpn::Nsr::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpn::Nsr::EventHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_timestamp.operation)
	|| is_set(new_state.operation)
	|| is_set(previous_state.operation)
	|| is_set(process_collaborator.operation)
	|| is_set(process_event.operation);
}

std::string L2Vpn::Nsr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";

    return path_buffer.str();

}

EntityPath L2Vpn::Nsr::EventHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.operation)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.operation)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.operation)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.operation)) leaf_name_data.push_back(process_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Nsr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Nsr::EventHistory::get_children()
{
    return children;
}

void L2Vpn::Nsr::EventHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
    }
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
    }
    if(value_path == "process-event")
    {
        process_event = value;
    }
}

L2Vpn::GlobalSettings::GlobalSettings()
    :
    going_active{YType::boolean, "going-active"},
    ha_role{YType::str, "ha-role"},
    issu_role{YType::str, "issu-role"},
    logging_bd_enabled{YType::boolean, "logging-bd-enabled"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    logging_nsr_enabled{YType::boolean, "logging-nsr-enabled"},
    logging_pw_enabled{YType::boolean, "logging-pw-enabled"},
    logging_vfi_enabled{YType::boolean, "logging-vfi-enabled"},
    process_fsm{YType::str, "process-fsm"},
    pw_grouping_enabled{YType::boolean, "pw-grouping-enabled"},
    pw_oam_refresh_transmit_time{YType::uint32, "pw-oam-refresh-transmit-time"},
    pw_status_enabled{YType::boolean, "pw-status-enabled"},
    tcn_propagation_enabled{YType::boolean, "tcn-propagation-enabled"}
{
    yang_name = "global-settings"; yang_parent_name = "l2vpn";
}

L2Vpn::GlobalSettings::~GlobalSettings()
{
}

bool L2Vpn::GlobalSettings::has_data() const
{
    return going_active.is_set
	|| ha_role.is_set
	|| issu_role.is_set
	|| logging_bd_enabled.is_set
	|| logging_df_election_enabled.is_set
	|| logging_nsr_enabled.is_set
	|| logging_pw_enabled.is_set
	|| logging_vfi_enabled.is_set
	|| process_fsm.is_set
	|| pw_grouping_enabled.is_set
	|| pw_oam_refresh_transmit_time.is_set
	|| pw_status_enabled.is_set
	|| tcn_propagation_enabled.is_set;
}

bool L2Vpn::GlobalSettings::has_operation() const
{
    return is_set(operation)
	|| is_set(going_active.operation)
	|| is_set(ha_role.operation)
	|| is_set(issu_role.operation)
	|| is_set(logging_bd_enabled.operation)
	|| is_set(logging_df_election_enabled.operation)
	|| is_set(logging_nsr_enabled.operation)
	|| is_set(logging_pw_enabled.operation)
	|| is_set(logging_vfi_enabled.operation)
	|| is_set(process_fsm.operation)
	|| is_set(pw_grouping_enabled.operation)
	|| is_set(pw_oam_refresh_transmit_time.operation)
	|| is_set(pw_status_enabled.operation)
	|| is_set(tcn_propagation_enabled.operation);
}

std::string L2Vpn::GlobalSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-settings";

    return path_buffer.str();

}

EntityPath L2Vpn::GlobalSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (going_active.is_set || is_set(going_active.operation)) leaf_name_data.push_back(going_active.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.operation)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.operation)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (logging_bd_enabled.is_set || is_set(logging_bd_enabled.operation)) leaf_name_data.push_back(logging_bd_enabled.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.operation)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (logging_nsr_enabled.is_set || is_set(logging_nsr_enabled.operation)) leaf_name_data.push_back(logging_nsr_enabled.get_name_leafdata());
    if (logging_pw_enabled.is_set || is_set(logging_pw_enabled.operation)) leaf_name_data.push_back(logging_pw_enabled.get_name_leafdata());
    if (logging_vfi_enabled.is_set || is_set(logging_vfi_enabled.operation)) leaf_name_data.push_back(logging_vfi_enabled.get_name_leafdata());
    if (process_fsm.is_set || is_set(process_fsm.operation)) leaf_name_data.push_back(process_fsm.get_name_leafdata());
    if (pw_grouping_enabled.is_set || is_set(pw_grouping_enabled.operation)) leaf_name_data.push_back(pw_grouping_enabled.get_name_leafdata());
    if (pw_oam_refresh_transmit_time.is_set || is_set(pw_oam_refresh_transmit_time.operation)) leaf_name_data.push_back(pw_oam_refresh_transmit_time.get_name_leafdata());
    if (pw_status_enabled.is_set || is_set(pw_status_enabled.operation)) leaf_name_data.push_back(pw_status_enabled.get_name_leafdata());
    if (tcn_propagation_enabled.is_set || is_set(tcn_propagation_enabled.operation)) leaf_name_data.push_back(tcn_propagation_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::GlobalSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::GlobalSettings::get_children()
{
    return children;
}

void L2Vpn::GlobalSettings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "going-active")
    {
        going_active = value;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled = value;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled = value;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled = value;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled = value;
    }
    if(value_path == "process-fsm")
    {
        process_fsm = value;
    }
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled = value;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time = value;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled = value;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled = value;
    }
}

L2Vpn::Pwr::Pwr()
    :
    summary(std::make_shared<L2Vpn::Pwr::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "pwr"; yang_parent_name = "l2vpn";
}

L2Vpn::Pwr::~Pwr()
{
}

bool L2Vpn::Pwr::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool L2Vpn::Pwr::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpn::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<L2Vpn::Pwr::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void L2Vpn::Pwr::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Pwr::Summary::Summary()
    :
    bgp_as{YType::uint32, "bgp-as"},
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
    	,
    rd_auto(std::make_shared<L2Vpn::Pwr::Summary::RdAuto>())
	,rd_configured(std::make_shared<L2Vpn::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    children["rd-auto"] = rd_auto;

    rd_configured->parent = this;
    children["rd-configured"] = rd_configured;

    yang_name = "summary"; yang_parent_name = "pwr";
}

L2Vpn::Pwr::Summary::~Summary()
{
}

bool L2Vpn::Pwr::Summary::has_data() const
{
    return bgp_as.is_set
	|| bgp_router_id.is_set
	|| cfg_global_id.is_set
	|| cfg_router_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2Vpn::Pwr::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_as.operation)
	|| is_set(bgp_router_id.operation)
	|| is_set(cfg_global_id.operation)
	|| is_set(cfg_router_id.operation)
	|| is_set(l2vpn_has_bgp_eod.operation)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2Vpn::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as.is_set || is_set(bgp_as.operation)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (bgp_router_id.is_set || is_set(bgp_router_id.operation)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.operation)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.operation)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.operation)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rd-auto")
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
        else
        {
            rd_auto = std::make_shared<L2Vpn::Pwr::Summary::RdAuto>();
            rd_auto->parent = this;
            children["rd-auto"] = rd_auto;
        }
        return children.at("rd-auto");
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
        else
        {
            rd_configured = std::make_shared<L2Vpn::Pwr::Summary::RdConfigured>();
            rd_configured->parent = this;
            children["rd-configured"] = rd_configured;
        }
        return children.at("rd-configured");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::get_children()
{
    if(children.find("rd-auto") == children.end())
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
    }

    if(children.find("rd-configured") == children.end())
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
    }

    return children;
}

void L2Vpn::Pwr::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-as")
    {
        bgp_as = value;
    }
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
    }
}

L2Vpn::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpn::Pwr::Summary::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<L2Vpn::Pwr::Summary::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpn::Pwr::Summary::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpn::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-auto"; yang_parent_name = "summary";
}

L2Vpn::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2Vpn::Pwr::Summary::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpn::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpn::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpn::Pwr::Summary::RdAuto::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpn::Pwr::Summary::RdAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpn::Pwr::Summary::RdAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpn::Pwr::Summary::RdAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdAuto::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpn::Pwr::Summary::RdAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpn::Pwr::Summary::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-auto";
}

L2Vpn::Pwr::Summary::RdAuto::Auto_::~Auto_()
{
}

bool L2Vpn::Pwr::Summary::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpn::Pwr::Summary::RdAuto::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpn::Pwr::Summary::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdAuto::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdAuto::Auto_::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdAuto::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-auto";
}

L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpn::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-auto";
}

L2Vpn::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2Vpn::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpn::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpn::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdAuto::FourByteAs::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpn::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-auto";
}

L2Vpn::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2Vpn::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpn::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpn::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdAuto::V4Addr::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpn::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-configured"; yang_parent_name = "summary";
}

L2Vpn::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2Vpn::Pwr::Summary::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpn::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpn::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdConfigured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpn::Pwr::Summary::RdConfigured::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdConfigured::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpn::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

L2Vpn::Pwr::Summary::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-configured";
}

L2Vpn::Pwr::Summary::RdConfigured::Auto_::~Auto_()
{
}

bool L2Vpn::Pwr::Summary::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpn::Pwr::Summary::RdConfigured::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string L2Vpn::Pwr::Summary::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdConfigured::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-configured/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdConfigured::Auto_::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdConfigured::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-configured";
}

L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-configured/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-configured";
}

L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-configured/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpn::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-configured";
}

L2Vpn::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2Vpn::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpn::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpn::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpn::Pwr::Summary::RdConfigured::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/pwr/summary/rd-configured/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pwr::Summary::RdConfigured::V4Addr::get_children()
{
    return children;
}

void L2Vpn::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ces()
{
    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "l2vpn";
}

L2Vpn::XconnectMp2MpCe2Ces::~XconnectMp2MpCe2Ces()
{
}

bool L2Vpn::XconnectMp2MpCe2Ces::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::XconnectMp2MpCe2Ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::XconnectMp2MpCe2Ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";

    return path_buffer.str();

}

EntityPath L2Vpn::XconnectMp2MpCe2Ces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::XconnectMp2MpCe2Ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        for(auto const & c : xconnect_mp2mp_ce2ce)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce>();
        c->parent = this;
        xconnect_mp2mp_ce2ce.push_back(std::move(c));
        children[segment_path] = xconnect_mp2mp_ce2ce.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::XconnectMp2MpCe2Ces::get_children()
{
    for (auto const & c : xconnect_mp2mp_ce2ce)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::XconnectMp2MpCe2Ces::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::XconnectMp2MpCe2Ce()
    :
    ce_added{YType::boolean, "ce-added"},
    group_name{YType::str, "group-name"},
    local_ceid{YType::uint32, "local-ceid"},
    local_customer_edge_id{YType::uint16, "local-customer-edge-id"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_customer_edge_id{YType::uint16, "remote-customer-edge-id"}
{
    yang_name = "xconnect-mp2mp-ce2ce"; yang_parent_name = "xconnect-mp2mp-ce2ces";
}

L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::~XconnectMp2MpCe2Ce()
{
}

bool L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_data() const
{
    return ce_added.is_set
	|| group_name.is_set
	|| local_ceid.is_set
	|| local_customer_edge_id.is_set
	|| mp2_mp_name.is_set
	|| remote_ceid.is_set
	|| remote_customer_edge_id.is_set;
}

bool L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_operation() const
{
    return is_set(operation)
	|| is_set(ce_added.operation)
	|| is_set(group_name.operation)
	|| is_set(local_ceid.operation)
	|| is_set(local_customer_edge_id.operation)
	|| is_set(mp2_mp_name.operation)
	|| is_set(remote_ceid.operation)
	|| is_set(remote_customer_edge_id.operation);
}

std::string L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ce";

    return path_buffer.str();

}

EntityPath L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnect-mp2mp-ce2ces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_added.is_set || is_set(ce_added.operation)) leaf_name_data.push_back(ce_added.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.operation)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_customer_edge_id.is_set || is_set(local_customer_edge_id.operation)) leaf_name_data.push_back(local_customer_edge_id.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.operation)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.operation)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_customer_edge_id.is_set || is_set(remote_customer_edge_id.operation)) leaf_name_data.push_back(remote_customer_edge_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_children()
{
    return children;
}

void L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ce-added")
    {
        ce_added = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id = value;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id = value;
    }
}

L2Vpn::Xconnects::Xconnects()
{
    yang_name = "xconnects"; yang_parent_name = "l2vpn";
}

L2Vpn::Xconnects::~Xconnects()
{
}

bool L2Vpn::Xconnects::has_data() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Xconnects::has_operation() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Xconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnects";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xconnect")
    {
        for(auto const & c : xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Xconnects::Xconnect>();
        c->parent = this;
        xconnect.push_back(std::move(c));
        children[segment_path] = xconnect.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::get_children()
{
    for (auto const & c : xconnect)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Xconnects::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Xconnects::Xconnect::Xconnect()
    :
    description{YType::str, "description"},
    diag_mask{YType::uint32, "diag-mask"},
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    interworking{YType::enumeration, "interworking"},
    is_mp2mp{YType::boolean, "is-mp2mp"},
    number_of_backup_p_ws{YType::uint32, "number-of-backup-p-ws"},
    state{YType::enumeration, "state"},
    xconnect_name{YType::str, "xconnect-name"},
    xconnect_name_xr{YType::str, "xconnect-name-xr"}
    	,
    backup(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup>())
	,ce2ce(std::make_shared<L2Vpn::Xconnects::Xconnect::Ce2Ce>())
	,segment1(std::make_shared<L2Vpn::Xconnects::Xconnect::Segment1>())
	,segment2(std::make_shared<L2Vpn::Xconnects::Xconnect::Segment2>())
{
    backup->parent = this;
    children["backup"] = backup;

    ce2ce->parent = this;
    children["ce2ce"] = ce2ce;

    segment1->parent = this;
    children["segment1"] = segment1;

    segment2->parent = this;
    children["segment2"] = segment2;

    yang_name = "xconnect"; yang_parent_name = "xconnects";
}

L2Vpn::Xconnects::Xconnect::~Xconnect()
{
}

bool L2Vpn::Xconnects::Xconnect::has_data() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_data())
            return true;
    }
    return description.is_set
	|| diag_mask.is_set
	|| group_name.is_set
	|| group_name_xr.is_set
	|| interworking.is_set
	|| is_mp2mp.is_set
	|| number_of_backup_p_ws.is_set
	|| state.is_set
	|| xconnect_name.is_set
	|| xconnect_name_xr.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (ce2ce !=  nullptr && ce2ce->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2Vpn::Xconnects::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(diag_mask.operation)
	|| is_set(group_name.operation)
	|| is_set(group_name_xr.operation)
	|| is_set(interworking.operation)
	|| is_set(is_mp2mp.operation)
	|| is_set(number_of_backup_p_ws.operation)
	|| is_set(state.operation)
	|| is_set(xconnect_name.operation)
	|| is_set(xconnect_name_xr.operation)
	|| (backup !=  nullptr && backup->has_operation())
	|| (ce2ce !=  nullptr && ce2ce->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (diag_mask.is_set || is_set(diag_mask.operation)) leaf_name_data.push_back(diag_mask.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.operation)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (is_mp2mp.is_set || is_set(is_mp2mp.operation)) leaf_name_data.push_back(is_mp2mp.get_name_leafdata());
    if (number_of_backup_p_ws.is_set || is_set(number_of_backup_p_ws.operation)) leaf_name_data.push_back(number_of_backup_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (xconnect_name.is_set || is_set(xconnect_name.operation)) leaf_name_data.push_back(xconnect_name.get_name_leafdata());
    if (xconnect_name_xr.is_set || is_set(xconnect_name_xr.operation)) leaf_name_data.push_back(xconnect_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
        else
        {
            backup = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup>();
            backup->parent = this;
            children["backup"] = backup;
        }
        return children.at("backup");
    }

    if(child_yang_name == "backup-segment")
    {
        for(auto const & c : backup_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Xconnects::Xconnect::BackupSegment>();
        c->parent = this;
        backup_segment.push_back(std::move(c));
        children[segment_path] = backup_segment.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ce2ce")
    {
        if(ce2ce != nullptr)
        {
            children["ce2ce"] = ce2ce;
        }
        else
        {
            ce2ce = std::make_shared<L2Vpn::Xconnects::Xconnect::Ce2Ce>();
            ce2ce->parent = this;
            children["ce2ce"] = ce2ce;
        }
        return children.at("ce2ce");
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 != nullptr)
        {
            children["segment1"] = segment1;
        }
        else
        {
            segment1 = std::make_shared<L2Vpn::Xconnects::Xconnect::Segment1>();
            segment1->parent = this;
            children["segment1"] = segment1;
        }
        return children.at("segment1");
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 != nullptr)
        {
            children["segment2"] = segment2;
        }
        else
        {
            segment2 = std::make_shared<L2Vpn::Xconnects::Xconnect::Segment2>();
            segment2->parent = this;
            children["segment2"] = segment2;
        }
        return children.at("segment2");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::get_children()
{
    if(children.find("backup") == children.end())
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
    }

    for (auto const & c : backup_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("ce2ce") == children.end())
    {
        if(ce2ce != nullptr)
        {
            children["ce2ce"] = ce2ce;
        }
    }

    if(children.find("segment1") == children.end())
    {
        if(segment1 != nullptr)
        {
            children["segment1"] = segment1;
        }
    }

    if(children.find("segment2") == children.end())
    {
        if(segment2 != nullptr)
        {
            children["segment2"] = segment2;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "diag-mask")
    {
        diag_mask = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp = value;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name = value;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::Backup()
    :
    segment_type{YType::enumeration, "segment-type"}
    	,
    attachment_circuit(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit>())
	,pseudo_wire(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire>())
{
    attachment_circuit->parent = this;
    children["attachment-circuit"] = attachment_circuit;

    pseudo_wire->parent = this;
    children["pseudo-wire"] = pseudo_wire;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

L2Vpn::Xconnects::Xconnect::Backup::~Backup()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::has_data() const
{
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_type.operation)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit != nullptr)
        {
            children["attachment-circuit"] = attachment_circuit;
        }
        else
        {
            attachment_circuit = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit>();
            attachment_circuit->parent = this;
            children["attachment-circuit"] = attachment_circuit;
        }
        return children.at("attachment-circuit");
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire != nullptr)
        {
            children["pseudo-wire"] = pseudo_wire;
        }
        else
        {
            pseudo_wire = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire>();
            pseudo_wire->parent = this;
            children["pseudo-wire"] = pseudo_wire;
        }
        return children.at("pseudo-wire");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::get_children()
{
    if(children.find("attachment-circuit") == children.end())
    {
        if(attachment_circuit != nullptr)
        {
            children["attachment-circuit"] = attachment_circuit;
        }
    }

    if(children.find("pseudo-wire") == children.end())
    {
        if(pseudo_wire != nullptr)
        {
            children["pseudo-wire"] = pseudo_wire;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::AttachmentCircuit()
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
    interface(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>())
	,l2vpn_protection(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>())
	,statistics(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>())
{
    interface->parent = this;
    children["interface"] = interface;

    l2vpn_protection->parent = this;
    children["l2vpn-protection"] = l2vpn_protection;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "attachment-circuit"; yang_parent_name = "backup";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::has_data() const
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

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(bvi_mac_conflict.operation)
	|| is_set(bvi_no_port_up.operation)
	|| is_set(control_word_mismatched.operation)
	|| is_set(encapsulation_error.operation)
	|| is_set(encapsulation_mismatched.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(interface_handle.operation)
	|| is_set(internal_ms_ti.operation)
	|| is_set(interworking.operation)
	|| is_set(is_ac_partially_programmed.operation)
	|| is_set(mac_limit_oper_down.operation)
	|| is_set(ms_ti_mismatch.operation)
	|| is_set(msti.operation)
	|| is_set(msti_mismatch_down.operation)
	|| is_set(mtu_mismatched.operation)
	|| is_set(node_id.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_group_state.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(state.operation)
	|| is_set(tdm_media_mismatched.operation)
	|| is_set(xconnect_id.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.operation)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.operation)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.operation)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.operation)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.operation)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.operation)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.operation)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.operation)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.operation)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.operation)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.operation)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.operation)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.operation)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection != nullptr)
        {
            children["l2vpn-protection"] = l2vpn_protection;
        }
        else
        {
            l2vpn_protection = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>();
            l2vpn_protection->parent = this;
            children["l2vpn-protection"] = l2vpn_protection;
        }
        return children.at("l2vpn-protection");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    if(children.find("l2vpn-protection") == children.end())
    {
        if(l2vpn_protection != nullptr)
        {
            children["l2vpn-protection"] = l2vpn_protection;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Interface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;
    children["parameters"] = parameters;

    yang_name = "interface"; yang_parent_name = "attachment-circuit";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_children()
{
    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>())
{
    atm->parent = this;
    children["atm"] = atm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    fr->parent = this;
    children["fr"] = fr;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    tdm->parent = this;
    children["tdm"] = tdm;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "parameters"; yang_parent_name = "interface";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_data() const
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

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "fr")
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
        else
        {
            fr = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>();
            fr->parent = this;
            children["fr"] = fr;
        }
        return children.at("fr");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "tdm")
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
        else
        {
            tdm = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>();
            tdm->parent = this;
            children["tdm"] = tdm;
        }
        return children.at("tdm");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_children()
{
    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("fr") == children.end())
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("tdm") == children.end())
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;
    children["tdm-options"] = tdm_options;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tdm-options")
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
        else
        {
            tdm_options = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
            tdm_options->parent = this;
            children["tdm-options"] = tdm_options;
        }
        return children.at("tdm-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_children()
{
    if(children.find("tdm-options") == children.end())
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
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
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
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

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/tdm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-ether/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-ether/interface-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-iw/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/interface/parameters/pseudowire-iw/interface-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
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

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/impostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_data() const
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

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
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

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/dispostion-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    active{YType::boolean, "active"},
    protected_name{YType::str, "protected-name"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protection_type{YType::enumeration, "protection-type"}
{
    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit";
}

L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return active.is_set
	|| protected_name.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protection_type.is_set;
}

bool L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(protected_name.operation)
	|| is_set(protection_configured.operation)
	|| is_set(protection_name.operation)
	|| is_set(protection_type.operation);
}

std::string L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/attachment-circuit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.operation)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.operation)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.operation)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_children()
{
    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
}

L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PseudoWire()
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
    is_evpnvpws_type{YType::boolean, "is-evpnvpws-type"},
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
    encapsulation_info(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>())
	,local_signalling(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>())
	,p2mp_pw(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>())
	,peer_id(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PeerId>())
	,preferred_path(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>())
	,remote_interface(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>())
	,remote_signalling(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::Statistics>())
{
    encapsulation_info->parent = this;
    children["encapsulation-info"] = encapsulation_info;

    local_interface->parent = this;
    children["local-interface"] = local_interface;

    local_signalling->parent = this;
    children["local-signalling"] = local_signalling;

    p2mp_pw->parent = this;
    children["p2mp-pw"] = p2mp_pw;

    peer_id->parent = this;
    children["peer-id"] = peer_id;

    preferred_path->parent = this;
    children["preferred-path"] = preferred_path;

    remote_interface->parent = this;
    children["remote-interface"] = remote_interface;

    remote_signalling->parent = this;
    children["remote-signalling"] = remote_signalling;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "pseudo-wire"; yang_parent_name = "backup";
}

L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::~PseudoWire()
{
}

bool L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::has_data() const
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
	|| is_evpnvpws_type.is_set
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

bool L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_remote_down.operation)
	|| is_set(admited_bw.operation)
	|| is_set(auto_discovery.operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_force_active.operation)
	|| is_set(backup_pw.operation)
	|| is_set(bitrate_mismatched.operation)
	|| is_set(bridge_pw_type_mismatch.operation)
	|| is_set(cas_mismatched.operation)
	|| is_set(diff_ts_mismatched.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_never.operation)
	|| is_set(evpn_src_acid.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(forward_class.operation)
	|| is_set(freq_mismatched.operation)
	|| is_set(illegal_control_word.operation)
	|| is_set(imposed_vlan_id.operation)
	|| is_set(interworking.operation)
	|| is_set(ipv6_local_source_address.operation)
	|| is_set(is_evpnvpws_type.operation)
	|| is_set(is_flow_label_static.operation)
	|| is_set(is_multi_segment_pseudowire.operation)
	|| is_set(is_partially_programmed.operation)
	|| is_set(is_pwr_type.operation)
	|| is_set(is_vfi.operation)
	|| is_set(last_time_status_changed.operation)
	|| is_set(last_time_status_down.operation)
	|| is_set(ldp_label_advertise_failed.operation)
	|| is_set(load_balance.operation)
	|| is_set(local_control_word.operation)
	|| is_set(local_label_failed.operation)
	|| is_set(local_pseudo_wire_type.operation)
	|| is_set(local_source_address.operation)
	|| is_set(mac_limit_oper_down.operation)
	|| is_set(mtu_mismatched.operation)
	|| is_set(not_supported_qinq.operation)
	|| is_set(num_ma_cwithdraw_msg_received.operation)
	|| is_set(number_ma_cwithdraw_message_sent.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(payload_bytes_mismatched.operation)
	|| is_set(payload_type_mismatched.operation)
	|| is_set(preferred_path_disable_fallback.operation)
	|| is_set(primary_peer_id.operation)
	|| is_set(primary_pseudo_wire_id.operation)
	|| is_set(primary_pw.operation)
	|| is_set(protocol.operation)
	|| is_set(pseudo_wire_id.operation)
	|| is_set(pseudo_wire_state.operation)
	|| is_set(pseudo_wire_type_mismatched.operation)
	|| is_set(pw_class_name.operation)
	|| is_set(pw_flow_label_code17_disabled.operation)
	|| is_set(pw_flow_label_type.operation)
	|| is_set(pw_flow_label_type_cfg.operation)
	|| is_set(pw_redundancy_initial_delay.operation)
	|| is_set(pw_redundancy_one_way.operation)
	|| is_set(pw_status_use.operation)
	|| is_set(pwlsd_rewrite_failed.operation)
	|| is_set(remote_control_word.operation)
	|| is_set(remote_label_failed.operation)
	|| is_set(remote_pseudo_wire_type.operation)
	|| is_set(required_bw.operation)
	|| is_set(resync_enabled.operation)
	|| is_set(resync_threshold.operation)
	|| is_set(rtp_mismatched.operation)
	|| is_set(sequencing_type.operation)
	|| is_set(shutdown.operation)
	|| is_set(sig_pkts_mismatched.operation)
	|| is_set(ssrc_mismatched.operation)
	|| is_set(state.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(tag_rewrite.operation)
	|| is_set(time_created.operation)
	|| is_set(time_elapsed_creation.operation)
	|| is_set(time_elapsed_status_changed.operation)
	|| is_set(time_elapsed_status_down.operation)
	|| is_set(transport_lsp_down.operation)
	|| is_set(xconnect_id.operation)
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

std::string L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire";

    return path_buffer.str();

}

EntityPath L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn/xconnects/xconnect/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.operation)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.operation)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.operation)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.operation)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.operation)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.operation)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.operation)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.operation)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.operation)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.operation)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.operation)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.operation)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.operation)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.operation)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.operation)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (is_evpnvpws_type.is_set || is_set(is_evpnvpws_type.operation)) leaf_name_data.push_back(is_evpnvpws_type.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.operation)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.operation)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.operation)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.operation)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.operation)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.operation)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.operation)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.operation)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.operation)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.operation)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.operation)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.operation)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.operation)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.operation)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.operation)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.operation)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.operation)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.operation)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.operation)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.operation)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.operation)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.operation)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.operation)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.operation)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.operation)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.operation)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.operation)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.operation)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.operation)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.operation)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.operation)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.operation)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.operation)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.operation)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.operation)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.operation)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.operation)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.operation)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.operation)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.operation)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.operation)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.operation)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.operation)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.operation)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.operation)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.operation)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.operation)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.operation)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
        else
        {
            encapsulation_info = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>();
            encapsulation_info->parent = this;
            children["encapsulation-info"] = encapsulation_info;
        }
        return children.at("encapsulation-info");
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
        else
        {
            local_interface = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>();
            local_interface->parent = this;
            children["local-interface"] = local_interface;
        }
        return children.at("local-interface");
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
        else
        {
            local_signalling = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>();
            local_signalling->parent = this;
            children["local-signalling"] = local_signalling;
        }
        return children.at("local-signalling");
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
        else
        {
            p2mp_pw = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>();
            p2mp_pw->parent = this;
            children["p2mp-pw"] = p2mp_pw;
        }
        return children.at("p2mp-pw");
    }

    if(child_yang_name == "peer-id")
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
        else
        {
            peer_id = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PeerId>();
            peer_id->parent = this;
            children["peer-id"] = peer_id;
        }
        return children.at("peer-id");
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
        else
        {
            preferred_path = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>();
            preferred_path->parent = this;
            children["preferred-path"] = preferred_path;
        }
        return children.at("preferred-path");
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
        else
        {
            remote_interface = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>();
            remote_interface->parent = this;
            children["remote-interface"] = remote_interface;
        }
        return children.at("remote-interface");
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
        else
        {
            remote_signalling = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>();
            remote_signalling->parent = this;
            children["remote-signalling"] = remote_signalling;
        }
        return children.at("remote-signalling");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::get_children()
{
    if(children.find("encapsulation-info") == children.end())
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
    }

    if(children.find("local-interface") == children.end())
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
    }

    if(children.find("local-signalling") == children.end())
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
    }

    if(children.find("p2mp-pw") == children.end())
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
    }

    if(children.find("peer-id") == children.end())
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
    }

    if(children.find("preferred-path") == children.end())
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
    }

    if(children.find("remote-interface") == children.end())
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
    }

    if(children.find("remote-signalling") == children.end())
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
    }
    if(value_path == "is-evpnvpws-type")
    {
        is_evpnvpws_type = value;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}


}
}

