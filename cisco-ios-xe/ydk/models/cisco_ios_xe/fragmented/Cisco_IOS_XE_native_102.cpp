
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_110.hpp"
#include "Cisco_IOS_XE_native_111.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_109.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_118.hpp"
#include "Cisco_IOS_XE_native_119.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "md5"; yang_parent_name = "mode";
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "text"; yang_parent_name = "mode";
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Text' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{
    yang_name = "key-chain-list"; yang_parent_name = "key-chain";
}

Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(name.operation);
}

std::string Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChainList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::IsisContainer::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "send-only"; yang_parent_name = "authentication";
}

Native::Router::IsisContainer::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Router::IsisContainer::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::SendOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::IsisContainer::Isis::DistributeList::DistributeList()
    :
    acl_name{YType::str, "acl-name"},
    gateway{YType::str, "gateway"},
    gateway_prefix_in{YType::str, "gateway-prefix-in"},
    in{YType::str, "in"},
    prefix{YType::str, "prefix"},
    route_map{YType::str, "route-map"},
    route_map_in{YType::empty, "route-map-in"}
{
    yang_name = "distribute-list"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::DistributeList::~DistributeList()
{
}

bool Native::Router::IsisContainer::Isis::DistributeList::has_data() const
{
    return acl_name.is_set
	|| gateway.is_set
	|| gateway_prefix_in.is_set
	|| in.is_set
	|| prefix.is_set
	|| route_map.is_set
	|| route_map_in.is_set;
}

bool Native::Router::IsisContainer::Isis::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(gateway.operation)
	|| is_set(gateway_prefix_in.operation)
	|| is_set(in.operation)
	|| is_set(prefix.operation)
	|| is_set(route_map.operation)
	|| is_set(route_map_in.operation);
}

std::string Native::Router::IsisContainer::Isis::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (gateway_prefix_in.is_set || is_set(gateway_prefix_in.operation)) leaf_name_data.push_back(gateway_prefix_in.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (route_map_in.is_set || is_set(route_map_in.operation)) leaf_name_data.push_back(route_map_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "gateway-prefix-in")
    {
        gateway_prefix_in = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "route-map-in")
    {
        route_map_in = value;
    }
}

Native::Router::IsisContainer::Isis::DomainPassword::DomainPassword()
    :
    authenticate{YType::empty, "authenticate"},
    name{YType::str, "name"},
    snp{YType::enumeration, "snp"}
{
    yang_name = "domain-password"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::DomainPassword::~DomainPassword()
{
}

bool Native::Router::IsisContainer::Isis::DomainPassword::has_data() const
{
    return authenticate.is_set
	|| name.is_set
	|| snp.is_set;
}

bool Native::Router::IsisContainer::Isis::DomainPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(name.operation)
	|| is_set(snp.operation);
}

std::string Native::Router::IsisContainer::Isis::DomainPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-password";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::DomainPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainPassword' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snp.is_set || is_set(snp.operation)) leaf_name_data.push_back(snp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DomainPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DomainPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::DomainPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "snp")
    {
        snp = value;
    }
}

Native::Router::IsisContainer::Isis::FastFlood::FastFlood()
    :
    number{YType::uint32, "number"}
{
    yang_name = "fast-flood"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::FastFlood::~FastFlood()
{
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_data() const
{
    return number.is_set;
}

bool Native::Router::IsisContainer::Isis::FastFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Router::IsisContainer::Isis::FastFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-flood";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastFlood' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::FastReroute()
    :
    load_sharing(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing>())
	,per_prefix(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix>())
	,remote_lfa(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak>())
{
    load_sharing->parent = this;

    per_prefix->parent = this;

    remote_lfa->parent = this;

    tie_break->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::FastReroute::~FastReroute()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::has_data() const
{
    return (load_sharing !=  nullptr && load_sharing->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tie_break != nullptr)
    {
        children["tie-break"] = tie_break;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::LoadSharing()
    :
    level_1(nullptr) // presence node
	,level_2(nullptr) // presence node
{
    yang_name = "load-sharing"; yang_parent_name = "fast-reroute";
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::~LoadSharing()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-sharing";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadSharing' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::Level1()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "level-1"; yang_parent_name = "load-sharing";
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_data() const
{
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::Level2()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "level-2"; yang_parent_name = "load-sharing";
}

Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_data() const
{
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::PerPrefix()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1>())
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::Level1()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{
    yang_name = "level-1"; yang_parent_name = "per-prefix";
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::Level2()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{
    yang_name = "level-2"; yang_parent_name = "per-prefix";
}

Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::RemoteLfa()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1>())
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "fast-reroute";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::Level1()
    :
    mpls_ldp(nullptr) // presence node
{
    yang_name = "level-1"; yang_parent_name = "remote-lfa";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::has_operation() const
{
    return is_set(operation)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{
    yang_name = "mpls-ldp"; yang_parent_name = "level-1";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::Level2()
    :
    mpls_ldp(nullptr) // presence node
{
    yang_name = "level-2"; yang_parent_name = "remote-lfa";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::has_operation() const
{
    return is_set(operation)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{
    yang_name = "mpls-ldp"; yang_parent_name = "level-2";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::~MplsLdp()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp";
}

Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::TieBreak()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1>())
	,level_2(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "tie-break"; yang_parent_name = "fast-reroute";
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::~TieBreak()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TieBreak' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::Level1()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{
    yang_name = "level-1"; yang_parent_name = "tie-break";
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream.operation)
	|| is_set(linecard_disjoint.operation)
	|| is_set(lowest_backup_path_metric.operation)
	|| is_set(node_protecting.operation)
	|| is_set(primary_path.operation)
	|| is_set(secondary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.operation)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.operation)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.operation)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::Level2()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{
    yang_name = "level-2"; yang_parent_name = "tie-break";
}

Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream.operation)
	|| is_set(linecard_disjoint.operation)
	|| is_set(lowest_backup_path_metric.operation)
	|| is_set(node_protecting.operation)
	|| is_set(primary_path.operation)
	|| is_set(secondary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.operation)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.operation)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.operation)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Native::Router::IsisContainer::Isis::TiLfa::TiLfa()
    :
    level_1(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1>())
	,level_2(nullptr) // presence node
{
    level_1->parent = this;

    yang_name = "ti-lfa"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::TiLfa::~TiLfa()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ti-lfa";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TiLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TiLfa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::TiLfa::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::Level1()
    :
    maximum_metric(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-1"; yang_parent_name = "ti-lfa";
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TiLfa::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "level-1";
}

Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::Level2()
    :
    maximum_metric(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-2"; yang_parent_name = "ti-lfa";
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TiLfa::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "level-2";
}

Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::IsisContainer::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Hello::~Hello()
{
}

bool Native::Router::IsisContainer::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Router::IsisContainer::Isis::Hello::has_operation() const
{
    return is_set(operation)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Router::IsisContainer::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Hello::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Hello::Padding::Padding()
    :
    pad_type{YType::enumeration, "pad-type"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Router::IsisContainer::Isis::Hello::Padding::~Padding()
{
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_data() const
{
    return pad_type.is_set;
}

bool Native::Router::IsisContainer::Isis::Hello::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(pad_type.operation);
}

std::string Native::Router::IsisContainer::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad_type.is_set || is_set(pad_type.operation)) leaf_name_data.push_back(pad_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Hello::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pad-type")
    {
        pad_type = value;
    }
}

Native::Router::IsisContainer::Isis::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "hostname"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Hostname::~Hostname()
{
}

bool Native::Router::IsisContainer::Isis::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Router::IsisContainer::Isis::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Router::IsisContainer::Isis::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Router::IsisContainer::Isis::Ispf::Ispf()
    :
    level{YType::enumeration, "level"},
    number{YType::uint32, "number"}
{
    yang_name = "ispf"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Ispf::~Ispf()
{
}

bool Native::Router::IsisContainer::Isis::Ispf::has_data() const
{
    return level.is_set
	|| number.is_set;
}

bool Native::Router::IsisContainer::Isis::Ispf::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(number.operation);
}

std::string Native::Router::IsisContainer::Isis::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Ispf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ispf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Ispf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Router::IsisContainer::Isis::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{
    yang_name = "log-adjacency-changes"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Router::IsisContainer::Isis::LogAdjacencyChanges::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogAdjacencyChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::LogAdjacencyChanges::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::IsisContainer::Isis::LspFull::LspFull()
    :
    suppress(std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress>())
{
    suppress->parent = this;

    yang_name = "lsp-full"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::LspFull::~LspFull()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::LspFull::has_operation() const
{
    return is_set(operation)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-full";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspFull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFull' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::LspFull::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::Suppress()
    :
    none{YType::empty, "none"}
    	,
    external_interlevel_container(std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer>())
{
    external_interlevel_container->parent = this;

    yang_name = "suppress"; yang_parent_name = "lsp-full";
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::has_data() const
{
    return none.is_set
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_data());
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspFull::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspFull::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interlevel-container")
    {
        if(external_interlevel_container == nullptr)
        {
            external_interlevel_container = std::make_shared<Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer>();
        }
        return external_interlevel_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_interlevel_container != nullptr)
    {
        children["external-interlevel-container"] = external_interlevel_container;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::LspFull::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::ExternalInterlevelContainer()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "external-interlevel-container"; yang_parent_name = "suppress";
}

Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::~ExternalInterlevelContainer()
{
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interlevel-container";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalInterlevelContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::IsisContainer::Isis::LspGenInterval::LspGenInterval()
    :
    intervals(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::Intervals>())
	,intervals_levels(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels>())
{
    intervals->parent = this;

    intervals_levels->parent = this;

    yang_name = "lsp-gen-interval"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::LspGenInterval::~LspGenInterval()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::has_data() const
{
    return (intervals !=  nullptr && intervals->has_data())
	|| (intervals_levels !=  nullptr && intervals_levels->has_data());
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::has_operation() const
{
    return is_set(operation)
	|| (intervals !=  nullptr && intervals->has_operation())
	|| (intervals_levels !=  nullptr && intervals_levels->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspGenInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspGenInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "intervals-levels")
    {
        if(intervals_levels == nullptr)
        {
            intervals_levels = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels>();
        }
        return intervals_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    if(intervals_levels != nullptr)
    {
        children["intervals-levels"] = intervals_levels;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals"; yang_parent_name = "lsp-gen-interval";
}

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::~Intervals()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Intervals' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevels()
    :
    intervals_level_1(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>())
	,intervals_level_2(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
{
    intervals_level_1->parent = this;

    intervals_level_2->parent = this;

    yang_name = "intervals-levels"; yang_parent_name = "lsp-gen-interval";
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::~IntervalsLevels()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_data() const
{
    return (intervals_level_1 !=  nullptr && intervals_level_1->has_data())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_operation() const
{
    return is_set(operation)
	|| (intervals_level_1 !=  nullptr && intervals_level_1->has_operation())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-levels";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntervalsLevels' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals-level-1")
    {
        if(intervals_level_1 == nullptr)
        {
            intervals_level_1 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>();
        }
        return intervals_level_1;
    }

    if(child_yang_name == "intervals-level-2")
    {
        if(intervals_level_2 == nullptr)
        {
            intervals_level_2 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>();
        }
        return intervals_level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals_level_1 != nullptr)
    {
        children["intervals-level-1"] = intervals_level_1;
    }

    if(intervals_level_2 != nullptr)
    {
        children["intervals-level-2"] = intervals_level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::IntervalsLevel1()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    level_1{YType::empty, "level-1"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals-level-1"; yang_parent_name = "intervals-levels";
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::~IntervalsLevel1()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| level_1.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(level_1.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntervalsLevel1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::IntervalsLevel2()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    level_2{YType::empty, "level-2"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals-level-2"; yang_parent_name = "intervals-levels";
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::~IntervalsLevel2()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| level_2.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(level_2.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntervalsLevel2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::IsisContainer::Isis::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{
    yang_name = "microloop"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Microloop::~Microloop()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::IsisContainer::Isis::Microloop::has_operation() const
{
    return is_set(operation)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Microloop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Microloop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::IsisContainer::Isis::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Microloop::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "avoidance"; yang_parent_name = "microloop";
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_data() const
{
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(protected_.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Avoidance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Microloop::Avoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>())
{
    ldp->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Mpls::~Mpls()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Ldp()
    :
    sync{YType::empty, "sync"},
    sync_igp_shortcuts{YType::empty, "sync-igp-shortcuts"}
    	,
    autoconfig(nullptr) // presence node
{
    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_data() const
{
    return sync.is_set
	|| sync_igp_shortcuts.is_set
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| is_set(sync.operation)
	|| is_set(sync_igp_shortcuts.operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());
    if (sync_igp_shortcuts.is_set || is_set(sync_igp_shortcuts.operation)) leaf_name_data.push_back(sync_igp_shortcuts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync")
    {
        sync = value;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"}
{
    yang_name = "autoconfig"; yang_parent_name = "ldp";
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_data() const
{
    return level_1.is_set
	|| level_2.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(level_1.operation)
	|| is_set(level_2.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconfig' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::TrafficEng()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>())
	,scanner(nullptr) // presence node
{
    router_id->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_data() const
{
    return level_1.is_set
	|| level_2.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (scanner !=  nullptr && scanner->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(level_1.operation)
	|| is_set(level_2.operation)
	|| is_set(multicast_intact.operation)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (scanner !=  nullptr && scanner->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "scanner")
    {
        if(scanner == nullptr)
        {
            scanner = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>();
        }
        return scanner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(scanner != nullptr)
    {
        children["scanner"] = scanner;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::RouterId()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "router-id"; yang_parent_name = "traffic-eng";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "router-id";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "router-id";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "router-id";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "router-id";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::Scanner()
    :
    interval{YType::uint32, "interval"},
    max_flash{YType::uint32, "max-flash"}
{
    yang_name = "scanner"; yang_parent_name = "traffic-eng";
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::~Scanner()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_data() const
{
    return interval.is_set
	|| max_flash.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(max_flash.operation);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scanner";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scanner' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (max_flash.is_set || is_set(max_flash.operation)) leaf_name_data.push_back(max_flash.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "max-flash")
    {
        max_flash = value;
    }
}

Native::Router::IsisContainer::Isis::Net::Net()
    :
    tag{YType::str, "tag"}
{
    yang_name = "net"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Net::~Net()
{
}

bool Native::Router::IsisContainer::Isis::Net::has_data() const
{
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::Net::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net" <<"[tag='" <<tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Net::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Net' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Net::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    ietf{YType::empty, "ietf"},
    interval{YType::uint16, "interval"}
    	,
    interface(std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>())
{
    interface->parent = this;

    yang_name = "nsf"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Nsf::~Nsf()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::has_data() const
{
    return cisco.is_set
	|| ietf.is_set
	|| interval.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::IsisContainer::Isis::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(ietf.operation)
	|| is_set(interval.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::IsisContainer::Isis::Nsf::Interface::Interface()
    :
    wait{YType::uint8, "wait"}
{
    yang_name = "interface"; yang_parent_name = "nsf";
}

Native::Router::IsisContainer::Isis::Nsf::Interface::~Interface()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_data() const
{
    return wait.is_set;
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(wait.operation);
}

std::string Native::Router::IsisContainer::Isis::Nsf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Nsf::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Nsf::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::IsisContainer::Isis::Partition::Partition()
    :
    avoidance{YType::empty, "avoidance"}
{
    yang_name = "partition"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Partition::~Partition()
{
}

bool Native::Router::IsisContainer::Isis::Partition::has_data() const
{
    return avoidance.is_set;
}

bool Native::Router::IsisContainer::Isis::Partition::has_operation() const
{
    return is_set(operation)
	|| is_set(avoidance.operation);
}

std::string Native::Router::IsisContainer::Isis::Partition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partition";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Partition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Partition' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoidance.is_set || is_set(avoidance.operation)) leaf_name_data.push_back(avoidance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Partition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Partition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Partition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avoidance")
    {
        avoidance = value;
    }
}

Native::Router::IsisContainer::Isis::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(interface.operation);
}

std::string Native::Router::IsisContainer::Isis::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassiveInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::IsisContainer::Isis::Disable::Disable()
{
    yang_name = "disable"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Disable::~Disable()
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Disable::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "disable";
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassiveInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Disable::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::IsisContainer::Isis::Protocol::Protocol()
    :
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "protocol"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Protocol::~Protocol()
{
}

bool Native::Router::IsisContainer::Isis::Protocol::has_data() const
{
    return shutdown.is_set;
}

bool Native::Router::IsisContainer::Isis::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation);
}

std::string Native::Router::IsisContainer::Isis::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Router::IsisContainer::Isis::SegmentRouting::SegmentRouting()
    :
    mpls{YType::empty, "mpls"}
    	,
    prefix_sid_map(std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::SegmentRouting::~SegmentRouting()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_data() const
{
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"}
    	,
    receive(nullptr) // presence node
{
    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing";
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_data() const
{
    return advertise_local.is_set
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_local.operation)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSidMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.operation)) leaf_name_data.push_back(advertise_local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
    }
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::Receive()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "receive"; yang_parent_name = "prefix-sid-map";
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::~Receive()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_data() const
{
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::IsisContainer::Isis::Skeptical::Skeptical()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Skeptical::~Skeptical()
{
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::IsisContainer::Isis::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Skeptical' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Skeptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::IsisContainer::Isis::Use::Use()
    :
    external_metrics{YType::empty, "external-metrics"}
{
    yang_name = "use"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Use::~Use()
{
}

bool Native::Router::IsisContainer::Isis::Use::has_data() const
{
    return external_metrics.is_set;
}

bool Native::Router::IsisContainer::Isis::Use::has_operation() const
{
    return is_set(operation)
	|| is_set(external_metrics.operation);
}

std::string Native::Router::IsisContainer::Isis::Use::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Use::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Use' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metrics.is_set || is_set(external_metrics.operation)) leaf_name_data.push_back(external_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Use::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-metrics")
    {
        external_metrics = value;
    }
}

Native::Router::IsisContainer::Isis::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    check_ctrl_plane_failure{YType::empty, "check-ctrl-plane-failure"}
{
    yang_name = "bfd"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Bfd::~Bfd()
{
}

bool Native::Router::IsisContainer::Isis::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| check_ctrl_plane_failure.is_set;
}

bool Native::Router::IsisContainer::Isis::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(all_interfaces.operation)
	|| is_set(check_ctrl_plane_failure.operation);
}

std::string Native::Router::IsisContainer::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.operation)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.operation)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
    }
}

Native::Router::Lisp::Lisp()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
    	,
    alt(std::make_shared<Native::Router::Lisp::Alt>())
	,control_packet(std::make_shared<Native::Router::Lisp::ControlPacket>())
	,ddt(nullptr) // presence node
	,decapsulation(std::make_shared<Native::Router::Lisp::Decapsulation>())
	,default_(std::make_shared<Native::Router::Lisp::Default_>())
	,eid_table(std::make_shared<Native::Router::Lisp::EidTable>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Etr>())
	,instance_container(std::make_shared<Native::Router::Lisp::InstanceContainer>())
	,ipv4(std::make_shared<Native::Router::Lisp::Ipv4>())
	,ipv6(std::make_shared<Native::Router::Lisp::Ipv6>())
	,loc_reach_algorithm(std::make_shared<Native::Router::Lisp::LocReachAlgorithm>())
	,locator_down(std::make_shared<Native::Router::Lisp::LocatorDown>())
	,locator_table(std::make_shared<Native::Router::Lisp::LocatorTable>())
	,map_request(std::make_shared<Native::Router::Lisp::MapRequest>())
	,map_server(std::make_shared<Native::Router::Lisp::MapServer>())
	,other_xtr_probe(std::make_shared<Native::Router::Lisp::OtherXtrProbe>())
	,remote_rloc_probe(std::make_shared<Native::Router::Lisp::RemoteRlocProbe>())
	,security(nullptr) // presence node
	,service(nullptr) // presence node
	,syslog(std::make_shared<Native::Router::Lisp::Syslog>())
{
    alt->parent = this;

    control_packet->parent = this;

    decapsulation->parent = this;

    default_->parent = this;

    eid_table->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    instance_container->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    loc_reach_algorithm->parent = this;

    locator_down->parent = this;

    locator_table->parent = this;

    map_request->parent = this;

    map_server->parent = this;

    other_xtr_probe->parent = this;

    remote_rloc_probe->parent = this;

    syslog->parent = this;

    yang_name = "lisp"; yang_parent_name = "router";
}

Native::Router::Lisp::~Lisp()
{
}

bool Native::Router::Lisp::has_data() const
{
    for (std::size_t index=0; index<locator_scope.size(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_set.size(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::Lisp::has_operation() const
{
    for (std::size_t index=0; index<locator_scope.size(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_set.size(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disable_ttl_propagate.operation)
	|| is_set(site_id.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.operation)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.operation)) leaf_name_data.push_back(site_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::Lisp::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::Lisp::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::Lisp::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::Lisp::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-scope")
    {
        for(auto const & c : locator_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::LocatorScope>();
        c->parent = this;
        locator_scope.push_back(c);
        return c;
    }

    if(child_yang_name == "locator-set")
    {
        for(auto const & c : locator_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::LocatorSet>();
        c->parent = this;
        locator_set.push_back(c);
        return c;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::Lisp::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::Lisp::Security>();
        }
        return security;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        for(auto const & c : site)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Site>();
        c->parent = this;
        site.push_back(c);
        return c;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::Lisp::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        children["decapsulation"] = decapsulation;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(instance_container != nullptr)
    {
        children["instance-container"] = instance_container;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        children["locator-down"] = locator_down;
    }

    for (auto const & c : locator_scope)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : locator_set)
    {
        children[c->get_segment_path()] = c;
    }

    if(locator_table != nullptr)
    {
        children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    for (auto const & c : site)
    {
        children[c->get_segment_path()] = c;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Router::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
    }
    if(value_path == "site-id")
    {
        site_id = value;
    }
}

Native::Router::Lisp::Default_::Default_()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
    	,
    alt(std::make_shared<Native::Router::Lisp::Default_::Alt>())
	,control_packet(std::make_shared<Native::Router::Lisp::Default_::ControlPacket>())
	,ddt(nullptr) // presence node
	,decapsulation(std::make_shared<Native::Router::Lisp::Default_::Decapsulation>())
	,eid_table(std::make_shared<Native::Router::Lisp::Default_::EidTable>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Default_::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Etr>())
	,instance_container(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer>())
	,ipv4(std::make_shared<Native::Router::Lisp::Default_::Ipv4>())
	,ipv6(std::make_shared<Native::Router::Lisp::Default_::Ipv6>())
	,loc_reach_algorithm(std::make_shared<Native::Router::Lisp::Default_::LocReachAlgorithm>())
	,locator_down(std::make_shared<Native::Router::Lisp::Default_::LocatorDown>())
	,locator_table(std::make_shared<Native::Router::Lisp::Default_::LocatorTable>())
	,map_request(std::make_shared<Native::Router::Lisp::Default_::MapRequest>())
	,map_server(std::make_shared<Native::Router::Lisp::Default_::MapServer>())
	,other_xtr_probe(std::make_shared<Native::Router::Lisp::Default_::OtherXtrProbe>())
	,remote_rloc_probe(std::make_shared<Native::Router::Lisp::Default_::RemoteRlocProbe>())
	,security(nullptr) // presence node
	,service(nullptr) // presence node
	,syslog(std::make_shared<Native::Router::Lisp::Default_::Syslog>())
{
    alt->parent = this;

    control_packet->parent = this;

    decapsulation->parent = this;

    eid_table->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    instance_container->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    loc_reach_algorithm->parent = this;

    locator_down->parent = this;

    locator_table->parent = this;

    map_request->parent = this;

    map_server->parent = this;

    other_xtr_probe->parent = this;

    remote_rloc_probe->parent = this;

    syslog->parent = this;

    yang_name = "default"; yang_parent_name = "lisp";
}

Native::Router::Lisp::Default_::~Default_()
{
}

bool Native::Router::Lisp::Default_::has_data() const
{
    for (std::size_t index=0; index<locator_scope.size(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_set.size(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::Lisp::Default_::has_operation() const
{
    for (std::size_t index=0; index<locator_scope.size(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_set.size(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disable_ttl_propagate.operation)
	|| is_set(site_id.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::Lisp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.operation)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.operation)) leaf_name_data.push_back(site_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Default_::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::Lisp::Default_::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::Lisp::Default_::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Default_::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default_::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Default_::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Default_::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Default_::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::Default_::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::Lisp::Default_::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-scope")
    {
        for(auto const & c : locator_scope)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::LocatorScope>();
        c->parent = this;
        locator_scope.push_back(c);
        return c;
    }

    if(child_yang_name == "locator-set")
    {
        for(auto const & c : locator_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::LocatorSet>();
        c->parent = this;
        locator_set.push_back(c);
        return c;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::Lisp::Default_::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::Default_::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::Default_::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::Lisp::Default_::Security>();
        }
        return security;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Default_::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        for(auto const & c : site)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Site>();
        c->parent = this;
        site.push_back(c);
        return c;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::Lisp::Default_::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        children["decapsulation"] = decapsulation;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(instance_container != nullptr)
    {
        children["instance-container"] = instance_container;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        children["locator-down"] = locator_down;
    }

    for (auto const & c : locator_scope)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : locator_set)
    {
        children[c->get_segment_path()] = c;
    }

    if(locator_table != nullptr)
    {
        children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(security != nullptr)
    {
        children["security"] = security;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    for (auto const & c : site)
    {
        children[c->get_segment_path()] = c;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Router::Lisp::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
    }
    if(value_path == "site-id")
    {
        site_id = value;
    }
}

Native::Router::Lisp::Default_::Service::Service()
    :
    ethernet(nullptr) // presence node
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{
    yang_name = "service"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::~Service()
{
}

bool Native::Router::Lisp::Default_::Service::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::Lisp::Default_::Service::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Ipv4()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest>())
{
    database_mapping->parent = this;

    default_->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service";
}

Native::Router::Lisp::Default_::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Default__()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest>())
{
    database_mapping->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::~Distance()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::Distance::~Distance()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Ipv6()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest>())
{
    database_mapping->parent = this;

    default_->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ipv6"; yang_parent_name = "service";
}

Native::Router::Lisp::Default_::Service::Ipv6::~Ipv6()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Default__()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest>())
{
    database_mapping->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

const Enum::YLeaf Native::Router::IsisContainer::Isis::DomainPassword::SnpEnum::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::DomainPassword::SnpEnum::validate {1, "validate"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Hello::Padding::PadTypeEnum::multi_point {0, "multi-point"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Hello::Padding::PadTypeEnum::point_to_point {1, "point-to-point"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::LevelEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Ispf::LevelEnum::level_2 {2, "level-2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::EncapsulationEnum::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::EncapsulationEnum::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::EncapsulationEnum::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::EncapsulationEnum::vxlan {1, "vxlan"};


}
}

