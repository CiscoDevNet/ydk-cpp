
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScopes()
{
    yang_name = "multi-area-interface-scopes"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::~MultiAreaInterfaceScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::has_data() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::has_operation() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiAreaInterfaceScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multi-area-interface-scope")
    {
        for(auto const & c : multi_area_interface_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope>();
        c->parent = this;
        multi_area_interface_scope.push_back(std::move(c));
        children[segment_path] = multi_area_interface_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::get_children()
{
    for (auto const & c : multi_area_interface_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::MultiAreaInterfaceScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    yang_name = "multi-area-interface-scope"; yang_parent_name = "multi-area-interface-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::~MultiAreaInterfaceScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scope" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiAreaInterfaceScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRanges()
{
    yang_name = "area-ranges"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::~AreaRanges()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-ranges";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRanges' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange>();
        c->parent = this;
        area_range.push_back(std::move(c));
        children[segment_path] = area_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::get_children()
{
    for (auto const & c : area_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::AreaRange()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"}
{
    yang_name = "area-range"; yang_parent_name = "area-ranges";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| not_advertise.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(not_advertise.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRange' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges::AreaRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::boolean, "no-summary"},
    nssa_def_metric{YType::uint32, "nssa-def-metric"}
{
    yang_name = "nssa"; yang_parent_name = "area-address";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::~Nssa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_def_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(default_info_originate.operation)
	|| is_set(metric_type.operation)
	|| is_set(no_redistribution.operation)
	|| is_set(no_summary.operation)
	|| is_set(nssa_def_metric.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.operation)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.operation)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_def_metric.is_set || is_set(nssa_def_metric.operation)) leaf_name_data.push_back(nssa_def_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
    }
    if(value_path == "nssa-def-metric")
    {
        nssa_def_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaAreaId()
    :
    area_id{YType::int32, "area-id"},
    default_cost{YType::uint32, "default-cost"},
    external_out{YType::boolean, "external-out"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    running{YType::empty, "running"},
    segment_routing{YType::enumeration, "segment-routing"},
    stub{YType::boolean, "stub"},
    summary_in{YType::boolean, "summary-in"}
    	,
    area_ranges(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges>())
	,area_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>())
	,multi_area_interface_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes>())
	,name_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes>())
	,nssa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>())
	,sham_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes>())
	,virtual_link_scopes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes>())
{
    area_ranges->parent = this;
    children["area-ranges"] = area_ranges;

    area_scope->parent = this;
    children["area-scope"] = area_scope;

    multi_area_interface_scopes->parent = this;
    children["multi-area-interface-scopes"] = multi_area_interface_scopes;

    name_scopes->parent = this;
    children["name-scopes"] = name_scopes;

    nssa->parent = this;
    children["nssa"] = nssa;

    sham_link_scopes->parent = this;
    children["sham-link-scopes"] = sham_link_scopes;

    virtual_link_scopes->parent = this;
    children["virtual-link-scopes"] = virtual_link_scopes;

    yang_name = "area-area-id"; yang_parent_name = "area-addresses";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::~AreaAreaId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_data() const
{
    return area_id.is_set
	|| default_cost.is_set
	|| external_out.is_set
	|| mpls_traffic_eng.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| running.is_set
	|| segment_routing.is_set
	|| stub.is_set
	|| summary_in.is_set
	|| (area_ranges !=  nullptr && area_ranges->has_data())
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_data())
	|| (name_scopes !=  nullptr && name_scopes->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_data())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(default_cost.operation)
	|| is_set(external_out.operation)
	|| is_set(mpls_traffic_eng.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(running.operation)
	|| is_set(segment_routing.operation)
	|| is_set(stub.operation)
	|| is_set(summary_in.operation)
	|| (area_ranges !=  nullptr && area_ranges->has_operation())
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (multi_area_interface_scopes !=  nullptr && multi_area_interface_scopes->has_operation())
	|| (name_scopes !=  nullptr && name_scopes->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (sham_link_scopes !=  nullptr && sham_link_scopes->has_operation())
	|| (virtual_link_scopes !=  nullptr && virtual_link_scopes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-area-id" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAreaId' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.operation)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.operation)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (stub.is_set || is_set(stub.operation)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.operation)) leaf_name_data.push_back(summary_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-ranges")
    {
        if(area_ranges != nullptr)
        {
            children["area-ranges"] = area_ranges;
        }
        else
        {
            area_ranges = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges>();
            area_ranges->parent = this;
            children["area-ranges"] = area_ranges;
        }
        return children.at("area-ranges");
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
        else
        {
            area_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>();
            area_scope->parent = this;
            children["area-scope"] = area_scope;
        }
        return children.at("area-scope");
    }

    if(child_yang_name == "multi-area-interface-scopes")
    {
        if(multi_area_interface_scopes != nullptr)
        {
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
        else
        {
            multi_area_interface_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes>();
            multi_area_interface_scopes->parent = this;
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
        return children.at("multi-area-interface-scopes");
    }

    if(child_yang_name == "name-scopes")
    {
        if(name_scopes != nullptr)
        {
            children["name-scopes"] = name_scopes;
        }
        else
        {
            name_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes>();
            name_scopes->parent = this;
            children["name-scopes"] = name_scopes;
        }
        return children.at("name-scopes");
    }

    if(child_yang_name == "nssa")
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
        else
        {
            nssa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>();
            nssa->parent = this;
            children["nssa"] = nssa;
        }
        return children.at("nssa");
    }

    if(child_yang_name == "sham-link-scopes")
    {
        if(sham_link_scopes != nullptr)
        {
            children["sham-link-scopes"] = sham_link_scopes;
        }
        else
        {
            sham_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes>();
            sham_link_scopes->parent = this;
            children["sham-link-scopes"] = sham_link_scopes;
        }
        return children.at("sham-link-scopes");
    }

    if(child_yang_name == "virtual-link-scopes")
    {
        if(virtual_link_scopes != nullptr)
        {
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
        else
        {
            virtual_link_scopes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes>();
            virtual_link_scopes->parent = this;
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
        return children.at("virtual-link-scopes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_children()
{
    if(children.find("area-ranges") == children.end())
    {
        if(area_ranges != nullptr)
        {
            children["area-ranges"] = area_ranges;
        }
    }

    if(children.find("area-scope") == children.end())
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
    }

    if(children.find("multi-area-interface-scopes") == children.end())
    {
        if(multi_area_interface_scopes != nullptr)
        {
            children["multi-area-interface-scopes"] = multi_area_interface_scopes;
        }
    }

    if(children.find("name-scopes") == children.end())
    {
        if(name_scopes != nullptr)
        {
            children["name-scopes"] = name_scopes;
        }
    }

    if(children.find("nssa") == children.end())
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
    }

    if(children.find("sham-link-scopes") == children.end())
    {
        if(sham_link_scopes != nullptr)
        {
            children["sham-link-scopes"] = sham_link_scopes;
        }
    }

    if(children.find("virtual-link-scopes") == children.end())
    {
        if(virtual_link_scopes != nullptr)
        {
            children["virtual-link-scopes"] = virtual_link_scopes;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "external-out")
    {
        external_out = value;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "stub")
    {
        stub = value;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScopes()
{
    yang_name = "virtual-link-scopes"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::~VirtualLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::has_data() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_scope.size(); index++)
    {
        if(virtual_link_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link-scope")
    {
        for(auto const & c : virtual_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope>();
        c->parent = this;
        virtual_link_scope.push_back(std::move(c));
        children[segment_path] = virtual_link_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::get_children()
{
    for (auto const & c : virtual_link_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::VirtualLinkScope()
    :
    address{YType::str, "address"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    yang_name = "virtual-link-scope"; yang_parent_name = "virtual-link-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::~VirtualLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::has_data() const
{
    return address.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-scope" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "virtual-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "virtual-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScopes()
{
    yang_name = "sham-link-scopes"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::~ShamLinkScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::has_data() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::has_operation() const
{
    for (std::size_t index=0; index<sham_link_scope.size(); index++)
    {
        if(sham_link_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-scope")
    {
        for(auto const & c : sham_link_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope>();
        c->parent = this;
        sham_link_scope.push_back(std::move(c));
        children[segment_path] = sham_link_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::get_children()
{
    for (auto const & c : sham_link_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::ShamLinkScope()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    cost{YType::uint32, "cost"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    source{YType::str, "source"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    yang_name = "sham-link-scope"; yang_parent_name = "sham-link-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::~ShamLinkScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| source.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(cost.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(source.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-scope" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "sham-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "sham-link-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::AreaScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    security->parent = this;
    children["security"] = security;

    yang_name = "area-scope"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::~AreaScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl>())
{
    ttl->parent = this;
    children["ttl"] = ttl;

    yang_name = "security"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::has_operation() const
{
    return is_set(operation)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ttl")
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
        else
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl>();
            ttl->parent = this;
            children["ttl"] = ttl;
        }
        return children.at("ttl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::get_children()
{
    if(children.find("ttl") == children.end())
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{
    yang_name = "ttl"; yang_parent_name = "security";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hop_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::Security::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "area-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScopes()
{
    yang_name = "name-scopes"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::~NameScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::has_data() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::has_operation() const
{
    for (std::size_t index=0; index<name_scope.size(); index++)
    {
        if(name_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NameScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "name-scope")
    {
        for(auto const & c : name_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope>();
        c->parent = this;
        name_scope.push_back(std::move(c));
        children[segment_path] = name_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::get_children()
{
    for (auto const & c : name_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::NameScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors>())
	,prefix_sid(nullptr) // presence node
	,prefix_sid_strict(nullptr) // presence node
	,security(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    security->parent = this;
    children["security"] = security;

    yang_name = "name-scope"; yang_parent_name = "name-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::~NameScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| segment_routing_forwarding.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_data())
	|| (security !=  nullptr && security->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sid_strict !=  nullptr && prefix_sid_strict->has_operation())
	|| (security !=  nullptr && security->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-scope" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NameScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
        else
        {
            prefix_sid = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid>();
            prefix_sid->parent = this;
            children["prefix-sid"] = prefix_sid;
        }
        return children.at("prefix-sid");
    }

    if(child_yang_name == "prefix-sid-strict")
    {
        if(prefix_sid_strict != nullptr)
        {
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
        else
        {
            prefix_sid_strict = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict>();
            prefix_sid_strict->parent = this;
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
        return children.at("prefix-sid-strict");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("prefix-sid") == children.end())
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
    }

    if(children.find("prefix-sid-strict") == children.end())
    {
        if(prefix_sid_strict != nullptr)
        {
            children["prefix-sid-strict"] = prefix_sid_strict;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::PrefixSid()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{
    yang_name = "prefix-sid"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::~PrefixSid()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(n_flag_clear.operation)
	|| is_set(sid_value.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSid' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.operation)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::PrefixSidStrict()
    :
    explicit_null{YType::boolean, "explicit-null"},
    n_flag_clear{YType::boolean, "n-flag-clear"},
    sid_value{YType::uint32, "sid-value"},
    type{YType::enumeration, "type"}
{
    yang_name = "prefix-sid-strict"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::~PrefixSidStrict()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::has_data() const
{
    return explicit_null.is_set
	|| n_flag_clear.is_set
	|| sid_value.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(n_flag_clear.operation)
	|| is_set(sid_value.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-strict";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSidStrict' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (n_flag_clear.is_set || is_set(n_flag_clear.operation)) leaf_name_data.push_back(n_flag_clear.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.operation)) leaf_name_data.push_back(sid_value.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::PrefixSidStrict::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "n-flag-clear")
    {
        n_flag_clear = value;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::~Bfd()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Security()
    :
    ttl(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl>())
{
    ttl->parent = this;
    children["ttl"] = ttl;

    yang_name = "security"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::~Security()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::has_data() const
{
    return (ttl !=  nullptr && ttl->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::has_operation() const
{
    return is_set(operation)
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ttl")
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
        else
        {
            ttl = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl>();
            ttl->parent = this;
            children["ttl"] = ttl;
        }
        return children.at("ttl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::get_children()
{
    if(children.find("ttl") == children.end())
    {
        if(ttl != nullptr)
        {
            children["ttl"] = ttl;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::Ttl()
    :
    enable{YType::boolean, "enable"},
    hop_count{YType::uint32, "hop-count"}
{
    yang_name = "ttl"; yang_parent_name = "security";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::~Ttl()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::has_data() const
{
    return enable.is_set
	|| hop_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hop_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Security::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "name-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::NameScopes::NameScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScopes()
{
    yang_name = "multi-area-interface-scopes"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::~MultiAreaInterfaceScopes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::has_data() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::has_operation() const
{
    for (std::size_t index=0; index<multi_area_interface_scope.size(); index++)
    {
        if(multi_area_interface_scope[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scopes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiAreaInterfaceScopes' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multi-area-interface-scope")
    {
        for(auto const & c : multi_area_interface_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope>();
        c->parent = this;
        multi_area_interface_scope.push_back(std::move(c));
        children[segment_path] = multi_area_interface_scope.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::get_children()
{
    for (auto const & c : multi_area_interface_scope)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::MultiAreaInterfaceScope()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    running{YType::empty, "running"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    yang_name = "multi-area-interface-scope"; yang_parent_name = "multi-area-interface-scopes";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::~MultiAreaInterfaceScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| retransmit_interval.is_set
	|| running.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(running.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area-interface-scope" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiAreaInterfaceScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::DistributeList()
    :
    access_list_name{YType::str, "access-list-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "distribute-list"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::~DistributeList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_data() const
{
    return access_list_name.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Authentication()
    :
    key{YType::str, "key"}
    	,
    message_digest_keies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>())
	,type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>())
{
    message_digest_keies->parent = this;
    children["message-digest-keies"] = message_digest_keies;

    type->parent = this;
    children["type"] = type;

    yang_name = "authentication"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::~Authentication()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_data() const
{
    return key.is_set
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| (message_digest_keies !=  nullptr && message_digest_keies->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-keies")
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
        else
        {
            message_digest_keies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies>();
            message_digest_keies->parent = this;
            children["message-digest-keies"] = message_digest_keies;
        }
        return children.at("message-digest-keies");
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
        else
        {
            type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type>();
            type->parent = this;
            children["type"] = type;
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::get_children()
{
    if(children.find("message-digest-keies") == children.end())
    {
        if(message_digest_keies != nullptr)
        {
            children["message-digest-keies"] = message_digest_keies;
        }
    }

    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::Type()
    :
    authen_type{YType::enumeration, "authen-type"},
    keychain_authen_type{YType::enumeration, "keychain-authen-type"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "type"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::~Type()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_data() const
{
    return authen_type.is_set
	|| keychain_authen_type.is_set
	|| keychain_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_type.operation)
	|| is_set(keychain_authen_type.operation)
	|| is_set(keychain_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.operation)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (keychain_authen_type.is_set || is_set(keychain_authen_type.operation)) leaf_name_data.push_back(keychain_authen_type.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
    }
    if(value_path == "keychain-authen-type")
    {
        keychain_authen_type = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKeies()
{
    yang_name = "message-digest-keies"; yang_parent_name = "authentication";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::~MessageDigestKeies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-keies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKeies' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(std::move(c));
        children[segment_path] = message_digest_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::get_children()
{
    for (auto const & c : message_digest_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::MessageDigestKey()
    :
    key_id{YType::uint32, "key-id"},
    password{YType::str, "password"}
{
    yang_name = "message-digest-key"; yang_parent_name = "message-digest-keies";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::~MessageDigestKey()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_data() const
{
    return key_id.is_set
	|| password.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(password.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Authentication::MessageDigestKeies::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::DeadIntervalMinimal()
    :
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "dead-interval-minimal"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::~DeadIntervalMinimal()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_data() const
{
    return interval.is_set
	|| multiplier.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(multiplier.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval-minimal";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadIntervalMinimal' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::DeadIntervalMinimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"},
    topology_independent_lfa{YType::boolean, "topology-independent-lfa"}
    	,
    candidate_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>())
	,remote_lfa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>())
	,tiebreakers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| topology_independent_lfa.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| is_set(topology_independent_lfa.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());
    if (topology_independent_lfa.is_set || is_set(topology_independent_lfa.operation)) leaf_name_data.push_back(topology_independent_lfa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
    if(value_path == "topology-independent-lfa")
    {
        topology_independent_lfa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return maximum_cost.is_set
	|| tunnel.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::CostFallback()
    :
    cost{YType::uint32, "cost"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost-fallback"; yang_parent_name = "multi-area-interface-scope";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::~CostFallback()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_data() const
{
    return cost.is_set
	|| threshold.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(threshold.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-fallback";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostFallback' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::MultiAreaInterfaceScopes::MultiAreaInterfaceScope::CostFallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRanges()
{
    yang_name = "area-ranges"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::~AreaRanges()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-ranges";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRanges' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange>();
        c->parent = this;
        area_range.push_back(std::move(c));
        children[segment_path] = area_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::get_children()
{
    for (auto const & c : area_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::AreaRange()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    not_advertise{YType::boolean, "not-advertise"}
{
    yang_name = "area-range"; yang_parent_name = "area-ranges";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| not_advertise.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(not_advertise.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRange' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaRanges::AreaRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::boolean, "no-summary"},
    nssa_def_metric{YType::uint32, "nssa-def-metric"}
{
    yang_name = "nssa"; yang_parent_name = "area-area-id";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::~Nssa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_def_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(default_info_originate.operation)
	|| is_set(metric_type.operation)
	|| is_set(no_redistribution.operation)
	|| is_set(no_summary.operation)
	|| is_set(nssa_def_metric.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.operation)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.operation)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_def_metric.is_set || is_set(nssa_def_metric.operation)) leaf_name_data.push_back(nssa_def_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
    }
    if(value_path == "nssa-def-metric")
    {
        nssa_def_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::Timers()
    :
    fast_reroute_timer{YType::uint32, "fast-reroute-timer"},
    lsa_group_pacing{YType::uint32, "lsa-group-pacing"},
    lsa_min_arrival{YType::uint32, "lsa-min-arrival"},
    lsa_pacing_flood{YType::uint32, "lsa-pacing-flood"},
    lsa_refresh{YType::uint32, "lsa-refresh"}
    	,
    lsa_generation_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer>())
	,spf_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer>())
{
    lsa_generation_timer->parent = this;
    children["lsa-generation-timer"] = lsa_generation_timer;

    spf_timer->parent = this;
    children["spf-timer"] = spf_timer;

    yang_name = "timers"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::~Timers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::has_data() const
{
    return fast_reroute_timer.is_set
	|| lsa_group_pacing.is_set
	|| lsa_min_arrival.is_set
	|| lsa_pacing_flood.is_set
	|| lsa_refresh.is_set
	|| (lsa_generation_timer !=  nullptr && lsa_generation_timer->has_data())
	|| (spf_timer !=  nullptr && spf_timer->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_timer.operation)
	|| is_set(lsa_group_pacing.operation)
	|| is_set(lsa_min_arrival.operation)
	|| is_set(lsa_pacing_flood.operation)
	|| is_set(lsa_refresh.operation)
	|| (lsa_generation_timer !=  nullptr && lsa_generation_timer->has_operation())
	|| (spf_timer !=  nullptr && spf_timer->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_timer.is_set || is_set(fast_reroute_timer.operation)) leaf_name_data.push_back(fast_reroute_timer.get_name_leafdata());
    if (lsa_group_pacing.is_set || is_set(lsa_group_pacing.operation)) leaf_name_data.push_back(lsa_group_pacing.get_name_leafdata());
    if (lsa_min_arrival.is_set || is_set(lsa_min_arrival.operation)) leaf_name_data.push_back(lsa_min_arrival.get_name_leafdata());
    if (lsa_pacing_flood.is_set || is_set(lsa_pacing_flood.operation)) leaf_name_data.push_back(lsa_pacing_flood.get_name_leafdata());
    if (lsa_refresh.is_set || is_set(lsa_refresh.operation)) leaf_name_data.push_back(lsa_refresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-generation-timer")
    {
        if(lsa_generation_timer != nullptr)
        {
            children["lsa-generation-timer"] = lsa_generation_timer;
        }
        else
        {
            lsa_generation_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer>();
            lsa_generation_timer->parent = this;
            children["lsa-generation-timer"] = lsa_generation_timer;
        }
        return children.at("lsa-generation-timer");
    }

    if(child_yang_name == "spf-timer")
    {
        if(spf_timer != nullptr)
        {
            children["spf-timer"] = spf_timer;
        }
        else
        {
            spf_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer>();
            spf_timer->parent = this;
            children["spf-timer"] = spf_timer;
        }
        return children.at("spf-timer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Timers::get_children()
{
    if(children.find("lsa-generation-timer") == children.end())
    {
        if(lsa_generation_timer != nullptr)
        {
            children["lsa-generation-timer"] = lsa_generation_timer;
        }
    }

    if(children.find("spf-timer") == children.end())
    {
        if(spf_timer != nullptr)
        {
            children["spf-timer"] = spf_timer;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-timer")
    {
        fast_reroute_timer = value;
    }
    if(value_path == "lsa-group-pacing")
    {
        lsa_group_pacing = value;
    }
    if(value_path == "lsa-min-arrival")
    {
        lsa_min_arrival = value;
    }
    if(value_path == "lsa-pacing-flood")
    {
        lsa_pacing_flood = value;
    }
    if(value_path == "lsa-refresh")
    {
        lsa_refresh = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::SpfTimer()
    :
    backoff_increment{YType::uint32, "backoff-increment"},
    initial_delay{YType::uint32, "initial-delay"},
    max_delay{YType::uint32, "max-delay"}
{
    yang_name = "spf-timer"; yang_parent_name = "timers";
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::~SpfTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::has_data() const
{
    return backoff_increment.is_set
	|| initial_delay.is_set
	|| max_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_increment.operation)
	|| is_set(initial_delay.operation)
	|| is_set(max_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-timer";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfTimer' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_increment.is_set || is_set(backoff_increment.operation)) leaf_name_data.push_back(backoff_increment.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.operation)) leaf_name_data.push_back(max_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::SpfTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment = value;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::LsaGenerationTimer()
    :
    backoff_increment{YType::uint32, "backoff-increment"},
    initial_delay{YType::uint32, "initial-delay"},
    max_delay{YType::uint32, "max-delay"}
{
    yang_name = "lsa-generation-timer"; yang_parent_name = "timers";
}

Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::~LsaGenerationTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::has_data() const
{
    return backoff_increment.is_set
	|| initial_delay.is_set
	|| max_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_increment.operation)
	|| is_set(initial_delay.operation)
	|| is_set(max_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-generation-timer";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaGenerationTimer' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_increment.is_set || is_set(backoff_increment.operation)) leaf_name_data.push_back(backoff_increment.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.operation)) leaf_name_data.push_back(max_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Timers::LsaGenerationTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-increment")
    {
        backoff_increment = value;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
    }
}

Ospf::Processes::Process::GracefulShutdownTimers::GracefulShutdownTimers()
    :
    graceful_shutdown_initial_delay{YType::uint32, "graceful-shutdown-initial-delay"},
    graceful_shutdown_retain_routes{YType::uint32, "graceful-shutdown-retain-routes"}
{
    yang_name = "graceful-shutdown-timers"; yang_parent_name = "process";
}

Ospf::Processes::Process::GracefulShutdownTimers::~GracefulShutdownTimers()
{
}

bool Ospf::Processes::Process::GracefulShutdownTimers::has_data() const
{
    return graceful_shutdown_initial_delay.is_set
	|| graceful_shutdown_retain_routes.is_set;
}

bool Ospf::Processes::Process::GracefulShutdownTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(graceful_shutdown_initial_delay.operation)
	|| is_set(graceful_shutdown_retain_routes.operation);
}

std::string Ospf::Processes::Process::GracefulShutdownTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-shutdown-timers";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::GracefulShutdownTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulShutdownTimers' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_shutdown_initial_delay.is_set || is_set(graceful_shutdown_initial_delay.operation)) leaf_name_data.push_back(graceful_shutdown_initial_delay.get_name_leafdata());
    if (graceful_shutdown_retain_routes.is_set || is_set(graceful_shutdown_retain_routes.operation)) leaf_name_data.push_back(graceful_shutdown_retain_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::GracefulShutdownTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::GracefulShutdownTimers::get_children()
{
    return children;
}

void Ospf::Processes::Process::GracefulShutdownTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "graceful-shutdown-initial-delay")
    {
        graceful_shutdown_initial_delay = value;
    }
    if(value_path == "graceful-shutdown-retain-routes")
    {
        graceful_shutdown_retain_routes = value;
    }
}

Ospf::Processes::Process::DefaultVrf::DefaultVrf()
    :
    adjacency_changes{YType::enumeration, "adjacency-changes"},
    default_metric{YType::uint32, "default-metric"},
    ignore_mospf{YType::empty, "ignore-mospf"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_paths{YType::uint32, "maximum-paths"},
    no_opaque{YType::empty, "no-opaque"},
    router_id{YType::str, "router-id"},
    snmp_context{YType::str, "snmp-context"},
    spf_prefix_priority{YType::str, "spf-prefix-priority"},
    type7{YType::empty, "type7"}
    	,
    adjacency_stagger(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyStagger>())
	,af(nullptr) // presence node
	,area_addresses(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaAddresses>())
	,auto_cost(std::make_shared<Ospf::Processes::Process::DefaultVrf::AutoCost>())
	,default_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::DefaultInformation>())
	,distance(std::make_shared<Ospf::Processes::Process::DefaultVrf::Distance>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>())
	,max_lsa(nullptr) // presence node
	,max_metric(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric>())
	,maximum_redistribute_prefix(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix>())
	,microloop(std::make_shared<Ospf::Processes::Process::DefaultVrf::Microloop>())
	,monitor_convergence(std::make_shared<Ospf::Processes::Process::DefaultVrf::MonitorConvergence>())
	,mpls(std::make_shared<Ospf::Processes::Process::DefaultVrf::Mpls>())
	,nsf(std::make_shared<Ospf::Processes::Process::DefaultVrf::Nsf>())
	,outgoing_route_updates(std::make_shared<Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates>())
	,process_scope(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope>())
	,queue(std::make_shared<Ospf::Processes::Process::DefaultVrf::Queue>())
	,redistribution(std::make_shared<Ospf::Processes::Process::DefaultVrf::Redistribution>())
	,segment_routing(std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>())
	,timers(std::make_shared<Ospf::Processes::Process::DefaultVrf::Timers>())
	,ucmp(std::make_shared<Ospf::Processes::Process::DefaultVrf::Ucmp>())
{
    adjacency_stagger->parent = this;
    children["adjacency-stagger"] = adjacency_stagger;

    area_addresses->parent = this;
    children["area-addresses"] = area_addresses;

    auto_cost->parent = this;
    children["auto-cost"] = auto_cost;

    default_information->parent = this;
    children["default-information"] = default_information;

    distance->parent = this;
    children["distance"] = distance;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    max_metric->parent = this;
    children["max-metric"] = max_metric;

    maximum_redistribute_prefix->parent = this;
    children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;

    microloop->parent = this;
    children["microloop"] = microloop;

    monitor_convergence->parent = this;
    children["monitor-convergence"] = monitor_convergence;

    mpls->parent = this;
    children["mpls"] = mpls;

    nsf->parent = this;
    children["nsf"] = nsf;

    outgoing_route_updates->parent = this;
    children["outgoing-route-updates"] = outgoing_route_updates;

    process_scope->parent = this;
    children["process-scope"] = process_scope;

    queue->parent = this;
    children["queue"] = queue;

    redistribution->parent = this;
    children["redistribution"] = redistribution;

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    timers->parent = this;
    children["timers"] = timers;

    ucmp->parent = this;
    children["ucmp"] = ucmp;

    yang_name = "default-vrf"; yang_parent_name = "process";
}

Ospf::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospf::Processes::Process::DefaultVrf::has_data() const
{
    return adjacency_changes.is_set
	|| default_metric.is_set
	|| ignore_mospf.is_set
	|| maximum_interfaces.is_set
	|| maximum_paths.is_set
	|| no_opaque.is_set
	|| router_id.is_set
	|| snmp_context.is_set
	|| spf_prefix_priority.is_set
	|| type7.is_set
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_data())
	|| (af !=  nullptr && af->has_data())
	|| (area_addresses !=  nullptr && area_addresses->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (max_lsa !=  nullptr && max_lsa->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data())
	|| (maximum_redistribute_prefix !=  nullptr && maximum_redistribute_prefix->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (outgoing_route_updates !=  nullptr && outgoing_route_updates->has_data())
	|| (process_scope !=  nullptr && process_scope->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_changes.operation)
	|| is_set(default_metric.operation)
	|| is_set(ignore_mospf.operation)
	|| is_set(maximum_interfaces.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(no_opaque.operation)
	|| is_set(router_id.operation)
	|| is_set(snmp_context.operation)
	|| is_set(spf_prefix_priority.operation)
	|| is_set(type7.operation)
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_operation())
	|| (af !=  nullptr && af->has_operation())
	|| (area_addresses !=  nullptr && area_addresses->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (max_lsa !=  nullptr && max_lsa->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (maximum_redistribute_prefix !=  nullptr && maximum_redistribute_prefix->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (outgoing_route_updates !=  nullptr && outgoing_route_updates->has_operation())
	|| (process_scope !=  nullptr && process_scope->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultVrf' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_changes.is_set || is_set(adjacency_changes.operation)) leaf_name_data.push_back(adjacency_changes.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (ignore_mospf.is_set || is_set(ignore_mospf.operation)) leaf_name_data.push_back(ignore_mospf.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.operation)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (no_opaque.is_set || is_set(no_opaque.operation)) leaf_name_data.push_back(no_opaque.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmp_context.is_set || is_set(snmp_context.operation)) leaf_name_data.push_back(snmp_context.get_name_leafdata());
    if (spf_prefix_priority.is_set || is_set(spf_prefix_priority.operation)) leaf_name_data.push_back(spf_prefix_priority.get_name_leafdata());
    if (type7.is_set || is_set(type7.operation)) leaf_name_data.push_back(type7.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-stagger")
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
        else
        {
            adjacency_stagger = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyStagger>();
            adjacency_stagger->parent = this;
            children["adjacency-stagger"] = adjacency_stagger;
        }
        return children.at("adjacency-stagger");
    }

    if(child_yang_name == "af")
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
        else
        {
            af = std::make_shared<Ospf::Processes::Process::DefaultVrf::Af>();
            af->parent = this;
            children["af"] = af;
        }
        return children.at("af");
    }

    if(child_yang_name == "area-addresses")
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
        else
        {
            area_addresses = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaAddresses>();
            area_addresses->parent = this;
            children["area-addresses"] = area_addresses;
        }
        return children.at("area-addresses");
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
        else
        {
            auto_cost = std::make_shared<Ospf::Processes::Process::DefaultVrf::AutoCost>();
            auto_cost->parent = this;
            children["auto-cost"] = auto_cost;
        }
        return children.at("auto-cost");
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<Ospf::Processes::Process::DefaultVrf::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa != nullptr)
        {
            children["max-lsa"] = max_lsa;
        }
        else
        {
            max_lsa = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxLsa>();
            max_lsa->parent = this;
            children["max-lsa"] = max_lsa;
        }
        return children.at("max-lsa");
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
        else
        {
            max_metric = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric>();
            max_metric->parent = this;
            children["max-metric"] = max_metric;
        }
        return children.at("max-metric");
    }

    if(child_yang_name == "maximum-redistribute-prefix")
    {
        if(maximum_redistribute_prefix != nullptr)
        {
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
        else
        {
            maximum_redistribute_prefix = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix>();
            maximum_redistribute_prefix->parent = this;
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
        return children.at("maximum-redistribute-prefix");
    }

    if(child_yang_name == "microloop")
    {
        if(microloop != nullptr)
        {
            children["microloop"] = microloop;
        }
        else
        {
            microloop = std::make_shared<Ospf::Processes::Process::DefaultVrf::Microloop>();
            microloop->parent = this;
            children["microloop"] = microloop;
        }
        return children.at("microloop");
    }

    if(child_yang_name == "monitor-convergence")
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
        else
        {
            monitor_convergence = std::make_shared<Ospf::Processes::Process::DefaultVrf::MonitorConvergence>();
            monitor_convergence->parent = this;
            children["monitor-convergence"] = monitor_convergence;
        }
        return children.at("monitor-convergence");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<Ospf::Processes::Process::DefaultVrf::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
        else
        {
            nsf = std::make_shared<Ospf::Processes::Process::DefaultVrf::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf;
        }
        return children.at("nsf");
    }

    if(child_yang_name == "outgoing-route-updates")
    {
        if(outgoing_route_updates != nullptr)
        {
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
        else
        {
            outgoing_route_updates = std::make_shared<Ospf::Processes::Process::DefaultVrf::OutgoingRouteUpdates>();
            outgoing_route_updates->parent = this;
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
        return children.at("outgoing-route-updates");
    }

    if(child_yang_name == "process-scope")
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
        else
        {
            process_scope = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope>();
            process_scope->parent = this;
            children["process-scope"] = process_scope;
        }
        return children.at("process-scope");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
        else
        {
            queue = std::make_shared<Ospf::Processes::Process::DefaultVrf::Queue>();
            queue->parent = this;
            children["queue"] = queue;
        }
        return children.at("queue");
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
        else
        {
            redistribution = std::make_shared<Ospf::Processes::Process::DefaultVrf::Redistribution>();
            redistribution->parent = this;
            children["redistribution"] = redistribution;
        }
        return children.at("redistribution");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
        else
        {
            segment_routing = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing;
        }
        return children.at("segment-routing");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Ospf::Processes::Process::DefaultVrf::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
        else
        {
            ucmp = std::make_shared<Ospf::Processes::Process::DefaultVrf::Ucmp>();
            ucmp->parent = this;
            children["ucmp"] = ucmp;
        }
        return children.at("ucmp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::get_children()
{
    if(children.find("adjacency-stagger") == children.end())
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
    }

    if(children.find("af") == children.end())
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
    }

    if(children.find("area-addresses") == children.end())
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
    }

    if(children.find("auto-cost") == children.end())
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
    }

    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("max-lsa") == children.end())
    {
        if(max_lsa != nullptr)
        {
            children["max-lsa"] = max_lsa;
        }
    }

    if(children.find("max-metric") == children.end())
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
    }

    if(children.find("maximum-redistribute-prefix") == children.end())
    {
        if(maximum_redistribute_prefix != nullptr)
        {
            children["maximum-redistribute-prefix"] = maximum_redistribute_prefix;
        }
    }

    if(children.find("microloop") == children.end())
    {
        if(microloop != nullptr)
        {
            children["microloop"] = microloop;
        }
    }

    if(children.find("monitor-convergence") == children.end())
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
    }

    if(children.find("outgoing-route-updates") == children.end())
    {
        if(outgoing_route_updates != nullptr)
        {
            children["outgoing-route-updates"] = outgoing_route_updates;
        }
    }

    if(children.find("process-scope") == children.end())
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
    }

    if(children.find("redistribution") == children.end())
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("ucmp") == children.end())
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-changes")
    {
        adjacency_changes = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "ignore-mospf")
    {
        ignore_mospf = value;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "no-opaque")
    {
        no_opaque = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "snmp-context")
    {
        snmp_context = value;
    }
    if(value_path == "spf-prefix-priority")
    {
        spf_prefix_priority = value;
    }
    if(value_path == "type7")
    {
        type7 = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MonitorConvergence::MonitorConvergence()
    :
    enable{YType::empty, "enable"},
    prefix_list{YType::str, "prefix-list"},
    track_external_routes{YType::empty, "track-external-routes"},
    track_ip_frr{YType::empty, "track-ip-frr"},
    track_summary_routes{YType::empty, "track-summary-routes"}
{
    yang_name = "monitor-convergence"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::MonitorConvergence::~MonitorConvergence()
{
}

bool Ospf::Processes::Process::DefaultVrf::MonitorConvergence::has_data() const
{
    return enable.is_set
	|| prefix_list.is_set
	|| track_external_routes.is_set
	|| track_ip_frr.is_set
	|| track_summary_routes.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MonitorConvergence::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(prefix_list.operation)
	|| is_set(track_external_routes.operation)
	|| is_set(track_ip_frr.operation)
	|| is_set(track_summary_routes.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MonitorConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-convergence";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MonitorConvergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorConvergence' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (track_external_routes.is_set || is_set(track_external_routes.operation)) leaf_name_data.push_back(track_external_routes.get_name_leafdata());
    if (track_ip_frr.is_set || is_set(track_ip_frr.operation)) leaf_name_data.push_back(track_ip_frr.get_name_leafdata());
    if (track_summary_routes.is_set || is_set(track_summary_routes.operation)) leaf_name_data.push_back(track_summary_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MonitorConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MonitorConvergence::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MonitorConvergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
    if(value_path == "track-external-routes")
    {
        track_external_routes = value;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr = value;
    }
    if(value_path == "track-summary-routes")
    {
        track_summary_routes = value;
    }
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SegmentRouting()
    :
    prefix_sid_map_advertise_local{YType::empty, "prefix-sid-map-advertise-local"},
    prefix_sid_map_receive_disable{YType::empty, "prefix-sid-map-receive-disable"},
    strict_spf_disable{YType::empty, "strict-spf-disable"}
    	,
    sr_prefer(std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer>())
{
    sr_prefer->parent = this;
    children["sr-prefer"] = sr_prefer;

    yang_name = "segment-routing"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::~SegmentRouting()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::has_data() const
{
    return prefix_sid_map_advertise_local.is_set
	|| prefix_sid_map_receive_disable.is_set
	|| strict_spf_disable.is_set
	|| (sr_prefer !=  nullptr && sr_prefer->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_sid_map_advertise_local.operation)
	|| is_set(prefix_sid_map_receive_disable.operation)
	|| is_set(strict_spf_disable.operation)
	|| (sr_prefer !=  nullptr && sr_prefer->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_sid_map_advertise_local.is_set || is_set(prefix_sid_map_advertise_local.operation)) leaf_name_data.push_back(prefix_sid_map_advertise_local.get_name_leafdata());
    if (prefix_sid_map_receive_disable.is_set || is_set(prefix_sid_map_receive_disable.operation)) leaf_name_data.push_back(prefix_sid_map_receive_disable.get_name_leafdata());
    if (strict_spf_disable.is_set || is_set(strict_spf_disable.operation)) leaf_name_data.push_back(strict_spf_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-prefer")
    {
        if(sr_prefer != nullptr)
        {
            children["sr-prefer"] = sr_prefer;
        }
        else
        {
            sr_prefer = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer>();
            sr_prefer->parent = this;
            children["sr-prefer"] = sr_prefer;
        }
        return children.at("sr-prefer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_children()
{
    if(children.find("sr-prefer") == children.end())
    {
        if(sr_prefer != nullptr)
        {
            children["sr-prefer"] = sr_prefer;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-sid-map-advertise-local")
    {
        prefix_sid_map_advertise_local = value;
    }
    if(value_path == "prefix-sid-map-receive-disable")
    {
        prefix_sid_map_receive_disable = value;
    }
    if(value_path == "strict-spf-disable")
    {
        strict_spf_disable = value;
    }
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::SrPrefer()
    :
    enable{YType::boolean, "enable"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "sr-prefer"; yang_parent_name = "segment-routing";
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::~SrPrefer()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::has_data() const
{
    return enable.is_set
	|| prefix_list_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(prefix_list_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefer";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPrefer' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrPrefer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Mpls::Mpls()
    :
    autoroute_exclude{YType::str, "autoroute-exclude"},
    igp_intact{YType::empty, "igp-intact"},
    ldp_sync_update{YType::empty, "ldp-sync-update"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    mpls_router_id(std::make_shared<Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId>())
{
    mpls_router_id->parent = this;
    children["mpls-router-id"] = mpls_router_id;

    yang_name = "mpls"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Mpls::~Mpls()
{
}

bool Ospf::Processes::Process::DefaultVrf::Mpls::has_data() const
{
    return autoroute_exclude.is_set
	|| igp_intact.is_set
	|| ldp_sync_update.is_set
	|| multicast_intact.is_set
	|| (mpls_router_id !=  nullptr && mpls_router_id->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(autoroute_exclude.operation)
	|| is_set(igp_intact.operation)
	|| is_set(ldp_sync_update.operation)
	|| is_set(multicast_intact.operation)
	|| (mpls_router_id !=  nullptr && mpls_router_id->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoroute_exclude.is_set || is_set(autoroute_exclude.operation)) leaf_name_data.push_back(autoroute_exclude.get_name_leafdata());
    if (igp_intact.is_set || is_set(igp_intact.operation)) leaf_name_data.push_back(igp_intact.get_name_leafdata());
    if (ldp_sync_update.is_set || is_set(ldp_sync_update.operation)) leaf_name_data.push_back(ldp_sync_update.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-router-id")
    {
        if(mpls_router_id != nullptr)
        {
            children["mpls-router-id"] = mpls_router_id;
        }
        else
        {
            mpls_router_id = std::make_shared<Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId>();
            mpls_router_id->parent = this;
            children["mpls-router-id"] = mpls_router_id;
        }
        return children.at("mpls-router-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Mpls::get_children()
{
    if(children.find("mpls-router-id") == children.end())
    {
        if(mpls_router_id != nullptr)
        {
            children["mpls-router-id"] = mpls_router_id;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autoroute-exclude")
    {
        autoroute_exclude = value;
    }
    if(value_path == "igp-intact")
    {
        igp_intact = value;
    }
    if(value_path == "ldp-sync-update")
    {
        ldp_sync_update = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::MplsRouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "mpls-router-id"; yang_parent_name = "mpls";
}

Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::~MplsRouterId()
{
}

bool Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-router-id";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsRouterId' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Mpls::MplsRouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Microloop::Microloop()
    :
    avoidance(std::make_shared<Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance>())
{
    avoidance->parent = this;
    children["avoidance"] = avoidance;

    yang_name = "microloop"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Microloop::~Microloop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Microloop::has_operation() const
{
    return is_set(operation)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Microloop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Microloop' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "avoidance")
    {
        if(avoidance != nullptr)
        {
            children["avoidance"] = avoidance;
        }
        else
        {
            avoidance = std::make_shared<Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance>();
            avoidance->parent = this;
            children["avoidance"] = avoidance;
        }
        return children.at("avoidance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Microloop::get_children()
{
    if(children.find("avoidance") == children.end())
    {
        if(avoidance != nullptr)
        {
            children["avoidance"] = avoidance;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Microloop::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::Avoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "avoidance"; yang_parent_name = "microloop";
}

Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::~Avoidance()
{
}

bool Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::has_data() const
{
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Avoidance' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Microloop::Avoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::MaximumRedistributePrefix()
    :
    number_of_prefixes{YType::uint32, "number-of-prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::boolean, "warning-only"}
{
    yang_name = "maximum-redistribute-prefix"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::~MaximumRedistributePrefix()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::has_data() const
{
    return number_of_prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_prefixes.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-redistribute-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRedistributePrefix' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_prefixes.is_set || is_set(number_of_prefixes.operation)) leaf_name_data.push_back(number_of_prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaximumRedistributePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-prefixes")
    {
        number_of_prefixes = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Ospf::Processes::Process::DefaultVrf::DefaultInformation::DefaultInformation()
    :
    always_advertise{YType::boolean, "always-advertise"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-information"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::DefaultInformation::has_data() const
{
    return always_advertise.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(always_advertise.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_advertise.is_set || is_set(always_advertise.operation)) leaf_name_data.push_back(always_advertise.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::DefaultInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always-advertise")
    {
        always_advertise = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Af::~Af()
{
}

bool Ospf::Processes::Process::DefaultVrf::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Af::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Queue::Queue()
    :
    dispatch_incoming{YType::uint32, "dispatch-incoming"},
    dispatch_rate_limited{YType::uint32, "dispatch-rate-limited"},
    dispatch_rate_limited_flush{YType::uint32, "dispatch-rate-limited-flush"},
    dispatch_spf_lsa_limit{YType::uint32, "dispatch-spf-lsa-limit"},
    limit_high{YType::uint32, "limit-high"},
    limit_low{YType::uint32, "limit-low"},
    limit_medium{YType::uint32, "limit-medium"}
{
    yang_name = "queue"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Queue::~Queue()
{
}

bool Ospf::Processes::Process::DefaultVrf::Queue::has_data() const
{
    return dispatch_incoming.is_set
	|| dispatch_rate_limited.is_set
	|| dispatch_rate_limited_flush.is_set
	|| dispatch_spf_lsa_limit.is_set
	|| limit_high.is_set
	|| limit_low.is_set
	|| limit_medium.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(dispatch_incoming.operation)
	|| is_set(dispatch_rate_limited.operation)
	|| is_set(dispatch_rate_limited_flush.operation)
	|| is_set(dispatch_spf_lsa_limit.operation)
	|| is_set(limit_high.operation)
	|| is_set(limit_low.operation)
	|| is_set(limit_medium.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dispatch_incoming.is_set || is_set(dispatch_incoming.operation)) leaf_name_data.push_back(dispatch_incoming.get_name_leafdata());
    if (dispatch_rate_limited.is_set || is_set(dispatch_rate_limited.operation)) leaf_name_data.push_back(dispatch_rate_limited.get_name_leafdata());
    if (dispatch_rate_limited_flush.is_set || is_set(dispatch_rate_limited_flush.operation)) leaf_name_data.push_back(dispatch_rate_limited_flush.get_name_leafdata());
    if (dispatch_spf_lsa_limit.is_set || is_set(dispatch_spf_lsa_limit.operation)) leaf_name_data.push_back(dispatch_spf_lsa_limit.get_name_leafdata());
    if (limit_high.is_set || is_set(limit_high.operation)) leaf_name_data.push_back(limit_high.get_name_leafdata());
    if (limit_low.is_set || is_set(limit_low.operation)) leaf_name_data.push_back(limit_low.get_name_leafdata());
    if (limit_medium.is_set || is_set(limit_medium.operation)) leaf_name_data.push_back(limit_medium.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Queue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dispatch-incoming")
    {
        dispatch_incoming = value;
    }
    if(value_path == "dispatch-rate-limited")
    {
        dispatch_rate_limited = value;
    }
    if(value_path == "dispatch-rate-limited-flush")
    {
        dispatch_rate_limited_flush = value;
    }
    if(value_path == "dispatch-spf-lsa-limit")
    {
        dispatch_spf_lsa_limit = value;
    }
    if(value_path == "limit-high")
    {
        limit_high = value;
    }
    if(value_path == "limit-low")
    {
        limit_low = value;
    }
    if(value_path == "limit-medium")
    {
        limit_medium = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetric()
    :
    max_metric_no_abr_off{YType::empty, "max-metric-no-abr-off"}
    	,
    max_metric_always(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways>())
	,max_metric_on_proc_migration(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration>())
	,max_metric_on_proc_restart(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart>())
	,max_metric_on_startup(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup>())
	,max_metric_on_switchover(std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover>())
{
    max_metric_always->parent = this;
    children["max-metric-always"] = max_metric_always;

    max_metric_on_proc_migration->parent = this;
    children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;

    max_metric_on_proc_restart->parent = this;
    children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;

    max_metric_on_startup->parent = this;
    children["max-metric-on-startup"] = max_metric_on_startup;

    max_metric_on_switchover->parent = this;
    children["max-metric-on-switchover"] = max_metric_on_switchover;

    yang_name = "max-metric"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::~MaxMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::has_data() const
{
    return max_metric_no_abr_off.is_set
	|| (max_metric_always !=  nullptr && max_metric_always->has_data())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_data())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_data())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_data())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_metric_no_abr_off.operation)
	|| (max_metric_always !=  nullptr && max_metric_always->has_operation())
	|| (max_metric_on_proc_migration !=  nullptr && max_metric_on_proc_migration->has_operation())
	|| (max_metric_on_proc_restart !=  nullptr && max_metric_on_proc_restart->has_operation())
	|| (max_metric_on_startup !=  nullptr && max_metric_on_startup->has_operation())
	|| (max_metric_on_switchover !=  nullptr && max_metric_on_switchover->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetric' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_metric_no_abr_off.is_set || is_set(max_metric_no_abr_off.operation)) leaf_name_data.push_back(max_metric_no_abr_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-metric-always")
    {
        if(max_metric_always != nullptr)
        {
            children["max-metric-always"] = max_metric_always;
        }
        else
        {
            max_metric_always = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways>();
            max_metric_always->parent = this;
            children["max-metric-always"] = max_metric_always;
        }
        return children.at("max-metric-always");
    }

    if(child_yang_name == "max-metric-on-proc-migration")
    {
        if(max_metric_on_proc_migration != nullptr)
        {
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
        else
        {
            max_metric_on_proc_migration = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration>();
            max_metric_on_proc_migration->parent = this;
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
        return children.at("max-metric-on-proc-migration");
    }

    if(child_yang_name == "max-metric-on-proc-restart")
    {
        if(max_metric_on_proc_restart != nullptr)
        {
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
        else
        {
            max_metric_on_proc_restart = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart>();
            max_metric_on_proc_restart->parent = this;
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
        return children.at("max-metric-on-proc-restart");
    }

    if(child_yang_name == "max-metric-on-startup")
    {
        if(max_metric_on_startup != nullptr)
        {
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
        else
        {
            max_metric_on_startup = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup>();
            max_metric_on_startup->parent = this;
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
        return children.at("max-metric-on-startup");
    }

    if(child_yang_name == "max-metric-on-switchover")
    {
        if(max_metric_on_switchover != nullptr)
        {
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
        else
        {
            max_metric_on_switchover = std::make_shared<Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover>();
            max_metric_on_switchover->parent = this;
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
        return children.at("max-metric-on-switchover");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::get_children()
{
    if(children.find("max-metric-always") == children.end())
    {
        if(max_metric_always != nullptr)
        {
            children["max-metric-always"] = max_metric_always;
        }
    }

    if(children.find("max-metric-on-proc-migration") == children.end())
    {
        if(max_metric_on_proc_migration != nullptr)
        {
            children["max-metric-on-proc-migration"] = max_metric_on_proc_migration;
        }
    }

    if(children.find("max-metric-on-proc-restart") == children.end())
    {
        if(max_metric_on_proc_restart != nullptr)
        {
            children["max-metric-on-proc-restart"] = max_metric_on_proc_restart;
        }
    }

    if(children.find("max-metric-on-startup") == children.end())
    {
        if(max_metric_on_startup != nullptr)
        {
            children["max-metric-on-startup"] = max_metric_on_startup;
        }
    }

    if(children.find("max-metric-on-switchover") == children.end())
    {
        if(max_metric_on_switchover != nullptr)
        {
            children["max-metric-on-switchover"] = max_metric_on_switchover;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-metric-no-abr-off")
    {
        max_metric_no_abr_off = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::MaxMetricOnProcRestart()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-proc-restart"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::~MaxMetricOnProcRestart()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-restart";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnProcRestart' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::MaxMetricOnStartup()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-startup"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::~MaxMetricOnStartup()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-startup";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnStartup' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::MaxMetricOnProcMigration()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-proc-migration"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::~MaxMetricOnProcMigration()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-proc-migration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnProcMigration' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnProcMigration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::MaxMetricAlways()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"}
{
    yang_name = "max-metric-always"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::~MaxMetricAlways()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-always";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricAlways' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricAlways::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::MaxMetricOnSwitchover()
    :
    external_lsa{YType::boolean, "external-lsa"},
    external_lsa_maximum_metric{YType::uint32, "external-lsa-maximum-metric"},
    include_stub{YType::boolean, "include-stub"},
    startup_max{YType::uint32, "startup-max"},
    summary_lsa{YType::boolean, "summary-lsa"},
    summary_lsa_maximum_metric{YType::uint32, "summary-lsa-maximum-metric"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"}
{
    yang_name = "max-metric-on-switchover"; yang_parent_name = "max-metric";
}

Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::~MaxMetricOnSwitchover()
{
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::has_data() const
{
    return external_lsa.is_set
	|| external_lsa_maximum_metric.is_set
	|| include_stub.is_set
	|| startup_max.is_set
	|| summary_lsa.is_set
	|| summary_lsa_maximum_metric.is_set
	|| wait_for_bgp.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::has_operation() const
{
    return is_set(operation)
	|| is_set(external_lsa.operation)
	|| is_set(external_lsa_maximum_metric.operation)
	|| is_set(include_stub.operation)
	|| is_set(startup_max.operation)
	|| is_set(summary_lsa.operation)
	|| is_set(summary_lsa_maximum_metric.operation)
	|| is_set(wait_for_bgp.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric-on-switchover";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetricOnSwitchover' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (external_lsa_maximum_metric.is_set || is_set(external_lsa_maximum_metric.operation)) leaf_name_data.push_back(external_lsa_maximum_metric.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (startup_max.is_set || is_set(startup_max.operation)) leaf_name_data.push_back(startup_max.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());
    if (summary_lsa_maximum_metric.is_set || is_set(summary_lsa_maximum_metric.operation)) leaf_name_data.push_back(summary_lsa_maximum_metric.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MaxMetric::MaxMetricOnSwitchover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "external-lsa-maximum-metric")
    {
        external_lsa_maximum_metric = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "startup-max")
    {
        startup_max = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
    if(value_path == "summary-lsa-maximum-metric")
    {
        summary_lsa_maximum_metric = value;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Nsf::Nsf()
    :
    cisco{YType::enumeration, "cisco"},
    flush_delay_time{YType::uint32, "flush-delay-time"},
    ietf{YType::enumeration, "ietf"},
    ietf_strict_lsa_checking{YType::empty, "ietf-strict-lsa-checking"},
    ietf_support_role{YType::enumeration, "ietf-support-role"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Nsf::~Nsf()
{
}

bool Ospf::Processes::Process::DefaultVrf::Nsf::has_data() const
{
    return cisco.is_set
	|| flush_delay_time.is_set
	|| ietf.is_set
	|| ietf_strict_lsa_checking.is_set
	|| ietf_support_role.is_set
	|| interval.is_set
	|| lifetime.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(flush_delay_time.operation)
	|| is_set(ietf.operation)
	|| is_set(ietf_strict_lsa_checking.operation)
	|| is_set(ietf_support_role.operation)
	|| is_set(interval.operation)
	|| is_set(lifetime.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (flush_delay_time.is_set || is_set(flush_delay_time.operation)) leaf_name_data.push_back(flush_delay_time.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (ietf_strict_lsa_checking.is_set || is_set(ietf_strict_lsa_checking.operation)) leaf_name_data.push_back(ietf_strict_lsa_checking.get_name_leafdata());
    if (ietf_support_role.is_set || is_set(ietf_support_role.operation)) leaf_name_data.push_back(ietf_support_role.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Nsf::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "flush-delay-time")
    {
        flush_delay_time = value;
    }
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "ietf-strict-lsa-checking")
    {
        ietf_strict_lsa_checking = value;
    }
    if(value_path == "ietf-support-role")
    {
        ietf_support_role = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Ospf::Processes::Process::DefaultVrf::ProcessScope::ProcessScope()
    :
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    demand_circuit{YType::boolean, "demand-circuit"},
    external_out{YType::boolean, "external-out"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    ldp_auto_config{YType::empty, "ldp-auto-config"},
    ldp_sync{YType::boolean, "ldp-sync"},
    ldp_sync_igp_shortcuts{YType::boolean, "ldp-sync-igp-shortcuts"},
    link_down_fast_detect{YType::boolean, "link-down-fast-detect"},
    loopback_stub_network{YType::boolean, "loopback-stub-network"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network_type{YType::enumeration, "network-type"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression_primary{YType::boolean, "prefix-suppression-primary"},
    prefix_suppression_secondary{YType::boolean, "prefix-suppression-secondary"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    segment_routing{YType::enumeration, "segment-routing"},
    segment_routing_forwarding{YType::enumeration, "segment-routing-forwarding"},
    summary_in{YType::boolean, "summary-in"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication>())
	,bfd(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd>())
	,cost_fallback(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback>())
	,dead_interval_minimal(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal>())
	,distribute_list(nullptr) // presence node
	,fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute>())
	,security(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Security>())
	,srgb(nullptr) // presence node
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    cost_fallback->parent = this;
    children["cost-fallback"] = cost_fallback;

    dead_interval_minimal->parent = this;
    children["dead-interval-minimal"] = dead_interval_minimal;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    security->parent = this;
    children["security"] = security;

    yang_name = "process-scope"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::ProcessScope::~ProcessScope()
{
}

bool Ospf::Processes::Process::DefaultVrf::ProcessScope::has_data() const
{
    return cost.is_set
	|| database_filter.is_set
	|| demand_circuit.is_set
	|| external_out.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| ldp_auto_config.is_set
	|| ldp_sync.is_set
	|| ldp_sync_igp_shortcuts.is_set
	|| link_down_fast_detect.is_set
	|| loopback_stub_network.is_set
	|| mtu_ignore.is_set
	|| network_type.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression_primary.is_set
	|| prefix_suppression_secondary.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| segment_routing.is_set
	|| segment_routing_forwarding.is_set
	|| summary_in.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost_fallback !=  nullptr && cost_fallback->has_data())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (srgb !=  nullptr && srgb->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::ProcessScope::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(external_out.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(ldp_auto_config.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(ldp_sync_igp_shortcuts.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(loopback_stub_network.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network_type.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression_primary.operation)
	|| is_set(prefix_suppression_secondary.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(segment_routing.operation)
	|| is_set(segment_routing_forwarding.operation)
	|| is_set(summary_in.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost_fallback !=  nullptr && cost_fallback->has_operation())
	|| (dead_interval_minimal !=  nullptr && dead_interval_minimal->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (srgb !=  nullptr && srgb->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::ProcessScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessScope' in Cisco_IOS_XR_ipv4_ospf_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.operation)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (ldp_auto_config.is_set || is_set(ldp_auto_config.operation)) leaf_name_data.push_back(ldp_auto_config.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (ldp_sync_igp_shortcuts.is_set || is_set(ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(ldp_sync_igp_shortcuts.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (loopback_stub_network.is_set || is_set(loopback_stub_network.operation)) leaf_name_data.push_back(loopback_stub_network.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression_primary.is_set || is_set(prefix_suppression_primary.operation)) leaf_name_data.push_back(prefix_suppression_primary.get_name_leafdata());
    if (prefix_suppression_secondary.is_set || is_set(prefix_suppression_secondary.operation)) leaf_name_data.push_back(prefix_suppression_secondary.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (segment_routing_forwarding.is_set || is_set(segment_routing_forwarding.operation)) leaf_name_data.push_back(segment_routing_forwarding.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.operation)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "cost-fallback")
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
        else
        {
            cost_fallback = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::CostFallback>();
            cost_fallback->parent = this;
            children["cost-fallback"] = cost_fallback;
        }
        return children.at("cost-fallback");
    }

    if(child_yang_name == "dead-interval-minimal")
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        else
        {
            dead_interval_minimal = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::DeadIntervalMinimal>();
            dead_interval_minimal->parent = this;
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
        return children.at("dead-interval-minimal");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "security")
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
        else
        {
            security = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Security>();
            security->parent = this;
            children["security"] = security;
        }
        return children.at("security");
    }

    if(child_yang_name == "srgb")
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
        else
        {
            srgb = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessScope::Srgb>();
            srgb->parent = this;
            children["srgb"] = srgb;
        }
        return children.at("srgb");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::ProcessScope::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("cost-fallback") == children.end())
    {
        if(cost_fallback != nullptr)
        {
            children["cost-fallback"] = cost_fallback;
        }
    }

    if(children.find("dead-interval-minimal") == children.end())
    {
        if(dead_interval_minimal != nullptr)
        {
            children["dead-interval-minimal"] = dead_interval_minimal;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("security") == children.end())
    {
        if(security != nullptr)
        {
            children["security"] = security;
        }
    }

    if(children.find("srgb") == children.end())
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::ProcessScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "external-out")
    {
        external_out = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "ldp-auto-config")
    {
        ldp_auto_config = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "ldp-sync-igp-shortcuts")
    {
        ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "loopback-stub-network")
    {
        loopback_stub_network = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression-primary")
    {
        prefix_suppression_primary = value;
    }
    if(value_path == "prefix-suppression-secondary")
    {
        prefix_suppression_secondary = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "segment-routing-forwarding")
    {
        segment_routing_forwarding = value;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}


}
}

