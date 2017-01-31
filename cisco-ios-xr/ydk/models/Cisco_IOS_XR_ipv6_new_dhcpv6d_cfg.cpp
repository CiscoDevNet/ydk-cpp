
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg {

Dhcpv6::Database::Database()
    :
    	full_write_interval{YType::uint32, "full-write-interval"},
	 incremental_write_interval{YType::uint32, "incremental-write-interval"},
	 proxy{YType::empty, "proxy"},
	 relay{YType::empty, "relay"},
	 server{YType::empty, "server"}
{
    yang_name = "database"; yang_parent_name = "dhcpv6";
}

Dhcpv6::Database::~Database()
{
}

bool Dhcpv6::Database::has_data() const
{
    return full_write_interval.is_set
	|| incremental_write_interval.is_set
	|| proxy.is_set
	|| relay.is_set
	|| server.is_set;
}

bool Dhcpv6::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(full_write_interval.operation)
	|| is_set(incremental_write_interval.operation)
	|| is_set(proxy.operation)
	|| is_set(relay.operation)
	|| is_set(server.operation);
}

std::string Dhcpv6::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

EntityPath Dhcpv6::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_write_interval.is_set || is_set(full_write_interval.operation)) leaf_name_data.push_back(full_write_interval.get_name_leafdata());
    if (incremental_write_interval.is_set || is_set(incremental_write_interval.operation)) leaf_name_data.push_back(incremental_write_interval.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (relay.is_set || is_set(relay.operation)) leaf_name_data.push_back(relay.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Database::get_children()
{
    return children;
}

void Dhcpv6::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-write-interval")
    {
        full_write_interval = value;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "relay")
    {
        relay = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::HelperAddress()
    :
    	helper_address{YType::str, "helper-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::has_data() const
{
    return helper_address.is_set
	|| vrf_name.is_set;
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(helper_address.operation)
	|| is_set(vrf_name.operation);
}

std::string Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[helper-address='" <<helper_address.get() <<"']" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_address.is_set || is_set(helper_address.operation)) leaf_name_data.push_back(helper_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "helper-address")
    {
        helper_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "relay";
}

Dhcpv6::Profiles::Profile::Relay::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Relay::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Relay::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Relay::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Relay::Relay()
    :
    	enable{YType::empty, "enable"},
	 iana_route_add{YType::empty, "iana-route-add"}
    	,
    helper_addresses(std::make_unique<Dhcpv6::Profiles::Profile::Relay::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses.get();

    yang_name = "relay"; yang_parent_name = "profile";
}

Dhcpv6::Profiles::Profile::Relay::~Relay()
{
}

bool Dhcpv6::Profiles::Profile::Relay::has_data() const
{
    return enable.is_set
	|| iana_route_add.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Dhcpv6::Profiles::Profile::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(iana_route_add.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (iana_route_add.is_set || is_set(iana_route_add.operation)) leaf_name_data.push_back(iana_route_add.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
        else
        {
            helper_addresses = std::make_unique<Dhcpv6::Profiles::Profile::Relay::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses.get();
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Relay::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "iana-route-add")
    {
        iana_route_add = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface_id{YType::str, "interface-id"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_id.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_id.operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "proxy";
}

Dhcpv6::Profiles::Profile::Proxy::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::InterfaceId()
    :
    	insert{YType::enumeration, "insert"}
{
    yang_name = "interface-id"; yang_parent_name = "option";
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::~InterfaceId()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::has_data() const
{
    return insert.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::has_operation() const
{
    return is_set(operation)
	|| is_set(insert.operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insert.is_set || is_set(insert.operation)) leaf_name_data.push_back(insert.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insert")
    {
        insert = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::Option()
    :
    	link_layer_addr{YType::enumeration, "link-layer-addr"},
	 remote_i_dreceived{YType::int32, "remote-i-dreceived"},
	 remote_id{YType::str, "remote-id"},
	 subscriber_id{YType::enumeration, "subscriber-id"}
    	,
    interface_id(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId>())
{
    interface_id->parent = this;
    children["interface-id"] = interface_id.get();

    yang_name = "option"; yang_parent_name = "relay";
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Option::~Option()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::has_data() const
{
    return link_layer_addr.is_set
	|| remote_i_dreceived.is_set
	|| remote_id.is_set
	|| subscriber_id.is_set
	|| (interface_id !=  nullptr && interface_id->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(link_layer_addr.operation)
	|| is_set(remote_i_dreceived.operation)
	|| is_set(remote_id.operation)
	|| is_set(subscriber_id.operation)
	|| (interface_id !=  nullptr && interface_id->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_layer_addr.is_set || is_set(link_layer_addr.operation)) leaf_name_data.push_back(link_layer_addr.get_name_leafdata());
    if (remote_i_dreceived.is_set || is_set(remote_i_dreceived.operation)) leaf_name_data.push_back(remote_i_dreceived.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id != nullptr)
        {
            children["interface-id"] = interface_id.get();
        }
        else
        {
            interface_id = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId>();
            interface_id->parent = this;
            children["interface-id"] = interface_id.get();
        }
        return children.at("interface-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Relay::Option::get_children()
{
    if(children.find("interface-id") == children.end())
    {
        if(interface_id != nullptr)
        {
            children["interface-id"] = interface_id.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-layer-addr")
    {
        link_layer_addr = value;
    }
    if(value_path == "remote-i-dreceived")
    {
        remote_i_dreceived = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Relay::Relay()
    :
    option(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay::Option>())
{
    option->parent = this;
    children["option"] = option.get();

    yang_name = "relay"; yang_parent_name = "proxy";
}

Dhcpv6::Profiles::Profile::Proxy::Relay::~Relay()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Relay::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "option")
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
        else
        {
            option = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay::Option>();
            option->parent = this;
            children["option"] = option.get();
        }
        return children.at("option");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Relay::get_children()
{
    if(children.find("option") == children.end())
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Relay::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    	helper_address{YType::str, "helper-address"},
	 any_out_interface{YType::empty, "any-out-interface"},
	 out_interface{YType::str, "out-interface"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return helper_address.is_set
	|| any_out_interface.is_set
	|| out_interface.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(helper_address.operation)
	|| is_set(any_out_interface.operation)
	|| is_set(out_interface.operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[helper-address='" <<helper_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_address.is_set || is_set(helper_address.operation)) leaf_name_data.push_back(helper_address.get_name_leafdata());
    if (any_out_interface.is_set || is_set(any_out_interface.operation)) leaf_name_data.push_back(any_out_interface.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "helper-address")
    {
        helper_address = value;
    }
    if(value_path == "any-out-interface")
    {
        any_out_interface = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "vrf";
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
        else
        {
            helper_addresses = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses.get();
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "proxy";
}

Dhcpv6::Profiles::Profile::Proxy::Vrfs::~Vrfs()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::HelperAddress()
    :
    	helper_address{YType::str, "helper-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::has_data() const
{
    return helper_address.is_set
	|| vrf_name.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(helper_address.operation)
	|| is_set(vrf_name.operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[helper-address='" <<helper_address.get() <<"']" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helper_address.is_set || is_set(helper_address.operation)) leaf_name_data.push_back(helper_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "helper-address")
    {
        helper_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "class";
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::~HelperAddresses()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::Class_()
    :
    	class_name{YType::str, "class-name"},
	 link_address{YType::str, "link-address"}
    	,
    helper_addresses(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses.get();

    yang_name = "class"; yang_parent_name = "classes";
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::~Class_()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| link_address.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(link_address.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
        else
        {
            helper_addresses = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses.get();
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "proxy";
}

Dhcpv6::Profiles::Profile::Proxy::Classes::~Classes()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Proxy::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Classes::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::Throttle()
    :
    	block{YType::uint32, "block"},
	 limit{YType::uint32, "limit"},
	 request{YType::uint32, "request"}
{
    yang_name = "throttle"; yang_parent_name = "mac";
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::~Throttle()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::has_data() const
{
    return block.is_set
	|| limit.is_set
	|| request.is_set;
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(block.operation)
	|| is_set(limit.operation)
	|| is_set(request.operation);
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block.is_set || is_set(block.operation)) leaf_name_data.push_back(block.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request.is_set || is_set(request.operation)) leaf_name_data.push_back(request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block")
    {
        block = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request")
    {
        request = value;
    }
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Mac()
    :
    throttle(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle>())
{
    throttle->parent = this;
    children["throttle"] = throttle.get();

    yang_name = "mac"; yang_parent_name = "sessions";
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::~Mac()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::has_data() const
{
    return (throttle !=  nullptr && throttle->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::has_operation() const
{
    return is_set(operation)
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::get_children()
{
    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::Sessions()
    :
    mac(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac>())
{
    mac->parent = this;
    children["mac"] = mac.get();

    yang_name = "sessions"; yang_parent_name = "proxy";
}

Dhcpv6::Profiles::Profile::Proxy::Sessions::~Sessions()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::Sessions::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac")
    {
        if(mac != nullptr)
        {
            children["mac"] = mac.get();
        }
        else
        {
            mac = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac>();
            mac->parent = this;
            children["mac"] = mac.get();
        }
        return children.at("mac");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::Sessions::get_children()
{
    if(children.find("mac") == children.end())
    {
        if(mac != nullptr)
        {
            children["mac"] = mac.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Proxy::Proxy()
    :
    	enable{YType::empty, "enable"},
	 link_address{YType::str, "link-address"},
	 src_intf_name{YType::str, "src-intf-name"}
    	,
    classes(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes>())
	,interfaces(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Interfaces>())
	,relay(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay>())
	,sessions(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions>())
	,vrfs(std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs>())
{
    classes->parent = this;
    children["classes"] = classes.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    relay->parent = this;
    children["relay"] = relay.get();

    sessions->parent = this;
    children["sessions"] = sessions.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "proxy"; yang_parent_name = "profile";
}

Dhcpv6::Profiles::Profile::Proxy::~Proxy()
{
}

bool Dhcpv6::Profiles::Profile::Proxy::has_data() const
{
    return enable.is_set
	|| link_address.is_set
	|| src_intf_name.is_set
	|| (classes !=  nullptr && classes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Dhcpv6::Profiles::Profile::Proxy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(link_address.operation)
	|| is_set(src_intf_name.operation)
	|| (classes !=  nullptr && classes->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (src_intf_name.is_set || is_set(src_intf_name.operation)) leaf_name_data.push_back(src_intf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
        else
        {
            classes = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Classes>();
            classes->parent = this;
            children["classes"] = classes.get();
        }
        return children.at("classes");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
        else
        {
            relay = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Relay>();
            relay->parent = this;
            children["relay"] = relay.get();
        }
        return children.at("relay");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Dhcpv6::Profiles::Profile::Proxy::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Proxy::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Proxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "src-intf-name")
    {
        src_intf_name = value;
    }
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::Throttle()
    :
    	block{YType::uint32, "block"},
	 limit{YType::uint32, "limit"},
	 request{YType::uint32, "request"}
{
    yang_name = "throttle"; yang_parent_name = "mac";
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::~Throttle()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::has_data() const
{
    return block.is_set
	|| limit.is_set
	|| request.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(block.operation)
	|| is_set(limit.operation)
	|| is_set(request.operation);
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block.is_set || is_set(block.operation)) leaf_name_data.push_back(block.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request.is_set || is_set(request.operation)) leaf_name_data.push_back(request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "block")
    {
        block = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request")
    {
        request = value;
    }
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Mac()
    :
    throttle(std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle>())
{
    throttle->parent = this;
    children["throttle"] = throttle.get();

    yang_name = "mac"; yang_parent_name = "sessions";
}

Dhcpv6::Profiles::Profile::Server::Sessions::Mac::~Mac()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::has_data() const
{
    return (throttle !=  nullptr && throttle->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::Mac::has_operation() const
{
    return is_set(operation)
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Sessions::Mac::get_children()
{
    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::Mac::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Server::Sessions::Sessions()
    :
    mac(std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions::Mac>())
{
    mac->parent = this;
    children["mac"] = mac.get();

    yang_name = "sessions"; yang_parent_name = "server";
}

Dhcpv6::Profiles::Profile::Server::Sessions::~Sessions()
{
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Sessions::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac")
    {
        if(mac != nullptr)
        {
            children["mac"] = mac.get();
        }
        else
        {
            mac = std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions::Mac>();
            mac->parent = this;
            children["mac"] = mac.get();
        }
        return children.at("mac");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Sessions::get_children()
{
    if(children.find("mac") == children.end())
    {
        if(mac != nullptr)
        {
            children["mac"] = mac.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Server::DnsServers::DnsServers()
    :
    	dns_server{YType::str, "dns-server"}
{
    yang_name = "dns-servers"; yang_parent_name = "server";
}

Dhcpv6::Profiles::Profile::Server::DnsServers::~DnsServers()
{
}

bool Dhcpv6::Profiles::Profile::Server::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dns_server.operation);
}

std::string Dhcpv6::Profiles::Profile::Server::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::DnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::DnsServers::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Server::DnsServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::DnsServers()
    :
    	dns_server{YType::str, "dns-server"}
{
    yang_name = "dns-servers"; yang_parent_name = "class";
}

Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::~DnsServers()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dns_server.operation);
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-servers";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
}

Dhcpv6::Profiles::Profile::Server::Classes::Class_::Class_()
    :
    	class_name{YType::str, "class-name"},
	 address_pool{YType::str, "address-pool"},
	 domain_name{YType::str, "domain-name"},
	 preference{YType::uint32, "preference"},
	 prefix_pool{YType::str, "prefix-pool"}
    	,
    dns_servers(std::make_unique<Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers>())
{
    dns_servers->parent = this;
    children["dns-servers"] = dns_servers.get();

    yang_name = "class"; yang_parent_name = "classes";
}

Dhcpv6::Profiles::Profile::Server::Classes::Class_::~Class_()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| address_pool.is_set
	|| domain_name.is_set
	|| preference.is_set
	|| prefix_pool.is_set
	|| (dns_servers !=  nullptr && dns_servers->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(address_pool.operation)
	|| is_set(domain_name.operation)
	|| is_set(preference.operation)
	|| is_set(prefix_pool.operation)
	|| (dns_servers !=  nullptr && dns_servers->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.operation)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_pool.is_set || is_set(prefix_pool.operation)) leaf_name_data.push_back(prefix_pool.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers.get();
        }
        else
        {
            dns_servers = std::make_unique<Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers>();
            dns_servers->parent = this;
            children["dns-servers"] = dns_servers.get();
        }
        return children.at("dns-servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Classes::Class_::get_children()
{
    if(children.find("dns-servers") == children.end())
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "address-pool")
    {
        address_pool = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool = value;
    }
}

Dhcpv6::Profiles::Profile::Server::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "server";
}

Dhcpv6::Profiles::Profile::Server::Classes::~Classes()
{
}

bool Dhcpv6::Profiles::Profile::Server::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::Profile::Server::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::Profile::Server::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile::Server::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::Classes::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Server::Lease::Lease()
    :
    	days{YType::uint32, "days"},
	 hours{YType::uint32, "hours"},
	 infinite{YType::str, "infinite"},
	 minutes{YType::uint32, "minutes"}
{
    yang_name = "lease"; yang_parent_name = "server";
}

Dhcpv6::Profiles::Profile::Server::Lease::~Lease()
{
}

bool Dhcpv6::Profiles::Profile::Server::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| infinite.is_set
	|| minutes.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Lease::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(infinite.operation)
	|| is_set(minutes.operation);
}

std::string Dhcpv6::Profiles::Profile::Server::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Lease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Lease::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Server::Lease::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::VendorOptions()
    :
    	type{YType::str, "type"},
	 vendor_options{YType::str, "vendor-options"}
{
    yang_name = "vendor-options"; yang_parent_name = "dhcpv6-options";
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::~VendorOptions()
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::has_data() const
{
    return type.is_set
	|| vendor_options.is_set;
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(vendor_options.operation);
}

std::string Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-options";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vendor_options.is_set || is_set(vendor_options.operation)) leaf_name_data.push_back(vendor_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::get_children()
{
    return children;
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vendor-options")
    {
        vendor_options = value;
    }
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::Dhcpv6Options()
    :
    vendor_options(std::make_unique<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions>())
{
    vendor_options->parent = this;
    children["vendor-options"] = vendor_options.get();

    yang_name = "dhcpv6-options"; yang_parent_name = "server";
}

Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::~Dhcpv6Options()
{
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::has_data() const
{
    return (vendor_options !=  nullptr && vendor_options->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::has_operation() const
{
    return is_set(operation)
	|| (vendor_options !=  nullptr && vendor_options->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv6-options";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vendor-options")
    {
        if(vendor_options != nullptr)
        {
            children["vendor-options"] = vendor_options.get();
        }
        else
        {
            vendor_options = std::make_unique<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions>();
            vendor_options->parent = this;
            children["vendor-options"] = vendor_options.get();
        }
        return children.at("vendor-options");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::get_children()
{
    if(children.find("vendor-options") == children.end())
    {
        if(vendor_options != nullptr)
        {
            children["vendor-options"] = vendor_options.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Profiles::Profile::Server::Server()
    :
    	address_pool{YType::str, "address-pool"},
	 aftr_name{YType::str, "aftr-name"},
	 domain_name{YType::str, "domain-name"},
	 enable{YType::empty, "enable"},
	 preference{YType::uint32, "preference"},
	 prefix_pool{YType::str, "prefix-pool"},
	 rapid_commit{YType::empty, "rapid-commit"}
    	,
    classes(std::make_unique<Dhcpv6::Profiles::Profile::Server::Classes>())
	,dhcpv6_options(std::make_unique<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options>())
	,dns_servers(std::make_unique<Dhcpv6::Profiles::Profile::Server::DnsServers>())
	,lease(std::make_unique<Dhcpv6::Profiles::Profile::Server::Lease>())
	,sessions(std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions>())
{
    classes->parent = this;
    children["classes"] = classes.get();

    dhcpv6_options->parent = this;
    children["dhcpv6-options"] = dhcpv6_options.get();

    dns_servers->parent = this;
    children["dns-servers"] = dns_servers.get();

    lease->parent = this;
    children["lease"] = lease.get();

    sessions->parent = this;
    children["sessions"] = sessions.get();

    yang_name = "server"; yang_parent_name = "profile";
}

Dhcpv6::Profiles::Profile::Server::~Server()
{
}

bool Dhcpv6::Profiles::Profile::Server::has_data() const
{
    return address_pool.is_set
	|| aftr_name.is_set
	|| domain_name.is_set
	|| enable.is_set
	|| preference.is_set
	|| prefix_pool.is_set
	|| rapid_commit.is_set
	|| (classes !=  nullptr && classes->has_data())
	|| (dhcpv6_options !=  nullptr && dhcpv6_options->has_data())
	|| (dns_servers !=  nullptr && dns_servers->has_data())
	|| (lease !=  nullptr && lease->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Dhcpv6::Profiles::Profile::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(address_pool.operation)
	|| is_set(aftr_name.operation)
	|| is_set(domain_name.operation)
	|| is_set(enable.operation)
	|| is_set(preference.operation)
	|| is_set(prefix_pool.operation)
	|| is_set(rapid_commit.operation)
	|| (classes !=  nullptr && classes->has_operation())
	|| (dhcpv6_options !=  nullptr && dhcpv6_options->has_operation())
	|| (dns_servers !=  nullptr && dns_servers->has_operation())
	|| (lease !=  nullptr && lease->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Dhcpv6::Profiles::Profile::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_pool.is_set || is_set(address_pool.operation)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (aftr_name.is_set || is_set(aftr_name.operation)) leaf_name_data.push_back(aftr_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_pool.is_set || is_set(prefix_pool.operation)) leaf_name_data.push_back(prefix_pool.get_name_leafdata());
    if (rapid_commit.is_set || is_set(rapid_commit.operation)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
        else
        {
            classes = std::make_unique<Dhcpv6::Profiles::Profile::Server::Classes>();
            classes->parent = this;
            children["classes"] = classes.get();
        }
        return children.at("classes");
    }

    if(child_yang_name == "dhcpv6-options")
    {
        if(dhcpv6_options != nullptr)
        {
            children["dhcpv6-options"] = dhcpv6_options.get();
        }
        else
        {
            dhcpv6_options = std::make_unique<Dhcpv6::Profiles::Profile::Server::Dhcpv6Options>();
            dhcpv6_options->parent = this;
            children["dhcpv6-options"] = dhcpv6_options.get();
        }
        return children.at("dhcpv6-options");
    }

    if(child_yang_name == "dns-servers")
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers.get();
        }
        else
        {
            dns_servers = std::make_unique<Dhcpv6::Profiles::Profile::Server::DnsServers>();
            dns_servers->parent = this;
            children["dns-servers"] = dns_servers.get();
        }
        return children.at("dns-servers");
    }

    if(child_yang_name == "lease")
    {
        if(lease != nullptr)
        {
            children["lease"] = lease.get();
        }
        else
        {
            lease = std::make_unique<Dhcpv6::Profiles::Profile::Server::Lease>();
            lease->parent = this;
            children["lease"] = lease.get();
        }
        return children.at("lease");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<Dhcpv6::Profiles::Profile::Server::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::Server::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes.get();
        }
    }

    if(children.find("dhcpv6-options") == children.end())
    {
        if(dhcpv6_options != nullptr)
        {
            children["dhcpv6-options"] = dhcpv6_options.get();
        }
    }

    if(children.find("dns-servers") == children.end())
    {
        if(dns_servers != nullptr)
        {
            children["dns-servers"] = dns_servers.get();
        }
    }

    if(children.find("lease") == children.end())
    {
        if(lease != nullptr)
        {
            children["lease"] = lease.get();
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-pool")
    {
        address_pool = value;
    }
    if(value_path == "aftr-name")
    {
        aftr_name = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "prefix-pool")
    {
        prefix_pool = value;
    }
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
    }
}

Dhcpv6::Profiles::Profile::Profile()
    :
    	profile_name{YType::str, "profile-name"}
    	,
    proxy(nullptr) // presence node
	,relay(nullptr) // presence node
	,server(nullptr) // presence node
{
    yang_name = "profile"; yang_parent_name = "profiles";
}

Dhcpv6::Profiles::Profile::~Profile()
{
}

bool Dhcpv6::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Dhcpv6::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Dhcpv6::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/profiles/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "proxy")
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy.get();
        }
        else
        {
            proxy = std::make_unique<Dhcpv6::Profiles::Profile::Proxy>();
            proxy->parent = this;
            children["proxy"] = proxy.get();
        }
        return children.at("proxy");
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
        else
        {
            relay = std::make_unique<Dhcpv6::Profiles::Profile::Relay>();
            relay->parent = this;
            children["relay"] = relay.get();
        }
        return children.at("relay");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<Dhcpv6::Profiles::Profile::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::Profile::get_children()
{
    if(children.find("proxy") == children.end())
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy.get();
        }
    }

    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Dhcpv6::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "dhcpv6";
}

Dhcpv6::Profiles::~Profiles()
{
}

bool Dhcpv6::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

EntityPath Dhcpv6::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Profiles::Profile>();
        c->parent = this;
        profile.push_back(std::move(c));
        children[segment_path] = profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Profiles::get_children()
{
    for (auto const & c : profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Interfaces::Interface::Pppoe::Pppoe()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "pppoe"; yang_parent_name = "interface";
}

Dhcpv6::Interfaces::Interface::Pppoe::~Pppoe()
{
}

bool Dhcpv6::Interfaces::Interface::Pppoe::has_data() const
{
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Dhcpv6::Interfaces::Interface::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::Interface::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::Interface::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Interfaces::Interface::Pppoe::get_children()
{
    return children;
}

void Dhcpv6::Interfaces::Interface::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Dhcpv6::Interfaces::Interface::Proxy::Proxy()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "proxy"; yang_parent_name = "interface";
}

Dhcpv6::Interfaces::Interface::Proxy::~Proxy()
{
}

bool Dhcpv6::Interfaces::Interface::Proxy::has_data() const
{
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Proxy::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Dhcpv6::Interfaces::Interface::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::Interface::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::Interface::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Interfaces::Interface::Proxy::get_children()
{
    return children;
}

void Dhcpv6::Interfaces::Interface::Proxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Dhcpv6::Interfaces::Interface::Server::Server()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "server"; yang_parent_name = "interface";
}

Dhcpv6::Interfaces::Interface::Server::~Server()
{
}

bool Dhcpv6::Interfaces::Interface::Server::has_data() const
{
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Dhcpv6::Interfaces::Interface::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::Interface::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::Interface::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Interfaces::Interface::Server::get_children()
{
    return children;
}

void Dhcpv6::Interfaces::Interface::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Dhcpv6::Interfaces::Interface::Relay::Relay()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "relay"; yang_parent_name = "interface";
}

Dhcpv6::Interfaces::Interface::Relay::~Relay()
{
}

bool Dhcpv6::Interfaces::Interface::Relay::has_data() const
{
    return profile.is_set;
}

bool Dhcpv6::Interfaces::Interface::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Dhcpv6::Interfaces::Interface::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::Interface::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::Interface::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Dhcpv6::Interfaces::Interface::Relay::get_children()
{
    return children;
}

void Dhcpv6::Interfaces::Interface::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Dhcpv6::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    pppoe(std::make_unique<Dhcpv6::Interfaces::Interface::Pppoe>())
	,proxy(std::make_unique<Dhcpv6::Interfaces::Interface::Proxy>())
	,relay(std::make_unique<Dhcpv6::Interfaces::Interface::Relay>())
	,server(std::make_unique<Dhcpv6::Interfaces::Interface::Server>())
{
    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    proxy->parent = this;
    children["proxy"] = proxy.get();

    relay->parent = this;
    children["relay"] = relay.get();

    server->parent = this;
    children["server"] = server.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Dhcpv6::Interfaces::Interface::~Interface()
{
}

bool Dhcpv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Dhcpv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Dhcpv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Dhcpv6::Interfaces::Interface::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    if(child_yang_name == "proxy")
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy.get();
        }
        else
        {
            proxy = std::make_unique<Dhcpv6::Interfaces::Interface::Proxy>();
            proxy->parent = this;
            children["proxy"] = proxy.get();
        }
        return children.at("proxy");
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
        else
        {
            relay = std::make_unique<Dhcpv6::Interfaces::Interface::Relay>();
            relay->parent = this;
            children["relay"] = relay.get();
        }
        return children.at("relay");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<Dhcpv6::Interfaces::Interface::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Interfaces::Interface::get_children()
{
    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    if(children.find("proxy") == children.end())
    {
        if(proxy != nullptr)
        {
            children["proxy"] = proxy.get();
        }
    }

    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void Dhcpv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Dhcpv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "dhcpv6";
}

Dhcpv6::Interfaces::~Interfaces()
{
}

bool Dhcpv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Dhcpv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dhcpv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Dhcpv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Dhcpv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Dhcpv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Dhcpv6::Dhcpv6()
    :
    	allow_duid_change{YType::empty, "allow-duid-change"},
	 enable{YType::empty, "enable"}
    	,
    database(std::make_unique<Dhcpv6::Database>())
	,interfaces(std::make_unique<Dhcpv6::Interfaces>())
	,profiles(std::make_unique<Dhcpv6::Profiles>())
{
    database->parent = this;
    children["database"] = database.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    profiles->parent = this;
    children["profiles"] = profiles.get();

    yang_name = "dhcpv6"; yang_parent_name = "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg";
}

Dhcpv6::~Dhcpv6()
{
}

bool Dhcpv6::has_data() const
{
    return allow_duid_change.is_set
	|| enable.is_set
	|| (database !=  nullptr && database->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data());
}

bool Dhcpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_duid_change.operation)
	|| is_set(enable.operation)
	|| (database !=  nullptr && database->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6";

    return path_buffer.str();

}

EntityPath Dhcpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_duid_change.is_set || is_set(allow_duid_change.operation)) leaf_name_data.push_back(allow_duid_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database.get();
        }
        else
        {
            database = std::make_unique<Dhcpv6::Database>();
            database->parent = this;
            children["database"] = database.get();
        }
        return children.at("database");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Dhcpv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "profiles")
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
        else
        {
            profiles = std::make_unique<Dhcpv6::Profiles>();
            profiles->parent = this;
            children["profiles"] = profiles.get();
        }
        return children.at("profiles");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Dhcpv6::get_children()
{
    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("profiles") == children.end())
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
    }

    return children;
}

void Dhcpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-duid-change")
    {
        allow_duid_change = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> Dhcpv6::clone_ptr()
{
    return std::make_unique<Dhcpv6>();
}

const Enum::YLeaf InsertEnum::local {0, "local"};
const Enum::YLeaf InsertEnum::received {1, "received"};
const Enum::YLeaf InsertEnum::pppoe {2, "pppoe"};

const Enum::YLeaf LinkLayerAddrEnum::set {4, "set"};

const Enum::YLeaf SubscriberIdEnum::pppoe {3, "pppoe"};


}
}

