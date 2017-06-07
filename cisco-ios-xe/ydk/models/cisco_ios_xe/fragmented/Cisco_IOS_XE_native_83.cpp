
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::Circuit()
    :
    id{YType::empty, "id"}
{
    yang_name = "circuit"; yang_parent_name = "remote";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::~Circuit()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Circuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::Link()
    :
    failure{YType::empty, "failure"}
{
    yang_name = "link"; yang_parent_name = "remote";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::~Link()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_data() const
{
    return failure.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
}

Native::L2VpnConfig::L2VpnConfig()
    :
    l2vpn(nullptr) // presence node
{
    yang_name = "l2vpn-config"; yang_parent_name = "native";
}

Native::L2VpnConfig::~L2VpnConfig()
{
}

bool Native::L2VpnConfig::has_data() const
{
    return (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::L2VpnConfig::has_operation() const
{
    return is_set(operation)
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::L2VpnConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-config";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2VpnConfig::L2Vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    return children;
}

void Native::L2VpnConfig::set_value(const std::string & value_path, std::string value)
{
}

Native::L2VpnConfig::L2Vpn::L2Vpn()
    :
    router_id{YType::str, "router-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    logging(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>())
	,redundancy(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>())
{
    logging->parent = this;

    redundancy->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "l2vpn-config";
}

Native::L2VpnConfig::L2Vpn::~L2Vpn()
{
}

bool Native::L2VpnConfig::L2Vpn::has_data() const
{
    return router_id.is_set
	|| shutdown.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::L2VpnConfig::L2Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| is_set(shutdown.operation)
	|| (logging !=  nullptr && logging->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:l2vpn";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::L2VpnConfig::L2Vpn::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "l2vpn";
}

Native::L2VpnConfig::L2Vpn::Logging::~Logging()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(redundancy.operation)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{
    yang_name = "pseudowire"; yang_parent_name = "logging";
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Native::L2VpnConfig::L2Vpn::Redundancy::Redundancy()
    :
    predictive(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "l2vpn";
}

Native::L2VpnConfig::L2Vpn::Redundancy::~Redundancy()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_data() const
{
    return (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_operation() const
{
    return is_set(operation)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_value(const std::string & value_path, std::string value)
{
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::Predictive()
    :
    enabled{YType::empty, "enabled"}
{
    yang_name = "predictive"; yang_parent_name = "redundancy";
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_data() const
{
    return enabled.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";

    return path_buffer.str();

}

const EntityPath Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Native::L3Vpn::L3Vpn()
    :
    encapsulation(std::make_shared<Native::L3Vpn::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "l3vpn"; yang_parent_name = "native";
}

Native::L3Vpn::~L3Vpn()
{
}

bool Native::L3Vpn::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::L3Vpn::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::L3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::L3Vpn::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::L3Vpn::set_value(const std::string & value_path, std::string value)
{
}

Native::L3Vpn::Encapsulation::Encapsulation()
{
    yang_name = "encapsulation"; yang_parent_name = "l3vpn";
}

Native::L3Vpn::Encapsulation::~Encapsulation()
{
}

bool Native::L3Vpn::Encapsulation::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L3Vpn::Encapsulation::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::L3Vpn::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l3vpn:encapsulation";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l3vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L3Vpn::Encapsulation::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::L3Vpn::Encapsulation::Ip::Ip()
    :
    profile_name{YType::str, "profile-name"}
    	,
    mpls(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>())
	,protocol(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>())
	,transport(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>())
{
    mpls->parent = this;

    protocol->parent = this;

    transport->parent = this;

    yang_name = "ip"; yang_parent_name = "encapsulation";
}

Native::L3Vpn::Encapsulation::Ip::~Ip()
{
}

bool Native::L3Vpn::Encapsulation::Ip::has_data() const
{
    return profile_name.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l3vpn/Cisco-IOS-XE-l3vpn:encapsulation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Native::L3Vpn::Encapsulation::Ip::Transport::Transport()
    :
    ipv4(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Transport::~Transport()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_value(const std::string & value_path, std::string value)
{
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::Ipv4()
    :
    source{YType::str, "source"}
{
    yang_name = "ipv4"; yang_parent_name = "transport";
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::~Ipv4()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_data() const
{
    return source.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(source.operation);
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source")
    {
        source = value;
    }
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Protocol()
    :
    gre(nullptr) // presence node
{
    yang_name = "protocol"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Protocol::~Protocol()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_data() const
{
    return (gre !=  nullptr && gre->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_operation() const
{
    return is_set(operation)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Protocol::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::Gre()
    :
    key{YType::uint32, "key"}
{
    yang_name = "gre"; yang_parent_name = "protocol";
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::~Gre()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_data() const
{
    return key.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation);
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gre' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
}

Native::L3Vpn::Encapsulation::Ip::Mpls::Mpls()
    :
    mtu{YType::str, "mtu"}
{
    yang_name = "mpls"; yang_parent_name = "ip";
}

Native::L3Vpn::Encapsulation::Ip::Mpls::~Mpls()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_data() const
{
    return mtu.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation);
}

std::string Native::L3Vpn::Encapsulation::Ip::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::L3Vpn::Encapsulation::Ip::Mpls::get_entity_path(Entity* ancestor) const
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

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Native::Mpls::Mpls()
    :
    cos_map{YType::uint8, "Cisco-IOS-XE-mpls:cos-map"}
    	,
    atm(std::make_shared<Native::Mpls::Atm>())
	,ip(std::make_shared<Native::Mpls::Ip>())
	,label(std::make_shared<Native::Mpls::Label>())
	,ldp(std::make_shared<Native::Mpls::Ldp>())
	,prefix_map(std::make_shared<Native::Mpls::PrefixMap>())
	,static_(nullptr) // presence node
	,tp(nullptr) // presence node
	,traffic_eng(std::make_shared<Native::Mpls::TrafficEng>())
{
    atm->parent = this;

    ip->parent = this;

    label->parent = this;

    ldp->parent = this;

    prefix_map->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "native";
}

Native::Mpls::~Mpls()
{
}

bool Native::Mpls::has_data() const
{
    return cos_map.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (prefix_map !=  nullptr && prefix_map->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (tp !=  nullptr && tp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(cos_map.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (prefix_map !=  nullptr && prefix_map->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (tp !=  nullptr && tp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_map.is_set || is_set(cos_map.operation)) leaf_name_data.push_back(cos_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Mpls::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "prefix-map")
    {
        if(prefix_map == nullptr)
        {
            prefix_map = std::make_shared<Native::Mpls::PrefixMap>();
        }
        return prefix_map;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "tp")
    {
        if(tp == nullptr)
        {
            tp = std::make_shared<Native::Mpls::Tp>();
        }
        return tp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(prefix_map != nullptr)
    {
        children["prefix-map"] = prefix_map;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(tp != nullptr)
    {
        children["tp"] = tp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-map")
    {
        cos_map = value;
    }
}

Native::Mpls::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{
    yang_name = "atm"; yang_parent_name = "mpls";
}

Native::Mpls::Atm::~Atm()
{
}

bool Native::Mpls::Atm::has_data() const
{
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_headend_vc.operation);
}

std::string Native::Mpls::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:atm";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.operation)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
    }
}

Native::Mpls::Ip::Ip()
    :
    default_route{YType::empty, "default-route"}
    	,
    conf(std::make_shared<Native::Mpls::Ip::Conf>())
	,conf_arg(std::make_shared<Native::Mpls::Ip::ConfArg>())
	,ttl_expiration(std::make_shared<Native::Mpls::Ip::TtlExpiration>())
{
    conf->parent = this;

    conf_arg->parent = this;

    ttl_expiration->parent = this;

    yang_name = "ip"; yang_parent_name = "mpls";
}

Native::Mpls::Ip::~Ip()
{
}

bool Native::Mpls::Ip::has_data() const
{
    return default_route.is_set
	|| (conf !=  nullptr && conf->has_data())
	|| (conf_arg !=  nullptr && conf_arg->has_data())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_data());
}

bool Native::Mpls::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(default_route.operation)
	|| (conf !=  nullptr && conf->has_operation())
	|| (conf_arg !=  nullptr && conf_arg->has_operation())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_operation());
}

std::string Native::Mpls::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ip";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.operation)) leaf_name_data.push_back(default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conf")
    {
        if(conf == nullptr)
        {
            conf = std::make_shared<Native::Mpls::Ip::Conf>();
        }
        return conf;
    }

    if(child_yang_name == "conf-arg")
    {
        if(conf_arg == nullptr)
        {
            conf_arg = std::make_shared<Native::Mpls::Ip::ConfArg>();
        }
        return conf_arg;
    }

    if(child_yang_name == "ttl-expiration")
    {
        if(ttl_expiration == nullptr)
        {
            ttl_expiration = std::make_shared<Native::Mpls::Ip::TtlExpiration>();
        }
        return ttl_expiration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conf != nullptr)
    {
        children["conf"] = conf;
    }

    if(conf_arg != nullptr)
    {
        children["conf-arg"] = conf_arg;
    }

    if(ttl_expiration != nullptr)
    {
        children["ttl-expiration"] = ttl_expiration;
    }

    return children;
}

void Native::Mpls::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-route")
    {
        default_route = value;
    }
}

Native::Mpls::Ip::Conf::Conf()
    :
    propagate_ttl{YType::boolean, "propagate-ttl"}
{
    yang_name = "conf"; yang_parent_name = "ip";
}

Native::Mpls::Ip::Conf::~Conf()
{
}

bool Native::Mpls::Ip::Conf::has_data() const
{
    return propagate_ttl.is_set;
}

bool Native::Mpls::Ip::Conf::has_operation() const
{
    return is_set(operation)
	|| is_set(propagate_ttl.operation);
}

std::string Native::Mpls::Ip::Conf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ip::Conf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (propagate_ttl.is_set || is_set(propagate_ttl.operation)) leaf_name_data.push_back(propagate_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ip::Conf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::Conf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::Conf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "propagate-ttl")
    {
        propagate_ttl = value;
    }
}

Native::Mpls::Ip::ConfArg::ConfArg()
    :
    propagate_ttl(std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>())
{
    propagate_ttl->parent = this;

    yang_name = "conf-arg"; yang_parent_name = "ip";
}

Native::Mpls::Ip::ConfArg::~ConfArg()
{
}

bool Native::Mpls::Ip::ConfArg::has_data() const
{
    return (propagate_ttl !=  nullptr && propagate_ttl->has_data());
}

bool Native::Mpls::Ip::ConfArg::has_operation() const
{
    return is_set(operation)
	|| (propagate_ttl !=  nullptr && propagate_ttl->has_operation());
}

std::string Native::Mpls::Ip::ConfArg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-arg";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ip::ConfArg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "propagate-ttl")
    {
        if(propagate_ttl == nullptr)
        {
            propagate_ttl = std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>();
        }
        return propagate_ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(propagate_ttl != nullptr)
    {
        children["propagate-ttl"] = propagate_ttl;
    }

    return children;
}

void Native::Mpls::Ip::ConfArg::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ip::ConfArg::PropagateTtl::PropagateTtl()
    :
    forwarded{YType::boolean, "forwarded"}
{
    yang_name = "propagate-ttl"; yang_parent_name = "conf-arg";
}

Native::Mpls::Ip::ConfArg::PropagateTtl::~PropagateTtl()
{
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_data() const
{
    return forwarded.is_set;
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarded.operation);
}

std::string Native::Mpls::Ip::ConfArg::PropagateTtl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate-ttl";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ip::ConfArg::PropagateTtl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/conf-arg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarded.is_set || is_set(forwarded.operation)) leaf_name_data.push_back(forwarded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::PropagateTtl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::PropagateTtl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::ConfArg::PropagateTtl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarded")
    {
        forwarded = value;
    }
}

Native::Mpls::Ip::TtlExpiration::TtlExpiration()
    :
    pop{YType::uint8, "pop"}
{
    yang_name = "ttl-expiration"; yang_parent_name = "ip";
}

Native::Mpls::Ip::TtlExpiration::~TtlExpiration()
{
}

bool Native::Mpls::Ip::TtlExpiration::has_data() const
{
    return pop.is_set;
}

bool Native::Mpls::Ip::TtlExpiration::has_operation() const
{
    return is_set(operation)
	|| is_set(pop.operation);
}

std::string Native::Mpls::Ip::TtlExpiration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-expiration";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ip::TtlExpiration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop.is_set || is_set(pop.operation)) leaf_name_data.push_back(pop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ip::TtlExpiration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::TtlExpiration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::TtlExpiration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop")
    {
        pop = value;
    }
}

Native::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
    	,
    atm(std::make_shared<Native::Mpls::Label::Atm>())
	,mode(std::make_shared<Native::Mpls::Label::Mode>())
	,range(std::make_shared<Native::Mpls::Label::Range>())
{
    atm->parent = this;

    mode->parent = this;

    range->parent = this;

    yang_name = "label"; yang_parent_name = "mpls";
}

Native::Mpls::Label::~Label()
{
}

bool Native::Mpls::Label::has_data() const
{
    return protocol.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Mpls::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Label::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Mpls::Label::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Mpls::Label::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Mpls::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Mpls::Label::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{
    yang_name = "atm"; yang_parent_name = "label";
}

Native::Mpls::Label::Atm::~Atm()
{
}

bool Native::Mpls::Label::Atm::has_data() const
{
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Label::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_headend_vc.operation);
}

std::string Native::Mpls::Label::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.operation)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
    }
}

Native::Mpls::Label::Mode::Mode()
    :
    all_vrfs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs>())
	,vrf(std::make_shared<Native::Mpls::Label::Mode::Vrf>())
{
    all_vrfs->parent = this;

    vrf->parent = this;

    yang_name = "mode"; yang_parent_name = "label";
}

Native::Mpls::Label::Mode::~Mode()
{
}

bool Native::Mpls::Label::Mode::has_data() const
{
    return (all_vrfs !=  nullptr && all_vrfs->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Label::Mode::has_operation() const
{
    return is_set(operation)
	|| (all_vrfs !=  nullptr && all_vrfs->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Label::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-vrfs")
    {
        if(all_vrfs == nullptr)
        {
            all_vrfs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs>();
        }
        return all_vrfs;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Label::Mode::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_vrfs != nullptr)
    {
        children["all-vrfs"] = all_vrfs;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Label::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Label::Mode::AllVrfs::AllVrfs()
    :
    protocol(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>())
{
    protocol->parent = this;

    yang_name = "all-vrfs"; yang_parent_name = "mode";
}

Native::Mpls::Label::Mode::AllVrfs::~AllVrfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::has_operation() const
{
    return is_set(operation)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-vrfs";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::AllVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>())
	,bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>())
	,bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;

    bgp_vpnv4->parent = this;

    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "all-vrfs";
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_data() const
{
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_operation() const
{
    return is_set(operation)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::AllVrfs::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "all-afs"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Mode::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "mode";
}

Native::Mpls::Label::Mode::Vrf::~Vrf()
{
}

bool Native::Mpls::Label::Mode::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Label::Mode::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Label::Mode::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    protocol(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>())
{
    protocol->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Label::Mode::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>())
	,bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>())
	,bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;

    bgp_vpnv4->parent = this;

    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "vrf";
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_data() const
{
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_operation() const
{
    return is_set(operation)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "all-afs"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllAfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpVpnv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{
    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol";
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(operation)
	|| is_set(per_ce.operation)
	|| is_set(per_prefix.operation)
	|| is_set(per_vrf.operation)
	|| is_set(vrf_conn_aggr.operation);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpVpnv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.operation)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.operation)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.operation)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
    }
}

Native::Mpls::Label::Range::Range()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
    	,
    static_(std::make_shared<Native::Mpls::Label::Range::Static_>())
{
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "label";
}

Native::Mpls::Label::Range::~Range()
{
}

bool Native::Mpls::Label::Range::has_data() const
{
    return max.is_set
	|| min.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mpls::Label::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mpls::Label::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Label::Range::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mpls::Label::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Mpls::Label::Range::Static_::Static_()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "static"; yang_parent_name = "range";
}

Native::Mpls::Label::Range::Static_::~Static_()
{
}

bool Native::Mpls::Label::Range::Static_::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Mpls::Label::Range::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Mpls::Label::Range::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Label::Range::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Range::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Mpls::Ldp::Ldp()
    :
    enable(std::make_shared<Native::Mpls::Ldp::Enable>())
	,enable2(std::make_shared<Native::Mpls::Ldp::Enable2>())
	,session(std::make_shared<Native::Mpls::Ldp::Session>())
{
    enable->parent = this;

    enable2->parent = this;

    session->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Mpls::Ldp::~Ldp()
{
}

bool Native::Mpls::Ldp::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (enable2 !=  nullptr && enable2->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (enable2 !=  nullptr && enable2->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Mpls::Ldp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "enable2")
    {
        if(enable2 == nullptr)
        {
            enable2 = std::make_shared<Native::Mpls::Ldp::Enable2>();
        }
        return enable2;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Mpls::Ldp::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(enable2 != nullptr)
    {
        children["enable2"] = enable2;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable::Enable()
    :
    advertise_labels{YType::boolean, "advertise-labels"}
{
    yang_name = "enable"; yang_parent_name = "ldp";
}

Native::Mpls::Ldp::Enable::~Enable()
{
}

bool Native::Mpls::Ldp::Enable::has_data() const
{
    return advertise_labels.is_set;
}

bool Native::Mpls::Ldp::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_labels.operation);
}

std::string Native::Mpls::Ldp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_labels.is_set || is_set(advertise_labels.operation)) leaf_name_data.push_back(advertise_labels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-labels")
    {
        advertise_labels = value;
    }
}

Native::Mpls::Ldp::Enable2::Enable2()
    :
    entropy_label{YType::empty, "entropy-label"},
    holdtime{YType::uint32, "holdtime"},
    loop_detection{YType::empty, "loop-detection"},
    maxhops{YType::uint8, "maxhops"},
    nsr{YType::empty, "nsr"}
    	,
    advertise_labels(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>())
	,atm(std::make_shared<Native::Mpls::Ldp::Enable2::Atm>())
	,backoff(std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>())
	,discovery(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>())
	,explicit_null(nullptr) // presence node
	,graceful_restart(nullptr) // presence node
	,igp(std::make_shared<Native::Mpls::Ldp::Enable2::Igp>())
	,label(nullptr) // presence node
	,logging(std::make_shared<Native::Mpls::Ldp::Enable2::Logging>())
	,neighbor(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Password>())
	,request_labels(std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>())
	,router_id(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>())
	,tcp(std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>())
{
    advertise_labels->parent = this;

    atm->parent = this;

    backoff->parent = this;

    discovery->parent = this;

    igp->parent = this;

    logging->parent = this;

    neighbor->parent = this;

    password->parent = this;

    request_labels->parent = this;

    router_id->parent = this;

    tcp->parent = this;

    vrf->parent = this;

    yang_name = "enable2"; yang_parent_name = "ldp";
}

Native::Mpls::Ldp::Enable2::~Enable2()
{
}

bool Native::Mpls::Ldp::Enable2::has_data() const
{
    return entropy_label.is_set
	|| holdtime.is_set
	|| loop_detection.is_set
	|| maxhops.is_set
	|| nsr.is_set
	|| (advertise_labels !=  nullptr && advertise_labels->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (request_labels !=  nullptr && request_labels->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::has_operation() const
{
    return is_set(operation)
	|| is_set(entropy_label.operation)
	|| is_set(holdtime.operation)
	|| is_set(loop_detection.operation)
	|| is_set(maxhops.operation)
	|| is_set(nsr.operation)
	|| (advertise_labels !=  nullptr && advertise_labels->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (request_labels !=  nullptr && request_labels->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable2";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy_label.is_set || is_set(entropy_label.operation)) leaf_name_data.push_back(entropy_label.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.operation)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.operation)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-labels")
    {
        if(advertise_labels == nullptr)
        {
            advertise_labels = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>();
        }
        return advertise_labels;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Ldp::Enable2::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::Ldp::Enable2::ExplicitNull>();
        }
        return explicit_null;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::Mpls::Ldp::Enable2::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Ldp::Enable2::Label>();
        }
        return label;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::Ldp::Enable2::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Password>();
        }
        return password;
    }

    if(child_yang_name == "request-labels")
    {
        if(request_labels == nullptr)
        {
            request_labels = std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>();
        }
        return request_labels;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_labels != nullptr)
    {
        children["advertise-labels"] = advertise_labels;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(request_labels != nullptr)
    {
        children["request-labels"] = request_labels;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entropy-label")
    {
        entropy_label = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
    }
    if(value_path == "maxhops")
    {
        maxhops = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::AdvertiseLabels()
    :
    oldstyle{YType::empty, "oldstyle"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>())
{
    for_->parent = this;

    vrf->parent = this;

    yang_name = "advertise-labels"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::~AdvertiseLabels()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(oldstyle.operation)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-labels";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oldstyle.is_set || is_set(oldstyle.operation)) leaf_name_data.push_back(oldstyle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_>();
        }
        return for_;
    }

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
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oldstyle")
    {
        oldstyle = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::For_()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{
    yang_name = "for"; yang_parent_name = "advertise-labels";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::has_operation() const
{
    return is_set(operation)
	|| is_set(from.operation)
	|| is_set(to.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.operation)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.operation)) leaf_name_data.push_back(to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from")
    {
        from = value;
    }
    if(value_path == "to")
    {
        to = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::Interface()
    :
    name{YType::str, "name"}
{
    yang_name = "interface"; yang_parent_name = "advertise-labels";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_data() const
{
    return name.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "advertise-labels";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"},
    oldstyle{YType::empty, "oldstyle"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_>())
	,interface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>())
{
    for_->parent = this;

    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(oldstyle.operation)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (oldstyle.is_set || is_set(oldstyle.operation)) leaf_name_data.push_back(oldstyle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_>();
        }
        return for_;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "oldstyle")
    {
        oldstyle = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::For_()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{
    yang_name = "for"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::has_operation() const
{
    return is_set(operation)
	|| is_set(from.operation)
	|| is_set(to.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'For_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.operation)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.operation)) leaf_name_data.push_back(to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from")
    {
        from = value;
    }
    if(value_path == "to")
    {
        to = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_data() const
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

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_operation() const
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

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::set_value(const std::string & value_path, std::string value)
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

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Mpls::Ldp::Enable2::Atm::Atm()
    :
    control_mode{YType::enumeration, "control-mode"},
    vc_merge{YType::boolean, "vc-merge"}
{
    yang_name = "atm"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Atm::~Atm()
{
}

bool Native::Mpls::Ldp::Enable2::Atm::has_data() const
{
    return control_mode.is_set
	|| vc_merge.is_set;
}

bool Native::Mpls::Ldp::Enable2::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(control_mode.operation)
	|| is_set(vc_merge.operation);
}

std::string Native::Mpls::Ldp::Enable2::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_mode.is_set || is_set(control_mode.operation)) leaf_name_data.push_back(control_mode.get_name_leafdata());
    if (vc_merge.is_set || is_set(vc_merge.operation)) leaf_name_data.push_back(vc_merge.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-mode")
    {
        control_mode = value;
    }
    if(value_path == "vc-merge")
    {
        vc_merge = value;
    }
}

Native::Mpls::Ldp::Enable2::Backoff::Backoff()
    :
    initial{YType::uint32, "initial"},
    max{YType::uint32, "max"}
{
    yang_name = "backoff"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Backoff::~Backoff()
{
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_data() const
{
    return initial.is_set
	|| max.is_set;
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_operation() const
{
    return is_set(operation)
	|| is_set(initial.operation)
	|| is_set(max.operation);
}

std::string Native::Mpls::Ldp::Enable2::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.operation)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Backoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial")
    {
        initial = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Mpls::Ldp::Enable2::Discovery::Discovery()
    :
    hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>())
	,targeted_hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>())
{
    hello->parent = this;

    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Discovery::~Discovery()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_data() const
{
    return (hello !=  nullptr && hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_operation() const
{
    return is_set(operation)
	|| (hello !=  nullptr && hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello == nullptr)
        {
            targeted_hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>();
        }
        return targeted_hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::Hello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
{
    yang_name = "hello"; yang_parent_name = "discovery";
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::~Hello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_operation() const
{
    return is_set(operation)
	|| is_set(holdtime.operation)
	|| is_set(interval.operation);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Discovery::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::Hello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::TargetedHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
    	,
    accept(nullptr) // presence node
{
    yang_name = "targeted-hello"; yang_parent_name = "discovery";
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::~TargetedHello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set
	|| (accept !=  nullptr && accept->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_operation() const
{
    return is_set(operation)
	|| is_set(holdtime.operation)
	|| is_set(interval.operation)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::Accept()
    :
    from{YType::str, "from"}
{
    yang_name = "accept"; yang_parent_name = "targeted-hello";
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::~Accept()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_data() const
{
    return from.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_operation() const
{
    return is_set(operation)
	|| is_set(from.operation);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/targeted-hello/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.operation)) leaf_name_data.push_back(from.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "from")
    {
        from = value;
    }
}

Native::Mpls::Ldp::Enable2::ExplicitNull::ExplicitNull()
    :
    for_{YType::str, "for"},
    to{YType::str, "to"}
{
    yang_name = "explicit-null"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_data() const
{
    return for_.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_operation() const
{
    return is_set(operation)
	|| is_set(for_.operation)
	|| is_set(to.operation);
}

std::string Native::Mpls::Ldp::Enable2::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::ExplicitNull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.operation)) leaf_name_data.push_back(for_.get_name_leafdata());
    if (to.is_set || is_set(to.operation)) leaf_name_data.push_back(to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::ExplicitNull::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "for")
    {
        for_ = value;
    }
    if(value_path == "to")
    {
        to = value;
    }
}

Native::Mpls::Ldp::Enable2::GracefulRestart::GracefulRestart()
    :
    timers(std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>())
{
    timers->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::GracefulRestart::~GracefulRestart()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::Timers()
    :
    forwarding_holding{YType::uint16, "forwarding-holding"},
    max_recovery{YType::uint16, "max-recovery"},
    neighbor_liveness{YType::uint16, "neighbor-liveness"}
{
    yang_name = "timers"; yang_parent_name = "graceful-restart";
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::~Timers()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_data() const
{
    return forwarding_holding.is_set
	|| max_recovery.is_set
	|| neighbor_liveness.is_set;
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_holding.operation)
	|| is_set(max_recovery.operation)
	|| is_set(neighbor_liveness.operation);
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_holding.is_set || is_set(forwarding_holding.operation)) leaf_name_data.push_back(forwarding_holding.get_name_leafdata());
    if (max_recovery.is_set || is_set(max_recovery.operation)) leaf_name_data.push_back(max_recovery.get_name_leafdata());
    if (neighbor_liveness.is_set || is_set(neighbor_liveness.operation)) leaf_name_data.push_back(neighbor_liveness.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding = value;
    }
    if(value_path == "max-recovery")
    {
        max_recovery = value;
    }
    if(value_path == "neighbor-liveness")
    {
        neighbor_liveness = value;
    }
}

Native::Mpls::Ldp::Enable2::Igp::Igp()
    :
    sync(std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Igp::~Igp()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool Native::Mpls::Ldp::Enable2::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Igp::Sync::Sync()
    :
    holddown{YType::uint32, "holddown"}
{
    yang_name = "sync"; yang_parent_name = "igp";
}

Native::Mpls::Ldp::Enable2::Igp::Sync::~Sync()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_data() const
{
    return holddown.is_set;
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_operation() const
{
    return is_set(operation)
	|| is_set(holddown.operation);
}

std::string Native::Mpls::Ldp::Enable2::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Igp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/igp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::Sync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holddown")
    {
        holddown = value;
    }
}

Native::Mpls::Ldp::Enable2::Label::Label()
    :
    label_mode__config_ldp_lbl(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl>())
{
    label_mode__config_ldp_lbl->parent = this;

    yang_name = "label"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Label::~Label()
{
}

bool Native::Mpls::Ldp::Enable2::Label::has_data() const
{
    return (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::has_operation() const
{
    return is_set(operation)
	|| (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-Mode__config-ldp-lbl")
    {
        if(label_mode__config_ldp_lbl == nullptr)
        {
            label_mode__config_ldp_lbl = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl>();
        }
        return label_mode__config_ldp_lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_mode__config_ldp_lbl != nullptr)
    {
        children["label-Mode__config-ldp-lbl"] = label_mode__config_ldp_lbl;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::LabelMode__ConfigLdpLbl()
    :
    allocate(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate>())
{
    allocate->parent = this;

    yang_name = "label-Mode__config-ldp-lbl"; yang_parent_name = "label";
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::~LabelMode__ConfigLdpLbl()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::has_data() const
{
    return (allocate !=  nullptr && allocate->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::has_operation() const
{
    return is_set(operation)
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-Mode__config-ldp-lbl";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Allocate()
    :
    global(nullptr) // presence node
{
    yang_name = "allocate"; yang_parent_name = "label-Mode__config-ldp-lbl";
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::~Allocate()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::Global()
    :
    host_routes{YType::empty, "host-routes"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "global"; yang_parent_name = "allocate";
}

Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::~Global()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::has_data() const
{
    return host_routes.is_set
	|| prefix_list.is_set;
}

bool Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(host_routes.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/allocate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routes.is_set || is_set(host_routes.operation)) leaf_name_data.push_back(host_routes.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-routes")
    {
        host_routes = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Mpls::Ldp::Enable2::Logging::Logging()
    :
    neighbor_changes{YType::empty, "neighbor-changes"}
    	,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>())
{
    password->parent = this;

    yang_name = "logging"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Logging::~Logging()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::has_data() const
{
    return neighbor_changes.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_changes.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_changes.is_set || is_set(neighbor_changes.operation)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
    }
}

Native::Mpls::Ldp::Enable2::Logging::Password::Password()
    :
    configuration(nullptr) // presence node
	,rollover(nullptr) // presence node
{
    yang_name = "password"; yang_parent_name = "logging";
}

Native::Mpls::Ldp::Enable2::Logging::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Logging::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::Configuration()
    :
    rate_limit{YType::uint8, "rate-limit"}
{
    yang_name = "configuration"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::~Configuration()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(rate_limit.operation);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::Rollover()
    :
    rate_limit{YType::uint8, "rate-limit"}
{
    yang_name = "rollover"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_operation() const
{
    return is_set(operation)
	|| is_set(rate_limit.operation);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Neighbor()
    :
    vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>())
{
    vrf->parent = this;

    yang_name = "neighbor"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Neighbor::~Neighbor()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        for(auto const & c : neighbor_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent>();
        c->parent = this;
        neighbor_content.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_content)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
    	,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>())
	,targeted(nullptr) // presence node
{
    labels->parent = this;

    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "neighbor";
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_data() const
{
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(implicit_withdraw.operation)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.operation)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{
    yang_name = "labels"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_data() const
{
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_operation() const
{
    return is_set(operation)
	|| is_set(accept.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Labels' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.operation)) leaf_name_data.push_back(accept.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept")
    {
        accept = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{
    yang_name = "password"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(enctype.operation)
	|| is_set(text.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.operation)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enctype")
    {
        enctype = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "targeted"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_data() const
{
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Targeted' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "neighbor";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_data() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        for(auto const & c : neighbor_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent>();
        c->parent = this;
        neighbor_content.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_content)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
    	,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>())
	,targeted(nullptr) // presence node
{
    labels->parent = this;

    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_data() const
{
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(implicit_withdraw.operation)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborContent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.operation)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{
    yang_name = "labels"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_data() const
{
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_operation() const
{
    return is_set(operation)
	|| is_set(accept.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Labels' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.operation)) leaf_name_data.push_back(accept.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept")
    {
        accept = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{
    yang_name = "password"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(enctype.operation)
	|| is_set(text.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.operation)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enctype")
    {
        enctype = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "targeted"; yang_parent_name = "neighbor-content";
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_data() const
{
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Targeted' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>())
	,option(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>())
	,required(nullptr) // presence node
	,rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>())
{
    fallback->parent = this;

    option->parent = this;

    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Password::has_data() const
{
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::has_operation() const
{
    return is_set(operation)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{
    yang_name = "fallback"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_data() const
{
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption_type.operation)
	|| is_set(line.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.operation)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption-type")
    {
        encryption_type = value;
    }
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{
    yang_name = "key-chain"; yang_parent_name = "fallback";
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/fallback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Option::Option()
{
    yang_name = "option"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option";
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_operation() const
{
    return is_set(operation)
	|| is_set(seq_num.operation)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/option/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::For_()
{
    yang_name = "for"; yang_parent_name = "seq-num";
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::has_data() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::has_operation() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'For_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        for(auto const & c : line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line>();
        c->parent = this;
        line.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : line)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::Line()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{
    yang_name = "LINE"; yang_parent_name = "for";
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::~Line()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::has_data() const
{
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(encryption_type.operation)
	|| is_set(line.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.operation)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
    }
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{
    yang_name = "key-chain"; yang_parent_name = "LINE";
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::get_entity_path(Entity* ancestor) const
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

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Required::Required()
    :
    for_{YType::str, "for"}
{
    yang_name = "required"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_operation() const
{
    return is_set(operation)
	|| is_set(for_.operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Required::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.operation)) leaf_name_data.push_back(for_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Required::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "for")
    {
        for_ = value;
    }
}

Native::Mpls::Ldp::Enable2::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{
    yang_name = "rollover"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_data() const
{
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation);
}

std::string Native::Mpls::Ldp::Enable2::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Password::Rollover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Rollover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
}

Native::Mpls::Ldp::Enable2::RequestLabels::RequestLabels()
    :
    for_{YType::str, "for"}
{
    yang_name = "request-labels"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::RequestLabels::~RequestLabels()
{
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(for_.operation);
}

std::string Native::Mpls::Ldp::Enable2::RequestLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-labels";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RequestLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.operation)) leaf_name_data.push_back(for_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RequestLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RequestLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RequestLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "for")
    {
        for_ = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::RouterId()
    :
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf>())
{
    interface->parent = this;

    vrf->parent = this;

    yang_name = "router-id"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::RouterId::~RouterId()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::Interface()
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
    force{YType::empty, "force"},
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
    atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id";
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_data() const
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
	|| force.is_set
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

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_operation() const
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
	|| is_set(force.operation)
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

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
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
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::RouterId::Interface::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "force")
    {
        force = value;
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

Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "router-id";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface>())
{
    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::Interface()
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
    force{YType::empty, "force"},
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
    atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::has_data() const
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
	|| force.is_set
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

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::has_operation() const
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
	|| is_set(force.operation)
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

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::get_entity_path(Entity* ancestor) const
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
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "force")
    {
        force = value;
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

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Mpls::Ldp::Enable2::Tcp::Tcp()
    :
    pak_priority{YType::empty, "pak-priority"}
{
    yang_name = "tcp"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Tcp::~Tcp()
{
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_data() const
{
    return pak_priority.is_set;
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(pak_priority.operation);
}

std::string Native::Mpls::Ldp::Enable2::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pak_priority.is_set || is_set(pak_priority.operation)) leaf_name_data.push_back(pak_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pak-priority")
    {
        pak_priority = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "enable2";
}

Native::Mpls::Ldp::Enable2::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>())
{
    password->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>())
	,option(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>())
	,required(nullptr) // presence node
	,rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>())
{
    fallback->parent = this;

    option->parent = this;

    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_data() const
{
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_operation() const
{
    return is_set(operation)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{
    yang_name = "fallback"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_data() const
{
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption_type.operation)
	|| is_set(line.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fallback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.operation)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption-type")
    {
        encryption_type = value;
    }
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{
    yang_name = "key-chain"; yang_parent_name = "fallback";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_entity_path(Entity* ancestor) const
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

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::Option()
{
    yang_name = "option"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_operation() const
{
    return is_set(operation)
	|| is_set(seq_num.operation)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SeqNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.operation)) leaf_name_data.push_back(seq_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::For_()
{
    yang_name = "for"; yang_parent_name = "seq-num";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::has_data() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::has_operation() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'For_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        for(auto const & c : line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line>();
        c->parent = this;
        line.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : line)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::Line()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{
    yang_name = "LINE"; yang_parent_name = "for";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::~Line()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::has_data() const
{
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(encryption_type.operation)
	|| is_set(line.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.operation)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
    }
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{
    yang_name = "key-chain"; yang_parent_name = "LINE";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::get_entity_path(Entity* ancestor) const
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

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LINE")
    {
        line = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::Required()
    :
    for_{YType::str, "for"}
{
    yang_name = "required"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_operation() const
{
    return is_set(operation)
	|| is_set(for_.operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Required' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.operation)) leaf_name_data.push_back(for_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "for")
    {
        for_ = value;
    }
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{
    yang_name = "rollover"; yang_parent_name = "password";
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_data() const
{
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rollover' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
}

Native::Mpls::Ldp::Session::Session()
    :
    protection(nullptr) // presence node
{
    yang_name = "session"; yang_parent_name = "ldp";
}

Native::Mpls::Ldp::Session::~Session()
{
}

bool Native::Mpls::Ldp::Session::has_data() const
{
    return (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::Ldp::Session::has_operation() const
{
    return is_set(operation)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::Ldp::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::Ldp::Session::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Mpls::Ldp::Session::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Session::Protection::Protection()
    :
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>())
	,for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::For_>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>())
{
    duration->parent = this;

    for_->parent = this;

    vrf->parent = this;

    yang_name = "protection"; yang_parent_name = "session";
}

Native::Mpls::Ldp::Session::Protection::~Protection()
{
}

bool Native::Mpls::Ldp::Session::Protection::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::has_operation() const
{
    return is_set(operation)
	|| (duration !=  nullptr && duration->has_operation())
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::For_>();
        }
        return for_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Session::Protection::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{
    yang_name = "duration"; yang_parent_name = "protection";
}

Native::Mpls::Ldp::Session::Protection::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(holdup_time.operation)
	|| is_set(infinite.operation);
}

std::string Native::Mpls::Ldp::Session::Protection::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.operation)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
}

Native::Mpls::Ldp::Session::Protection::For_::For_()
{
    yang_name = "for"; yang_parent_name = "protection";
}

Native::Mpls::Ldp::Session::Protection::For_::~For_()
{
}

bool Native::Mpls::Ldp::Session::Protection::For_::has_data() const
{
    for (std::size_t index=0; index<acl_name.size(); index++)
    {
        if(acl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Session::Protection::For_::has_operation() const
{
    for (std::size_t index=0; index<acl_name.size(); index++)
    {
        if(acl_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Session::Protection::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-name")
    {
        for(auto const & c : acl_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Session::Protection::For_::AclName>();
        c->parent = this;
        acl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::For_::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Session::Protection::For_::AclName::AclName()
    :
    acl_name{YType::str, "acl-name"}
    	,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration>())
{
    duration->parent = this;

    yang_name = "acl-name"; yang_parent_name = "for";
}

Native::Mpls::Ldp::Session::Protection::For_::AclName::~AclName()
{
}

bool Native::Mpls::Ldp::Session::Protection::For_::AclName::has_data() const
{
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::For_::AclName::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::For_::AclName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-name" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::For_::AclName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/for/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For_::AclName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For_::AclName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::For_::AclName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
}

Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{
    yang_name = "duration"; yang_parent_name = "acl-name";
}

Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(holdup_time.operation)
	|| is_set(infinite.operation);
}

std::string Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Duration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.operation)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "protection";
}

Native::Mpls::Ldp::Session::Protection::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_>())
{
    for_->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::For_()
{
    yang_name = "for"; yang_parent_name = "vrf";
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::~For_()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::has_data() const
{
    for (std::size_t index=0; index<acl_name.size(); index++)
    {
        if(acl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::has_operation() const
{
    for (std::size_t index=0; index<acl_name.size(); index++)
    {
        if(acl_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'For_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-name")
    {
        for(auto const & c : acl_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName>();
        c->parent = this;
        acl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::AclName()
    :
    acl_name{YType::str, "acl-name"}
    	,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration>())
{
    duration->parent = this;

    yang_name = "acl-name"; yang_parent_name = "for";
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::~AclName()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::has_data() const
{
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-name" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{
    yang_name = "duration"; yang_parent_name = "acl-name";
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::has_operation() const
{
    return is_set(operation)
	|| is_set(holdup_time.operation)
	|| is_set(infinite.operation);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Duration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.operation)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
}

Native::Mpls::PrefixMap::PrefixMap()
    :
    access_list{YType::uint8, "access-list"},
    cos_map{YType::uint8, "cos-map"},
    nr{YType::uint8, "nr"}
{
    yang_name = "prefix-map"; yang_parent_name = "mpls";
}

Native::Mpls::PrefixMap::~PrefixMap()
{
}

bool Native::Mpls::PrefixMap::has_data() const
{
    return access_list.is_set
	|| cos_map.is_set
	|| nr.is_set;
}

bool Native::Mpls::PrefixMap::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(cos_map.operation)
	|| is_set(nr.operation);
}

std::string Native::Mpls::PrefixMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:prefix-map";

    return path_buffer.str();

}

const EntityPath Native::Mpls::PrefixMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (cos_map.is_set || is_set(cos_map.operation)) leaf_name_data.push_back(cos_map.get_name_leafdata());
    if (nr.is_set || is_set(nr.operation)) leaf_name_data.push_back(nr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::PrefixMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::PrefixMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::PrefixMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "cos-map")
    {
        cos_map = value;
    }
    if(value_path == "nr")
    {
        nr = value;
    }
}

Native::Mpls::Static_::Static_()
    :
    binding(std::make_shared<Native::Mpls::Static_::Binding>())
{
    binding->parent = this;

    yang_name = "static"; yang_parent_name = "mpls";
}

Native::Mpls::Static_::~Static_()
{
}

bool Native::Mpls::Static_::has_data() const
{
    return (binding !=  nullptr && binding->has_data());
}

bool Native::Mpls::Static_::has_operation() const
{
    return is_set(operation)
	|| (binding !=  nullptr && binding->has_operation());
}

std::string Native::Mpls::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:static";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Native::Mpls::Static_::Binding>();
        }
        return binding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    return children;
}

void Native::Mpls::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Static_::Binding::Binding()
    :
    ipv4(std::make_shared<Native::Mpls::Static_::Binding::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "binding"; yang_parent_name = "static";
}

Native::Mpls::Static_::Binding::~Binding()
{
}

bool Native::Mpls::Static_::Binding::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Mpls::Static_::Binding::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Mpls::Static_::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Mpls::Static_::Binding::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Mpls::Static_::Binding::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Static_::Binding::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "binding";
}

Native::Mpls::Static_::Binding::Ipv4::~Ipv4()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::has_data() const
{
    for (std::size_t index=0; index<global.size(); index++)
    {
        if(global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Static_::Binding::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<global.size(); index++)
    {
        if(global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::Static_::Binding::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        for(auto const & c : global)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global>();
        c->parent = this;
        global.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::Static_::Binding::Ipv4::Global::Global()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
    	,
    input(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Input>())
	,output(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "global"; yang_parent_name = "ipv4";
}

Native::Mpls::Static_::Binding::Ipv4::Global::~Global()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(label.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global" <<"[address='" <<address <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::Static_::Binding::Ipv4::Global::Input::Input()
    :
    label{YType::uint32, "label"}
{
    yang_name = "input"; yang_parent_name = "global";
}

Native::Mpls::Static_::Binding::Ipv4::Global::Input::~Input()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Input::has_data() const
{
    return label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::Static_::Binding::Ipv4::Global::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{
    yang_name = "output"; yang_parent_name = "global";
}

Native::Mpls::Static_::Binding::Ipv4::Global::Output::~Output()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Output::has_data() const
{
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_next_hop.operation)
	|| is_set(label.operation);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.operation)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Vrf()
    :
    name{YType::str, "name"},
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
    	,
    input(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Input>())
	,output(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv4";
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::~Vrf()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::has_data() const
{
    return name.is_set
	|| address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(label.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']" <<"[address='" <<address <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::Input()
    :
    label{YType::uint32, "label"}
{
    yang_name = "input"; yang_parent_name = "vrf";
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::~Input()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::has_data() const
{
    return label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{
    yang_name = "output"; yang_parent_name = "vrf";
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::~Output()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::has_data() const
{
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_next_hop.operation)
	|| is_set(label.operation);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.operation)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Mpls::TrafficEng::TrafficEng()
    :
    nsr{YType::empty, "nsr"},
    tunnels{YType::empty, "tunnels"}
    	,
    auto_bw(std::make_shared<Native::Mpls::TrafficEng::AutoBw>())
	,auto_tunnel(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>())
	,ds_te(std::make_shared<Native::Mpls::TrafficEng::DsTe>())
	,fast_reroute(std::make_shared<Native::Mpls::TrafficEng::FastReroute>())
	,link_management(std::make_shared<Native::Mpls::TrafficEng::LinkManagement>())
	,logging(std::make_shared<Native::Mpls::TrafficEng::Logging>())
	,lsp(std::make_shared<Native::Mpls::TrafficEng::Lsp>())
	,path_option(std::make_shared<Native::Mpls::TrafficEng::PathOption>())
	,path_selection(std::make_shared<Native::Mpls::TrafficEng::PathSelection>())
	,pcc(std::make_shared<Native::Mpls::TrafficEng::Pcc>())
	,reoptimize(std::make_shared<Native::Mpls::TrafficEng::Reoptimize>())
	,signalling(std::make_shared<Native::Mpls::TrafficEng::Signalling>())
	,topology(std::make_shared<Native::Mpls::TrafficEng::Topology>())
	,trace(std::make_shared<Native::Mpls::TrafficEng::Trace>())
{
    auto_bw->parent = this;

    auto_tunnel->parent = this;

    ds_te->parent = this;

    fast_reroute->parent = this;

    link_management->parent = this;

    logging->parent = this;

    lsp->parent = this;

    path_option->parent = this;

    path_selection->parent = this;

    pcc->parent = this;

    reoptimize->parent = this;

    signalling->parent = this;

    topology->parent = this;

    trace->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Mpls::TrafficEng::has_data() const
{
    return nsr.is_set
	|| tunnels.is_set
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (ds_te !=  nullptr && ds_te->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (link_management !=  nullptr && link_management->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (lsp !=  nullptr && lsp->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pcc !=  nullptr && pcc->has_data())
	|| (reoptimize !=  nullptr && reoptimize->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr.operation)
	|| is_set(tunnels.operation)
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (ds_te !=  nullptr && ds_te->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (link_management !=  nullptr && link_management->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (reoptimize !=  nullptr && reoptimize->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "ds-te")
    {
        if(ds_te == nullptr)
        {
            ds_te = std::make_shared<Native::Mpls::TrafficEng::DsTe>();
        }
        return ds_te;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "link-management")
    {
        if(link_management == nullptr)
        {
            link_management = std::make_shared<Native::Mpls::TrafficEng::LinkManagement>();
        }
        return link_management;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::TrafficEng::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<Native::Mpls::TrafficEng::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "reoptimize")
    {
        if(reoptimize == nullptr)
        {
            reoptimize = std::make_shared<Native::Mpls::TrafficEng::Reoptimize>();
        }
        return reoptimize;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Mpls::TrafficEng::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Mpls::TrafficEng::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Mpls::TrafficEng::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(ds_te != nullptr)
    {
        children["ds-te"] = ds_te;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(link_management != nullptr)
    {
        children["link-management"] = link_management;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(path_option != nullptr)
    {
        children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    if(reoptimize != nullptr)
    {
        children["reoptimize"] = reoptimize;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
}

void Native::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

Native::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    timers(nullptr) // presence node
{
    yang_name = "auto-bw"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::AutoBw::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(operation)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoBw::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoBw::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
{
    yang_name = "timers"; yang_parent_name = "auto-bw";
}

Native::Mpls::TrafficEng::AutoBw::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_data() const
{
    return frequency.is_set;
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation);
}

std::string Native::Mpls::TrafficEng::AutoBw::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoBw::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-bw/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoBw::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::AutoTunnel()
    :
    backup(nullptr) // presence node
	,mesh(nullptr) // presence node
	,primary(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>())
{
    primary->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::AutoTunnel::~AutoTunnel()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Backup()
    :
    nhop_only{YType::empty, "nhop-only"}
    	,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>())
	,srlg(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>())
{
    config->parent = this;

    srlg->parent = this;

    timers->parent = this;

    tunnel_num->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::~Backup()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_data() const
{
    return nhop_only.is_set
	|| (config !=  nullptr && config->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(nhop_only.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhop_only.is_set || is_set(nhop_only.operation)) leaf_name_data.push_back(nhop_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>();
        }
        return srlg;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhop-only")
    {
        nhop_only = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Config()
    :
    affinity(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity>())
	,unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>())
{
    affinity->parent = this;

    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "backup";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_data() const
{
    return (affinity !=  nullptr && affinity->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::Affinity()
{
    yang_name = "affinity"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::~Affinity()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::has_data() const
{
    for (std::size_t index=0; index<aff_val.size(); index++)
    {
        if(aff_val[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::has_operation() const
{
    for (std::size_t index=0; index<aff_val.size(); index++)
    {
        if(aff_val[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aff-val")
    {
        for(auto const & c : aff_val)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal>();
        c->parent = this;
        aff_val.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aff_val)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::AffVal()
    :
    aff_val{YType::str, "aff-val"},
    mask{YType::str, "mask"}
{
    yang_name = "aff-val"; yang_parent_name = "affinity";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::~AffVal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::has_data() const
{
    return aff_val.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::has_operation() const
{
    return is_set(operation)
	|| is_set(aff_val.operation)
	|| is_set(mask.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aff-val" <<"[aff-val='" <<aff_val <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/affinity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aff_val.is_set || is_set(aff_val.operation)) leaf_name_data.push_back(aff_val.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aff-val")
    {
        aff_val = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::UnnumberedInterface()
    :
    controller{YType::str, "controller"},
    interface{YType::str, "interface"},
    tunnel{YType::uint32, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtualportgroup{YType::uint8, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"},
    vpn{YType::uint32, "VPN"}
{
    yang_name = "unnumbered-interface"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_data() const
{
    return controller.is_set
	|| interface.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| vpn.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(controller.operation)
	|| is_set(interface.operation)
	|| is_set(tunnel.operation)
	|| is_set(tunnel_tp.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| is_set(vpn.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.operation)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller")
    {
        controller = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
    if(value_path == "VPN")
    {
        vpn = value;
    }
}

const Enum::YLeaf Native::L3Vpn::Encapsulation::Ip::Mpls::MtuEnum::max {0, "max"};

const Enum::YLeaf Native::Mpls::Label::ProtocolEnum::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Label::ProtocolEnum::tdp__COLON__ {1, "tdp:"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlModeEnum::independent {0, "independent"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlModeEnum::ordered {1, "ordered"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::ProtocolEnum::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::ProtocolEnum::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::ProtocolEnum::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::ProtocolEnum::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Global::Output::LabelEnum::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Global::Output::LabelEnum::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::LabelEnum::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::LabelEnum::implicit_null {1, "implicit-null"};


}
}

